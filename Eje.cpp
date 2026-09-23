// Eje.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "Pedido.h"
#include <iostream>
#include "FuenteDePoder.h"
#include "Gabinete.h"
#include "PlacaMadre.h"
#include "Procesador.h"
#include "Ram.h"
#include "Grafica.h"
#include "Memoria.h"
#include <string>
#include "Tienda.h"

using namespace std;
int main()
{
    Ram ram;
    Memoria almacenamiento;
    PlacaMadre placa;
    Procesador proce;
    Gabinete gabinete;
    FuenteDePoder fuente;
    Grafica grafica;
    Pedido pedido;
    Tienda tienda;
    
    tienda=Tienda(ram, almacenamiento, placa, proce, gabinete, fuente, grafica,pedido);
    tienda.MenuMain();

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
