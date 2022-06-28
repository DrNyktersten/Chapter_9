#include <iostream>
using namespace std; 
int doSomething(int*, int*); 

int main()
{
	int  a = 2,
		*x = &a,
		*y = &a; 

	a = doSomething(x, y);

	cout << "a = " << a << endl; 

	return 0; 
}

int doSomething(int* x, int* y)
{
	int temp = *x; 
	*x = *y * 10; 
	*y = temp * 10; 
	return *x + *y; 
}