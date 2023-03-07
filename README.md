# My Library

## int isvowel(char letter)
The 'isvowel' function sorts by determining if the inputted char is a vowel or not. For example, if you created a char named 'char' with 'a' being it's value, implementing 'isvowel(char);' would return as true.


...
char vowel = 'h';
isvowel(h);
...


## int isconsonant(char letter)
The 'isconsonant' function sorts by determining if the inputted char is a consonant or not. For example, if you created a char named 'char' with 'a' being it's value, implementing 'isconsanant(char);' would return as false.

...
char consonant = 'h';
isconsonant(h);
...


## int bubblesort(int numbers[], int numbersize)
The 'bubblesort' function sorts numbers from least to greatest by comparing each number with the others to find which one is greater.

numbers[] = {3,4,2,1,5};
bubblesort(numbers[], 4);


## int selectionsort(int numbers[], int numbersize)
The 'selectionsort' function sorts numbers from least to greatest by swapping two numbers' positions depending on which is greater.

numbers[] = {3,4,2,1,5};
selectionsort(numbers[], 4);

## bool linsearch(int value, int array[], int arraysize)
The 'linsearch' function searches through an array linearly in order to determine if a certain value is in it.

char value = 'a';
array[] = {'h','e','l','l','o'};
linsearch(value, array[], 4);

## bool binsearch(int value, int array[], int arraysize)
The 'binsearch' function searches through a sorted number array by cutting it in half depending on if the value is greater or less than the middle value.

int number = 1;
array[] = {0,1,2,3,4,5,6,7};
binsearch(value, array[], 7);

## void mergesort(int array[]. int size)
The 'mergesort' function sorts a number array by cutting it into the left and right side, and comparing the values in each side to the middle in order to merge them together in order.

array[] = {1,2,3,0,9,8,5,4};
mergesort(array[],7);

## int nround(double n)
The 'nround' function rounds a double to the nearest int.

double number = .3;
nround(number);