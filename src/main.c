#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../utils/mean-mode-median.h"
#include "../utils/standard-deviation-variance.h"
#include <math.h>

typedef struct { //define the core values as a structure to be used in the main.c file
    float *data;
    int size;
}data_array;

data_array create_data_array(){ //create and seed the array with random numbers
    data_array arr;
    srand(time(NULL)); //seed for the random number generator
    arr.size = rand() % 100 + 1; //random size between 1
    for (int i = 0; i < arr.size; i++){
        arr.data[i] = rand() % 100 + 1 ; //seed the array with random numbers btn1 and 100
    }
    return arr;
}

int main(){
    data_array arr = create_data_array();
    //call functions from mean-mode-median.c to calculate mean, median, and mode
    float mean = calc_mean(arr.data, arr.size);
    printf("\nMean: %.2f\n", mean);

    float median = calc_median(arr.data, arr.size);
    printf("Median: %.2f\n", median);

    float mode = calc_mode(arr.data, arr.size);
    printf("Mode: %.2f\n", mode);

    float variance = calc_variance(arr.data, arr.size, mean);
    printf("Variance: %.2f\n", variance);

    float standard_deviation = calc_standard_deviation(arr.data, arr.size, mean);
    printf("Standard Deviation: %.2f\n", standard_deviation);
}