//2. Prove que 300 = O(1).
#include <iostream>
using namespace std;

// Exercício 2: Provar que 300 = O(1)
void exercicio2() {
    int f_n = 300;
    int g_n = 1; // O(1) é uma constante
    cout << "Exercício 2: " << (f_n <= 10 * g_n ? "Verdadeiro" : "Falso") << endl;
}

int main() {
    exercicio2();
    return 0;
}
