#include <iostream>
#include "include/factory.h"
using namespace std;


int main(){
    int ent;
    Factory aplicacion;
    do{
        cout << "Seleccione una opcion:" << endl;
        cout << "1- Iniciar una sesion" << endl;
        cout << "2- Registrarse" << endl;
        // cout << "3- Crear Grupo" << endl;
        // cout << "4- Crear Conversacion" << endl;
        // cout << "5- Enviar mensaje" << endl;
        // cout << "6- Eliminar mensaje" << endl;
        // cout << "7- Ver mensaje" << endl;
        // cout << "8- Mi configuración" << endl;
        // cout << "0- Salir" << endl;
        cin >> ent;
        switch (ent)
        {
        case 1:{
            string num;
            ISesion *sesion = aplicacion.getISesion();
            cout<<"Ingrese su numero:" << endl;
            cin>> num;
            if(sesion->ingresarNumero(num)){
                cout<<"Login existoso" << endl;
                int ent2;
                do{
                    cout << "1- Salir." << endl;
                    cout << "2- Enviar mensaje." << endl;
                    cout << "3- Eliminar mensaje." << endl;
                    cout << "4- Ver mensaje." << endl;//listo
                    cout << "5- Mi configuración." << endl;//listo
                    cout << "Ingrese la Opcion: " << endl;
                    cin >> ent2;
                    switch(ent2){
                    case 2:
                    
                        break;
                    case 3: {
                        IContMensajes *reg = aplicacion.getControladorMensajes();
                        map<int, DtConversacion*> convAct = reg->listarConversacionesAct();
                        map<int, DtConversacion*> convArch = reg->listarConversacionesArch();
                        if(reg->existeConvAct()){
                            for (auto itr = convAct.begin(); itr != convAct.end(); itr++){
                                cout << itr->second;
                            } 
                        }
                        cout << reg->cantConvArchivadas() << endl;
                        int eleccion;
                        cout <<"1. Seleccionar una conversación activa"<< endl; 
                        cout <<"2. Ver las conversaciones archivadas" << endl;
                        cin >> eleccion;
                        if(eleccion == 2){
                            for (auto itr = convArch.begin(); itr != convArch.end(); itr++){
                                cout << itr->second;
                            } 
                        }
                        cout << "Seleccione el id de conversacion: " << endl;
                        int idConv;
                        cin >> idConv;
                        map<int, DtMensaje*> mensConv = reg->listarMensajes(idConv);
                        for(auto itr = mensConv.begin(); itr != mensConv.end(); itr++){
                            cout << itr->second;
                        }
                        int idMens;
                        cout << "Seleccionar mensaje a eliminar: "<<endl;
                        cin >> idMens;
                        reg->eliminarMensaje(idConv,idMens);
                        break;}
                    case 4:{
                        IContMensajes *reg = aplicacion.getControladorMensajes();
                        map<int, DtConversacion*> convAct = reg->listarConversacionesAct();
                        map<int, DtConversacion*> convArch = reg->listarConversacionesArch();
                        if(reg->existeConvAct()){
                            for (auto itr = convAct.begin(); itr != convAct.end(); itr++){
                                cout << itr->second;
                            } 
                        }
                        cout << reg->cantConvArchivadas() << endl;
                        int eleccion;
                        cout <<"1. Seleccionar una conversación activa"<< endl; 
                        cout <<"2. Ver las conversaciones archivadas" << endl;
                        cin >> eleccion;
                        if(eleccion == 2){
                            for (auto itr = convArch.begin(); itr != convArch.end(); itr++){
                                cout << itr->second;
                            } 
                        }
                        cout << "Seleccione el id de conversacion: " << endl;
                        int idConv;
                        cin >> idConv;
                        map<int, DtMensaje*> mensConv = reg->listarMensajes(idConv);
                        for(auto itr = mensConv.begin(); itr != mensConv.end(); itr++){
                            cout << itr->second;
                        }
                        }break;
                    case 5:{
                        int eleccion;
                        ModUser *mod = aplicacion.getModUser();
                        cout << "1: Actualizar nombre. "<< endl;
                        cout << "2: Actualizar URL. "<< endl;
                        cout << "3: Actualizar Descripcion. "<< endl;
                        cin >> eleccion;
                        if(eleccion == 1){
                            cout << "Nuevo nombre: ";
                            string newNombre;
                            cin >> newNombre;
                            mod->actualizarNombre(newNombre);
                        }else if(eleccion == 2){
                            cout << "Nueva URL: ";
                            string newURL;
                            cin >> newURL;
                            mod->actualizarURL(newURL);
                        }else {
                            cout << "Nueva Descripcion: ";
                            string newDesc;
                            cin >> newDesc;
                            mod->actualizarDescripcion(newDesc);
                        }
                       } break;
                    case 1:{

                        }break;
                    default: cout<<"Opcion no valida"<<endl;
                    };
                }while(sesion->ingresarNumero(num));
            }else {
                cout << "Error, no existe sesion." << endl;
            }
            
            break;
        }
        case 2:{} 
        break;
        case 3:
        break;
        case 4:
        break;
        case 5:
        break;
        case 6:
        break;
        case 7:
        break;
        case 8:
        break;
        case 0:
        break;
        default: cout<<"Opción no valida"<<endl;
        }
    }while(ent!=0);

 
    return 0;
}