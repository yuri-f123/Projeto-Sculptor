#ifndef CUTVOXEL_H
#define CUTVOXEL_H

#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe CutVoxel derivada de FiguraGeometrica
 */

class CutVoxel : public FiguraGeometrica{
    int x, y, z;
public:
    /**
     * @brief CutVoxel - Função que armazena a posição de um voxel a ser apagado em um objeto
     * @param x - Posição do voxel no eixo x
     * @param y - Posição do voxel no eixo y
     * @param z - Posição do voxel no eixo z
     */
    CutVoxel(int x, int y, int z);
    ~CutVoxel();
    /**
     * @brief draw - Função que apaga um voxel na matriz tridimensional do objeto Sculptor
     * @param t - Objeto do tipo Sculptor que armazenará os voxels
     */
    void draw(Sculptor &t);
};

#endif // CUTVOXEL_H
