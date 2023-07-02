#ifndef FECHA_H
#define FECHA_H
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