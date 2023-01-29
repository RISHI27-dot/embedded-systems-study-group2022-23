#include<stdio.h>

typedef struct person {
  int age;
  float height;
} person;

void function1(person rohan);
void function2(person *ptr);
void function3(person *ptr);

int main() {

  //Declare a variable of type person and assign values to its fields.
  person rohan = {21, 177.0};
  function1(rohan);

  //Declare a pointer variable of the type person * and assign the addres of rohan to it.
  person *ptr = &rohan;
  function2(ptr);
  function3(ptr);
}

void function1(person rohan) {
  printf("rohan's age is : %d\n", rohan.age);
  printf("rohan's height is : %f\n", rohan.height);
}

void function2(person *ptr) {
  printf("rohan's age is : %d\n", (*ptr).age);
  printf("rohan's height is : %f\n", (*ptr).height);
}

void function3(person *ptr) {
  printf("rohan's age is : %d\n", ptr->age);
  printf("rohan's height is : %f\n", ptr->height);
}

int arr[5];
