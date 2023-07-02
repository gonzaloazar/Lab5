#ifndef MENVIDEO_H
#define MENVIDEO_H
#include "menMultimedia.h"

class MenVideo : public MenMultimedia {
    private:
        float duracion;
    public:
        void setDuracion(float);
        float getDuracion();
        MenVideo(int codigo,Fecha, string miNum,string url,float duracion);
        string getTipoMensaje();
        ~MenVideo();
};

#endif 