#include <iostream>
int main() {
    int N;
    std::cout << "Ingrese la cantidad de números aleatorios a generar (1-100): ";
    std::cin >> N;

    if (N < 1 || N > 100) {
        std::cout << "Cantidad inválida. Debe estar entre 1 y 100.\n";
        return 1;
    }

    int numeros[100];
    for (int i = 0; i < 100; ++i) {
        numeros[i] = i + 1;
    }

    // Mezcla simple sin librerías avanzadas, usando solo temas básicos
    for (int i = 0; i < N; ++i) {
        int j = i + (i * 7 + 13) % (100 - i); // fórmula simple para "aleatorizar"
        int temp = numeros[i];
        numeros[i] = numeros[j];
        numeros[j] = temp;
    }

    std::cout << "Números aleatorios sin repetición:\n";
    for (int i = 0; i < N; ++i) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
