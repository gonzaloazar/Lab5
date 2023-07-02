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

DtMenCont::DtMenCont(int a,Fecha f,string num, string s, string d):DtMensaje(a,f,num){
    this->num = s;
    this->nom = d;
};

DtMenCont::~DtMenCont(){
};

string DtMenCont::getTipoMensaje(){
    return "contacto";
}
std::ostream& operator<<(std::ostream& os, DtMenCont& obj){
    os <<obj.getFecha().getFechaString() << " " << obj.getId() << " " << obj.getNom() << " " << obj.getNum()<<endl;
    return os;
};
