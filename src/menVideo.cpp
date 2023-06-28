#include "../include/menVideo.h"

void MenVideo::setDuracion(float _duracion){
    duracion=_duracion;
}

float MenVideo::getDuracion(){
    return this->duracion;
}

MenVideo::MenVideo(string _codigo,Fecha _fecha,string _url,float _duracion):MenMultimedia(_codigo,_fecha,_url){
    duracion=_duracion;
}     
       
Menvideo::~MenVideo(){

}