/* 
My_1st Led Blink Code
 *  Name = HEX
 *  Youtube = THE_HEX
 *  Date = 1/Oct/2022
 *  Time = 7:51 PM
 *  loca = INDIA
 *  Framwork Version = 1.0
 */

int Led1=2;                    //Declear The Value 'int' Value
int Led2=3;
int Led3=4;
int Led4=5;

void setup()                  // put your setup code here, to run once:
{
pinMode(Led1, OUTPUT);       //Basically initialize digital pin 'Led1' as an output.
pinMode(Led2, OUTPUT);       //Basically initialize digital pin 'Led2' as an output.     
pinMode(Led3, OUTPUT);       //Basically initialize digital pin 'Led3' as an output.
pinMode(Led4, OUTPUT);       //Basically initialize digital pin 'Led4' as an output.
}
void loop()                  // put your main code here, to run repeatedly:
{                             
digitalWrite(Led1, HIGH);
digitalWrite(Led2, HIGH);
digitalWrite(Led3, HIGH);
digitalWrite(Led4, HIGH);

  ON(Led4);
  OFF(Led4);
  ON(Led3);
  OFF(Led3);
  ON(Led2);
  OFF(Led2);
  ON(Led1);
  OFF(Led1);
  ON(Led1);ON(Led2);ON(Led3);ON(Led4);
  OFF(Led1);OFF(Led2);OFF(Led3);OFF(Led4);
  ON(Led1);
  OFF(Led1);
  ON(Led2);
  OFF(Led2);
  ON(Led3);
  OFF(Led3);
  ON(Led4);
  OFF(Led4);
 ON(Led4);ON(Led3);ON(Led2);ON(Led1);
  OFF(Led4);OFF(Led3);OFF(Led2);OFF(Led1);

 ON(Led4);ON(Led3);ON(Led2);ON(Led1);
  OFF(Led3);OFF(Led4);OFF(Led1);OFF(Led2);
   
     ON(Led3);ON(Led4);ON(Led1);ON(Led2);
  OFF(Led4);OFF(Led3);OFF(Led2);OFF(Led1);

digitalWrite(Led1, HIGH);
digitalWrite(Led4, HIGH);
delay(200);
digitalWrite(Led1, LOW);
digitalWrite(Led4, LOW);
delay(200);

digitalWrite(Led1, HIGH);
digitalWrite(Led2, HIGH);
delay(200);
digitalWrite(Led1, LOW);
digitalWrite(Led2, LOW);
delay(200);

digitalWrite(Led2, HIGH);
digitalWrite(Led3, HIGH);
delay(200);
digitalWrite(Led2, LOW);
digitalWrite(Led3, LOW);
delay(200);

digitalWrite(Led3, HIGH);
digitalWrite(Led4, HIGH);
delay(200);
digitalWrite(Led3, LOW);
digitalWrite(Led4, LOW);
delay(200);


digitalWrite(Led1, HIGH);
delay(100);
digitalWrite(Led1, LOW);
delay(100);
digitalWrite(Led1, HIGH);
delay(100);
digitalWrite(Led1, LOW);
delay(100);
digitalWrite(Led1, HIGH);
delay(100);
digitalWrite(Led1, LOW);
delay(100);
digitalWrite(Led1, HIGH);
delay(100);
digitalWrite(Led1, LOW);
delay(100);


digitalWrite(Led2, HIGH);
delay(100);
digitalWrite(Led2, LOW);
delay(100);
digitalWrite(Led2, HIGH);
delay(100);
digitalWrite(Led2, LOW);
delay(100);
digitalWrite(Led2, HIGH);
delay(100);
digitalWrite(Led2, LOW);
delay(100);
digitalWrite(Led2, HIGH);
delay(100);
digitalWrite(Led2, LOW);
delay(100);


digitalWrite(Led3, HIGH);
delay(100);
digitalWrite(Led3, LOW);
delay(100);
digitalWrite(Led3, HIGH);
delay(100);
digitalWrite(Led3, LOW);
delay(100);
digitalWrite(Led3, HIGH);
delay(100);
digitalWrite(Led3, LOW);
delay(100);
digitalWrite(Led3, HIGH);
delay(100);
digitalWrite(Led3, LOW);
delay(100);

digitalWrite(Led4, HIGH);
delay(100);
digitalWrite(Led4, LOW);
delay(100);
digitalWrite(Led4, HIGH);
delay(100);
digitalWrite(Led4, LOW);
delay(100);
digitalWrite(Led4, HIGH);
delay(100);
digitalWrite(Led4, LOW);
delay(100);
digitalWrite(Led4, HIGH);
delay(100);
digitalWrite(Led4, LOW);
delay(100);

digitalWrite(Led3, LOW);
digitalWrite(Led4, LOW);
digitalWrite(Led1, LOW);
digitalWrite(Led2, LOW);
delay(2000);
}
void ON(int Pin)    //Custom VOid Creat 'theHex'
{
 
         // This is the Integar Value Of delay
   
digitalWrite(Pin, HIGH);      // turn the LED on (HIGH is the voltage level)
delay(200);            // wait for a second

}
void OFF(int Pin)    //Custom VOid Creat 'theHex'
{
 
        // This is the Integar Value Of delay
   
digitalWrite(Pin, LOW);     // turn the LED off by making the voltage LOW
delay(200);          // wait for a second


}
