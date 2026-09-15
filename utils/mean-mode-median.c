#include "mean-mode-median.h"

//Built in function to calculate the size of the array
int array_limit (float arr[])
{
    int size = sizeof(arr) / sizeof(arr[0]);
    return size;
}

// calculate the mean of the array
float calc_mean (float arr[]){
    float sum = 0.0;
    int limit = array_limit(arr);
    // Cycle through the elemnts and add them to the sum
    for (int i = 0; i < limit; i++){
        sum = sum + arr[i]; 
    };
    return sum / limit;
}

float calc_median(float arr[]){
    //sort the array using buble sort
    int limit = array_limit(arr);
    for (int i = 0; i < limit - 1; i++){
        for (int j = 0; j < limit - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    if (limit % 2 == 0){
        return (arr[limit / 2 - 1] + arr[limit / 2]) / 2;
    } else {
        return arr[limit / 2];
    }
}

float calc_mode(float arr[]){
    int limit = array_limit(arr);
    int max_count = 0; //initializing the max count value for the mode
    int count = 0; //count value within the array

    for (int i = 0; i < limit; i++){
        count = 0; //reset the count for each new element
        for (int j = 0; j < limit;  j++){
            if (arr[i] == arr[j]){
                count++;
                if (count > limit / 2){
                    return max_count = count; //return the mode and the count of the mode
                }else if (count > max_count){ //update count if the current count is greater than the max count
                    max_count = count;
                }
            }
        }

    }
}

