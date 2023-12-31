#include "../include/dtConvGrupo.h"
#include <string>
using namespace std;

void DtConvGrupo::setNom(string s){
    this->nom = s;
}
void DtConvGrupo::setUrl(string a){
    this->url = a;
};
void DtConvGrupo::setFecha(Fecha a){
    this->creacion = a;
};
string  DtConvGrupo::getNom(){
    return this->nom;
};
string  DtConvGrupo::getUrl(){
    return this->url;
};
Fecha DtConvGrupo::getFecha(){
    return this->creacion;
}
string DtConvGrupo::getTipoConv(){
    return "grupo";
};

DtConvGrupo::DtConvGrupo(int a, bool s, string d,string url, Fecha creacion):DtConversacion(a, s){
    setNom(d);
    setUrl(url);
    setFecha(creacion);
};

DtConvGrupo::~DtConvGrupo(){
};

DtConvGrupo::DtConvGrupo(){
};

std::ostream& operator<<(std::ostream& os, DtConvGrupo& obj){
    os <<  obj.getFecha().getFechaString() << " " << obj.getId() << " " << obj.getNom() << " " << obj.getUrl() << endl;
    return os;
};