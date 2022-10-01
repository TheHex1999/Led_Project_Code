/* 
My_1st Led Blink Code
 *  Name = HEX
 *  Youtube = THE_HEX
 *  Date = 1/Oct/2022
 *  Time = 7:51 PM
 *  loca = INDIA
 */

int Led1=13;                     //Declear The Value 'int' Value

void setup()                   // put your setup code here, to run once:
{
pinMode(Led1, OUTPUT);       //Basically initialize digital pin 'Led1' as an output.
}
void loop()                // put your main code here, to run repeatedly:
{
  theHex(Led1);           //Excuited 'theHex' Value Using Void Loop  
}

void theHex(int Pin)    //Custom VOid Creat 'theHex'
{
 
  int parameter=1000;       // This is the Integar Value Of delay
   
digitalWrite(Pin, HIGH);      // turn the LED on (HIGH is the voltage level)
delay(parameter);            // wait for a second
digitalWrite(Pin, LOW);     // turn the LED off by making the voltage LOW
delay(parameter);          // wait for a second
}
