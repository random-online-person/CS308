/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool Is_valid_num(char str[]) {
	for (int i = 0; i < strlen(str) ; i++)
	if (!isdigit(str[i])){
		return false;
	}
	int temp = atoi(str);
	if(temp < 0){
		return false;
	}
    return true;
}
// this is step 1.7

// this is entry point of the  program
int main(int argc, char* argv[]) {
	
	//if there is a null input then print an error
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	if(Is_valid_num(argv[1])){
		//else print the sqrt of the input number
		int input = atoi(argv[1]);
		printf("Sqrt of %d is %f\n",input,sqrt(input));
	} else{
		printf("Enter a valid number \n\n");
	}



	//step 1.18
	printf("End of program. Exiting. \n\n");

	return(0);

} // end main


