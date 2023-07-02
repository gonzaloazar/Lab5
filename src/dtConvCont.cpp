#include <iostream>
#include "../include/dtConvCont.h"
using namespace std;


void DtConvCont::setNom(string a){
    this->nom = a;
};

void DtConvCont::setNum(int a){
    this->num=a;
};

string  DtConvCont::getNom(){
    return this->nom;
};

int DtConvCont::getNum(){
    return this->num;
};

DtConvCont::DtConvCont(int a, bool s, string d, int f):DtConversacion(a, s){
    setNom(d);
    setNum(f);
};

string DtConvCont::getTipoConv(){
    return "contacto";
};

std::ostream& operator<<(std::ostream& os, DtConvCont &obj) {
    os << "Nombre: " << obj.getNom() << ' ' << obj.getNum() << endl;
  return os;
};
