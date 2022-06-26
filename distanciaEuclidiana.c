#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float distanciaEuclidiana(float posicoes[2][3]);

void main() {
    /* 2 pontos em x,y,z */
    float posicoes[2][3] = {
        {0, 0, 0}, /* ponto 1 */
        {1, 2, 5}, /* ponto 2 */
    };

    float dist12 = distanciaEuclidiana(posicoes);
    printf("Distância entre p1 e p2: %.2f", dist12);

}

float distanciaEuclidiana(float posicoes[2][3]) {
    float x1 = posicoes[0][0];
    float x2 = posicoes[1][0];
    float y1 = posicoes[0][1];
    float y2 = posicoes[1][1];
    float z1 = posicoes[0][2];
    float z2 = posicoes[1][2];

    float x = pow(x1-x2,2);
    float y = pow(y1-y2,2);
    float z = pow(z1-z2,2);

    return pow(x+y+z,0.5);

}