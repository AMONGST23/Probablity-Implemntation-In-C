// IT IS IMPORTANT TO NOTE THAT MEAN CALCULATION FUNCTION IS IN THE
// MEAN-MODE-MEDIAN.C FILE AND THE FUNCTION WILL BE CALLED IN THE MAIN.C FILE

//Standard deviation calculation function
#ifndef STANDARD_DEVIATION_H
#define STANDARD_DEVIATION_H

float calc_variance(float arr[], int limit);
float calc_standard_deviation(float arr[], int limit);
#endif