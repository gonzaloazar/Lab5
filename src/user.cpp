#include <string>
#include "user.h"
using namespace std;


void User::setNom(string n){
    this->nom = n;
};
void User::setNum(string n){
    this->num = n;
};
void User::setURL(string n){
    this->url = n;
};
void User::setDesc(string n){
    this->desc = n;
};

void User::actFechaReg(){
    this->fechaReg->actualizarFecha();
};
void User::actUltConex(){
    this->ultConex->actualizarFecha();
};

string User::getNom(){
    return this->nom;
};
string User::getNum(){
    return this->num;
};
string User::getURL(){
    return this->url;
};
string User::getDesc(){
    return this->desc;
};

Fecha User::getFechaConex(){
    //return this->ultConex;
};
Fecha User::getFechaReg(){
    //return this->fechaReg;
};

User::User(string a, string s, string d, string f){
    this->num = a;
    this->nom = s;
    this->desc = d;
    this->url = f;
    this->ultConex = new Fecha();
    this->fechaReg = new Fecha();
};

User::~User(){
    delete this->fechaReg;
    delete this->ultConex;
    this->conversaciones.clear();
};

Conversacion *User::getConv(int convID){
    if(this->conversaciones.find(convID) != this->conversaciones.end())
        return this->conversaciones[convID];
    else 
        return NULL;
};

map<int, DtConversacion*> User::getConversacionesAct(){
    map<int, DtConversacion*> convAct;
    for (auto itr = this->conversaciones.begin(); itr != this->conversaciones.end(); itr++){
        if(!itr->second->estaArchivado()){
            if(itr->second->getTipoConv == "contacto"){
                Conversacion *miMen = itr->second;
                ConvContacto *men = dynamic_cast<ConvContacto*>(miMen);
                DtConvCont *nuevo = new DtConvCont(men->getId(), men->estaArchivado(),men->getNombre(), men->getNumero());
                convAct[men->getId()] = nuevo;
            }else {
                Conversacion *miMen = itr->second;
                ConvGrupo *men = dynamic_cast<ConvGrupo*>(miMen);
                DtConvGrupo *nuevo = new DtConvGrupo(men->getId(), men->estaArchivado(),men->getNombre(),men->getURL(),men->getFecha());
                convAct[men->getId()] = nuevo;
            }
        }
    }
    return convAct;
};

bool User::existeConvActiva(){
    bool slir = false;
    for (auto itr = this->conversaciones.begin(); itr != this->conversaciones.end() || slir != false; itr++){
        if(!itr->second->estaArchivado()){
            slir = true;
        }
    };
    return slir;
};

int User::cantConvArch(){
    int slir = 0;
    for (auto itr = this->conversaciones.begin(); itr != this->conversaciones.end(); itr++){
        if(itr->second->estaArchivado()){
            slir++;
        }
    };
    return slir;
};

void User::actualizarDescripcion(string newDesc){
    this->setDesc(newDesc);
};

void User::actualizarNombre(string newNombre){
    this->setNom(newNombre);
};

void User::actualizarURL(string newURL){
    this->setURL(newURL);
};