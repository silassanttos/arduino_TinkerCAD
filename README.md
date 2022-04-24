# arduino_TinkerCAD
Implementando meu primeiro primeiro programa Arduíno no TinkerCAD.



![Incredible Fyyran-Bojo](https://user-images.githubusercontent.com/69328711/164992196-8567955a-7318-4d49-bcb4-7fe828184616.png)



![led](https://user-images.githubusercontent.com/69328711/164992163-71a6e7fe-0d7a-4a35-9391-315d08e9d072.gif)

Foi implementado no site: https://www.tinkercad.com/


// C++ code <br>
//Código fonte do projeto! <br>

void setup()
{
  &nbsp; pinMode(13,OUTPUT); //Declarando que o LED está no pino 13 e é saída do Arduino<br>
} <br> 
 
void loop()<br> 
{<br> 
	 &nbsp; &nbsp;  digitalWrite(13,HIGH); //O pino 13 recebe uma tensão alta e "LIGA" <br> 
  	&nbsp;&nbsp;  delay (3000); //Fica ligado por 3 segundos<br> 
  	&nbsp;&nbsp;  digitalWrite(13,LOW);// O pino 13 recebe uma tensão baixo e "DESLIGA"<br> 
    &nbsp;&nbsp;  delay (1000);//Fica ligado por 1 segundo<br>
<br> 
}
