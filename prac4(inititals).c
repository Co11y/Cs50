#include <stdio.h>
#include <string.h>
#include <cs50.h>
// var ========================
int j = 1;
char initials[3];
// upper func =================
char upper(char initial) {
	int temp;
	char upinitial = initial;
	temp = (int)initial;
	if (temp > 96) {
		upinitial = (char)temp - 32;
	}
	return upinitial;
}
// ==============================
int main(void) {
	string name = get_string("write here your name!");
	int name_lenght = strlen(name);
	initials[0] = name[0];
	for (int i = 0; i < name_lenght; i++) {
		if (name[i] == ' ') {
			initials[j] = name[i + 1];
			j++;
		}
	}
	printf("%c%c%c\n", upper(initials[0]), upper(initials[1]), upper(initials[2]));

}