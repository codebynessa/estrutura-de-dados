//11. É verdade que n2 = O(2n)?
#include <iostream>
#include <cmath>

using namespace std;
void exercicio11(int n) {
    int f_n = n * n;
    int g_n = pow(2, n);
    cout << "Exercício 11: " << (f_n <= g_n ? "Verdadeiro" : "Falso") << endl;
}
