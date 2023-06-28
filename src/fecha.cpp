#include "fecha.h"
#include <ctime>
using namespace std;




int Fecha::getAnio(){
    return this->anio;
};
int Fecha::getDia(){
    return this->dia;
};
int Fecha::getMes(){
    return this->mes;
};
int Fecha::getHora(){
    return this->hora;
};
int Fecha::getMinuto(){
    return this->minuto;
};
int Fecha::getSegundo(){
    return this->segundo;
};
void Fecha::actualizarFecha(){
    time_t now = time(0);
    tm * time = localtime(&now);

    this->segundo = time->tm_sec;
    this->minuto = time->tm_min;
    this->hora = time->tm_hour;
    this->dia = time->tm_mday;
    this->mes = time->tm_mon;
    this->anio = 1900 + time->tm_year;
};

Fecha::Fecha(){
    this->actualizarFecha();
};

string Fecha::getFechaString(){
    string fecha = to_string(this->dia) + '/' + to_string(this->mes) + '/' + to_string(this->anio) + ' ' + to_string(this->hora) + ':' + to_string(this->minuto) + ':' + to_string(this->segundo);
    return fecha;
};

 /*   
struct tm {
    int tm_sec;   // seconds of minutes from 0 to 61
    int tm_min;   // minutes of hour from 0 to 59
    int tm_hour;  // hours of day from 0 to 24
    int tm_mday;  // day of month from 1 to 31
    int tm_mon;   // month of year from 0 to 11
    int tm_year;  // year since 1900
    int tm_wday;  // days since sunday
    int tm_yday;  // days since January 1st
    int tm_isdst; // hours of daylight savings time
}
 fecha/hora actual basado en el sistema actual 
time_t now = time(0);
 Objeto de una estructura tm con fecha/hora local 
tm * time = localtime(&now);
*/