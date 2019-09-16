#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
/*Warrior Hunter Palidin Mage Priest Thief*/
typedef struct Warrior {
	int health;
	int swing;
	int block;
}WARRIOR;
typedef struct Mage {
	int health;
	int cast;
	int swing;
}MAGE;
typedef struct Priest {
	int health;
	int cast;
	int swing;
}PRIEST;
typedef struct Paladin {
	int health;
	int swing;
	int block;
}PALADIN;
typedef struct Thief {
	int health;
	int swing;
	int backstab;
}THIEF;
typedef struct Hunter {
	int health;
	int shot;
	int swing;
}HUNTER;
namespace std; 

int main(void) {

	double pi = 3.14159;
	char ClassPick[100];
	
	char response1;
	char response2;
	//For now our response variable will be held with a char. When I get the scanner, it'll be easy to determine which Class they use
	printf_s("Do you dare enter? Y/N\n\n");
	scanf_s("%c", &response1);
	switch (response1) {
	case 'Y':
	case 'y':
		printf_s("did you say yes?");

		break;

	case 'N':
	case 'n':
		printf_s("you said no?");

		break;
	
	}
	for(;;);
}