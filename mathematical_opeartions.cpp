/* Write a program to declare one variable int and assign it any value and print
a) Addition
b) Subtraction
c) Multiplication
d) Division
e) Modulus */

#include<iostream>
using namespace std;
int main()
{
	int x , y;
	x = 50;
	y = 25;
	
	cout << "The addition of x and y is : " << x+y <<endl;
	
	cout << "The subtraction of x and y is : " << x-y <<endl;
	
	cout << "The multiplication of x and y is : " << x*y <<endl;
	
	cout << "The division of x and y is : " << x/y <<endl;
	
	cout << "The modulus of x and y is : " << x%y <<endl;
}

