#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

void crear();
void addbook();
void lectura();

struct libros{
    char nombre[10];
    int precio;
}libros;

int main()
{
    addbook();
    crear();
    lectura();
    
    return 0;
}

void addbook(){
        cout<<"¿Como se llama el libro?"<<endl;
        cin>>libros.nombre;
        cout<<"¿Cuanto vale?"<<endl;
        cin>>libros.precio;
}

void crear(){
    ofstream archivo;
    
    archivo.open("archivo1.txt",ios::out);//Abriendo el archivo
    
    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    
    archivo<<"Inicio del archivo"<<endl;
    archivo<<libros.nombre <<libros.precio;
    
    archivo.close();//Cerrar el archivo
}

void lectura(){
    ifstream archivo;
    string texto;
    
    archivo.open("archivo1.txt",ios::in);//abrimos archivo en modo lectura
    
    if(archivo.fail()){
        cout<<"no se pudo abrir el archivo"<<endl;
        exit(1);
    }
    while(!archivo.eof()){ //mientras no sea el final del archivo
        getline(archivo,texto);
        cout<<texto<<endl;
    }
    
    archivo.close(); //cerramos el programa
}