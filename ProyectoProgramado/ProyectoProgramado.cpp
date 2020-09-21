// ProyectoProgramado.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Estudiantes: Ricardo Morataya Sandoval, Gustavo Rojas,Sergio Piedra,Emily Rojas,Veronica Delgado
// Objetivo del programa: Crear un sistema de reserva de citas medicas
// Fecha de entrega: 23/04/2018
// Curso: Fundamentos de Informática, Universidad Nacional, Campus Nicoya. Prof. EVB.

#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

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
    //Collection Appo;
    system("COLOR F0");
    system("mode con: cols=106 lines=15");
    menu_principal();
    system("cls");
    gotoxy(25, 7);
    cout<< "EL PROGRAMA SE CERRARA DESPUES DE APRETAR UNA TECLA...";
    system("pause>nul");
    return 0;
}

void menu_principal()
{

    int opcion;
    bool repite = true;

    const char* titulo = "Censo 2001";
    const char* opciones[] = { "RESERVAR CITA","VERIFICAR DISPONIBILIDAD DE CITA","ESTADO DE CITAS","CANTIDAD DE CITAS RESERVADAS", "CANTIDAD DE CITAS DISPONIBLES", "CANCELAR CITA", "SALIR" };

    int n = 7;

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
            system("cls");
           // cantReserv(Appo);
            enter();
            break;
        case 5:
            system("cls");
            //cantAvailability(Appo);
            enter();
            break;
        case 6:
            system("cls");
           // deleteAppoint(Appo);
            enter();
            break;
        case 7:
            repite = false;
            break;

        }
    } while (repite);
}

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

void enter()
{
    int tecla;
    cout << "Presione 'Enter' para continuar...";
    do {
        tecla = _getch();
    } while (tecla != ENTER);
}



void instrucciones()
{
    gotoxy(50, 2);
    cout << "\tINSTRUCCIONES" << endl;
    gotoxy(50, 4);
    cout << "| 1.USE LAS TECLA ARRIBA PARA SUBIR EN EL MENU.";
    gotoxy(50, 5);
    cout << "| 2.USE LAS TECLA ABAJO PARA BAJAR EN EL MENU.";
    gotoxy(50, 6);
    cout << "| 3.USE LAS TECLA ENTER PARA SELECCIOAR.";
    gotoxy(50, 7);
    cout << "|";
    gotoxy(50, 8);
    cout << "| CREADORES:";
    gotoxy(50, 9);
    cout << "| 1.RICARDO MORATAYA";
    gotoxy(50, 10);
    cout << "| 2.GUSTAVO ROJAS";
    gotoxy(50, 11);
    cout << "| 3.SERGIO PIEDRA";
    gotoxy(50, 12);
    cout << "| 4.EMILY ROJAS";
    gotoxy(50, 13);
    cout << "| 5.VERONICA DELGADO";
}


void gotoxy(int x, int y) {
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}