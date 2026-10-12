//Santiago Vallejo Cruz 202661064-2724
#include <iostream>//Esto es para que entienda los datos que coloquemos
#include <string>//Esto nos sirve para los caracteres
using namespace std;//estos nos evita utilizar esto (std::cout<<"") en cada mensaje

int main(){
    float lado1;//variables tipo flotantes
    float lado2;
    float lado3;
    float perimetro;
    cout<<"Por favor ingrese un lado del triangulo\n";//mensaje y el dato que se guarde se guarda en su respectiva variable
    cin>>lado1;
    cout<<"Por favor ingrese otro lado del triangulo\n";
    cin>>lado2;
    cout<<"Por favor ingrese otro lado del triangulo\n";
    cin>>lado3;
    if (lado1<=0 || lado2<=0 || lado3<=0){//condicion que si se cumple muestra un mensaje de error
        cout<<"Por ingrese angulos mayores a 0\n";
            
    }
    else if (lado1+lado2<=lado3||lado1+lado3<=lado2||lado2+lado3<=lado1){//condicion para saber si si se forma un triangulo
        cout<<"Los lados no forman un triangulo\n";
                    
    }else{//si no se cumple ninguna de las 2 ya podremos saber que tipo de triangulo es, y tambien calculamos su perimetro
        perimetro=lado1+lado2+lado3;
        cout<<"El perimetro del triangulo es igual a "<< perimetro<<"\n";
        if (lado1==lado2 && lado1==lado3){
            cout<<"Es un triangulo equilatero\n";
        }else if (lado1==lado2||lado1==lado3||lado2==lado3){
            cout<<"Es un triangulo isosceles\n";
        }else{
            cout<<"Es un triangulo escaleno\n ";
        }
        
        
    
    }
    
    }