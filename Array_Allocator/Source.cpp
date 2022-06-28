#include <iostream>
using namespace std; 
int* AllocateArray(int); 

int main()
{
	const int ARRAY_SIZE = 5;  
	int* numbers = AllocateArray(ARRAY_SIZE); //Creating a variable that point to int 
	
	cout << "Enter a #s" << endl; 
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << "#" << i << " ";
		cin >> *(numbers + i); 
	}

	for (int i = 0; i < ARRAY_SIZE; i++)
		cout << *(numbers + i) << endl; 

	delete[] numbers; 
	numbers = nullptr; 
	return 0; 
}

int* AllocateArray(int size)
{
	return new int[size]; 
}