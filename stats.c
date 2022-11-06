/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Functions that can analyze an array of unsigned char data items and report analytics
 *         on the maximum, minimum, mean, and median of the data set.
 *
 *  You are to write a couple of functions that can analyze an array of unsigned char data items 
 *  and report analytics on the maximum, minimum, mean, and median of the data set. In addition, 
 *  you will need to reorder this data set from large to small. All statistics should be rounded 
 *  down to the nearest integer. After analysis and sorting is done, you will need to print that 
 *  data to the screen in nicely formatted presentation. You will need to submit a version 
 *  controlled repository of these 3 files.
 *
 * @author Domingo Gallardo Saavedra
 * @date 10-09-2022
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics(test, SIZE);
  print_array(test, SIZE);
  sort_array(test, SIZE);
  print_array(test, SIZE);
}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char data_array[], int array_size)
{
  unsigned char median_v = find_median(data_array, array_size);
  unsigned char mean_v = find_mean(data_array, array_size);
  unsigned char max_v = find_maximum(data_array, array_size);
  unsigned char min_v = find_minimum(data_array, array_size);
  printf("Median: %d\n", median_v);
  printf("Mean: %d\n", mean_v);
  printf("Maximun: %d\n", max_v);
  printf("Minimun: %d\n", min_v);
}

void print_array(unsigned char data_array[], int array_size)
{
  printf("Array: \n[");
  for(int i = 0; i < array_size; i++) {
    if(i<array_size-1) {
      printf("%d, ", data_array[i]);
    } 
    else {
      printf("%d]\n", data_array[i]);
    }
    if((i%10 == 0) && i > 0) { 
      printf("\n");
    }
  }
}

unsigned char find_median(unsigned char data_array[], int array_size)
{
  unsigned char median_v = 0;
  sort_array(data_array, array_size);

  if(array_size%2 != 0)
  {
    median_v = data_array[array_size / 2];
  }
  else {
    median_v = (data_array[(array_size - 1) / 2] + data_array[array_size / 2])/2;
  }

  return median_v;
}

unsigned char find_mean(unsigned char data_array[], int array_size)
{
  unsigned char mean_v = 0;
  int array_sum = 0;

  for (int i = 0; i < array_size; i++)
  {
    array_sum += data_array[i];
  }
  mean_v = array_sum / array_size;
  return mean_v;
}
unsigned char find_maximum(unsigned char data_array[], int array_size)
{
  unsigned char max_v = 0;

  for (int i = 0; i < array_size; i++)
  {
    if(data_array[i] > max_v) {
      max_v = data_array[i];
    }
  }
  printf("Max: %d\n", max_v);
  return max_v;
}

unsigned char find_minimum(unsigned char data_array[], int array_size)
{
  unsigned char min_v = 255;

  for (int i = 0; i < array_size; i++)
  {
    if (data_array[i] < min_v)
    {
      min_v = data_array[i];
    }
  }
  printf("Min: %d\n", min_v);
  return min_v;
}

void sort_array(unsigned char data_array[], int array_size){

  unsigned char max_temp = 0;

  for (int i = 0; i < array_size; i++)
  {
    for (int j = i+1; j < array_size; j++)
    {
      if (data_array[i] < data_array[j])
      {
        max_temp = data_array[i];
        data_array[i] = data_array[j];
        data_array[j] = max_temp;
      }
    }
  }
}