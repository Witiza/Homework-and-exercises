#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"Exercises.h"

int main()
{
	srand(time(NULL));
	int arr[100];
	random_array_generator(arr);
	int No_of_negatives = negative_counter(arr);
	printf("There are %i negative numbers in the array", No_of_negatives);
	
	getchar();
	return 0;
}