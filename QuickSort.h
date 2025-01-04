#include <algorithm> // Para std::swap

template <typename T>
int Partition(T v[], int ini, int fin) {
    T pivot = v[fin];
    int i = ini;

    for (int j = ini; j < fin; j++) {
        if (v[j] <= pivot) {
            std::swap(v[i], v[j]);
            i++;
        }
    }
    std::swap(v[i], v[fin]);
    return i;
}

