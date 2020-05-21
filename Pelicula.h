#ifndef PELICULA_H
#define PELICULA_H
#include "Autor.h"

class Pelicula{
    private:
        char nombre[100];
        int year;
        Autor autor;
        char genero[100];
        char productora[100];
        char minutos[100];
    public:
        Pelicula();
        Pelicula(char[],int,Autor,char[],char[],char[]);
        void toStringA();
        void change();
        void toString();
        void showN();
};

#endif // PELICULA_H
