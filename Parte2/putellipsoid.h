#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H

#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe PutEllipsoid derivada de FiguraGeometrica
 */

class PutEllipsoid : public FiguraGeometrica{
    int x, y, z, raiox, raioy, raioz;
public:
    /**
     * @brief PutEllipsoid - Função que armazena a posição do centro, os raios e a cor dos voxels
     *  de uma elipse em um objeto
     * @param x - Posição do centro da elipse no eixo x
     * @param y - Posição do centro da elipse no eixo y
     * @param z - Posição do centro da elipse no eixo z
     * @param raiox - Raio da elipse no eixo x
     * @param raioy - Raio da elipse no eixo y
     * @param raioz - Raio da elipse no eixo z
     * @param r - Valor que controla a quantidade de vermelho na cor (entre 0 e 1)
     * @param g - Valor que controla a quantidade de verde na cor (entre 0 e 1)
     * @param b - Valor que controla a quantidade de azul na cor (entre 0 e 1)
     * @param a - Valor que controla a opacidade do desenho (entre 0 e 1)
     */
    PutEllipsoid(int x, int y, int z, int raiox, int raioy, int raioz, float r, float g, float b, float a);
    ~PutEllipsoid();
    /**
     * @brief draw - Função que desenha os voxels em formato de elipse na matriz tridimensional do objeto Sculptor
     * @param t - Objeto do tipo Sculptor que armazenará os voxels
     */
    void draw(Sculptor &t);
};

#endif // PUTELLIPSOID_H
