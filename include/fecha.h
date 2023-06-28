#ifndef fecha_h
#define fecha_h
#include <string>
using namespace std;

class Fecha {
    private: 
        int dia;
        int mes;
        int anio;
        int hora;
        int minuto;
        int segundo;
    public:
        void actualizarFecha();
        int getDia();
        int getMes(); 
        int getAnio();
        int getHora();
        int getMinuto();
        int getSegundo(); 
        string getFechaString();    
        Fecha();
        ~Fecha();
};

#endif