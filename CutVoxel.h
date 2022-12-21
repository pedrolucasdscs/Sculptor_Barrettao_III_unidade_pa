//Classe responsavel por apagar um voxel
#ifndef CUTVOXEL_H
#define CUTVOXEL_H

#include "Sculptor.h"
#include "FiguraGeometrica.h"


class CutVoxel : public FiguraGeometrica
{
    private:
         int x0,y0,z0;
    public:
        CutVoxel(int x0, int y0, int z0);
        virtual void draw(Sculptor &s);
};

#endif // CUTVOXEL_H
