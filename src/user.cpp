#include "../include/user.h"


void User::setNum(string _num){
    this->num = _num;
}
void User::setNom(string nom){
    this->nom=nom;
}
void User::setDesc(string desc){
    this->desc= desc;
}
void User::setURL(string url){
    this->url = url;
}
void User::setUltConex(Fecha f){
    this->ultConex = f;
}
void User::setFechaReg(Fecha f){
    this->fechaReg= f;
}
string User::getNum(){
    return this->num;
}

string User::getNom(){
    return this->nom;
}
string User::getDesc(){
    return this->desc;
}
string User::getURL(){
    return this->url;
}
// string User::getFechaConex(){
//     cout<<getDia()+":"+getMes()<<":"<<getAnio()<<"/"<<getHora()<<":"<<getMinuto()<<":"<<getSegundo()<<endl; 
// }
// string User::getFechaReg(){
//     cout<<getDia()<<":"<<getMes()<<":"<<getAnio()<<"/"<<getHora()<<":"<<getMinuto()<<":"<<getSegundo()<<endl; 
// }

User::User(string num, string nom, string desc, string url, Fecha ult, Fecha reg){
    setNum(num);
    setNom(nom);
    setDesc(desc);
    setURL(url);
    setUltConex(ult);
    setFechaReg(reg);
}

User::~User(){
    
}