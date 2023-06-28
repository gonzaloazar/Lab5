#include "../include/conversacion.h"

Conversacion::Conversacion(int _id,bool _arch){
    setID(_id);
    setArchivado(_arch);
}

int Conversacion::getId(){
    return this->id;
}

bool Conversacion::estaArchivado(){
    return this->archivado;
}

void Conversacion::setID(int _id){
    id=_id;
}

void Conversacion::setArchivado(bool arch){
   archivado=arch;
}

Conversacion::~Conversacion(){
    
}