#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int adbook(void);
struct libros{
    char nombre[10];
    int precio;
    
    struct libros *next;
}Libros1;

typedef struct libros sLibro; 
sLibro *p_Principal = &Libros1;
sLibro *p_aux = &Libros1;
sLibro *p_End = NULL;

int main(){ 
    /*struct libros *p =&libro1;
    libro1.next =&libro2;
    libro2.next =&libro3;
    libro3.next =NULL;*/
    int cant = adbook();
    p_aux = p_Principal;
    
    for(int i= 0; i<=cant; i++){
      printf("el nombre es:%s\n",p_aux->nombre);
      printf("el precio es:%d\n",p_aux->precio);
      p_aux = p_aux->next;   
    }
return 0;
}

int adbook(void){
    int d = 1, ver=0;
    
    p_aux = malloc(sizeof(sLibro));
    p_Principal->next = p_aux;
    p_End = p_aux;
    p_End->next = p_Principal;
    
    
    printf("Añada un libro:\n");
    printf("¿Como se llama?\n");
    scanf("%s",&p_aux->nombre);
    printf("¿Cuanto vale?\n");
    scanf("%d",&p_aux->precio);
    
    printf("Agregar otro libro(1) o no(2)\n");
    scanf("%d",&ver);
    
    if(ver==1){
      do{
        p_aux = malloc(sizeof(sLibro));
        p_End->next = p_aux;
        p_End = p_aux;
        p_End->next = p_Principal;
        
        printf("¿Como se llama?")
        scanf("%s",p_aux->nombre);
        printf("¿Cuanto cuesta?")
        scanf("%d",p_aux->precio);
        
        printf("Agregar otro libro(1) o no(2)\n");
        scanf("%d",&ver);
        d++;
    }while(ver=1);  
    }
    return d;
}
