#include "../include/menMultimedia.h"
using namespace std;


void MenMultimedia::setURL(string newURL){
    this->url = newURL;
};

string MenMultimedia::getURL(){
    return this->url;
};

MenMultimedia::MenMultimedia(int cod,Fecha fecha, string miNum, string newURL) : Mensaje(cod,fecha, miNum){
    this->url = newURL;
};

MenMultimedia::~MenMultimedia(){
};