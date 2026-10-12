//Santiago Vallejo Cruz 202661064-2724
#include <iostream>//Esto es para que entienda los datos que coloquemos
#include <string>//Esto nos sirve para los caracteres
using namespace std;//estos nos evita utilizar esto (std::cout<<"") en cada mensaje

int main(){
    float nota1;//declaramos todas las variables como valores flotantes
    float nota2;
    float nota3;
    float promedio;
    cout<<"Ingrese su primera nota\n";//imprimos un mensaje y lo guardamos en nota1 lo mismo con los otros mensajes y sus respectivas variables
    cin>>nota1;
    cout<<"Ingrese su segunda nota\n";
    cin>>nota2;
    cout<<"Ingrese su tercera nota\n";
    cin>>nota3;
    if (nota1<0 || nota1 >5||nota2<0 || nota2 >5||nota3<0 || nota3>5){ // el "||" sirven como un "o" ahi nos dicen que si nota1<0 "o" nota1>5 y lo mismo con los otros
       cout<<"ERROR ingrese sus notas correctas\n";     //si se  cumple la condicion les muestra este mensaje
    }else{//si no se cumple la condicion entonces calculamos el promedio y lo mostramos
        promedio=(nota1*0.30+nota2*0.30+nota3*0.40);
        cout<<"Su promedio es "<<promedio<<"\n";
        if (promedio>=4.5){//esto es una condicion dentro de otra que ya nos pide dependiendo del promdeio le muestra un mensaje
            cout<<"Su promedio es excelente\n";
        }else if (promedio>=4){
            cout<<"Su promedio es bueno\n";
        }else if (promedio>=3){
        cout<<"Su promedio es aceptable\n";
        
        }else{
        cout<<"Reprobaste\n";

        }
        
        
        
    }
    
}