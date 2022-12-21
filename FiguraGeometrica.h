// Obs: O método virtual void draw recebe, como parâmetro no código, um objeto da classe Sculptor.
#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include "Sculptor.h"

class FiguraGeometrica // eh uma superclasse, onde todas as outras irao herdar ela
{
    protected:
        float r, g, b, a; // ira armazenar as cores que estão sendo trabalhadas atualmente
    public:
        FiguraGeometrica(){}
        virtual ~FiguraGeometrica(){}
        virtual void draw(Sculptor &s)=0; // metodo virtual, aponta para o metodo draw das outras classes
};

#endif // FIGURAGEOMETRICA_H
