#include <math.h>
#include "standard-deviation-variance.h"

//Array limit is calculated in the main.c file and passed as an argument to the function
float calc_variance(float arr[], int limit, float mean){ 
    int sum = 0; // initializing the sum variable to 0
    float variance = 0.0; // initializing the variance variable to 0
    for (int i = 0; i < limit; i++){
        sum = arr[i] - mean;
    }
    variance = sum / limit;
    return variance;
}

float calc_standard_deviation(float arr[], int limit, float mean){ //Standard deviation is just sqrt of variance
    float variance = calc_variance(arr, limit, mean);
    float standard_deviation = sqrt(variance);
    return standard_deviation;
}