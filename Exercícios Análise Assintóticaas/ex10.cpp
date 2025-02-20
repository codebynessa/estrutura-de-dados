//10. É verdade que 1/100n2 – 999n – 9999 é O(n)?
#include <iostream>
#include <cmath>

using namespace std;
void exercicio10(int n) {
    double f_n = (1.0 / 100) * n * n - 999 * n - 9999;
    double g_n = n;
    cout << "Exercício 10: " << (f_n <= 10 * g_n ? "Verdadeiro" : "Falso") << endl;
}