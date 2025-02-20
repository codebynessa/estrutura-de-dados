#include <iostream>
#include <cmath>

using namespace std;
void exercicio8(int n) {
    int f_n = n * n + 999 * n + 9999;
    int g_n = n * n;
    cout << "Exercício 8: " << (f_n <= 2 * g_n ? "Verdadeiro" : "Falso") << endl;
}