//Author Michelle Smith
#include<stdio.h>

int main()
{
    int averageDailyAccelerationData[5][10]={{3, 1, 3, 4, 6, 7, 3, 2, 5, 3},{2, 2, 2, 3, 4, 4, 3, 3, 3, 2},{5, 6, 7, 6, 5, 3, 3, 3, 3, 3},{3, 3, 3, 3, 4, 4, 3, 2, 1,3},{2, 3, 4, 6, 6, 2, 5, 1, 3, 3}};
    int driverNumber;
    int sumOfAllDrivers=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<10;j++)
        {
            sumOfAllDrivers+=averageDailyAccelerationData[i][j];
        }
    }
    printf("Please enter the driver number:");// This will print this on the console, please enter the driver number
    scanf("%d",&driverNumber);//Here it takes in the number
    if(driverNumber>0 && driverNumber<6)//The number entered will be between 1 and 6.
    {
        printf("Driver %d Summary:\n",driverNumber);//This prints the driver summary along with the number of the driver 
        printf("Acceleration Recordings: ");//This will print the acceleration recordings 
        double sum=0;
        double average=0;
        int maxAcceleration=0;
        for(int i=0;i<10;i++)
        {
            if(averageDailyAccelerationData[driverNumber-1][i]>maxAcceleration)// after the calculations are preformed it will print out the average
            {
                maxAcceleration=averageDailyAccelerationData[driverNumber-1][i];
								
               sum=sum+averageDailyAccelerationData[driverNumber-1][i];
               printf("%d, ",averageDailyAccelerationData[driverNumber-1][i]);
        }
        average=sum*1.0/10.0;
        printf("\nMax average acceleration for Driver %d was in trip %d:\n",driverNumber,maxAcceleration);
        printf("Average acceleration over all of Driver %d trips: %lf\n",driverNumber,average);
        if(average>5 || maxAcceleration>6)
        {
            printf("Discount: No Discount to be applied\n");//This will print no discount to be applied if the condition is true
        }
        else//or
        {
            printf("Discount: Discount to be applied\n");//This will print discount to be applied if the condition is true
        }
        printf("The average acceleration of all drivers over all trips is: %lf\n",(sumOfAllDrivers*1.0/50));//This will print a sum displaying the average               //acceleration of all drivers 
     }
        
   }
	 
    else{
        printf("Data for Driver Number %d does not exist",driverNumber); // This will print if a number other than 1 to 6 is entered.
    }
}

