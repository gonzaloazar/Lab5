#ifndef conversacion_h
#define conversacion_h
#include <iostream>
class Conversacion {
    private:
        int id;
        bool archivado;
    public:
    Conversacion(int unId, bool estArchivado);
    Conversacion(Conversacion *);
    int getId();
    bool estaArchivado();
    void setID(int);
    void setArchivado(bool);
    ~Conversacion();
};
#endif
