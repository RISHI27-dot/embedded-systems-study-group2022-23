#include<stdio.h>

int function1() {
	int a = 6;
	a++;
	return a;
}

int main() {
	printf("%d\n",function1());
	printf("%d\n",function1());
	printf("%d\n",function1());
	printf("%d\n",function1());
}
