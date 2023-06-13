/*
 * Proyecto final TC1030.
 * Programación orientada a objetos.
 * Profesor: Benjamín Valdés Aguirre.
 * Nombre: Emanuel Josué Vega González.
 * ID: A01710366.
 * 
 * Archivo: funciones.h
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#include <iostream>
#include <string>
#include "DatosPaciente.h"
using namespace std;

/**
 * Funcion para validar que la opcion ingresada por el usuario
 * este dentro del rango de opciones
 * 
 * @param int: opcion a validar, int: min valor minimo permitido,
 *             int max valor maximo permitido
 * @return int: opcion validada
 */

int validarOpcion(int opcion, int min, int max){
     while(opcion < min || opcion > max)
     {
          cout << "Opcion invalida" << endl
               << "Ingresa el numero de la opcion que deseas realizar: "
               << endl;
          cin >> opcion;
     }
     return opcion;
}

/**
 * Funcion para imprimir las opciones que tiene el usuario
 * 
 * @param
 * @return
 */
void imprimirOpciones(){
     cout << "1: Ver el directorio de pacientes" << endl
          << "2: Agendarle una cita a un paciente" << endl
          << "3: Agregar paciente al directorio" << endl
          << "4: Proporcionarle menus a tus pacientes" << endl;
}

/**
 * Funcion para imprimir el mensaje de bienvenida
 * 
 * @param
 * @return
 */
void mensajeBienvenida(){
    cout << "Bienvenida Dra. al nutri programa" << endl
         << "En el que cuentas con un directorio de tus paciente" << endl
         << "El programa calculara el IMC y el REE de tus pacientes" << endl
         << "Tambien podras agendar citas y proporcionarles menus" << endl
         << "Ingresa el numero de la opcion que deseas realizar" << endl
         << endl;
}

/**
 * Funcion para las opciones de actividad fisica
 * 
 * @param
 * @return
 */
void mensajeActFisica(){
     cout << "Ingresa el tipo de actividad fisica del paciente"
          << endl
          << "1: Sedentaria" << endl
          << "2: Poco activa" << endl
          << "3: Activa" << endl
          << "4: Muy activa" << endl;
}

/**
 * Funcion para imrpimir el aviso de ingresar solo numeros
 * 
 * @param
 * @return
 */
void aviso(){
     cout << "IMPORTANTE: Solo ingresar numeros" << endl;
}

/**
 * Funcion para imprimir las opciones del sexo del paciente para
 * intanciar un hombre o una mujer
 * 
 * @param
 * @return
 */
void mensajeSexoPaciente(){
     cout << "Ingresa la opcion para el sexo del paciente" << endl
          << "1: Mujer" << endl
          << "2: Hombre" << endl;
}

/**
 * Funcion para imprimir las opciones al agregar un menu a un paciente
 * 
 * @param
 * @return
 */
void mensajeOpcionesMenu(){
     cout << "Desea agrear alguno de estos menus" << endl
          << "al paciente o desea crear un menu nuevo:" << endl
          << "1: Agregar un menu existente" << endl
          << "2: Crear un menu" << endl;
}

#endif