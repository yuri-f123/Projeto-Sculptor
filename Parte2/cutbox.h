#ifndef CUTBOX_H
#define CUTBOX_H

#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe CutBox derivada de FiguraGeometrica
 */

class CutBox : public FiguraGeometrica{
    int x0, x1, y0, y1, z0, z1;
public:
    /**
     * @brief CutBox - Função que armazena a posição dos primeiros e últimos voxels em cada eixo
     *  de uma caixa a ser apagada em um objeto
     * @param x0 - Posição do primeiro voxel no eixo x
     * @param x1 - Posição do último voxel no eixo x
     * @param y0 - Posição do primeiro voxel no eixo y
     * @param y1 - Posição do último voxel no eixo y
     * @param z0 - Posição do primeiro voxel no eixo z
     * @param z1 - Posição do último voxel no eixo z
     */
    CutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    ~CutBox();
    /**
     * @brief draw - Função que desenha os voxels em formato de caixa na matriz tridimensional do objeto Sculptor
     * @param t - Objeto do tipo Sculptor que armazenará os voxels
     */
    void draw(Sculptor &t);
};

#endif // CUTBOX_H
