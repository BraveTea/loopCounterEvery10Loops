long randNumber;
int bandWidth = 1000;

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

    if (count % 10 == 9)
    {
      Serial.print("count = ");
      Serial.println(count+1);
      
    }
    delay(500);
  }
  
  
}

/*  if (count <= count % 100)
    {

    }
    else
    {
      Serial.print("count = ");
      Serial.println(count++);
      delay(100);
*/
