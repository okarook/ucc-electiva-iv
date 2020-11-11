
// DATOS OBTENIDOS DE MATLAB
// -------------------------

// pesos:  3.7996	 2.5564	-0.7741
// pesos: -0.6279	-0.6725	-3.3575
// pesos: -2.2506	-1.1015	-2.3832

// pesos_bias: -3.8600
// pesos_bias:  3.6154
// pesos_bias:  2.4364

const int pinInteruptores[] = {2, 3, 4};
const int pinLED = 7;

byte capa1, capa2, capa3;
float neurona1, neurona2, neurona3;
float a1, a2, a3;
float resultado;

void setup()
{
  pinMode(pinInteruptores[0], INPUT);
  pinMode(pinInteruptores[1], INPUT);
  pinMode(pinInteruptores[2], INPUT);
  pinMode(pinLED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  capa1 = digitalRead(pinInteruptores[0]);
  capa2 = digitalRead(pinInteruptores[1]);
  capa3 = digitalRead(pinInteruptores[2]);

  neurona1 = capa1*(3.7996)+capa2*(2.5564)+capa3*(-0.7741)+(-3.8600);
  neurona2 = capa1*(-0.6279)+capa2*(-0.6725)+capa3*(-3.3575)+(3.6154);
  neurona3 = capa1*(-2.2506)+capa2*(-1.1015)+capa3*(-2.3832)+(-2.4364);

  a1 = tanh(neurona1);
  a2 = tanh(neurona2);
  a3 = tanh(neurona3);

  resultado = a1*(-3.8600)+a2*(3.6154)+a3*(2.4364);

  Serial.println(String(capa1) + " " + String(capa2) + " " + String(capa3) + " Resultado = " + String(resultado));

  digitalWrite(pinLED, resultado > -2.8);
  delay(500);
}
