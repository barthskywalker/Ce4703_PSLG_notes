
#ifndef MY_HEADER_H
#define MY_HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * Function declarations;
 */
int countElements(int data[], int size);
void analyseArray(int data[], int size);
void maxElement(int data[], int size);
void minElement(int data[], int size);
float averageElement(int data[], int size);
void stdDivElement(int data[], int size, float average);

#endif