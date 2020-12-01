#ifndef PUTBOX_H
#define PUTBOX_H

#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe PutBox derivada de FiguraGeometrica
 */

class PutBox : public FiguraGeometrica{
    int x0, x1, y0, y1, z0, z1;
public:
    /**
     * @brief PutBox - Função que armazena a posição dos primeiros e últimos voxels em cada eixo
     *  e a cor de uma caixa em um objeto
     * @param x0 - Posição do primeiro voxel no eixo x
     * @param x1 - Posição do último voxel no eixo x
     * @param y0 - Posição do primeiro voxel no eixo y
     * @param y1 - Posição do último voxel no eixo y
     * @param z0 - Posição do primeiro voxel no eixo z
     * @param z1 - Posição do último voxel no eixo z
     * @param r - Valor que controla a quantidade de vermelho na cor (entre 0 e 1)
     * @param g - Valor que controla a quantidade de verde na cor (entre 0 e 1)
     * @param b - Valor que controla a quantidade de azul na cor (entre 0 e 1)
     * @param a - Valor que controla a opacidade do desenho (entre 0 e 1)
     */
    PutBox(int x0, int x1, int y0, int y1, int z0, int z1, float r, float g, float b, float a);
    ~PutBox();
    /**
     * @brief draw - Função que desenha os voxels em formato de caixa na matriz tridimensional do objeto Sculptor
     * @param t - Objeto do tipo Sculptor que armazenará os voxels
     */
    void draw(Sculptor &t);
};

#endif // PUTBOX_H
