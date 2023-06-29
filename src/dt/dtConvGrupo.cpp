#include "dtConvGrupo.h"
#include <string>
using namespace std;

string DtConvGrupo::getNom(){
    return this->nom;
};

void DtConvCont::setNom(string a){
    this->nom = a;
};


DtConvCont::DtConvCont(int a, bool s, string d):DtConversacion(a,s){
    this->nom = d;
};