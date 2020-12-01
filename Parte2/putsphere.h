#ifndef PUTSPHERE_H
#define PUTSPHERE_H

#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe PutSphere derivada de FiguraGeometrica
 */

class PutSphere : public FiguraGeometrica{
    int x, y, z, raio;
public:
    /**
     * @brief PutSphere - Função que armazena a posição do centro, o raio e a cor dos voxels
     *  de uma esfera em um objeto
     * @param x - Posição do centro da esfera no eixo x
     * @param y - Posição do centro da esfera no eixo y
     * @param z - Posição do centro da esfera no eixo z
     * @param raio - Raio da esfera
     * @param r - Valor que controla a quantidade de vermelho na cor (entre 0 e 1)
     * @param g - Valor que controla a quantidade de verde na cor (entre 0 e 1)
     * @param b - Valor que controla a quantidade de azul na cor (entre 0 e 1)
     * @param a - Valor que controla a opacidade do desenho (entre 0 e 1)
     */
    PutSphere(int x, int y, int z, int raio, float r, float g, float b, float a);
    ~PutSphere();
    /**
     * @brief draw - Função que desenha os voxels em formato de esfera na matriz tridimensional do objeto Sculptor
     * @param t - Objeto do tipo Sculptor que armazenará os voxels
     */
    void draw(Sculptor &t);
};

#endif // PUTSPHERE_H
