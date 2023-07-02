#include "../include/menVideo.h"

void MenVideo::setDuracion(float _duracion){
    this->duracion=_duracion;
};

float MenVideo::getDuracion(){
    return this->duracion;
};

string MenVideo::getTipoMensaje(){
    return "video";
};

MenVideo::MenVideo(int _codigo,string miNum,string _url,float _duracion):MenMultimedia(_codigo,miNum,_url){
    this->duracion=_duracion;
};     