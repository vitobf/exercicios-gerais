#ifndef _MULTA_H
#define _MULTA_H

#define PI 3.1416

typedef struct {
    float raioTerreno;
}tCirculo;

typedef struct {
    float comprimentoTerreno;
    float larguraTerreno;
}tRetangulo;

typedef struct {
    float baseTerreno;
    float alturaTerreno;
}tTriangulo;

float multaCircular(tCirculo c);
float multaRetangular(tRetangulo r);
float multaTriangular(tTriangulo t);

#endif
