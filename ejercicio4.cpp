//Santiago Vallejo Cruz 202661064-2724
#include <iostream>//Esto es para que entienda los datos que coloquemos
#include <string>//Esto nos sirve para los caracteres
using namespace std;//estos nos evita utilizar esto (std::cout<<"") en cada mensaje

int main(){
    int año;//valor entero
    cout<<"Ingrese un anio";//mensaje
    cin>> año;//lo guardamos en la variable
    if (año<0){//condicion que si se cumple muestra un mensaje de error
        cout<<"ERROR vuelve a colocar un anio positivo \n";
    }else if ((año %4== 0 && año%100!=0  || año %400==0 )){//otra condicion para saber si el año es bisieto o no
        cout<<"El anio "<<año<<" es bisiesto\n";//mensaje de que el año si es bisiesto
    }else{
        cout<<"El anio "<<año<<" no es bisiesto\n";//mensaje de que año no es bisiesto

    }
    
}