#include "../include/dtMenText.h"
#include <iostream>
using namespace std;

void DtMenText::setText(string a){
    this->text = a;
};

string DtMenText::getText(){
    return this->text;
};

string DtMenText::getTipoMensaje(){
    return "texto";
};

DtMenText::DtMenText(int a,Fecha f,string s,string d):DtMensaje(a,f,s){
    this->text = d;
};

DtMenText::~DtMenText(){
};

std::ostream& operator<<(std::ostream& os, DtMenText& obj) {
    os << obj.getFecha().getFechaString() << " "<< obj.getId() << " " << obj.getText() <<endl;
  return os;
};
