#include "dtMenText.h"
#include <string>
using namespace std;

void DtMenText::setText(string a){
    this->text = a;
};

string DtMenText::getText(){
    return this->text;
};

DtMenText::DtMenText(int a, string d):DtMensaje(int a){
    this->text = d;
};