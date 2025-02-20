//Escreva um procedimento para calcular o número de ocorrências de um número x em uma matriz n x n. Faça uma análise.
#include <iostream>

using namespace std;

// Procedimento para contar ocorrências de x em uma matriz n x n
int contarOcorrencias(int matriz[][100], int n, int x) {
    int contagem = 0;
    
    // Percorre toda a matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] == x) {
                contagem++;
            }
        }
    }
    
    return contagem;
}

int main() {
    int n, x;
    cout << "Digite o tamanho da matriz (n x n): ";
    cin >> n;

    int matriz[100][100]; // Definindo um tamanho máximo para facilitar

    cout << "Digite os elementos da matriz:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << "Digite o número que deseja contar na matriz: ";
    cin >> x;

    cout << "O número " << x << " aparece " << contarOcorrencias(matriz, n, x) << " vezes na matriz.\n";

    return 0;
}
