#ifndef __EXERCISES_H__
#define __EXERCISES_H__
void random_array_generator(int*, int);
int negative_counter(int*);

struct Player
{
	char* Name;
	char* Position;
	int number;
};

struct Team
{
	char* Name;
	struct Player [6];
};
#endif

