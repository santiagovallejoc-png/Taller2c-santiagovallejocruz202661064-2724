//Santiago Vallejo Cruz 202661064-2724
#include <iostream>//es para que entienda los datos que coloquemos
#include <string>//Esto nos sirve para los caracteres
using namespace std;//estos nos evita utilizar esto (std::cout<<"") en cada mensaje

int main(){
    int segundos; //Aca creamos todas las variables enteras
    int horas;
    int minutos;
    int segundos2;
    cout<<"Por favor ingrese un numero entero en segundos : ";//aca le ponemos un mensaje al usuario para que ingrese dato entero
    cin>> segundos;//el valor que ingrese lo guardamos en la variable segundos
    if (segundos<0){//una condicion que si se cumple nos muestra un mensaje de error
        cout<<"ERROR\n";
    }else{//si no se cumple calcula el valor de la horas,minutos y segundos
        horas=segundos/3600;
        minutos=(segundos%3600)/60;
        segundos2=segundos%60;
        cout<<segundos <<"segundos equivalen a "<< horas <<" horas, "<< minutos<<" minutos "<<segundos2<<" segundos\n";//aca ya imprimimos en pantalla todos los datos
    }
    
}