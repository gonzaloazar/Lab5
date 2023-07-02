#include "../include/dtMenVideo.h"
#include <string>
using namespace std;

void DtMenVideo::setDuracion(float x){
    this->duracion = x;
};

float DtMenVideo::getDuracion(){
    return this->duracion;
};

string DtMenVideo::getTipoMensaje(){
    return "video";
};

DtMenVideo::DtMenVideo(int a,string s,float d):DtMenMultimedia(a,s){
    this->duracion = d;
};

DtMenVideo::~DtMenVideo(){
};