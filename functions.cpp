#include <iostream>
#include "functions.h"
#include <string>

float takeFirstInput()
{
	std::cout << "Enter an integer: " << std::endl;
	float firstInput{};
	std::cin >> firstInput;

	return firstInput;
}

char takeOperator()
{
	std::cout << "Enter +, -, /, *, % :" << std::endl;
	char inpOp{};
	std::cin >> inpOp;

	return inpOp;
}

float takeSecondInput()
{
	std::cout << "Enter another integer: " << std::endl;
	float secondInput{};
	std::cin >> secondInput;

	return secondInput;
}

void calculate(float y, float z, char o)
{
	if(o == '+')
	{
		std::cout << y << " + " << z << " = " << y + z << std::endl;
	}
	else if(o == '-')
	{
		std::cout << y << " - " << z << " = " << y - z << std::endl;
	}
	else if(o == '/')
	{
		std::cout << y << " / " << z << " = " << y / z << std::endl;
	}
	else if(o == '*')
	{
		std::cout << y << " * " << z << " = " << y * z << std::endl;
	}
}