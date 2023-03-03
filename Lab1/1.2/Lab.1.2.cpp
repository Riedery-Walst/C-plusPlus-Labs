#include <iostream>
#define PR(x) printf("x=8u, *x=8d, &x=%u/n", x, *x, &x)

void main(void)
{
	short mas[] = { 1,2,3 };
	short* ptr1, * ptr2;
	ptr1 = mas;
	ptr2 = &mas[2];
	PR(ptr1);
	ptr1++;
	PR(ptr1);
	PR(ptr2);
	++ptr2;
	printf("ptr2-ptr1=%u\n", ptr2 - ptr1);
}