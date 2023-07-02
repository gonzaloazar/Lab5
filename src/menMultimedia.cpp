#include "../include/menMultimedia.h"
using namespace std;


void MenMultimedia::setURL(string newURL){
    this->url = newURL;
};

string MenMultimedia::getURL(){
    return this->url;
};

MenMultimedia::MenMultimedia(int cod, string miNum, string newURL) : Mensaje(cod, miNum){
    this->url = newURL;
};

