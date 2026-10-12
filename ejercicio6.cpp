//Santiago Vallejo Cruz 202661064-2724
#include <iostream>//Esto es para que entienda los datos que coloquemos
#include <string>//Esto nos sirve para los caracteres
using namespace std;//estos nos evita utilizar esto (std::cout<<"") en cada mensaje

int main(){
    int n1;//declaramos las variables como datos enteros
    int n2;
    int n3;
    cout<<"Por favor ingrese un numero\n";//le ponemos un mensaje al usuario para que sepa que es lo que  tiene que ingresar
    cin>>n1;//lo guardamos en esta variable
    cout<<"Por favor ingrese otro numero\n";
    cin>>n2;
    cout<<"Por favor ingrese otro numero\n";
    cin>>n3;
    if (n1>=n2 && n1>=n3){//aca ponemos la condicion y pusimos "&&" que eso funciona como "y" y se tienen que ser las 2 verdaderas para que aparezca el mensaje. lo mismo con las otras 
        cout<<"El numero mayor es "<<n1<<"\n";//aca sabemos cual es el mayor
    }else if (n2>=n1 &&n2>=n3){
        cout<<"El numero mayor es "<<n2<<"\n";

    }else{
        cout<<"El numero mayor es "<<n3<<"\n";

    }
    if (n1<=n2 && n1<=n3){//aca sabemos cual es el menor
        cout<<"El numero menor es "<<n1<<"\n";

    }else if (n2<=n1 &&n2<=n3){
        cout<<"El numero menor es "<<n2<<"\n";

    }else{
        cout<<"El numero menor es "<<n3<<"\n";

    }
    if (n1==n2 &&n1==n3){//aca vamos a saber si los 3 son iguales o solamente 2 o ninguno
        cout<<"Los 3 numeros son iguales\n";
    }else if (n1==n2||n1==n3||n2==n3){//" ||" sirve como un"o"
        cout<<"Ahi 2 numeros iguales\n";
    }else{
        cout<<"Los 3 numeros son distintos\n";
    }
    
    
    
    
    
    
}