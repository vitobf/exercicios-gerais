/*
    oi!
    Esse código de eficiência e funcionalidade duvidosa foi feito por mim, Vitor Batalha Ferreira.
    Assim como o resto do repositório, estes códigos são exercícios da matéria de Programação II na UFES.
    Data: 2024/1
*/
#include <stdio.h>
#include <math.h>
int main () {
    typedef struct {
        double raio;
        double x;
        double y;
    } Circulo;
    Circulo alvo;
    Circulo disparo;
    double distanciaCentrosDosCirculos;
    scanf("%lf %lf %lf %lf %lf %lf", &alvo.x, &alvo.y, &alvo.raio, &disparo.x, &disparo.y, &disparo.raio);
    distanciaCentrosDosCirculos = sqrt(pow(alvo.x - disparo.x, 2) + pow(alvo.y - disparo.y, 2));
    if (distanciaCentrosDosCirculos > (alvo.raio + disparo.raio)) {
        printf("ERROU");
    }
    else {
        printf("ACERTOU");
    }
    return 0;
}