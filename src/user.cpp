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
/* Depende de lo que pidan los contratos
Fecha User::getFechaConex(){
    return this->ultConex;
};
Fecha User::getFechaReg(){
    return this->fechaReg;
};
*/
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
