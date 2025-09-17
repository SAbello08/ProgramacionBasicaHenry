#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int age = 17;
	if (age >= 18) {
		std::cout <<"You are eligible to vote"<< std::endl;
	} else {
		std::cout <<"You are not eligible to vote"<< std::endl;
	}
	return 0;
}
