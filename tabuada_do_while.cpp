#include <iostream>

int main() {
    int cont, num;

    std::cout << "numero? ";
    std::cin >> num;

    cont = 1;

    do {
        std::cout << num << "x" << cont << "=" << num * cont << std::endl;
        cont++;
    } while (cont <= 10);

    return 0;
}
