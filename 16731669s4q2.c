//Author Michelle Smith
#include<stdio.h>
#define SIZE 5//The size of the array is
int main()
{
	int integerArray[SIZE];//Numerical array
	float floatArray[SIZE];//Float array
	printf("Integer Type Array\n");//Print the integer type array
	for(int i=0;i<SIZE;i++)//The array starts at 0 and increments 1 until it reaches 5
	{
			printf("Address of element %d is %p\n",(i+1),&integerArray[i]);// Print the address of each element in the integer array
	}
	printf("\nFloat Type Array\n");//Print the float type array
	for(int i=0;i<SIZE;i++)//The array starts at 0 and increments 1 until it reaches 5
	{
			printf("Address of element %d is %p\n",(i+1),&floatArray[i]);//Print the address of each element in the float array
	}
}
