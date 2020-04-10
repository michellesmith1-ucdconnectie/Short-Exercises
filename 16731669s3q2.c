//
//  16731669s3q2.c
//  16731669s3
//
//  Created by Michelle Smith on 16/02/2017.
//  Copyright © 2017 Michelle Smith. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int noOfRows;
int noOfColumns;
void calculateProductOfArray(int arrayA[],int arrayB[],int productOfArrays[]);
void initialiseArrays(int arrayA[],int arrayB[]);
int main(int argc, const char * argv[]) {
    printf("Please enter the size of the 2 dimensional array of dimensions n and m\n");
    printf("Please enter the no of rows\n");
    scanf("%d",&noOfRows);
    printf("Please enter the no of columns\n");
    scanf("%d",&noOfColumns);
    if(noOfColumns>0 && noOfRows>0)
    {
        srand((int)time(NULL));
        int arrayA[noOfRows][noOfColumns];
        int arrayB[noOfRows][noOfColumns];
        
        //initialising the arrays
        
        for(int i=0;i<noOfRows;i++)
        {
            for(int j=0;j<noOfColumns;j++)
            {
                arrayA[i][j]=(rand()%96)+5;
                arrayB[i][j]=(rand()%96)+5;
            }
        }
        printf("ARRAY A\n");
        for(int i=0;i<noOfRows;i++)
        {
            for(int j=0;j<noOfColumns;j++)
            {
                printf("[%d]",arrayA[i][j]);
            }
            printf("\n");
        }
        printf("ARRAY B\n");
        for(int i=0;i<noOfRows;i++)
        {
            for(int j=0;j<noOfColumns;j++)
            {
                printf("[%d]",arrayB[i][j]);
            }
            printf("\n");
        }
        
        int productOfArrays[noOfRows][noOfColumns];
        for(int i=0;i<noOfRows;i++)
        {
            for(int j=0;j<noOfColumns;j++)
            {
                productOfArrays[i][j]=arrayA[i][j]*arrayB[i][j];
            }
        }
        
        printf("An array containing the product of corresponding cells in arrayA and arrayB\n");
        for(int i=0;i<noOfRows;i++)
        {
            for(int j=0;j<noOfColumns;j++)
            {
                printf("[%d]",productOfArrays[i][j]);
            }
            printf("\n");
        }

        
        int sumOfArrays[noOfRows][noOfColumns];\
        for(int i=0;i<noOfRows;i++)
        {
            for(int j=0;j<noOfColumns;j++)
            {
                sumOfArrays[i][j]=arrayA[i][j]+arrayB[i][j];
            }
        }
        
        printf("An array containing the sum of corresponding cells in arrayA and arrayB\n");
        for(int i=0;i<noOfRows;i++)
        {
            for(int j=0;j<noOfColumns;j++)
            {
                printf("[%d]",sumOfArrays[i][j]);
            }
            printf("\n");
        }
        
        double averageOfArrays[noOfRows][noOfColumns];
        for(int i=0;i<noOfRows;i++)
        {
            for(int j=0;j<noOfColumns;j++)
            {
                averageOfArrays[i][j]=sumOfArrays[i][j]*1.0/2.0;;
            }
        }
        
        printf("An array containing the average of corresponding cells in arrayA and arrayB\n");
        for(int i=0;i<noOfRows;i++)
        {
            for(int j=0;j<noOfColumns;j++)
            {
                printf("[%lf]",averageOfArrays[i][j]);
            }
            printf("\n");
        }
        int sumOfRows[noOfRows];
        for(int i=0;i<noOfRows;i++)
        {
            sumOfRows[i]=0;
            for(int j=0;j<noOfColumns;j++)
            {
                sumOfRows[i]+=sumOfArrays[i][j];
            }
        }
        
        printf("An array containing the sum of corresponding rows in arrayA and arrayB\n");
        for(int i=0;i<noOfRows;i++)
        {
            
            {
                printf("[%d]",sumOfRows[i]);
                printf("\n");
            }
        }
        
        int sumOfColumns[noOfRows];
        for(int i=0;i<noOfColumns;i++)
        {
            sumOfColumns[i]=0;
            for(int j=0;j<noOfRows;j++)
            {
                sumOfColumns[i]+=sumOfArrays[j][i];
            }
        }
        
        printf("An array containing the sum of corresponding columns in arrayA and arrayB\n");
        for(int i=0;i<noOfColumns;i++)
        {
            
            {
                printf("[%d]",sumOfColumns[i]);
            }
        }
        printf("\n");
        
        printf("Random element from ArrayA is %d",arrayA[rand()%noOfRows][rand()%noOfColumns]);
    }
    else{
        printf("Arrays of dimensions %d by %d are not possible.",noOfRows,noOfColumns);
    }
    return 0;
}
