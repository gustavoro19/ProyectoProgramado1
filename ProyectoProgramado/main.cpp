// ProyectoProgramado.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Estudiante: Gustavo Rojas Porras
// Objetivo del programa: Crear un sistema para manejar la data del Censo
// Curso: Programacion 1, Universidad Nacional, Campus Nicoya. Prof. EVB.

#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
#include "List.h"
#include "Municipio.h"
#include "Pais.h"
#include "Nodo.h"


#define ARRIBA 72
#define ABAJO 80
#define ENTER 13

using namespace std;
void enter();
void menu_principal();
int menu(const char* titulo, const char* opciones[], int n);
void instrucciones();
void gotoxy(int x, int y);



int main()
{
    
    system("COLOR F0");
    system("mode con: cols=106 lines=15");
    menu_principal();
    system("cls");
    gotoxy(25, 7);
    cout<< "EL PROGRAMA SE CERRARA DESPUES DE APRETAR UNA TECLA...";
    system("pause>nul");
    return 0;
}
// crea el menu principal de la aplicion, asi como invocar las funciones que hacen cosas especificas de las clases.
void menu_principal()
{

    int opcion;
    bool repite = true;

    const char* titulo = "Censo 2001";
    const char* opciones[] = { "AGREGAR PERSONAS","MUNICIPIO","PAIS","SALIR" };

    int n = 4;

    do {
        opcion = menu(titulo, opciones, n);
        switch (opcion)
        {
        case 1:
            system("cls");
            //reservAppoint(Appo);
            enter();
            break;
        case 2:
            system("cls");
            //availability(Appo);
            enter();
            break;
        case 3:
            system("cls");
           // stateAppoint(Appo);
            enter();
            break;
        case 4:
            repite = false;
            break;

        }
    } while (repite);
}

//Creala plantilla para el menu
int menu(const char* titulo, const char* opciones[], int n)
{
    int opcionSeleccionada = 1;
    int tecla; // se guardara la tecla precionada por el ususario
    bool repite = true;

    do {
        system("cls");
        instrucciones();
        gotoxy(5, 3 + opcionSeleccionada); cout << "==>";

        //Imprime el titulo
        gotoxy(15, 2); cout << titulo;

        //Imprime las opciones

        for (int i = 0; i < n; i++) {
            gotoxy(10, 4 + i);
            cout << i + 1 << ") " << opciones[i] << endl;
        }

        do {
            tecla = _getch();
        } while (tecla != ARRIBA && tecla != ABAJO && tecla != ENTER);

        switch (tecla) {

        case ARRIBA:

            opcionSeleccionada--;

            if (opcionSeleccionada < 1) {
                opcionSeleccionada = n;
            }

            break;
        case ABAJO:

            opcionSeleccionada++;

            if (opcionSeleccionada > n)
            {
                opcionSeleccionada = 1;
            }

            break;
        case ENTER:

            repite = false;

            break;
        }

    } while (repite);

    return opcionSeleccionada;
}

//se utiliza como sustito del system("Pause") y poder imprimirlo en espaniol
void enter()
{
    int tecla;
    cout << "Presione 'Enter' para continuar...";
    do {
        tecla = _getch();
    } while (tecla != ENTER);
}


//son las instrucciones de como utilizar el programa
void instrucciones()
{
    gotoxy(50, 2);
    cout << "\tINSTRUCCIONES" << endl;
    gotoxy(50, 4);
    cout << "| 1.USE LAS TECLA ARRIBA PARA SUBIR EN EL MENU.";
    gotoxy(50, 5);
    cout << "| 2.USE LAS TECLA ABAJO PARA BAJAR EN EL MENU.";
    gotoxy(50, 6);
    cout << "| 3.USE LAS TECLA ENTER PARA SELECCIONAR.";
    gotoxy(50, 7);
    cout << "|";
    gotoxy(50, 8);
    cout << "| PROYECTO DE PROGRAMACION 1 POR:";
    gotoxy(50, 9);
    cout << "| GUSTAVO ROJAS PORRAS";
    gotoxy(50, 10);
    cout << "| TODOS LOS DERECHOS RESERVADOS";
    gotoxy(50, 11);
}

//Se te utiliza para especificar en que parte se quiere imprimir la informacion en la consola
void gotoxy(int x, int y) {
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}