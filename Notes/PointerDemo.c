#include<stdio.h>

void incrementingPointerAddresses() {
	int a = 15;
	int *p;
	p = &a;

	printf("before incrementing = %p\n", p);
	printf("after incrementing = %p\n", p + 1); // Because it is integer, it will increase by 4 bytes.
}

int main() {
	int a = 10; 
	int *p;
	p = &a;
	printf("%p\n", p); // address
	printf("%d\n", *p); // *p - value at address pointed by p
	printf("%p\n", &a); // *a - address of a
	printf("a before modification = %d\n", a);

	*p = 12; // value at address pointed by p got modified
	printf("a after modification = %d\n", a);

	incrementingPointerAddresses();
}