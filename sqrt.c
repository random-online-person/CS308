/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// this is step 1.7

// this is entry point of the  program
int main(int argc, char* argv[]) {
	
	//if there is a null input then print an error
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	//else print the sqrt of the input number
	int input = atoi(argv[1]);
	printf("Sqrt of %d is %f\n",input,sqrt(input));
	return(0);

} // end main
