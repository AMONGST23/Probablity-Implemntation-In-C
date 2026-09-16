#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../utils/mean-mode-median.h"
#include <math.h>

int main(){
    int limit = 0; //initializing the limit variable to 0
    srand(time(NULL)); //Seeding the random num generator with the current time

    //defining the limits of the random numbers to be generated
    int lower_limit = 1;
    int upper_limit = 100;

    int size = (rand()%(upper_limit - lower_limit + 1)) + lower_limit; //generating a random size for the array
    float arr[size]; //defining the array with the random size

    //populating the array with random numbers
    for (int i = 0; i < size; i++){
        arr[i] = (rand()%(upper_limit - lower_limit + 1)) + lower_limit; //generating random numbers within the defined limits
        printf("%.2f ", arr[i]); //printing the random numbers generated
    }
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    limit = arr_size; //setting the limit variable to the size of the array

    //call functions from mean-mode-median.c to calculate mean, median, and mode
    float mean = calc_mean(arr, limit);
    printf("\nMean: %.2f\n", mean);

    float median = calc_median(arr, limit);
    printf("Median: %.2f\n", median);

    float mode = calc_mode(arr, limit);
    printf("Mode: %.2f\n", mode);

}