long randNumber;
long bandWidth = 1000;
int repeat = 10;
int interval = 500;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for (int count = 0; count >= 0; count++)
  {
    randNumber = random(bandWidth);
   
    if (count % repeat == repeat - 1)
    {
      Serial.print(randNumber);
      Serial.print("\t");
      Serial.print("count = ");
      Serial.println(count+1);
    }
    else
    {
      Serial.println(randNumber);
    }
    delay(interval);
  }
}
 
