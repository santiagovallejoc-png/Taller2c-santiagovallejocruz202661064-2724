//Santiago Vallejo Cruz 202661064-2724
#include <iostream>//Esto es para que entienda los datos que coloquemos
#include <string>//Esto nos sirve para los caracteres
#include <iomanip>//Nos sirve para poder manipular los datos de entrada y salida de las variables
using namespace std;//estos nos evita utilizar esto (std::cout<<"") en cada mensaje
int main() {
    float valorhora;//aca declaramos todas las variables como datos flotantes
    float canhorastrabajadas;
    float horanormal;
    float horaextra;
    float horasdobles;
    float salariobruto;
    float descuento;
    float salarioneto;
    cout << "Por favor ingrese el valor de su hora de trabajo\n";//los mensajes con sus respectivas variables
    cin >> valorhora;
    cout << "Por favor ingrese cuantas horas trabajo\n";
    cin >> canhorastrabajadas;
    if (valorhora <= 0 || canhorastrabajadas < 0) {//condicion que muestra un error
        cout << "Por favor vuelva a ingresar valores positivos\n";
    } else {//sino se cumple entonces muestra las otras condiciones ya calculando las horanormal,horaextra,horadobles
        if(canhorastrabajadas <= 40){
            horanormal=canhorastrabajadas;
            horaextra=0;
            horasdobles=0;
        } else if(canhorastrabajadas<= 48){
            horanormal=40;
            horaextra=canhorastrabajadas-40;
            horasdobles=0;
        } else{
            horanormal=40;
            horaextra=8;
            horasdobles=canhorastrabajadas-48;
        }
        salariobruto=(horanormal*valorhora)+(horaextra*valorhora*1.5)+(horasdobles*valorhora*2);//calculamos el salariobruto
        cout<<fixed<<setprecision(2);//con esto miramos cuantas decimales van a tener

        if(salariobruto> 2000000){//dependiendo de cuanto le de el salario bruto se calcula el descuento
            descuento=salariobruto*0.08;
        }else{
            descuento=salariobruto*0.04;
        }
        salarioneto=salariobruto- descuento;//calculamos el salarioneto con el salariobruto restandolde el descuento
        cout<<fixed<<setprecision(2);//con esto miramos cuantas decimales van a tener       
        cout<<"Horas normales trabajadas= "<<horanormal<<"\n";//mostramos los resultados de cada variable
        cout<<"Horas extras trabajadas= " <<horaextra<<"\n";
        cout<<"Horas dobles trabajadas= " <<horasdobles<<"\n";
        cout<<"Su salario bruto es= " <<salariobruto<<"\n";
        cout<<"El valor de su descuentoes = " <<descuento<<"\n";
        cout<<"Su salario neto es= " <<salarioneto<<"\n";
    }
}
