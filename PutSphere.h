//Classe que imprime uma esfera
#ifndef PUTSPHERE_H
#define PUTSPHERE_H

#include "Sculptor.h"
#include "FiguraGeometrica.h"


class PutSphere : public FiguraGeometrica
{
    private:
        int xcenter, ycenter, zcenter, radius;
    public:
        PutSphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a);
        void draw(Sculptor &s);
};

#endif // PUTSPHERE_H
