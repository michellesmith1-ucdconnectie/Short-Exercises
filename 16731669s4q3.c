//Author Michelle Smith#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function prototypes
void movejockeyA(int *jockeyA);
void movejockeyB (int *jockeyB);
void printCurrentPositions(unsigned int, unsigned int);

int main()
{ 
   srand(time(NULL));

   unsigned int jockeyA = 1; // jockeyA current position
   unsigned int jockeyB = 1; // jockeyB  current position      
   unsigned int counter = 0; // counter for the for loop controling the race.

 
   puts("The Race has started");
   
   // loop through the progress on the track
   while (jockeyA != 100 && jockeyB != 100) { //neither horse has reached the end of the track
     //^^call functions to move horses on the track and print current positions
		 //the methods called
      movejockeyA(&jockeyA);//calling method to move jockey A
			movejockeyB(&jockeyB);//calling method to move jockey B
			printCurrentPositions(jockeyA,jockeyB);//calling method to print the positions
      ++counter;//increment the counter by 1
   } 

   // determine the winner and print message - one horse/jockey has passed the end as it is outside the loop.
   if (jockeyA > jockeyB) {
      //^^print the outcome 
			printf("Jockey A Won!\n");//print if jockey A won
   } 
             
   else if (jockeyA < jockeyB) {
      //^^print the outcome 
			printf("Jockey B Won!\n");//print if Jockey B won
   }
   else {
     //^^print the outcome 
		 printf("Race Tied!\n");//print if race tied
   } 

   printf("iteration: %u\n", counter);//print the number of iterations
} 

// progress for Jockey B
void movejockeyB( int *jockeyBPtr)
{ 
    // ^^generate random number from 1-10 - make sure it is different each time program is run.
		int x;
		x=rand()%10+1;
   //printf("Jockey B random : %d \n", x);
   // determine progress
   if (x >= 1 && x <= 5) { // full speed 50% of the time
      *jockeyBPtr += 2;//progress 2 
   } 
	 else if(x==6)
	 {
	 		*jockeyBPtr += 1;
	 }
	 else if(x==7)
	 {
	 		*jockeyBPtr += 3;
	 }
	 else if(x>=9 && x<=10)
	 {
	 		*jockeyBPtr -= 2;
	 }
   //^^Test all the rules from the specification.
    
   // check boundaries
   
   if (*jockeyBPtr < 1) {
      *jockeyBPtr = 1;
   } 
   if (*jockeyBPtr > 100) {
      *jockeyBPtr = 100;
   } 
} 

// progress for the Jockey A
void movejockeyA( int *jockeyAPtr)
{ 
     // ^^generate random number from 1-10 - make sure it is different each time program is run.
 		int x;
 		x=rand()%10+1;
    //printf("Jockey A random : %d \n", x);
    // determine progress
    if (x >= 1 && x <= 5) { // full speed 50% of the time
       *jockeyAPtr += 2;
    } 
 	 else if(x==6)
 	 {
 	 		*jockeyAPtr += 1;
 	 }
 	 else if(x==7)
 	 {
 	 		*jockeyAPtr += 3;
 	 }
 	 else if(x>=9 && x<=10)
 	 {
 	 		*jockeyAPtr -= 2;
 	 }
    //^^Test all the rules from the specification.
    
    // check boundaries
   
    if (*jockeyAPtr < 1) {
       *jockeyAPtr = 1;
    } 
    if (*jockeyAPtr > 100) {
       *jockeyAPtr = 100;
    }
} 

// display new position each time there is a move.
void printCurrentPositions(unsigned int jockeyA, unsigned int jockeyB)
{ 
    // loop through race
   for (unsigned int count = 1; count <= 100; ++count) {
      // print current leader
        
      if (count == jockeyA && count == jockeyB) {
         printf("%s",  "Tie!!");
      } 
      else if (count == jockeyB) {
        //^^implement what should happen in this case 
				printf("%s",  "B");
      } 
      else if (count == jockeyA) {
        //^^implement what should happen in this case 
				printf("%s",  "A");
      } 
      else {
        //^^implement what should happen in this case (print a space)
				printf("%s",  " ");
      } 
   }

   puts("");
} 


