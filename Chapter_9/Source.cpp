//This program stores the address of a variable in a pointer 
#include <iostream>
using namespace std; 

int main()
{
	int x = 25;			//int variable 
	int* ptr = nullptr; //Pointer variable, can point to an int

	ptr = &x;			//Stores the address of x in ptr
	cout << "The value in x is " << x << endl; 
	cout << "The address of x is " << ptr << endl; 
	cout << "The address of x is " << &x << endl; 
	return 0; 
}