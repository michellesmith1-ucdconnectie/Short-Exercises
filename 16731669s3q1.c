//
//  main.c
//  16731669s3
//
//  Created by Michelle Smith on 16/02/2017.
//  Copyright © 2017 Michelle Smith. All rights reserved.
//

#include <stdio.h>
#include <bool.h>
double balance;
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
void deposit(int amountToBeDeposited)
{
    balance=balance+amountToBeDeposited;
}
void withdraw(int amountToBeWithdrawn)
{
    if(balance-amountToBeWithdrawn>0)
    {
        balance=balance-amountToBeWithdrawn;
    }
    else
    {
        printf("Transaction Unsuccessful due to lack of funds\n");
    }
}
int noOfTransactions(bool isTransaction)
{
    static int countTransactions=0;
    if(isTransaction)
    {
        countTransactions++;
    }
    countTransactions++;
    return countTransactions;
}
double getBalance()
{
    return balance;
}
