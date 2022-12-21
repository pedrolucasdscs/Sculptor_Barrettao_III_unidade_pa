//Classe responsavel por apagar uma elipse
#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H

#include "Sculptor.h"
#include "FiguraGeometrica.h"


class CutEllipsoid : public FiguraGeometrica
{
    private:
        int xcenter,ycenter,zcenter,rx,ry,rz;
       
    public:
        CutEllipsoid(int xcenter,int ycenter,int zcenter,int rx,int ry,int rz);
        void draw(Sculptor &s);
};

#endif // CUTELLIPSOID_H
