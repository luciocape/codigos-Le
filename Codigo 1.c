#include <stdio.h>
#include <string.h>
//declaro las variables
int ver = 1;
int cant;
int d=0;
char temp[10];
int temp_num;
//declaro las funciones
void ordenar(int);
int addbook (void);
//declaro una structura para guardar los valores de los libros 
struct Libro{
        char nombre[10];
        char autor[10];
        int paginas;
        int ISBN;
        int precio;
    }Libro[500]; 
    
//Comienza el programa
int main(){
    do{
        cant=addbook();
        printf("Quiere ingresar otro libro (1) o salir (2)\n ");
        scanf("%d", &ver);
    }while(ver==1 && cant<=500);
    ordenar(cant);
    for(int s=0;s<cant; s++){
        printf("\n%s",&Libro[s].nombre);
        printf("\n%s",&Libro[s].autor);
        printf("\n%d$",&Libro[s].precio);
        printf("\n Tiene %d paginas",&Libro[s].paginas);
        printf("\n El ISBN es:%d",&Libro[s].ISBN);
    }
    return 0;
}
//hago una función la cual orena los libros
int addbook (void){

    printf ("ingrese el nombre del libro: ");
    scanf ("%s",&Libro[d].nombre);
    printf ("\ningrese su autor: ");
    scanf ("%s",&Libro[d].autor);
    printf ("\ningrese su precio: ");
    scanf ("%d",&Libro[d].precio);
    printf ("\ningrese sus paginas: ");
    scanf ("%d",&Libro[d].paginas);
    printf ("\ningrese su ISBN: ");
    scanf ("%d",&Libro[d].ISBN);
    
    d++;
    return d;
}

void ordenar(int amp){
    for( int i = 0; i < amp; i++ ){
        for(int j = 0; j < amp; j++ ){
            if ( j>i ){
                if( Libro[j].precio < Libro[i].precio ){
               
                    strcpy (temp, Libro[i].autor);
                    strcpy (Libro[i].autor, Libro[j].autor);
                    strcpy (Libro[j].autor, temp);

                    strcpy (temp, Libro[i].nombre);
                    strcpy (Libro[i].nombre, Libro[j].nombre);
                    strcpy (Libro[j].nombre, temp);

                    temp_num = Libro[i].paginas;
                    Libro[i].paginas = Libro[j].paginas;
                    Libro[j].paginas = temp_num;

                    temp_num = Libro[i].ISBN;
                    Libro[i].ISBN = Libro[j].ISBN;
                    Libro[j].ISBN = temp_num;

                    printf("hola")
                    temp_num = Libro[i].precio;
                    Libro[i].precio = Libro[j].precio;
                    Libro[j].precio = temp_num ;
                }
            }
        }
    }
}