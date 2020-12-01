#ifndef PUTVOXEL_H
#define PUTVOXEL_H

#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe PutVoxel derivada de FiguraGeometrica
 */

class PutVoxel : public FiguraGeometrica{
    int x, y, z;
public:
    /**
     * @brief PutVoxel - Função que armazena a posição e cor de um voxel em um objeto
     * @param x - Posição do voxel no eixo x
     * @param y - Posição do voxel no eixo y
     * @param z - Posição do voxel no eixo z
     * @param r - Valor que controla a quantidade de vermelho na cor (entre 0 e 1)
     * @param g - Valor que controla a quantidade de verde na cor (entre 0 e 1)
     * @param b - Valor que controla a quantidade de azul na cor (entre 0 e 1)
     * @param a - Valor que controla a opacidade do desenho (entre 0 e 1)
     */
    PutVoxel(int x, int y, int z, float r, float g, float b, float a);
    ~PutVoxel();
    /**
     * @brief draw - Função que desenha um voxel na matriz tridimensional do objeto Sculptor
     * @param t - Objeto do tipo Sculptor que armazenará os voxels
     */
    void draw(Sculptor &t);
};

#endif // PUTVOXEL_H
