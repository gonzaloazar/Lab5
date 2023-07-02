#include "../include/dtMenText.h"
#include <string>
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

DtMenText::DtMenText(int a,string d):DtMensaje(a){
    this->text = d;
};