//Escreva um procedimento para verificar se dois vetores são disjuntos (intersecção vazia). Os vetores devem ser de tamanho n. Faça uma análise.
#include <iostream>

using namespace std;

// Função para verificar se dois vetores são disjuntos
bool saoDisjuntos(int vetor1[], int vetor2[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (vetor1[i] == vetor2[j]) {
                return false; // Encontrou um elemento em comum
            }
        }
    }
    return true; // Nenhum elemento em comum foi encontrado
}

int main() {
    int n;
    cout << "Digite o tamanho dos vetores: ";
    cin >> n;

    int vetor1[100], vetor2[100]; // Definindo tamanho máximo para simplificação

    cout << "Digite os elementos do primeiro vetor:\n";
    for (int i = 0; i < n; i++) {
        cin >> vetor1[i];
    }

    cout << "Digite os elementos do segundo vetor:\n";
    for (int i = 0; i < n; i++) {
        cin >> vetor2[i];
    }

    if (saoDisjuntos(vetor1, vetor2, n)) {
        cout << "Os vetores são disjuntos.\n";
    } else {
        cout << "Os vetores não são disjuntos.\n";
    }

    return 0;
}
