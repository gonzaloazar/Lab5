#include "../include/dtMenCont.h"
#include <string>
using namespace std;

void DtMenCont::setNom(string s){
    this->nom = s;
};

void DtMenCont::setNum(string s){
    this->num = s;
};

string DtMenCont::getNom(){
    return this->nom;
};

string DtMenCont::getNum(){
    return this->num;
};

DtMenCont::DtMenCont(int a, string s, string d):DtMensaje(a){
    this->num = s;
    this->nom = d;
};

DtMenCont::~DtMenCont(){
};

string DtMenCont::getTipoMensaje(){
    return "contacto";
}