#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"

/**
 * @brief A classe abstrata FiguraGeometrica
 */
class FiguraGeometrica{
protected:
    float r, g, b, a;
public:
    /**
     * @brief Destrutor virtual (não será chamado)
     */
    virtual ~FiguraGeometrica();
    /**
     * @brief draw - Método virtual (não será chamado)
     * @param t - Objeto que armazena o desenho
     */
    virtual void draw(Sculptor &t)=0;
};

#endif // FIGURAGEOMETRICA_H
