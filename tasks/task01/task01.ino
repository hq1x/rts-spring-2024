
long times[5] = {10000, 1000, 500, 100, 50}; //10мс 1мс 500мкс 100мкс 50мкс
int* lamps = new int[5];
long* micrs = new long[5];
int pins[5] = {3, 5, 6, 9, 10};
void setup() {

  for (int i = 0; i < 5; i++) 
  {
    micrs[i] = 0;
    lamps[i] = LOW;
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {

  unsigned long curmic = micros();

  if (curmic - micrs[0] >= times[0]) 
  {
    micrs[0] = curmic;

    if (lamps[0] == LOW) 
    {
      lamps[0] = HIGH;
    }
    else 
    {
      lamps[0] = LOW;
    }

    digitalWrite(pins[0], lamps[0]);
  }

  if (curmic - micrs[1] >= times[1]) 
  {
    micrs[1] = curmic;

    if (lamps[1] == LOW) 
    {
      lamps[1] = HIGH;
    }
    else 
    {
      lamps[1] = LOW;
    }

    digitalWrite(pins[1], lamps[1]);
  }
  
  if (curmic - micrs[2] >= times[2]) 
  {
    micrs[2] = curmic;

    if (lamps[2] == LOW) 
    {
      lamps[2] = HIGH;
    }
    else 
    {
      lamps[2] = LOW;
    }

    digitalWrite(pins[2], lamps[2]);
  }

  if (curmic - micrs[3] >= times[3]) 
  {
    micrs[3] = curmic;

    if (lamps[3] == LOW)
    {
      lamps[3] = HIGH;
    }
    else 
    {
      lamps[3] = LOW;
    }

    digitalWrite(pins[3], lamps[3]);
  }

  if (curmic - micrs[4] >= times[4]) 
  {
    micrs[4] = curmic;

    if (lamps[4] == LOW) 
    {
      lamps[4] = HIGH;
    }
    else 
    {
      lamps[4] = LOW;
    }

    digitalWrite(pins[4], lamps[4]);
  }
}
