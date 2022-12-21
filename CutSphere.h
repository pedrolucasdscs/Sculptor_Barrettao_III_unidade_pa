//Classe responsavel por apagar uma esfera
#ifndef CUTSPHERE_H
#define CUTSPHERE_H

#include "Sculptor.h"
#include "FiguraGeometrica.h"


class CutSphere : public FiguraGeometrica
{
    private:
       int xcenter,ycenter,zcenter,radius;
    public:
        CutSphere(int xcenter,int ycenter,int zcenter,int radius);
        void draw(Sculptor &s);
};

#endif // CUTSPHERE_H
