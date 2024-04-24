/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 5
Questão 02 - A
-Escreva uma função que determine se um número é primo.
*/
#include <iostream>

bool ehPrimo(int numero) {
    // Se o número for menor ou igual a 1, não é primo
    if (numero <= 1) {
        return false;
    }

    // Percorre os possíveis divisores do número
    for (int divisor = 2; divisor * divisor <= numero; ++divisor) {
        // Se o número for divisível por algum divisor, não é primo
        if (numero % divisor == 0) {
            return false;
        }
    }

    // Se nenhum divisor foi encontrado, o número é primo
    return true;
}

int main() {
    int numero;
    std::cout << "Digite um numero inteiro: ";
    std::cin >> numero;

    if (ehPrimo(numero)) {
        std::cout << numero << " é primo." << std::endl;
    } else {
        std::cout << numero << " não é primo." << std::endl;
    }

    return 0;
}
