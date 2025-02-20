//3. Prove que log n = O(n).
#include <iostream>
#include <cmath>

using namespace std;
void exercicio3(int n) {
    double f_n = log(n);
    double g_n = n; // Função de referência O(n)
    cout << "Exercício 3: " << (f_n <= g_n ? "Verdadeiro" : "Falso") << endl;
}