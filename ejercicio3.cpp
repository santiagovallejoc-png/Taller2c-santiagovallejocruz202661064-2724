//Santiago Vallejo Cruz 202661064-2724
#include <iostream>//Esto es para que entienda los datos que coloquemos
#include <string>//Esto nos sirve para los caracteres
using namespace std;//estos nos evita utilizar esto (std::cout<<"") en cada mensaje

int main(){
    float peso;//valores flotantes
    float estatura;
    float imc;
    cout<<"Por favor ingrese su peso en kg\n";//mensaje que se guarda en la respectiva variable
    cin>>peso;
    cout<<"Por favor ingrese su su estatura en metros\n";
    cin>>estatura;
    if (peso<0 ||estatura<0){//condicion que si se cumple le muestra un mensaje de error
        cout<<"Error vuelva a ingresar unos datos verdaderos\n";
    }else{//sino se cumple se calcula el imc 
        imc=peso/(estatura*estatura);
        if (imc<18.5){//dependiendo de lo que de el imc le muestra un mensaje de como esta su peso
            cout<<"tienes Bajo peso su IMC es "<<imc<<"\n";
        }else if (imc<25)
        {
            cout<<"tienes Normal peso su IMC es "<<imc<<"\n";
        }else if (imc<30)
        {
            cout<<"tienes sobrepeso peso su IMC es "<<imc<<"\n";
        }else{
            cout<<"tienes sobrepeso peso su IMC es "<<imc<<"\n";
        }
        
        
    }
    
}