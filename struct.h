#ifndef STRUCT_H
#define STRUCT_H

struct Persona{
    char *nombre;
    int edad;
    char genero;
    char fn[9];
    struct Persona *sig;
    struct Alumno *ptrAl;
};

struct Alumno{
    char matricula[10];
    char carrera[6];
    int semestre;
    char correo[23];
    float calif[5][5];
};

 #endif 
