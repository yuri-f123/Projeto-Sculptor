#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H
#include <vector>
#include <string>
#include "figurageometrica.h"

/**
 * @brief A classe Interpretador
 * Irá interpretar um arquivo lido para ajudar na construção do desenho
 */

class Interpretador{
    int dimx, dimy, dimz;
    float r, g, b, a;
public:
    /**
     * @brief Interpretador - Construtor da classe
     */
    Interpretador();
    /**
     * @brief getDimx
     * @return - Retorna o tamanho da matriz no eixo x
     */
    int getDimx();
    /**
     * @brief getDimy
     * @return  - Retorna o tamanho da matriz no eixo y
     */
    int getDimy();
    /**
     * @brief getDimz
     * @return  - Retorna o tamanho da matriz no eixo z
     */
    int getDimz();
    /**
     * @brief parse - Função que interpreta um arquivo para ajudar na construção do desenho
     * @param filename - Nome do arquivo a ser interpretado
     * @return - Retorna um vetor de figuras geometricas
     */
    std::vector<FiguraGeometrica *> parse(std::string filename);
};

#endif // INTERPRETADOR_H
