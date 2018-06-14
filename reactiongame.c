/*
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools

int main()                                    // Main function
{
 int timeCounter;
 int interval;
 char again = 'Y';
 float average = 0;
 int rounds = 0;
 srand(CNT);
 
 print("Game Instructions: \n");
 print("The blue LED will turn on when the game starts. \n");
 print("When the red LED turns on, \n");
 print("Let go of the button as fast as you can. \n\n");
while(again == 'Y' || again == 'y')
{
print ("Press and hold the button to start. \n");
while (input(3) == 0)
{
//intentionally blank 
}

high(15);
low(14);
interval = ( rand() % 1001) + 500;
pause (interval);
low(15);
high(14);
timeCounter = 0;
while (input(3) == 1)
{
  pause(1);
 timeCounter = timeCounter + 1;
 }
 low(14);
   if (timeCounter > 0)
   {
   rounds = rounds+ 1;
   average = average + timeCounter;
   print("Your time was %d ms. \n", timeCounter);
   } 
   else
     print("Oops! You let go too soon! /n");

   print ("Would you like to play again? (Y/N) ");
   scan("%c", &again);
  }  //End of play again Loop.
print("Goodbye! Your average time was %0.2f ms. Thanks for playing! \n", average/rounds);
}