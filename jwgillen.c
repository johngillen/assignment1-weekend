/*
 * Author: John Gillen
 * Assignment: Assignment1-weekend
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	srand(time(0));

	int r1 = rand() % 1000;
	int r2 = rand() % 1000;

	printf("r1: %d\n", r1);
	printf("r2: %d\n", r2);

	if (r1 < r2) {
		printf("%d < %d: TRUE\n", r1, r2);
	} else {
		printf("%d < %d: FALSE\n", r1, r2);
	}

	if (r1 <= r2) {
		printf("%d <= %d: TRUE\n", r1, r2);
	} else {
		printf("%d <= %d: FALSE\n", r1, r2);
	}

	if (r1 > r2) {
		printf("%d > %d: TRUE\n", r1, r2);
	} else {
		printf("%d > %d: FALSE\n", r1, r2);
	}

	if (r1 >= r2) {
		printf("%d >= %d: TRUE\n", r1, r2);
	} else {
		printf("%d >= %d: FALSE\n", r1, r2);
	}

	if (r1 == r2) {
		printf("%d == %d: TRUE\n", r1, r2);
	} else {
		printf("%d == %d: FALSE\n", r1, r2);
	}

	if (r1 != r2) {
		printf("%d != %d: TRUE\n", r1, r2);
	} else {
		printf("%d != %d: FALSE\n", r1, r2);
	}

	return 0;
}