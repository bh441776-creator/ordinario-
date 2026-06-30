#ifndef MENU_H
#define MENU_H
#include <stdio.h>

int menuPrincipal(void);
int menuPrincipal(void){
    int opcion;
    printf("_ _ _ _ MENU_  _ _ \n");
    printf("1, Altas \n");
    printf ("2,Bajas \n");
    printf ("3,Mostrar \n");
    printf ("4,FuncionesEspeciales \n");
    printf ("5,salir \n ");

 scanf("%d",&opcion);
 return opcion;
}
#endif
