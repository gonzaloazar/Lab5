#ifndef menVideo_h
#define menVideo_h
#include "menMultimedia.h"

class MenVideo : public MenMultimedia {
    private:
        float duracion;
    public:
        void setDuracion(float);
        float getDuracion();
        MenVideo();
        MenVideo(string codigo, Fecha fecha,string url,float duracion);
        ~MenVideo();
};

#endif 