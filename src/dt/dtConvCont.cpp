#include "dtConvCont.h"
#include <string>
using namespace std;

string  DtConvCont::getNom(){
    return this->nom;
};

string DtConvCont::getNum(){
    return this->num;
};

void DtConvCont::setNom(string a){
    this->nom = a;
};

void DtConvCont::setNum(string a){
    this->num = a;
};

DtConvCont::DtConvCont(int a, bool s, string d, string f):DtConversacion(int a, bool s){
    this->nom = d;
    this->num = f;
};