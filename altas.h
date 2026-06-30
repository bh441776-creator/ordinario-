#ifndef ALTAS_H
#define ALTAS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"

void altas(struct Persona **ptr)
{
    struct Persona *nuevo;

    nuevo = (struct Persona *)malloc(sizeof(struct Persona));

    if(nuevo == NULL)
    {
        printf("No hay memoria disponible.\n");
        return;
    }

    nuevo->ptrAl = (struct Alumno *)malloc(sizeof(struct Alumno));

    if(nuevo->ptrAl == NULL)
    {
        printf("No hay memoria disponible.\n");
        free(nuevo);
        return;
    }

    nuevo->nombre = (char *)malloc(50*sizeof(char));

    printf("\n=========== ALTAS ===========\n");

    getchar();

    printf("Nombre: ");
    fgets(nuevo->nombre,50,stdin);

    nuevo->nombre[strcspn(nuevo->nombre,"\n")] = '\0';

    printf("Edad: ");
    scanf("%d",&nuevo->edad);

    printf("Genero (M/F): ");
    scanf(" %c",&nuevo->genero);

    printf("Fecha de nacimiento: ");
    scanf("%s",nuevo->fn);

    printf("Matricula: ");
    scanf("%s",nuevo->ptrAl->matricula);

    printf("Carrera: ");
    scanf("%s",nuevo->ptrAl->carrera);

    printf("Semestre: ");
    scanf("%d",&nuevo->ptrAl->semestre);

    printf("Correo: ");
    scanf("%s",nuevo->ptrAl->correo);


    printf("\n===== CAPTURA DE CALIFICACIONES =====\n");

for(int i=0; i<5; i++)
{
    printf("\nMateria %d\n", i+1);

    printf("Parcial 1: ");
    scanf("%f",&nuevo->ptrAl->calif[i][0]);

    printf("Parcial 2: ");
    scanf("%f",&nuevo->ptrAl->calif[i][1]);

    printf("Parcial 3: ");
    scanf("%f",&nuevo->ptrAl->calif[i][2]);

    printf("Ordinario: ");
    scanf("%f",&nuevo->ptrAl->calif[i][3]);

    nuevo->ptrAl->calif[i][4]=
    (nuevo->ptrAl->calif[i][0]+
     nuevo->ptrAl->calif[i][1]+
     nuevo->ptrAl->calif[i][2]+
     nuevo->ptrAl->calif[i][3])/4;
}

    nuevo->sig = NULL;

    if(*ptr == NULL)
    {
        *ptr = nuevo;
    }
    else
    {
        struct Persona *aux = *ptr;

        while(aux->sig != NULL)
        {
            aux = aux->sig;
        }

        aux->sig = nuevo;
    }

    printf("\nAlumno registrado correctamente.\n");
}

#endif
