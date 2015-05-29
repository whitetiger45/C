#include <stdio.h>

//variable definition:

extern int a, b;
extern int c;
extern float;
int func();

int main()
{

//variable definition:
int a, b;
int c;
float f;
int i = func();

//actual initialization

a = 10;
b = 20;
c = a + b;

printf("\nValue of c: %d \n\n", c);

f = 70.0/3.0;
printf("value of f: %f \n\n", f);

i;
return 0;

}

int func(){
	printf("\n\nHello from your first function in C!!\n");
	return 9;
}