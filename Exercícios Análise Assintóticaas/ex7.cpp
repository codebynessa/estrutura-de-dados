//7. Prove que 1/2n2 não é O(n).
#include <iostream>
#include <cmath>

using namespace std;
void exercicio7(int n) {
    double f_n = 1.0 / (2 * n * n);
    double g_n = n;
    cout << "Exercício 7: " << (f_n > g_n ? "Verdadeiro" : "Falso") << endl;
}
