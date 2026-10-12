//Santiago Vallejo Cruz 202661064-2724
#include <iostream>//Esto es para que entienda los datos que coloquemos
#include <string>//Esto nos sirve para los caracteres
using namespace std;//estos nos evita utilizar esto (std::cout<<"") en cada mensaje

int main(){
    int dia;//colocamos los datos enteros
    int mes;
    int año;
    int diasmes;

    cout<<"Por favor ingrese el dia\n";//le mostramos un mensaje y lo guarda en su respectiva variable
    cin>>dia;
    cout<<"Por favor ingrese el mes\n";
    cin>>mes;
    cout<<"Por favor ingrese el anio\n";
    cin>>año;
    if(año<=0){//la condicion por si llega a poner un año negativo
        cout<<"error el anio debe ser positivo\n";
    }else if(mes<1 ||mes>12){//si no se cumple la funcion anterior miramos si los meses no son menor que 1 y mayor que 12
        cout<<"error el mes no es valido\n";
    }else{//sino se cumplieron las 2 anteriores entonces vamos a ver que cuantos dias tiene el mes que ingreso el usuario
        if(mes==1||mes==3||mes==5||mes== 7||mes==8 || mes==10||mes ==12){//aca colocamos los meses que tienen 31 dias
            diasmes=31;
        }else if(mes== 4||mes==6||mes==9||mes==11){//aca los meses que tienen 30 dias
            diasmes =30;
        }else{
            if((año %4== 0 && año%100!=0  || año %400==0 )){//aca calculamos los años bisiestos 
                diasmes=29;//si la condicion se cumple entonces el febrero de ese año tiene 29 dias
            }else {//si no es bisiesto entonces tiene 28 dias
                diasmes=28;
            }
        }
        if(dia>=1 && dia<=diasmes){//si el dia que el usuario puso es mayor o igual a 1 y menor o igual que el ultimo dia de ese mes
            cout << "la fecha si es valida\n";
            cout << "el mes tiene " << diasmes << " dias\n";
        }else {//si llega a ser menor que 1 o mayor al ultimo dia del mes entonces no existe
            cout << "Esa fecha no existe\n";
        
        
        }
    
    
    }




}
