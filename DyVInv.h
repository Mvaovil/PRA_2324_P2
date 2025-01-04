#include <vector>
#include <iostream>

template <typename T>
int busqueda_binaria(T X, const std::vector<T>& V, int ini, int fin) {
    while (ini <= fin) {
        int medio = ini + (fin - ini) / 2;

        if (V[medio] == X) {
            return medio;
        }
        else if (V[medio] > X) {
            fin = medio - 1;
        }
        else {
            ini = medio + 1;
        }
    }

    std::cout << "No se encuentra el array" << std::endl;
    return -1;
}

