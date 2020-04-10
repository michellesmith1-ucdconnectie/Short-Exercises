//Author Michelle Smith
#include <stdio.h>
void square(int *value)//The function to square the integers
{ 
	*value=(*value)*(*value);//The compilation of the mathematical formula within the function
}
int main ()//Main function
	
{
	int value1, value2, value3, value4, sum=0, multiply=1;//Variables
	


	printf("Please enter 4 integers ");//Please enter the 4 integers
	scanf ( "%d %d %d %d", &value1, &value2, &value3, &value4);//Taking in the 4 values

	sum= value1 + value2 + value3 + value4;//sum is calculated by adding the 4 values	
	multiply=value1*value2*value3*value4;//The 4 values are multiplied together 
	printf("Value of Integer 1 is %d and is stored in memory location %p\n",value1,&value1);//Print the value of integer 1 and the memory location of value 1
	printf("Value of Integer 2 is %d and is stored in memory location %p\n",value2,&value2);//Print the value of integer 2 and the memory location of value 2
	printf("Value of Integer 3 is %d and is stored in memory location %p\n",value3,&value3);//Print the value of integer 3 and the memory location of value 3
	printf("Value of Integer 4 is %d and is stored in memory location %p\n",value4,&value4);//Print the value of integer 4 and the memory location of value 4
	printf("Sum of Integers is %d and is stored in memory location %p\n",sum,&sum);//Print the sum of integers and the memory location of sum.
	printf("Multiplication of Integers is %d and is stored in memory location %p\n",multiply,&multiply);
	printf("Square of Integer 1 with value %d is ",value1);//Print the the value on interger 1 after it is squared
	square(&value1);//squaring value 1
	printf("%d\n",value1);//printing in the value 1
	printf("Square of Integer 2 with value %d is ",value2);
	square(&value2);
	printf("%d\n",value2);
	printf("Square of Integer 3 with value %d is ",value3);
	square(&value3);
	printf("%d\n",value3);
	printf("Square of Integer 4 with value %d is ",value4);
	square(&value4);
	printf("%d\n",value4);
	return 0;
}
