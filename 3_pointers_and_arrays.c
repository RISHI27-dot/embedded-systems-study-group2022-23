#include<stdio.h>

int main() 
{

  int arr[5] = {1,2,3,4,5};
  function(arr);
  int *ptr = arr; //valid because 'arr' is the pointer that is pointing to the first element of the array.

  char* a = "rishi";//valid because we are assigining a array of char to a char *.
  printf("%s\n",a);
}

void function(int *ptr){
  for(int i = 0; i < 5; i++)
  {
	  printf("The %dth element of the array at address %u is %d \n",i, (ptr+i), *(ptr+i));
  }
}
