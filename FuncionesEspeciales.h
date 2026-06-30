#ifndef FUNCIONESESPECIALES_H
#define FUNCIONESESPECIALES_H

#include <stdio.h>
#include <string.h>
#include "struct.h"

int menuFunciones()
{
    int op;

    printf("\n========== FUNCIONES ESPECIALES ==========\n");
    printf("1. Modificar Alumno\n");
    printf("2. Calificaciones\n");
    printf("3. Datos\n");
    printf("4. Semestre\n");
    printf("5. Carrera\n");
    printf("6. Regresar\n");
    printf("Opcion: ");
    scanf("%d",&op);

    return op;
}

void modificarAlumno(struct Persona *ptr)
{
    char matricula[10];

    printf("\nMatricula del alumno: ");
    scanf("%s",matricula);

    while(ptr != NULL)
    {
        if(strcmp(ptr->ptrAl->matricula,matricula)==0)
        {
            getchar();

            printf("Nuevo nombre: ");
            fgets(ptr->nombre,50,stdin);
            ptr->nombre[strcspn(ptr->nombre,"\n")] = '\0';

            printf("Edad: ");
            scanf("%d",&ptr->edad);

            printf("Genero (M/F): ");
            scanf(" %c",&ptr->genero);

            printf("Fecha de nacimiento: ");
            scanf("%s",ptr->fn);

            printf("Carrera: ");
            scanf("%s",ptr->ptrAl->carrera);

            printf("Semestre: ");
            scanf("%d",&ptr->ptrAl->semestre);

            printf("Correo: ");
            scanf("%s",ptr->ptrAl->correo);

            printf("\nAlumno modificado correctamente.\n");
            return;
        }

        ptr = ptr->sig;
    }

    printf("\nNo se encontro la matricula.\n");
}

void funcionesEspeciales(struct Persona *ptr)
{
    int op;

    do
    {
        op = menuFunciones();

        switch(op)
        {
            case 1:
                modificarAlumno(ptr);
                break;

            case 2:
                printf("\nFuncion de Calificaciones pendiente.\n");
                break;

            case 3:
                printf("\nFuncion de Datos pendiente.\n");
                break;

            case 4:
                printf("\nFuncion de Semestre pendiente.\n");
                break;

            case 5:
                printf("\nFuncion de Carrera pendiente.\n");
                break;

            case 6:
                printf("\nRegresando al menu principal...\n");
                break;

            default:
                printf("\nOpcion invalida.\n");
        }

    }while(op!=6);
}

#endif
