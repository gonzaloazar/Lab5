#include "dtConvGrupo.h"
#include <string>
using namespace std;

string DtConvGrupo::getNom(){
    return this->nom;
};

void DtConvGrupo::setNom(string a){
    this->nom = a;
};

DtConvGrupo::DtConvGrupo(int a, bool s, string d,string _num,fecha _f):DtConversacion(a,s){
    this->nom = d;

};