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
    Serial.println(randNumber);

    if (count % repeat == repeat - 1)
    {
      Serial.print("count = ");
      Serial.println(count+1);
      
    }
    delay(interval);
  }
}
 
