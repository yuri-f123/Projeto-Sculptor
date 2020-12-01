#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H

#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief The CutEllipsoid class
 */

class CutEllipsoid : public FiguraGeometrica{
    int x, y, z, raiox, raioy, raioz;
public:
    /**
     * @brief CutEllipsoid - Função que armazena a posição do centro e os raios
     * de uma elipse a ser apagada em um objeto
     * @param x - Posição do centro da elipse no eixo x
     * @param y - Posição do centro da elipse no eixo y
     * @param z - Posição do centro da elipse no eixo z
     * @param raiox - Raio da elipse no eixo x
     * @param raioy - Raio da elipse no eixo y
     * @param raioz - Raio da elipse no eixo z
     */
    CutEllipsoid(int x, int y, int z, int raiox, int raioy, int raioz);
    ~CutEllipsoid();
    /**
     * @brief draw - Função que apaga os voxels em formato de elipse na matriz tridimensional do objeto Sculptor
     * @param t - Objeto do tipo Sculptor que armazenará os voxels
     */
    void draw(Sculptor &t);
};

#endif // CUTELLIPSOID_H
