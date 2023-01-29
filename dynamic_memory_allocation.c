#include <stdio.h>
#include <stdlib.h>

int main() {

	float a = 199.80;
	int b = (int)a;

	char *ptr = (char *)malloc(sizeof(char));
	if (ptr == NULL)
	{
		printf("Memory could not be allocated.");
	}
	else 
	{
		*ptr = 'S';
	}

	printf("%c\n", *ptr);

	free(ptr);
	return 0;
}
