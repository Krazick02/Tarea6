#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "Autor.h"
#include "Pelicula.h"
using namespace std;

int menu(){
    int o;
    cout<<"==========MENU PRINCIPAL==========\n";
    cout<<"1.Registrar\n2.Editar\n3.Eliminar\n4.Consultar director\n5.Informacion\n6.Salir\n==>";
    cin>>o;
    system("cls");
    return o;
}
int peli(Pelicula p[10],int pC){
    int o;
    for(int x=0;x<pC;x++){
        cout<<x;
        p[x].showN();
        cout<<endl;
    }
    cout<<"Seleccione el numero de la pelicula"<<endl;
    cin>>o;
    system("cls");
    return o;
}
Autor regAutor(){
    char nombre[100];
    char nacionalidad[100];
    cout<<"\n========REGISTRAR DIRECTOR========\n";
    cout<<"Ingrese el nombre :\n";
    cin>>nombre;
    cout<<"Ingrese la nacionalidad :\n";
    cin>>nacionalidad;

    return Autor(nombre,nacionalidad);
}

Pelicula registrar(){
    char nombre[100];
    int year;
    Autor autor;
    char genero[100];
    char productora[100];
    char minutos[100];
    cout<<"========REGISTRAR PELICULA========\n\n";
    cout<<"Ingrese el nombre :\n";
    cin>>nombre;
    cout<<"Ingrese el anio ;\n";
    cin>>year;
    cout<<"Ingrese el genero :\n";
    cin>>genero;
    cout<<"Ingrese la productora :\n";
    cin>>productora;
    cout<<"Ingrese la duracion en minutos :\n";
    cin>>minutos;
    autor=regAutor();

    return Pelicula(nombre,year,autor,genero,productora,minutos);
}
int main()
{
    bool vuelta=true;
    Pelicula p[10];

    int pC=0,no;

    while(vuelta==true){
        switch(menu()){
            case 1:
                p[pC]=registrar();
                cout<<"\nNumero de pelicula :"<<pC<<endl;
                cout<<endl;
                cout<<endl;
                pC++;
                break;
            case 2:
                no=peli(p,pC);
                p[no].toString();
                cout<<"===NUEVOS DATOS DE LA PELICULA====\n";
                p[no].change();
                cout<<endl;
                cout<<endl;
                break;
            case 3:
                no=peli(p,pC);
                p[no]=Pelicula();
                cout<<"Pelicula borrada "<<endl;
                cout<<endl;
                cout<<endl;
                break;
            case 4:
                p[peli(p,pC)].toStringA();
                cout<<endl;
                cout<<endl;
                break;
            case 5:
                p[peli(p,pC)].toString();
                cout<<endl;
                cout<<endl;
                break;
            case 6:
                vuelta=false;
                break;
        }
    }


    return 0;
}
