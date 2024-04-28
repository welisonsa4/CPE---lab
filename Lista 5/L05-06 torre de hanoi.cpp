#include <iostream>

void torresDeHanoi(int n, char origem, char destino, char temp) {
    if (n == 1) {
        std::cout << "Mover disco 1 de " << origem << " para " << destino << std::endl;
        return;
    }
    torresDeHanoi(n - 1, origem, temp, destino);
    std::cout << "Mover disco " << n << " de " << origem << " para " << destino << std::endl;
    torresDeHanoi(n - 1, temp, destino, origem);
}

int main() {
    int n;
    std::cout << "Digite o número de discos: ";
    std::cin >> n;
    std::cout << "Instruções para resolver o problema das Torres de Hanói:" << std::endl;
    torresDeHanoi(n, 'A', 'C', 'B');
    return 0;
}
