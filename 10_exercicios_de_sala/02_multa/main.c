#include <stdio.h>
#include <math.h>
#include "multa.h"

int main()
{
    int i;
    int quantidadeTerrenos;
    char tipoTerreno;
    tCirculo c;
    tRetangulo r;
    tTriangulo t;
    scanf("%d", &quantidadeTerrenos);
    for (i = 0; i < quantidadeTerrenos; i++)
    {
        scanf(" %c", &tipoTerreno);
        switch (tipoTerreno)
        {
        case 'C':
            scanf("%f", &c.raioTerreno);
            printf("Preço: %.2f\n", multaCircular(c));
            break;
        case 'T':
            scanf("%f %f", &t.baseTerreno, &t.alturaTerreno);
            printf("Preço: %.2f\n", multaTriangular(t));
            break;
        case 'R':
            scanf("%f %f", &r.comprimentoTerreno, &r.larguraTerreno);
            printf("Preço: %.2f\n", multaRetangular(r));
            break;
        }
    }
    return 0;
}
