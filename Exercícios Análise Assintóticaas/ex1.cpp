//1. Prove que n2 + 10n + 20 = O(n2).
#include <iostream>
using namespace std;

// Exercício 1: Provar que n² + 10n + 20 = O(n²)
void exercicio1(int n) {
    int f_n = n * n + 10 * n + 20;
    int g_n = n * n; // Função de referência O(n²)
    cout << "Exercício 1: " << (f_n <= 2 * g_n ? "Verdadeiro" : "Falso") << endl;
}

int main() {
    int n = 100; // Valor de teste
    exercicio1(n);
    return 0;
}
