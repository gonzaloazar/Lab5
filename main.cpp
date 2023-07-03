#include <iostream>
#include "include/factory.h"
using namespace std;


int main(){
    Factory aplicacion;
    cout << "Cada que se registre un User, ese User va a tener los siguientes contactos agregados:" << endl;
    cout << "Nombre: Pedro  Numero: 123456  URL: www.google.com         Descripcion: hola" << endl;
    cout << "Nombre: Juan   Numero: 654321  URL: www.facebook.com       Descripcion: adios" << endl;
    cout << "Nombre: Carla  Numero: 123654  URL: www.mercadolibre.com   Descripcion: gracias" << endl;

    int ent;
    do{
        cout << "Seleccione una opcion:" << endl<< "1- Iniciar una sesion." << endl<< "2- Registrarse." << endl << "0- Salir." << endl;
        cin >> ent;
        switch (ent) {
            case 1:{
                string num;
                ISesion *sesion = aplicacion.getISesion();
                cout<<"Ingrese su numero:" << endl;
                cin>> num;
                bool entroSesion = sesion->ingresarNumero(num);
                if(entroSesion){
                    int ent2;
                    bool salir = false;
                    do{
                        cout << "1- Salir." << endl;
                        cout << "2- Enviar mensaje." << endl;
                        cout << "3- Eliminar mensaje." << endl;
                        cout << "4- Ver mensaje." << endl;//listo
                        cout << "5- Mi configuración." << endl;//listo
                        cout << "Ingrese la Opcion: " << endl;
                        cin >> ent2;
                        switch(ent2){
                        case 2: {
                            IContMensajes *reg = aplicacion.getControladorMensajes();
                            map<int, DtConversacion*> convAct = reg->listarConversacionesAct();
                            map<int, DtConversacion*> convArch = reg->listarConversacionesArch();
                            if(convAct.size() > 0){
                                for (auto itr = convAct.begin(); itr != convAct.end(); itr++){
                                    if(itr->second->getTipoConv() == "contacto"){
                                        DtConvCont *p = dynamic_cast<DtConvCont*>(itr->second);
                                        cout << p->getId() << ' ' << p->getNom() << ' ' << p->getNum();
                                    }else {
                                        DtConvGrupo *p = dynamic_cast<DtConvGrupo*>(itr->second);
                                        cout << p->getId() << ' ' << p->getNom() << ' ' << p->getUrl() << endl;
                                    }
                                } 
                            }else {
                                cout << "No hay conversaciones activas.";
                            }
                            cout << reg->cantConvArchivadas() << endl;
                            int eleccion;
                            cout <<"1. Seleccionar una conversacion activa"<< endl;
                            cout <<"2. Ver las conversaciones archivadas" << endl;
                            cout <<"3. Enviar un mensaje a un contacto con el cual aun no ha iniciado una conversacion"<<endl;
                            cin >> eleccion;
                            Fecha bas;
                            bas.actualizarFecha();
                            int idConv;
                            if(eleccion == 3){
                                map<string, Contacto*> misCont = reg->listarContactosSesion();
                                for (auto itr = misCont.begin(); itr != misCont.end(); itr++){
                                    string numCont = itr->second->getNumero();
                                    string nomCont = itr->second->getNombre();
                                    cout << numCont << ' ' << nomCont << endl;
                                }
                                cout << "Escriba numero de contacto: "<< endl;
                                string num;
                                cin >> num;
                                idConv = reg->crearConversacion(num);
                            }else if(eleccion == 2){
                                if(convArch.size() > 0){
                                    for (auto itr = convArch.begin(); itr != convArch.end(); itr++){
                                        if(itr->second->getTipoConv() == "contacto"){
                                            DtConvCont *p = dynamic_cast<DtConvCont*>(itr->second);
                                            cout << p->getId() << ' ' << p->getNom() << ' ' << p->getNum();
                                        }else {
                                            DtConvGrupo *p = dynamic_cast<DtConvGrupo*>(itr->second);
                                            cout << p->getId() << ' ' << p->getNom() << ' ' << p->getUrl() << endl;
                                        }
                                    } 
                                    cout << "Seleccione el id de conversacion: " << endl;
                                }else {
                                    cout << "No hay conversaciones archivadas" << endl;
                                    break;
                                } 
                            } else {
                                cout << "Seleccione el id de conversacion: " << endl;
                                cin >> idConv;
                            }
                            cout << "Tipo mensaje: "<< endl;
                            cout << "1: Texto" << endl;
                            cout << "2: Contacto" << endl;
                            cout << "3: Foto" << endl;
                            cout << "4: Video" << endl;
                            int opc;
                            cin >> opc;
                            
                            if(opc == 1) {
                                cout << "Escriba el texto: " << endl;
                                string text;
                                cin >> text;
                                DtMenText * n = new DtMenText(1,bas,"elNumSaleEnIContMen", text); // int,Fecha,string,string
                                reg->enviarMensaje(idConv,n);
                            }else if(opc == 2){
                                cout << "Escriba el nombre: " << endl;
                                string nom,num;
                                cin >> nom;
                                cout << "Escriba el numero: " << endl;
                                cin >> num;
                                DtMenCont * n = new DtMenCont(1,bas,"elNumSaleEnIContMen",num,nom);// int,Fecha,string,string,string
                                reg->enviarMensaje(idConv,n);
                            }else if(opc == 3){
                                cout << "Escriba el formato: " << endl;
                                string form,text,url;
                                float tam;
                                cin >> form;
                                cout << "Escriba el tamanio: " << endl;
                                cin >> tam;
                                cout << "Escriba texto opcional: " << endl;
                                cin >> text;
                                cout << "Escriba el URL: " << endl;
                                cin >> url;
                                DtMenFoto * n = new DtMenFoto(1,bas,"elNumSaleEnIContMen",url,form,tam,text);// int,Fecha,string,string,string
                                reg->enviarMensaje(idConv,n);
                            }else {
                                string url; float dur;
                                cout << "Escriba el URL: " << endl;
                                cin >> url;
                                cout << "Escriba la duracion: " << endl;
                                cin >> dur;
                                DtMenVideo * n = new DtMenVideo(1,bas,"elNumSaleEnIContMen",url,dur);
                                reg->enviarMensaje(idConv,n);
                            }
                            break;}
                        case 3: {
                            IContMensajes *reg = aplicacion.getControladorMensajes();
                            map<int, DtConversacion*> convAct = reg->listarConversacionesAct();
                            map<int, DtConversacion*> convArch = reg->listarConversacionesArch();
                            if(convAct.size() > 0){
                                for (auto itr = convAct.begin(); itr != convAct.end(); itr++){
                                    if(itr->second->getTipoConv() == "contacto"){
                                        DtConvCont *p = dynamic_cast<DtConvCont*>(itr->second);
                                        cout << p->getId() << ' ' << p->getNom() << ' ' << p->getNum();
                                    }else {
                                        DtConvGrupo *p = dynamic_cast<DtConvGrupo*>(itr->second);
                                        cout << p->getId() << ' ' << p->getNom() << ' ' << p->getUrl() << endl;
                                    }
                                } 
                            }else {
                                cout << "No hay conversaciones activas.";
                            }
                            cout << reg->cantConvArchivadas() << endl;
                            int eleccion;
                            cout <<"1. Seleccionar una conversación activa"<< endl; 
                            cout <<"2. Ver las conversaciones archivadas" << endl;
                            cin >> eleccion;
                            if(eleccion == 2){
                                if(convArch.size() > 0){
                                    for (auto itr = convArch.begin(); itr != convArch.end(); itr++){
                                        if(itr->second->getTipoConv() == "contacto"){
                                            DtConvCont *p = dynamic_cast<DtConvCont*>(itr->second);
                                            cout << p->getId() << ' ' << p->getNom() << ' ' << p->getNum();
                                        }else {
                                            DtConvGrupo *p = dynamic_cast<DtConvGrupo*>(itr->second);
                                            cout << p->getId() << ' ' << p->getNom() << ' ' << p->getUrl() << endl;
                                        }
                                    } 
                                }else {
                                    cout << "No hay conversaciones archivadas" << endl;
                                }
                            }
                            cout << "Seleccione el id de conversacion: " << endl;
                            int idConv;
                            cin >> idConv;
                            map<int, DtMensaje*> mensConv = reg->listarMensajes(idConv);
                            for(auto itr = mensConv.begin(); itr != mensConv.end(); itr++){
                                DtMensaje *p = itr->second; 
                                if(p->getTipoMensaje()=="foto"){
                                    DtMenFoto *n = dynamic_cast<DtMenFoto*>(p);
                                    cout << n->getId() << ' ' << n->getURL() << ' ' << n->getFormato() << ' ' << n->getTamanio() << ' ' << n->getTextOpc() << endl;
                                }else if(p->getTipoMensaje()=="video"){
                                    DtMenVideo *n = dynamic_cast<DtMenVideo*>(p);
                                    cout << n->getFecha().getFechaString() << " " << n->getId() << " " << n->getDuracion() << " "<< n->getURL() <<endl;
                                }else if(p->getTipoMensaje()=="contacto"){
                                    DtMenCont *n = dynamic_cast<DtMenCont*>(p);
                                    cout << n->getFecha().getFechaString() << " " << n->getId() << " " << n->getNom() << " "<< n->getNum() <<endl;
                                }else if(p->getTipoMensaje()=="texto"){
                                    DtMenText *n = dynamic_cast<DtMenText*>(p);
                                    cout << n->getFecha().getFechaString() << " " << n->getId() <<" " << n->getText() <<endl;
                                }
                            }
                            int idMens;
                            cout << "Seleccionar mensaje a eliminar: "<<endl;
                            cin >> idMens;
                            reg->eliminarMensaje(idConv,idMens);
                            break;
                            }
                        case 4:{
                            IContMensajes *reg = aplicacion.getControladorMensajes();
                            map<int, DtConversacion*> convAct = reg->listarConversacionesAct();
                            map<int, DtConversacion*> convArch = reg->listarConversacionesArch();
                            if(convAct.size() > 0){
                                for (auto itr = convAct.begin(); itr != convAct.end(); itr++){
                                    if(itr->second->getTipoConv() == "contacto"){
                                        DtConvCont *p = dynamic_cast<DtConvCont*>(itr->second);
                                        cout << p->getId() << ' ' << p->getNom() << ' ' << p->getNum();
                                    }else {
                                        DtConvGrupo *p = dynamic_cast<DtConvGrupo*>(itr->second);
                                        cout << p->getId() << ' ' << p->getNom() << ' ' << p->getUrl() << endl;
                                    }
                                } 
                            }else {
                                cout << "No hay conversaciones activas.";
                            }
                            cout << reg->cantConvArchivadas() << endl;
                            cout<<"entro"<<endl;
                            int eleccion;
                            cout <<"1. Seleccionar una conversación activa"<< endl; 
                            cout <<"2. Ver las conversaciones archivadas" << endl;
                            cin >> eleccion;
                            if(eleccion == 2){
                                for (auto itr = convArch.begin(); itr != convArch.end(); itr++){
                                    if(itr->second->getTipoConv() == "contacto"){
                                        DtConvCont *p = dynamic_cast<DtConvCont*>(itr->second);
                                        cout << p->getId() << ' ' << p->getNom() << ' ' << p->getNum();
                                    }else {
                                        DtConvGrupo *p = dynamic_cast<DtConvGrupo*>(itr->second);
                                        cout << p->getId() << ' ' << p->getNom() << ' ' << p->getUrl() << endl;
                                    }
                                } 
                            }
                            cout << "Seleccione el id de conversacion: " << endl;
                            int idConv;
                            cin >> idConv;
                            map<int, DtMensaje*> mensConv = reg->listarMensajes(idConv);
                            for(auto itr = mensConv.begin(); itr != mensConv.end(); itr++){
                                DtMensaje *p = itr->second; 
                                if(p->getTipoMensaje()=="foto"){
                                    DtMenFoto *n = dynamic_cast<DtMenFoto*>(p);
                                    cout << n->getId() << ' ' << n->getURL() << ' ' << n->getFormato() << ' ' << n->getTamanio() << ' ' << n->getTextOpc() << endl;
                                }else if(p->getTipoMensaje()=="video"){
                                    DtMenVideo *n = dynamic_cast<DtMenVideo*>(p);
                                    cout << n->getFecha().getFechaString() << " " << n->getId() << " " << n->getDuracion() << " "<< n->getURL() <<endl;
                                }else if(p->getTipoMensaje()=="contacto"){
                                    DtMenCont *n = dynamic_cast<DtMenCont*>(p);
                                    cout << n->getFecha().getFechaString() << " " << n->getId() << " " << n->getNom() << " "<< n->getNum() <<endl;
                                }else if(p->getTipoMensaje()=="texto"){
                                    DtMenText *n = dynamic_cast<DtMenText*>(p);
                                    cout << n->getFecha().getFechaString() << " " << n->getId() <<" " << n->getText() <<endl;
                                }
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
                         break;}
                        case 1:
                            salir = true;
                        break;
                        default: cout<<"Opcion no valida"<<endl;
                        };
                    }while(!salir);
                }else {
                    cout << "Error, no existe sesion." << endl;
                }
                
                break;}
            
            case 2:{
                string num,nombre,url,descp;
                ISesion *sesion = aplicacion.getISesion();
                cout<<"Ingrese su Numero:" << endl;
                cin>> num;
                cout<<"Ingrese su Nombre:" << endl;
                cin>> nombre;
                cout<<"Ingrese su URL:" << endl;
                cin>> url;
                cout<<"Ingrese su Descripcion:" << endl;
                cin>> descp;
                sesion->registrarUser(num,nombre,descp,url);
            
            break;}
        default: cout<<"Opción no valida"<<endl;
        }
    }while(ent!=0);
    cout<<"Cerrando App"<<endl;
 
 
    return 0;
}