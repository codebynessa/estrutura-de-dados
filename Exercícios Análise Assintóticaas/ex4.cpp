//4. Prove que n = O(2n).
#include <iostream>
#include <cmath>

using namespace std;
void exercicio4(int n) {
    int f_n = n;
    int g_n = pow(2, n);
    cout << "Exercício 4: " << (f_n <= g_n ? "Verdadeiro" : "Falso") << endl;
}