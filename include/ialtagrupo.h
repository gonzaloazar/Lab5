#ifndef IALTAGRUPO_H
#define IALTAGRUPO_H
#include "./Dt/dtContacto.h"
#include "./convGrupo.h"

class ialtagrupo{
    public:
        virtual Convgrupo crearGrupo(string nombre, string urlImg, DtContacto partGrupo[], DtContacto adminGrupo[]) = 0;
        virtual void contDisp(int numUser) = 0;
};
 
#endif