#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int isvowel(char z);
int isconsonant(char y);
bool linsearch(int value, int array[], int arraysize);  // searches linearly through a list
bool binsearch(int value, int array[], int arraysize); // searches binarily through a list using recursion (calling itself)
int bubblesort(int numbers[], int numbersize);
int selectionsort(int numbers[], int numbersize);
void mergesort(int array[], int size);
int nround(double n);

typedef struct
{
    float number;
    int numberint;
}
decimal;

int isvowel(char z)
{
    int vowel[] = {65,97,69,145,73,105,79,111,85,117};
    bool vowell;
    for(int x = 0;x<10;x++)
    {
    if(z == vowel[x]){
        return 1;
    }
    }

    return 0;
}
int isconsonant(char y)
{
    int consonant[] = {66,67,68,70,71,72,74,75,76,77,78,80,81,82,83,84,86,87,88,89,90,98,99,100,102,103,104,106,107,108,109,110,112,113,114,115,116,118,119,120,121,122};
    for(int x = 0;x<42;x++)
    {
    if(y == consonant[x]){
    return 1;
    }
    }
    return 0;
}

int bubblesort(int numbers[],int numbersize)
{

    for(int i = 0;i<numbersize-1;i++)
    {
        for(int j=0; j<numbersize-1;j++)
        {
        if(numbers[j]>numbers[j+1])
        {
            //3,2
            int biggern = numbers[j];
            numbers[j] = numbers[j+1];
            numbers[j+1] = biggern;
        }
        }
    }
    return 0;
}

int selectionsort(int numbers[], int numbersize)
{
    for(int i = 0;i<numbersize-1;i++)
    {
        for(int j=0; j<numbersize-1;j++)
        {
        if(numbers[j]>numbers[j+1])
        {
            int biggern = numbers[j];
            numbers[j] = numbers[j+1];
            numbers[j+1] = biggern;
        }
        }
    //9,4,7,3,1
    //4,7,3,1,9
    //4,7,3,1,9
        }
    return 0;
}

bool linsearch(int value, int array[], int arraysize)  // searches linearly through a list
{
    for(int i=0;i<arraysize;i++)
    {
        if(array[i]==value)
        {
        return 1;
        }
    }
    return 0;
}
bool binsearch(int value, int array[], int arraysize) // searches binarily through a list using recursion (calling itself)
{
    int low = array[0];
    int high = array[arraysize];
    for(int i = 0;i<arraysize;i++)
    {
        int middle = (low+high)/2;
        //12,4,6,8,10
        //4,6,8,11,10
        if (value>middle){
            low = middle + 1;
        }else{
            high = middle - 1;
        }
        if(array[middle]==value)
        {
            return 1;
        }
    }
    return 0;
}

void mergesort(int array[], int size)
{
    int start = array[0];
    int end = array[size];
    int mid = (start + end)/2;
    int lside = start;
    int rside = mid+1;
    int i;

    for(i = start; lside<=mid&&rside<=end;i++)
    {
        if(array[lside]<=array[rside])
        {
            array[size] = array[lside++];
        }else{
            array[size] = array[rside++];
        }
    }
    while(lside<=mid)
    {
        array[i++] = array[lside++];
    }
    while(rside<=end)
    {
        array[i++] = array[rside++];
    }
    for(i=start;i<=end;i++)
    {
        array[i] = array[size];
    }
}

int nround(double n)
{
    n = (int)(n+.5);
    return n;
}
