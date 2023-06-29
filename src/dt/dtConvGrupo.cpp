#include "dtConvGrupo.h"
#include <string>
using namespace std;

void DtConvGrupo::setNom(string s){
    this->nom = s;
}
void DtConvGrupo::setUrl(string a){
    this->url = a;
};
void DtConvGrupo::setFecha(Fecha a){
    this->creacion = a;
};
string  DtConvGrupo::getNom(){
    return this->nom;
};
string  DtConvGrupo::getUrl(){
    return this->url;
};
Fecha DtConvGrupo::getFecha(){
    return this->creacion;
}


DtConvGrupo::DtConvGrupo(int a, bool s, string d,string url, Fecha creacion):DtConversacion(a, s){
    setNom(d);
    setUrl(url);
    setFecha(creacion);
};

// class DtConvGrupo : public DtConversacion {
//     private:
//         string nom;
//         string url;
//         Fecha creacion;
//     public:
//         void setNom(string);
//         string getNom();
//         DtConvGrupo();
//         DtConvGrupo(int,bool,string,string,Fecha);
//         ~DtConvGrupo();
// };