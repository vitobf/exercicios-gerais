#include <stdio.h>
#include "multa.h"
#include <math.h>

float multaCircular(tCirculo c) {
    return ((pow(c.raioTerreno, 2) * PI) / 10000) * 6000;
}
float multaRetangular(tRetangulo r) {
    return ((r.comprimentoTerreno * r.larguraTerreno) / 10000) * 8000;
}
float multaTriangular(tTriangulo t) {
    return (((t.alturaTerreno * t.baseTerreno) / 2) / 10000) * 7000;
}