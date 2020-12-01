#ifndef CUTSPHERE_H
#define CUTSPHERE_H

#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe CutSphere derivada de FiguraGeometrica
 */

class CutSphere : public FiguraGeometrica{
    int x, y, z, raio;
public:
    /**
     * @brief CutSphere - Função que armazena a posição do centro e o raio
     *  de uma esfera a ser apagada em um objeto
     * @param x - Posição do centro da esfera no eixo x
     * @param y - Posição do centro da esfera no eixo y
     * @param z - Posição do centro da esfera no eixo z
     * @param raio - Raio da esfera
     */
    CutSphere(int x, int y, int z, int raio);
    ~CutSphere();
    /**
     * @brief draw - Função que apaga os voxels em formato de esfera na matriz tridimensional do objeto Sculptor
     * @param t - Objeto do tipo Sculptor que armazenará os voxels
     */
    void draw(Sculptor &t);
};

#endif // CUTSPHERE_H
