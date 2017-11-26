/**
 * Demo of using for loop to read in an array
 * by Barth O'Keeffe 14180847
 * 10/10/2017
 */

/**
  * system libraries 
  */
#include <stdio.h>
#include <stdlib.h>

/**
   * main function
   */
  int bin(int number, int result[]);
int main(int argc, const char*argv[])
{
    /**
     * variables required
     */
   int num;
   num = atoi(argv[1]);
   int ans[7] = bin(num ,ans);
}
void bin(int number, int result[])
{
    
    int i = 0;
    while (i > number)
    {
        result[i] = number % 2;
        number = number / 2;
        i++;
    }

   ;
}