/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 5
Questão 02-B
Use esta função em um código que determina e imprime todos os números primos entre
2 e 1.000.
*/
#include <iostream>

bool ehPrimo(int numero) {
    if (numero <= 1) return false;
    
    for (int divisor = 2; divisor * divisor <= numero; ++divisor) {
        if (numero % divisor == 0) return false;
    }
    
    return true;
}

int main() {
    std::cout << "Números primos entre 2 e 1000:" << std::endl;

    for (int i = 2; i <= 1000; ++i) {
        if (ehPrimo(i)) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
