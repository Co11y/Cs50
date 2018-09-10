#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void) {
	char initials[3];
	char initials_up[3];
	int int_initial = 0;
	char char_initial;
	// getting string
	string name = get_string("print your name here: "); \
		// def string lenght for loop
		int lenght = strlen(name);
	int j = 1;
	// getting first initial
	initials[0] = name[0];
	for (int i = 0; i < lenght; i++) {
		char charc = name[i];
		if (charc == ' ') {
			initials[j] = name[i + 1];
			j++;
		}
	}
	for (int cnt = 0; cnt < 3; cnt++) {
		int_initial = (int)initials[cnt];
		int_initial = int_initial - 32;
		char_initial = (char)int_initial;
		initials_up[cnt] = char_initial;
	}
	printf("%c%c%c\n", initials[0], initials[1], initials[2]);
	printf("%c%c%c\n", initials_up[0], initials_up[1], initials_up[2]);
}