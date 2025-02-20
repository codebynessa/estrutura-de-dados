//9. Prove que 1/2n(n+1) = O(n2).
#include <iostream>
#include <cmath>

using namespace std;
void exercicio9(int n) {
    double f_n = 0.5 * n * (n + 1);
    double g_n = n * n;
    cout << "Exercício 9: " << (f_n <= 2 * g_n ? "Verdadeiro" : "Falso") << endl;
}