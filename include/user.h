#ifndef user_h
#define user_h 
#include <string>
#include <map>
#include "convContacto.h"
#include "convGrupo.h"
#include "dtConvCont.h"
#include "dtConvGrupo.h"
#include "fecha.h"
#include "moduser.h"
using namespace std;

class User : public ModUser {
    private:
        string num;
        string nom;
        string desc;
        string url;
        Fecha *ultConex;
        Fecha *fechaReg;
        map<int, Conversacion*> conversaciones;
    public:
        void setNum(string);
        void setNom(string);
        void setDesc(string);
        void setURL(string);
        void actUltConex();
        void actFechaReg();
        string getNum();
        string getNom();
        string getDesc();
        string getURL();
        string getFechaConex();
        string getFechaReg();
        User(string num, string nom, string desc, string url);
        ~User();
        
        Conversacion *getConv(int convID);
        map<int, DtConversacion*> getConversacionesAct();
        map<int, DtConversacion*> getConvsacionesArch();
        bool existeConvActiva();
        int cantConvArch();


        virtual void actualizarURL(string newURL);
        virtual void actualizarNombre(string newNombre);
        virtual void actualizarDescripcion(string newDesc);
};

#endif