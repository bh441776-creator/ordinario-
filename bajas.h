#ifndef BAJAS_H
#define BAJAS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"

void bajas(struct Persona **ptr)
{
    struct Persona *actual, *anterior;
    char matricula[10];

    if(*ptr == NULL)
    {
        printf("\nNo hay alumnos registrados.\n");
        return;
    }

    printf("\nMatricula del alumno a eliminar: ");
    scanf("%s",matricula);

    actual = *ptr;
    anterior = NULL;

    while(actual != NULL)
    {
        if(strcmp(actual->ptrAl->matricula,matricula)==0)
        {
            if(anterior == NULL)
            {
                *ptr = actual->sig;
            }
            else
            {
                anterior->sig = actual->sig;
            }

            free(actual->nombre);
            free(actual->ptrAl);
            free(actual);

            printf("\nAlumno eliminado correctamente.\n");
            return;
        }

        anterior = actual;
        actual = actual->sig;
    }

    printf("\nNo se encontro la matricula.\n");
}

#endif
