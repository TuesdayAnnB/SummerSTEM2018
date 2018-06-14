/*
  Tuesday Brown
  http://learn.parallax.com/propeller-c-tutorials 
 
*/
#include "simpletools.h"                      // Include simple tools
#include "adcDCpropab.h"
int main()                                    // Main function
{
  // Add startup code here.
float volts;

adc_init(21, 20, 19, 18);
 
  while(1)
  {
  volts=adc_in(3);
  pause(volts+10);
//The Legend of Zelda: Main Theme 
    freqout(0,300,1000);
    pause(50);
    freqout(0,500,750);
    pause(100);
    freqout(0,200,1000);
    pause(50);
    freqout(0,150,1000);
    freqout(0,150,1100);
    freqout(0,150,1250);
    freqout(0,150,1330);
    freqout(0,600,1500);
    pause(100);
    freqout(0,150,1500);
    pause(50);
    freqout(0,150,1500);
    freqout(0,200,1600);
    freqout(0,200,1800);
    freqout(0,800,2000);
    pause(50);
    freqout(0,200,2000);
    pause(50);
    freqout(0,200,2000);
    freqout(0,200,1800);    
    freqout(0,200,1600);
    freqout(0,350,1800);
   
    freqout(0,200,1600);
    freqout(0,600,1500);
    pause(2000);


  }  
}
