//Santiago Vallejo Cruz 202661064-2724
#include <iostream>//Esto es para que entienda los datos que coloquemos
#include <string>//Esto nos sirve para los caracteres
#include <iomanip>//Nos sirve para poder manipular los datos de entrada y salida de las variables
using namespace std;//estos nos evita utilizar esto (std::cout<<"") en cada mensaje

int main(){
    float peso;//datos flotantes
    float distancia;
    int zona;
    float tarifa;
    char fragil;//datos de un unico caracter
    cout<<"Por favor ingrese el peso del paquete en kg\n";//mensajes con sus respectiivas variables
    cin>>peso;
    cout<<"Por favor ingrese la distancia en km\n";
    cin>>distancia;
    cout<<"Por favor ingrese la zona (1 Nacional,2 Internacional)\n";
    cin>>zona;
    cout<<"Su paquete es fragil? (S/N)\n";//nomas ingresa una letra debido a que la variable es tipo char
    cin>>fragil;
    if(peso<=0||distancia<=0){//la condicion que nos dice que si el peso es menor o igual a 0 o la distancia menor o igual a 0 aparece un mensaje de error
        cout<<"error el peso y la distancia deben ser positivos\n";
    }else if(peso>30){//si el peso llega a superar los 30kg no se puede enviiar
        cout<<"error el peso no puede superar los 30 kg\n";
    }else if(zona!= 1 && zona!=2){//si el usuario no llega a ingresar el 1 o el 2 le aparece ese mensaje de error
        cout<<"error la zona tiene que ser 1 o 2\n";
    }else if(fragil !='S' && fragil !='s' && fragil !='N' && fragil !='n'){//el usuario puede ingresar tanto "S" como "s" y tambien "N" y "n" pero si llega a ingresar otra letra le aparece el mensaje de error
        cout << "error tiene que ingresar S o N para indicar si es fragil\n";
    }else {//si no cumplio con ninguna entonces ya se pasa a la parte de calcular la tarifa
        tarifa=8000 +(peso*1200)+(distancia*50);
        if(zona==2){//si es en la zona 2 en internacional se le cobra la tarifa*1.5
            tarifa=tarifa*1.5;
        }
        if(fragil=='S'||fragil== 's'){//si el paquete es fragil se le cobra la tarifa *1.20
            tarifa= tarifa *1.20;
        }

        cout << fixed << setprecision(2);//esto es para controlar cuantas decimales se van a ver
        cout << "El valor final que tiene que pagar es"<< tarifa << "$\n";
    }

    

}
