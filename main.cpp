#include <iostream>
#include "factory.h"
using namespace std;


int main(){
    int ent;
    do{
        cout << "Seleccione una opcion:" << endl;
        cout << "1- Iniciar una sesion" << endl;
        cout << "2- Registrarse" << endl;
        cout << "3- Crear Grupo" << endl;
        cout << "4- Crear Conversacion" << endl;
        cout << "5- Enviar mensaje" << endl;
        cout << "6- Eliminar mensaje" << endl;
        cout << "7- Ver mensaje" << endl;
        cout << "8- Mi configuración" << endl;
        cout << "0- Salir" << endl;
        cin >> ent;
        switch (ent)
        {
        case(1):

            break;
        
        default:
            break;
        }
    }while(ent!=0);

 
    return 0;
}