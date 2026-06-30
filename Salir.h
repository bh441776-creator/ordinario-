#ifndef SALIR_H
#define SALIR_H

#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

void salir(struct Persona **ptr)
{
    struct Persona *aux;

    while(*ptr != NULL)
    {
        aux = *ptr;
        *ptr = (*ptr)->sig;

        free(aux->nombre);
        free(aux->ptrAl);
        free(aux);
    }

    printf("\nMemoria liberada correctamente.\n");
}

#endif
