#include "struct.h"
#include <stdio.h>
#include "menu.h"
#include "altas.h"
#include "bajas.h"
#include "mostrar.h"



 int main (){
    int opcion;
    struct Persona *ptr=NULL;
    do{
        opcion=menuPrincipal();

        switch (opcion){
            case 1:
            altas(&ptr);
            break;
            case 2:
             bajas(&ptr);
            break;

            case 3:
            mostrar(ptr);
            break;

            
        }
    }while(opcion!=5);

return 0;
}
