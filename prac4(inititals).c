#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void) {
	// getting string
	string name = get_string("print your name here: "); \
		// def string lenght for loop
		int lenght = strlen(name);
	char initials[3];
	int j = 1;
	int int_initial = 0;
	char char_initial;
	// getting first initial
	initials[0] = name[0];
	for (int i = 0; i < lenght; i++) {
		char charc = name[i];
		printf("before_If %c\n", charc);
		if (charc == ' ') {
			initials[j] = name[i + 1];
			//  printf("in if %c number in array %d\n", initials[j], j);
			j++;
		}
	}
	for (int n = 0; n < 3; n++) {
		// printf("initial %c\n", initials[n]);
		int_initial = (int)initials[n];
		int_initial = int_initial + 26;
		char_initial = (char)int_initial;
		printf("%c", char_initial);
	}
	printf("%c%c%c\n", initials[0], initials[1], initials[2]);
}