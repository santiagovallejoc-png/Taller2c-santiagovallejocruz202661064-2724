//Santiago Vallejo Cruz 202661064-2724
#include <iostream>//Esto es para que entienda los datos que coloquemos
#include <string>//Esto nos sirve para los caracteres
#include <iomanip>//Nos sirve para poder manipular los datos de entrada y salida de las variables
using namespace std;//estos nos evita utilizar esto (std::cout<<"") en cada mensaje

int main(){
    float ingreso;//colocamos las variables con datos flotantes
    float deuda;
    float relacion;
    float capacidad;
    int edad;//colocamos las variables con datos entes
    int historial;
    cout<<"Por favor ingrese su ingreso mensual\n";//mensajes con su respectiva variable
    cin>>ingreso;
    cout<<"Pora favor ingrese su deuda mensual\n";
    cin>>deuda;
    cout<<"Por favor ingrese su edad\n";
    cin>>edad;
    cout<<"Usted tiene historial crediticio?(1.Si,0.No)\n";
    cin>>historial;
    if(ingreso<=0){//si el ingreso es 0 o menor le aparece un mensaje de error
        cout<<"error el ingreso debe de ser mayor a 0\n";

    }else if(deuda<0){//la deuda no puede ser negativa
        cout<<"error la deuda no puede ser negativo\n";

    }else if(edad<18||edad>100){//el usuario no puede superar ese rango de edad sino le aparece un mensaje de error
        cout<<"error la edad debe estar entre 18 y 100\n";

    }else if(historial !=1 && historial != 0){//si el usuario no ingreso 1 ni 0 le aparece un mensaje de error
        cout<<"error el historial tiene que ser 1 o 0\n";

    }else {//si no cumplio ninguna de las anteriores entonces calculamos la relacion,capacidad ,y miramos el nivel de riesgo
        relacion= deuda/ingreso;
        capacidad =ingreso-deuda;

        cout<<fixed<<setprecision(2);//con esto miramos cuantas decimales van a tener
        cout<<"Relacion deuda/ingreso "<<relacion<<"\n";
        cout<<"Capacidad de pago "<<capacidad<<"$\n";
        if(relacion>0.5||capacidad <0){//si relacion es mayor a 0.5 o capacidad es menor a 0 entonces se muestra en pantalla el nivel de riesgo alto
            cout<<"Nivel de riesgo: ALTO\n";

        }else if(relacion<=0.3 && edad>=25 && historial==1){//si se cumple esta condicion aparece que el nivel de riesgo es bajo
            cout<<"Nivel de riesgo: BAJO\n";

        }else{//si no se cumplio ninguna de las anteriores entonces el nivel de riesgo es medio
            cout<<"Nivel de riesgo: MEDIO\n";

        }


    }




}
