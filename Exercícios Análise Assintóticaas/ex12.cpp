//12. É verdade que n + 1000 = O(n)?
#include <iostream>
#include <cmath>

using namespace std;
void exercicio12(int n) {
    double f_n = sqrt(n) + 1000;
    double g_n = n;
    cout << "Exercício 12: " << (f_n <= g_n ? "Verdadeiro" : "Falso") << endl;
}
