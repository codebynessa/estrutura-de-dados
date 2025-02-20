//6. Prove que n/100 não é O(1).// Prova: Se n/100 fosse O(1), então existiriam constantes c e n0 tais que n/100 <= c para todo n >= n0. No entanto, para n = 100c, temos que n/100 = c, que não é menor ou igual a c. Portanto, n/100 não é O(1).
#include <iostream>
#include <cmath>

using namespace std;
void exercicio6(int n) {
    double f_n = n / 100.0;
    double g_n = 1; // O(1) é constante
    cout << "Exercício 6: " << (f_n > g_n ? "Verdadeiro" : "Falso") << endl;
}