#include "dtMenMultimedia.h"
#include <string>
using namespace std;

void DtMenMultimedia::setURL(string x){
    this->url = x;
};

string DtMenMultimedia::getURL(){
    return this->url;
};

DtMenMultimedia::DtMenMultimedia(int x, string s):DtMensaje(int x){
    this->url = s;
};