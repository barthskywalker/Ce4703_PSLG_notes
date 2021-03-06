/**
 * Marked exercise
 * by Barth O'Keeffe 14180847
 * 24/10/2017
 */

/**
  * system libraries 
  */

#include "MY_HEADER.h"

/**
   * main function
   */
int main()
{
    /**
     * variables required
     */
    int size=20, temp, valid=0, count=0;
    //variable to store average
    float average =0;

        /*declare Array*/
        int arr[size];
    /**
     * In order to Initialize array properly all element will be set to -1 by default
     */
    for (int i = 0; i < size; i++)
        arr[i] =-1;
            printf("Now enter your values :\n");
        /* read in Values of array */

        for (int i = 0; i < size; i++)
        {
            scanf("%i", &temp);
            arr[i] = temp;
            if (temp >= 0)
                valid++;
            if (temp < 0)
                break;
        }
        printf("elements in array = {");
        /* Output Values of array */
        for (int i = 0; i < valid; i++)
        {

            if (i < valid - 1)
                printf("%i,", arr[i]);
            else
                printf("%i", arr[i]);
        }
        /**
         * obtain number of valid enteries for array by call function countElements
         * and storing result in variable count
         */
        count = countElements(arr, size);
        printf("}\n");
    printf("array contains %i elements\n", count);
    /**
     * call analyseArray() function
     */
    analyseArray(arr, size);
    /**
     * call maxElement() function
     */
    maxElement(arr, size);
    /**
     * call minElement() function
     */
    minElement(arr, size);
    /**
     * call averageElement() function
     */
    average=averageElement(arr, size);
    //print average
    printf("Average element value is %f\n", average);

    /**
     * call stdDivElement() function
     */
    stdDivElement(arr, size, average);
}
/**
 * Initialization of Function countElements;
 */
    int countElements(int data[], int size)
    {
        int result = 0;
        for (int i = 0; i < size; i++)
        {
            if (data[i] > -1)
                result++;
        }
        return result;
        }

        /**
        * Initialization of Function analyseArray;
        */
        void analyseArray(int data[], int size){
            //call countElements to determine valid enteries
            int validEnteries = countElements(data, size);
            int uniqueEnteries=0;
                //create a copy of valid enteries
                int copyArray[validEnteries];
            for (int i = 0; i < validEnteries; i++)
                    copyArray[i] = data[i];
            //nested for loop to remove duplicate enteries by setting them to minus one
            for (int j = 0; j < validEnteries-1; j++){
                for (int i = j+1; i < validEnteries; i++)
                    if (data[j] == copyArray[i])
                        copyArray[i] = -1;
            }
                //get the number of unique enteries
                uniqueEnteries = countElements(copyArray, validEnteries);
                /**
                 * print number of unique enteries and entry
                 */
                printf("array contains %d unique elements\n", uniqueEnteries);
                printf("N \tCount\n");

                    //variables to store number of occurences of unique element
                    int uniqueCount;
                    for (int j = 0; j < validEnteries; j++)
                    {
                        uniqueCount = 0;
                        for (int i = 0; i < validEnteries; i++)
                        {
                            if (copyArray[j] == data[i] && copyArray[j]>-1)
                                uniqueCount++;
                        }
                        if (copyArray[j] > -1)
                            printf("%i \t%i\n", copyArray[j], uniqueCount);
                }
        }

 /**
 * Initialization of Function maxElement;
 */
void maxElement(int data[], int size){
    int result = data[0];
    for (int i = 0; i < size; i++)
    {
        if (data[i] > result)
            result = data[i];
    }
    printf("Maximum element is %i\n", result);
}

/**
 * Initialization of Function minElement;
 */
void minElement(int data[], int size){
    int result = data[0];
    for (int i = 0; i < size; i++)
    {
        if (data[i] < result && data[i]>-1)
            result = data[i];
    }
    printf("Minimum element is %i\n", result);
}
/**
 * Initialization of Function averageElement;
 * this function prints the average to ht screen
 */
float averageElement(int data[], int size){
    float result=0;
    int temp=0;
    //get valiad number of enteries
    int validEnteries = countElements(data, size);
    //sum all valid enteries
    for (int i = 0; i < validEnteries; i++)
    {
        temp = temp + data[i];
    }
    //get average 
    result = (float)(temp) / (float)validEnteries; //cast needed for accuracy as int division truncates
    return result;
}
/**
 * Initialization of Function stdDivElement;
 * this function prints the standard deviation to the screen
 */
void stdDivElement(int data[], int size, float average){
    float result = 0;
    float temp = 0;
    //get valiad number of enteries
    int validEnteries = countElements(data, size);
    //sum all valid enteries
    for (int i = 0; i < validEnteries; i++)
    {
        temp = temp + (((float)data[i] - average) * ((float)data[i] - average));
    }
    result = temp / validEnteries;
    result=sqrt(result);
    printf("Standard deviation is %f\n", result);
}