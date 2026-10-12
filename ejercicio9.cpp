//Santiago Vallejo Cruz 202661064-2724
#include <iostream>//Esto es para que entienda los datos que coloquemos
#include <string>//Esto nos sirve para los caracteres
#include <iomanip>//Esto nos permite controlar como se ven los datos en la pantalla
using namespace std;//estos nos evita utilizar esto (std::cout<<"") en cada mensaje

int main(){
    float saldoi;//valores flotantes
    float monton;
    float consignar;
    int opcion;//valor entero
    cout<<"Ingrese su saldo inicial\n";//mensaje
    cin>>saldoi;//aca se guarda el dato
    if (saldoi<=0){//condicion que si se cumple muestra un mensaje de error
        cout<<"error no debe ser negativo";
    }else{//si no se cumple entonces sigue con el programa
        cout<<"Seleccione 1 para consulta.Seleccione 2 para retirar.Seleccione 3 para consignar\n";
        cin>>opcion;
        if (opcion==1){
            cout << fixed << setprecision(2);//el fixed indica  que muestre la notacion decimaly el setprecision indica cuantos decimales se van a ver en pantalla
            cout<<"Su saldo actual es "<<saldoi<<"$\n";
        }else if (opcion==2){
            cout<<"Ingrese lo que desea retirar\n";
            cin>>monton;
            if (monton<0 || monton>saldoi){
                cout<<"error lo que desea retirar tiene que ser positivo y no pasarse de su salario actual";
            }else{
                saldoi=saldoi-monton;
                cout << fixed << setprecision(2);
                cout<<"ya se realizo su retiro\n";
                cout<<"su salario actual es "  <<saldoi<<"$\n";
            }
            
        }else if (opcion==3){
            cout<<"Ingrese el monto que desea consignar\n";
            cin>>consignar;
            if (consignar<0){
                cout<<"Por favor ingrese un valor positivo";
            }else{
                saldoi=saldoi+consignar;                
                cout << fixed << setprecision(2);
                cout<<"Ya se realizo la consignacion ahora su saldo actual es "<<saldoi<<"$\n";
            }
            


        }else{
            cout<<"Por favor ingrese una de las 3 opciones\n";
        }
        
        
        
    }

    
}