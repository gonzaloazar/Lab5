#include "dtConvCont.h"
#include <string>
using namespace std;

string  DtConvCont::getNom(){
    return this->nom;
};

void DtConvCont::setNom(string a){
    this->nom = a;
};


DtConvCont::DtConvCont(int a, bool s, string d):DtConversacion(int a, bool s){
    this->nom = d;
};