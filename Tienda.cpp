#include "Tienda.h"
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

using namespace std;
Tienda::Tienda()
{
	index = 0;
	indexE = 0;
	grafica = Grafica();
	fuente = FuenteDePoder();
	gabinete = Gabinete();
	placa = PlacaMadre();
	proce = Procesador();
	ram = Ram();
	almacenamiento = Memoria();
}

Tienda::Tienda(Ram ramV, Memoria memoriaV, PlacaMadre placaV, Procesador proceV, Gabinete gabineteV, FuenteDePoder fuenteV, Grafica graficaV,Pedido p)
{
	grafica = graficaV;
	fuente = fuenteV;
	gabinete = gabineteV;
	placa = placaV;
	proce = proceV;
	ram = ramV;
	almacenamiento = memoriaV;
    pedido = p;
	index = 0;
	indexE = 0;
}

void Tienda::MenuMain()
{
    while (true)
    {
        cout << "\n1.Ram\n2.Almacenamiento\n3.Tarjetas madre\n4.Procesadores\n5.Gabinetes\n6.Fuente de Poder\n7.Graficas\n8.Proceder al pago\n9.eliminar producto\n10.Salir" << endl;
        cout << "dame el index de lo que quieras comprar:";
        cin >> index;

        switch (index)
        {
        case 1:
            ram.menu();
            cout << "Guardaste en tu carro:" << ram.GetValues(); break;
        case 2:
            almacenamiento.menu();
            cout << "Guardaste en tu carro:" << almacenamiento.GetValues(); break;
        case 3:
            placa.menu();
            cout << "Guardaste en tu carro:" << placa.GetValues(); break;
        case 4:
            proce.menu();
            cout << "Guardaste en tu carro:" << proce.GetValues(); break;
        case 5:
            gabinete.menu();
            cout << "Guardaste en tu carro:" << gabinete.GetValues(); break;
        case 6:
            fuente.menu();
            cout << "Guardaste en tu carro:" << fuente.GetValues(); break;
        case 7:
            grafica.menu();
            cout << "Guardaste en tu carro:" << grafica.GetValues(); break;
        case 8:
            pedido = Pedido(ram, almacenamiento, placa, proce, gabinete, fuente, grafica);
            pedido.menu();
            cout << pedido.Pago(); break;
        case 9:
            cout << "Usando el index del menu, dime que producto quieres eliminar:";
            cin >> indexE;
            pedido.EliminarPedido(indexE); break;
        case 10:
            break;
        default:
            cout << "Index Incorrecto" << endl; break;
        }
        if (index == 10)
        {
            break;
        }
    }
    cout << "Gracias por usar nuestra pagina!!";
}