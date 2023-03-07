#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int isvowel(char z);
int isconsonant(char y);
bool linsearch(int value, int array[], int arraysize);  // searches linearly through a list
bool binsearch(int value, int array[], int arraysize); // searches binarily through a list using recursion (calling itself)
int bubblesort(int numbers[], int argc);
int selectionsort(int numbers[], int argc);
void mergesort(int array[], int size);
int nround(double n);

typedef struct
{
    float number;
    int numberint;
}
decimal;