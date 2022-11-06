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

#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Print statistics
 *
 * A function that prints the statistics of an array 
 * including minimum, maximum, mean, and median.
 *
 * @param <Add InputName> <add description here>
 *
 * @return void
 */
void print_statistics();

/**
 * @brief Print array
 *
 * Given an array of data and a length, prints the array 
 * to the screen
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return void
 */
void print_array(unsigned char data_array[], int array_size);

/**
 * @brief Print statistics
 *
 * A function that prints the statistics of an array
 * including minimum, maximum, mean, and median.
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return void
 */
unsigned char find_median(unsigned char data_array[], int array_size);

/**
 * @brief Print statistics
 *
 * A function that prints the statistics of an array
 * including minimum, maximum, mean, and median.
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return void
 */
unsigned char find_mean(unsigned char data_array[], int array_size);

/**
 * @brief Print statistics
 *
 * A function that prints the statistics of an array
 * including minimum, maximum, mean, and median.
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return void
 */
unsigned char find_maximum(unsigned char data_array[], int array_size);

/**
 * @brief Print statistics
 *
 * A function that prints the statistics of an array
 * including minimum, maximum, mean, and median.
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return void
 */
unsigned char find_minimum(unsigned char data_array[], int array_size);

/**
 * @brief Print statistics
 *
 * A function that prints the statistics of an array
 * including minimum, maximum, mean, and median.
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return void
 */
void sort_array(unsigned char data_array[], int array_size);

#endif /* __STATS_H__ */
