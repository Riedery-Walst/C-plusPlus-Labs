#include <iostream>

using namespace std;

void swap3(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "after swapping: a = " << a << ", b = " << b << endl;
}

void swap2(int* a, int* b)
{
	int c;
	int* temp = &c;
	*temp = *b;
	*b = *a;
	*a = *temp;
	cout << "after swapping: a = " << *a << ", b = " << *b << endl;
}

void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "after swapping: a = " << a << ", b = " << b << endl;
}

int main()
{
	int a = 2, b = 5;
	cout << "before swapping: a = " << a << ", b = " << b << endl;
	swap1(a, b);

	a = 2, b = 5;
	cout << "before swapping: a = " << a << ", b = " << b << endl;
	swap2(&a, &b);

	a = 2, b = 5;
	cout << "before swapping: a = " << a << ", b = " << b << endl;
	swap3(a, b);
}