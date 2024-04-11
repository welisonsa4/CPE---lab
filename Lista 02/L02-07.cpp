/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 2
Questão 07
*/
#include <iostream>

bool ehPrimo(int numero) {
    // Verifica se o número é menor ou igual a 1
    if (numero <= 1) {
        return false;
    }

    // Verifica se o número é divisível por algum número entre 2 e o número - 1
    for (int i = 2; i < numero; ++i) {
        if (numero % i == 0) {
            return false; // Não é primo se for divisível por algum número entre 2 e o número - 1
        }
    }

    return true; // Se não for divisível por nenhum número entre 2 e o número - 1, é primo
}

int main() {
    int numero;

    // Solicita ao usuário que insira um número inteiro
    std::cout << "Digite um numero inteiro: ";
    std::cin >> numero;

    // Verifica se o número é primo e exibe o resultado na tela
    if (ehPrimo(numero)) {
        std::cout << numero << " é um numero primo." << std::endl;
    } else {
        std::cout << numero << " não é um numero primo." << std::endl;
    }

    return 0;
}
