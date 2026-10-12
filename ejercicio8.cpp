//Santiago Vallejo Cruz 202661064-2724
#include <iostream>//Esto es para que entienda los datos que coloquemos
#include <string>//Esto nos sirve para los caracteres
#include <cmath>//esto nos ayuda a colocar la raiz cuadrada de mas adelante
using namespace std;//estos nos evita utilizar esto (std::cout<<"") en cada mensaje

int main(){
    int a;//declaramos una variables enteras
    int b;
    int c;
    float x;//declaramos otras variables tipo flotante
    float discriminante;
    float x2;
    float x3;
    cout<<"Por favor ingrese el coeficiente de a\n";//mensaje con su variable
    cin>>a;
    cout<<"Por favor ingrese el coeficiente de b\n";
    cin>>b;
    cout<<"Por favor ingrese el coeficiente de c\n";
    cin>>c;
    if (a==0 && b==0){//condicion que si se cumple muestra un mensaje
        cout<<"Esta no es una ecuacion ni de primer ni segundo grado\n";

    }else if (a==0){//si esta se cunple resolvemos la ecuacion lineal encontrando "x"
        x=-c/b;
        cout<<"El valor de x es= "<<x<<"\n";
    }else if (a!=0){//si esta se cumple calculamos el discriminante
        discriminante=(b*b)-4*a*c;
        if (discriminante>0){//dependiendo del resultado de discriminante resolvemos las 2 raices, o 1 , o decimos que las raices son complejas
            x2=(-b+sqrt(discriminante))/2*a;//sqrt es la representacion de la raiz cuadrada
            x3=(-b-sqrt(discriminante))/2*a;
            cout<<"El valor de la raiz 1 es igual a "<<x2<<"\n";
            cout<<"El valor de la raiz 2 es igual a "<<x3<<"\n";

        }else if (discriminante==0){
            x2=-b/(2*a);
            cout<<"El valor de la raiz unica es igual a "<<x2<<"\n";


        }else{
            cout<<"Las raices son complejas\n";
        }
        
        
        
    }
        
    
    
    
    
}