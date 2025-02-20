//14. Suponha f(n) = 64nlog n e g(n) = 8n2, com n inteiro positivo. Para quais valores de n temos f(n) ≤ g(n)?
#include <iostream>
#include <cmath>

using namespace std;
void exercicio14(int n) {
    double f_n = 64 * n * log(n);
    double g_n = 8 * n * n;
    cout << "Exercício 14: " << (f_n <= g_n ? "Verdadeiro" : "Falso") << endl;
}
int main() {
    int n;
    cout << "Digite um valor para n: ";
    cin >> n;
    exercicio14(n);
    return 0;
}