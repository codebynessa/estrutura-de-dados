//Escreva um procedimento para determinar o fatorial de um número n. Faça uma análise.//
#include <iostream>

using namespace std;

int fatorial(int n) {
    int i, fat = 1;
    for (i = 2; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int num;
    cout << "digite um numero para calcular o fatorial: ";
    cin >> num;

    cout << "fatorial de " << num << " = " << fatorial(num) << endl;

    return 0;
}
