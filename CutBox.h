//Classe responsavel por apagar uma sequencia de voxel
#ifndef CUTBOX_H
#define CUTBOX_H

#include "Sculptor.h"
#include "FiguraGeometrica.h"


class CutBox : public FiguraGeometrica
{
    private:
        int x0, y0, z0, x1, y1, z1;
        
    public:
        CutBox(int x0, int x1, int y0, int y1, int z0, int z1);
        void draw(Sculptor &s);
};

#endif // CUTBOX_H
