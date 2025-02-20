//5. Prove que log n = O(log10 n).
#include <iostream>
#include <cmath>

using namespace std;
void exercicio5(int n) {
    double f_n = log(n);
    double g_n = log10(n);
    cout << "Exercício 5: " << (f_n <= 10 * g_n ? "Verdadeiro" : "Falso") << endl;
}