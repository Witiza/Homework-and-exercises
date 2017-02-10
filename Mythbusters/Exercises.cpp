#include"Exercises.h"
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void random_array_generator(int* arr, int size)
{
	for (int i = 0; i < 100; i++)
	{
		int firstnumber = rand() % 100;
		int secondnumber = rand() % 100;
		int number = firstnumber - secondnumber;
		arr[i] = number;
	}
}

int negative_counter(int* arr)
{
	int negativecounter = 0;
	for (int i = 0; i < 100; i++)
	{
		if (arr[i] < 0)
		{
			negativecounter++;
		}
	}
	
	return negativecounter;
}