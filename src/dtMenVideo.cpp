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

DtMenVideo::DtMenVideo(int a,Fecha f,string s1,string s,float d):DtMenMultimedia(a,f,s1,s){
    this->duracion = d;
};

DtMenVideo::~DtMenVideo(){
};
std::ostream& operator<<(std::ostream& os, DtMenVideo& obj){
    os << obj.getFecha().getFechaString()<< " " << obj.getId() << " " << obj.getDuracion() << " " << obj.getURL() << endl;
    return os;
};