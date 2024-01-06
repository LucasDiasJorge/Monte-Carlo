#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    // Configuração inicial
    int total_pontos = 100000000;
    int pontos_dentro_circulo = 0;
    
    // Inicializa a semente para números aleatórios
    srand(time(NULL));

    // Gera pontos e verifica se estão dentro do círculo
    for (int i = 0; i < total_pontos; i++) {
        double x = (double)rand() / RAND_MAX; // Gera um número aleatório entre 0 e 1
        double y = (double)rand() / RAND_MAX;

        // Verifica se o ponto (x, y) está dentro do círculo unitário
        if (sqrt(x * x + y * y) <= 1.0) {
            pontos_dentro_circulo++;
        }
    }

    // Estima o valor de pi usando o método de Monte Carlo
    double estimativa_pi = 4.0 * ((double)pontos_dentro_circulo / total_pontos);

    // Imprime a estimativa de pi
    printf("Estimativa de Pi usando Monte Carlo: %.50f\n", estimativa_pi);

    return 0;
}
