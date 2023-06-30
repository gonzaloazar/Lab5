#include <iostream>
#include "dtConvCont.h"
using namespace std;


void DtConvCont::setNom(string a){
    this->nom = a;
};

void DtConvCont::setNum(string a){
    this->num=a;
};

string  DtConvCont::getNom(){
    return this->nom;
};

string DtConvCont::getNum(){
    return this->num;
};

DtConvCont::DtConvCont(int a, bool s, string d, string f):DtConversacion(a, s){
    setNom(d);
    setNum(f);
};

std::ostream& operator<<(std::ostream& os, DtConvCont& obj) {
    os << "Nombre: " << obj.getNom() + obj.getNum()<< endl;
  return os;
};
