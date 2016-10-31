//---------------------------------------------------
// types
//---------------------------------------------------
enum eLETTERS
{
  e_H = 2,  // Green LED 
  e_A = 3,  // B LED 
  e_P = 4,  // Green LED 
  e_Y = 5,  // R LED 
  e_L = 6,  // Green LED 
  e_O = 7,  // B LED 
  e_W = 8,  // Green LED 
  e_E = 9,  // R LED 
  e_N = 14, // Green LED
  e_SPACE = -1, // do nothing 
  e_CAR_2RTN = -2 // do nothing extra long
};

//---------------------------------------------------
// constants
//---------------------------------------------------
const int DELAY_MS = 500;
const int numPins =  9;
const int arrPins[numPins] = {e_H,  e_A,  e_P,  e_Y,  e_L,  e_O,  e_W,  e_E,  e_N };

//---------------------------------------------------
// setup
//---------------------------------------------------
void setup() 
{
  // initialize digital pins as outputs
  for (int i =0 ; i< numPins ; i++)
  {
    pinMode(arrPins[i], OUTPUT);
  }
}

//---------------------------------------------------
// writeLetter
//---------------------------------------------------
void writeLetter(eLETTERS ltr)
{
  if (ltr == e_SPACE)
  {
    // take double the length of time
    delay(DELAY_MS);
    delay(DELAY_MS);
  }
  else if(ltr == e_CAR_RTN)
  {
    delay(DELAY_MS);
    delay(DELAY_MS);
    delay(DELAY_MS);
    delay(DELAY_MS);
  }
  else
  {
    digitalWrite(ltr, HIGH);
    delay(DELAY_MS);
    digitalWrite(ltr, LOW);
    delay(DELAY_MS);
  }
}

//---------------------------------------------------
// loop
//---------------------------------------------------
void loop() 
{
  // HAPPY
  writeLetter(e_H);
  writeLetter(e_A);
  writeLetter(e_P);
  writeLetter(e_P);
  writeLetter(e_Y);

  // SPACE
  writeLetter(e_SPACE);
  
  // HALLOWEEN
  writeLetter(e_H);
  writeLetter(e_A);
  writeLetter(e_L);
  writeLetter(e_L);
  writeLetter(e_O);
  writeLetter(e_W);
  writeLetter(e_E);
  writeLetter(e_E);
  writeLetter(e_N);
  writeLetter(e_CAR_RTN);
  
}
