#ifndef DTMENVIDEO_H
#define DTMENVIDEO_H
#include "dtMenMultimedia.h"



class DtMenVideo : public DtMenMultimedia {
    private:
        float duracion;
    public:
        void setDuracion(float);
        float getDuracion();
        string getTipoMensaje();
        DtMenVideo(int,Fecha,string,string,float);
        ~DtMenVideo();
};

std::ostream& operator<<(std::ostream& os, DtMenVideo& obj);


#endif