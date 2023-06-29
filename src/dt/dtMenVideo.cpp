#include "dtMenVideo.h"
#include <string>
using namespace std;

void DtMenVideo::setDuracion(float x){
    this->duracion = x;
}

float DtMenVideo::getDuracion(){
    return this->duracion;
}

DtMenVideo::DtMenVideo(int a,string s,float d):DtMenMultimedia(a,s){
    this->duracion = d;
};