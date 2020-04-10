//Author Michelle Smith
#include<stdio.h>

int main()
{
    printf("Please enter the dimensions of the First Matrix\n");
    printf("Please enter the number of rows of the First Matrix:");//Please this line.
    int noOfRowsInMatrix1;
    scanf("%d",&noOfRowsInMatrix1);
    printf("Please enter the number of columns of the First Matrix:");//Please enter the number of columns of the first matrix
    int noOfColumnsInMatrix1;
    scanf("%d",&noOfColumnsInMatrix1);//It takes in the the value for the amount of columns in matrix 1
    int matrix1[noOfRowsInMatrix1][noOfColumnsInMatrix1];
    printf("Please enter the elements of Matrix 1\n");//This will print this line on the console.
    for(int i=0;i<noOfRowsInMatrix1;i++)// This is produce the amount of rows required , incremented an extra one each time until the condition is met.
    {
        for(int j=0;j<noOfColumnsInMatrix1;j++)//this inner loop is required to produce the amount of columns necessary.
        {
            scanf("%d",&matrix1[i][j]);//This will take in the values for how many rows and columns
        }
    }
    printf("Please enter the dimensions of the Second Matrix");
    printf("Please enter the number of rows of the Second Matrix:");
    int noOfRowsInMatrix2;
    scanf("%d",&noOfRowsInMatrix2);
    printf("Please enter the number of columns of the Second Matrix:");
    int noOfColumnsInMatrix2;
    scanf("%d",&noOfColumnsInMatrix2);
    int matrix2[noOfRowsInMatrix2][noOfColumnsInMatrix2];
    printf("Please enter the elements of Matrix 2\n");
    for(int i=0;i<noOfRowsInMatrix2;i++)//This is produce the amount of rows in matrix 2required , incremented an extra one each time until the condition is met
    {
        for(int j=0;j<noOfColumnsInMatrix2;j++)//this inner loop is required to produce the amount of columns necessary in matrix 2
        {
            scanf("%d",&matrix2[i][j]);//This will take in the values for how many rows and columns
        }
    }
    int productMatrix[noOfRowsInMatrix1][noOfColumnsInMatrix2];//
    if(noOfColumnsInMatrix1==noOfRowsInMatrix2)
    {
        int sum=0;
        for (int c = 0; c < noOfRowsInMatrix1; c++) {
            for (int d = 0; d < noOfColumnsInMatrix2; d++) {
                for (int k = 0; k < noOfRowsInMatrix2; k++) {
                    sum = sum + matrix1[c][k]*matrix2[k][d];
                }
                
                productMatrix[c][d] = sum;// This will calculate the sum for the rows and the columns
                sum = 0;
            }
        }
        printf("Product of entered matrices:-\n");
        for (int c = 0; c < noOfRowsInMatrix1; c++)
        {
            for (int d = 0; d < noOfColumnsInMatrix2; d++)
            {
                printf("[%d]",productMatrix[c][d]);
            }
            printf("\n");
        }

    }
    else{
        printf("ERROR: Multiplication of these Matrices not possible:\nFor multiplication no of columns in Matrix 1 should be equal to number of rows in Matrix 2");
    }
}
