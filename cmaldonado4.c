//Carlos Maldonado
//Lab #4
//CSC-341
//Pointer Program
#include <stdio.h>
#include <stdlib.h>

int x;
int y = 15;

int main(int argc, char *argv[])
{
   int *values;
   int i;
   values = (int *)malloc(sizeof(int)*5);
   int *pointer1 = &argc;
   printf("The biggest address is argc with %p\n",&pointer1);
   for(i = 0; i < 5; i++)
   {
	values[i] = i;
   }
   printf("This is the address of each stack variable of values\n");
   for(i = 0; i < 5; i++)
   {
	printf("values[%d] = %d with address of %p\n", i, values[i], &values[i]);
   }
   printf("The address of the heap is %p\n", &values);
   printf("The address of the uninitialized variable is %p\n", &x);
   printf("The smallest address is initialized variable with %p\n", &y);
   return EXIT_SUCCESS;
}

