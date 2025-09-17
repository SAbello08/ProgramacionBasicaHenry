#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int score = 75;
	
	if (score >= 90){
		std::cout<<"Grade: A"<<std::endl;
	} else if (score >= 80) {
		std::cout<<"Grade: B"<<std::endl;
	} else if (score >= 70) {
		std::cout<<"Grade: C"<<std::endl;
	} else {
		std::cout<<"Grade: F"<<std::endl;
	}
	return 0;
}
