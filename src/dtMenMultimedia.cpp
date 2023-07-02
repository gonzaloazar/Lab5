#include "../include/dtMenMultimedia.h"
#include <string>
using namespace std;

void DtMenMultimedia::setURL(string x){
    this->url = x;
};

string DtMenMultimedia::getURL(){
    return this->url;
};

DtMenMultimedia::DtMenMultimedia(int x,Fecha f,string s1,string s):DtMensaje(x,f,s1){
    this->url = s;
};

DtMenMultimedia::~DtMenMultimedia(){
};
