// C++ code
//

void setup()
{
	pinMode(13,OUTPUT); //Declarando que o LED está no pino 13 e é saída do Arduino
}

void loop()
{
	digitalWrite(13,HIGH); //O pino 13 recebe uma tensão alta e "LIGA"
  	delay (3000); //Fica ligado por 3 segundos
  	digitalWrite(13,LOW);// O pino 13 recebe uma tensão baixo e "DESLIGA"
    delay (1000);//Fica ligado por 1 segundo

}