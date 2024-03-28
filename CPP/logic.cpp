#include <iostream>

double logic(double a, double b){
	std::cout << "[DOUBLE FUNCTION] --> logic" << std::endl;

	if (a == 0.0){
		std::cout << "[Error]:: No value for parameter a (needs to be above zer0)" << std::endl;
		return 0.0;
	}

	else if (b == 0.0){
		std::cout << "[Error]:: No value for parameter b (needs to be above zer0)" << std::endl;
		return 0.0;
	}
	
	// if a is less than b (a < b)
	else if (a < b){
		std::cout << "[Condition: a < b]" << std::endl;
		double mult = a * b;
		double div = a / b;
		std::cout << "[*]:: a * b = " << mult << std::endl;
		std::cout << "[/]:: a / b = " << div << std::endl;
		return mult + div; // returning the multiplication plus the division.
	}

	else if (a > b){
		std::cout << "[Condition: a > b]" << std::endl;
		double plus = a + b;
		double minus = a - b;
		std::cout << "[+]:: a + b = " << plus << std::endl;
		std::cout << "[-]:: a - b = " << minus << std::endl;
		return plus - minus; // returning the plus minus the minus.

	}

	else if (a == b){
		std::cout << "[Condition: a == b]" << std::endl;
		std::cout << "[ ]:: No operations on " << a << " or " << b << std::endl;
		return 1.0;
	}

	else{
		std::cout << "[NO LOOP, in last else]" << std::endl;
	}

	return 1.0;
}

int main(){
	std::cout << "[MAIN FUNCTION]" << std::endl;
	
	double a = 1.5;
	double b = 2.0;

	logic(a, b);

	double a1 = 2.0;
	double b1 = 1.5;
	
	logic(a1, b1);

	double a2 = 2.0;
	double b2 = 2.0;

	logic(a2, b2);

	return 0;
}
