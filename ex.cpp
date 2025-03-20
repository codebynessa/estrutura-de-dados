//Implemente em C++ os algoritmos de ordenação Selection-Sort e Heap-Sort. Cada programa deverá ler
// um número n representando o tamanho da entrada e, em seguida, efetuar a leitura dos n números para
// a ordenação. A saída deverá ser apresentada na tela do programa.

#include <iostream>
#include <vector>

using namespace std;

// selection sort
void selection_sort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
}

// reorganiza o heap
void heapify(vector<int>& arr, int n, int i) {
    int maior = i;
    int esq = 2 * i + 1;
    int dir = 2 * i + 2;

    if (esq < n && arr[esq] > arr[maior])
        maior = esq;

    if (dir < n && arr[dir] > arr[maior])
        maior = dir;

    if (maior != i) {
        swap(arr[i], arr[maior]);
        heapify(arr, n, maior);
    }
}

// heap sort
void heap_sort(vector<int>& arr) {
    int n = arr.size();

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

// imprime o vetor
void print_array(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "digite o tamanho do vetor: ";
    cin >> n;

    vector<int> arr(n);
    cout << "digite " << n << " numeros: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> arr_selection = arr;
    vector<int> arr_heap = arr;

    cout << "\nordenacao usando selection sort:" << endl;
    selection_sort(arr_selection);
    print_array(arr_selection);

    cout << "\nordenacao usando heap sort:" << endl;
    heap_sort(arr_heap);
    print_array(arr_heap);

    return 0;
}
