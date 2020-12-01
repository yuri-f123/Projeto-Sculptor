#include <iostream>
#include <vector>
#include "sculptor.h"
#include "figurageometrica.h"
#include "putbox.h"
#include "putellipsoid.h"
#include "putsphere.h"
#include "putvoxel.h"
#include "cutbox.h"
#include "cutellipsoid.h"
#include "cutsphere.h"
#include "cutvoxel.h"
#include "interpretador.h"

using namespace std;


int main(){

    Sculptor *t1;

    Interpretador parser;
    vector<FiguraGeometrica*> figuras;

    figuras = parser.parse((char*)"ler.txt");

    t1 = new Sculptor(parser.getDimx(), parser.getDimy(), parser.getDimz());

    for(size_t i=0; i<figuras.size(); i++){
        figuras[i]->draw(*t1);
    }

    t1->writeOFF((char*)"parte2teste.off");

    for(size_t i=0; i<figuras.size(); i++){
        delete figuras[i];
    }
    delete t1;

    cout << "Done!" << endl;
    return 0;
}
