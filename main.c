#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    int total_pontos = 1000000;
    int pontos_dentro_circulo = 0;
    
    srand(time(NULL)); // Inicializa a semente para números aleatórios

    for (int i = 0; i < total_pontos; i++) {
        double x = (double)rand() / RAND_MAX; // Gere um número aleatório entre 0 e 1
        double y = (double)rand() / RAND_MAX;

        // Verifique se o ponto (x, y) está dentro do círculo unitário
        if (sqrt(x * x + y * y) <= 1.0) {
            pontos_dentro_circulo++;
        }
    }

    // Estime o valor de pi usando o método de Monte Carlo
    double estimativa_pi = 4.0 * ((double)pontos_dentro_circulo / total_pontos);

    printf("Estimativa de Pi usando Monte Carlo: %f\n", estimativa_pi);

    return 0;
}
