УРОВЕНЬ:

int x = 0;
int y = 0; 
int z = 0;
 
void setup()
{
  Serial.begin(9600); 
}

void loop()
{
  x = analogRead(A0); 
  y = analogRead(A1);
  z = analogRead(A2);
  
  Serial.print("Y = ");
  Serial.print(y);
  Serial.print("   Y_Voltage = ");
  Serial.println(x*5.0/1024.0);
  
  Serial.print("Z = ");
  Serial.print(z);
  Serial.print("   Z_Voltage = ");
  Serial.println(float(z)*5.0/1024.0);
  
  Serial.print("X = ");
  Serial.print(x);
  Serial.print("   X_Voltage = ");
  Serial.println(float(x)*5.0/1024.0);

  Serial.println("*******************");
  
  delay(1000);
}

SLEEP -- 5V
5V -- 5V 
GND -- GND
X - A0
Y -- A1
Z -- A2 