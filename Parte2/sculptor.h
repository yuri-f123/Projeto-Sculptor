#ifndef SCULPTOR_H
#define SCULPTOR_H

struct Voxel {
  float r,g,b; // Colors
  float a; // Transparency
  bool isOn; // Included or not
};

/**
 * @brief A classe Sculptor
 */

class Sculptor{
protected:
  Voxel ***v; // 3D matrix
  int nx,ny,nz; // Dimensions
  float r,g,b,a; // Current drawing color
public:
  /**
     * @brief Sculptor - Construtor da classe
     * @param _nx - Parâmetro relacionado ao tamanho da matriz tridimensional, no eixo x
     * @param _ny - Parâmetro relacionado ao tamanho da matriz tridimensional, no eixo y
     * @param _nz - Parâmetro relacionado ao tamanho da matriz tridimensional, no eixo z
     */
  Sculptor(int _nx, int _ny, int _nz);
  ~Sculptor();
  /**
     * @brief setColor - Função que muda a cor do desenho
     * @param r - Valor que controla a quantidade de vermelho na cor (entre 0 e 1)
     * @param g - Valor que controla a quantidade de verde na cor (entre 0 e 1)
     * @param b - Valor que controla a quantidade de azul na cor (entre 0 e 1)
     * @param alpha - Valor que controla a opacidade do desenho
     */
  void setColor(float r, float g, float b, float alpha);
  /**
     * @brief putVoxel - Função que coloca um voxel na posição fornecida
     * @param x - Posição do voxel no eixo x
     * @param y - Posição do voxel no eixo y
     * @param z - Posição do voxel no eixo z
     */
  void putVoxel(int x, int y, int z);
  /**
     * @brief cutVoxel - Função que apaga um voxel na posição fornecida
     * @param x - Posição do voxel no eixo x
     * @param y - Posição do voxel no eixo y
     * @param z - Posição do voxel no eixo z
     */
  void cutVoxel(int x, int y, int z);
  /**
     * @brief writeOFF - Função que escreve o arquivo .off do desenho feito
     * @param filename - Nome do arquivo
     */
  void writeOFF(char* filename);
};

#endif // SCULPTOR_H
