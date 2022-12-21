//Classe que imprime um voxel
#ifndef PUTVOXEL_H
#define PUTVOXEL_H

#include "FiguraGeometrica.h"
#include "Sculptor.h"


class PutVoxel : public FiguraGeometrica
{
    private:
        int x, y, z;
        float r,g,b,a;
    public:
        PutVoxel(int x0, int y0, int z0, float r, float g, float b, float a);
        void draw(Sculptor &s);
};

#endif // PUTVOXEL_H
