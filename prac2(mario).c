#include <stdio.h>
#include <string.h>
#include <cs50.h>
int main(void) {
	int height;
	int lenght;
	// number input and check
	do
	{
		height = get_int("Height:");
	} while ((height > 23) || (height < 0));
	// first loop, i  - main counter, 2 couze top should be flat
	for (int i = 2; i < number + 2; i++) {
		// l = i - 1, because of usseless " " in the end
		int l = i - 1;
		// print spaces
		for (lenght = height; lenght > l; lenght--) {
			printf(" ");
		}
		// print #
		for (int j = 0; j < i; j++) {
			printf("#");
		}
		printf("\n");
	}

}