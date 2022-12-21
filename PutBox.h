//Classe que imprime uma sequencia de voxel
#ifndef PUTBOX_H
#define PUTBOX_H

#include "Sculptor.h"
#include "FiguraGeometrica.h"



class PutBox : public FiguraGeometrica // classe que herda a superclasse figura geometrica
{
    private:
        int x0, y0, z0, x1, y1, z1; // recebe as coordenadas da caixa
         float r,g,b,a; // propriedades de cor e transparencia
         
    public:
        PutBox(int x0, int x1, int y0, int y1, int z0, int z1, float r, float g, float b, float a);// recebe alem das coordenadas, as cores
        void draw(Sculptor &s); // metodo draw para a classe se desenhar
};

#endif // PUTBOX_H
