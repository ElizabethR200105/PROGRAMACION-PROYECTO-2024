#include <iostream>
using namespace std;

int main(){

int sueldo, horas;
//Pregunatr las horas que se trabajo//
cout<<"¿Cuantas horas trabajo esta semana?";
cin>>horas;

if(horas<40){

sueldo=horas*20;//Sueldo si trabaja 40 horas o menos
} else{
sueldo=40*20 + (horas-40)*25;//el sueldo si trabaja horas extras

}
cout<<"SU SUELDO SEMANAL ES: S/."<<sueldo;//Sueldo final


    return 0;
}