//13. É verdade que n + n = O(n)?
#include <iostream>
#include <cmath>

using namespace std;
void exercicio13(int n) {
    double f_n = n + sqrt(n);
    double g_n = n;
    cout << "Exercício 13: " << (f_n <= 2 * g_n ? "Verdadeiro" : "Falso") << endl;
}