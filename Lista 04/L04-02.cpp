/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 4
Questão 02
Obs: Apresentei dificuldades nível avançado para interpretar e aplicar as funções. 
O tamanho dos triangulos podem ser variados de acordo com o usuário.
*/
#include <iostream>

int main() {
    int tamanho;

    // Solicita ao usuário que insira o tamanho dos triângulos
    std::cout << "Digite o tamanho dos triangulos: ";
    std::cin >> tamanho;

    // Verifica se o tamanho inserido pelo usuário é válido
    if (tamanho <= 0) {
        std::cout << "O tamanho dos triangulos deve ser um numero positivo.\n";
        return 1;
    }

    // Padrão A
    std::cout << "Triangulo A:\n";
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << '*';
        }
        std::cout << '\n';
    }

    std::cout << '\n'; // Linha em branco entre os padrões

    // Padrão B
    std::cout << "Triangulo B:\n";
    for (int i = tamanho; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            std::cout << '*';
        }
        std::cout << '\n';
    }

    std::cout << '\n'; // Linha em branco entre os padrões

    // Padrão C
    std::cout << "Triangulo C:\n";
    for (int i = tamanho; i > 0; --i) {
        for (int j = 0; j < tamanho - i; ++j) {
            std::cout << ' ';
        }
        for (int j = 0; j < i; ++j) {
            std::cout << '*';
        }
        std::cout << '\n';
    }

    std::cout << '\n'; // Linha em branco entre os padrões

    // Padrão D
    std::cout << "Triangulo D:\n";
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho - i - 1; ++j) {
            std::cout << ' ';
        }
        for (int j = 0; j <= i; ++j) {
            std::cout << '*';
        }
        std::cout << '\n';
    }

    return 0;
}
