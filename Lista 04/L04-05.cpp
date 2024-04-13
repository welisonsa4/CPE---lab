/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 4
Questão 05
*/
#include <iostream>

int main() {
    int numeros[5];

    std::cout << "Digite cinco números entre 1 e 30:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << "Número " << i + 1 << ": ";
        std::cin >> numeros[i];
        
        // Verifica se o número está fora do intervalo permitido
        while (numeros[i] < 1 || numeros[i] > 30) {
            std::cout << "Número inválido. Por favor, digite um número entre 1 e 30:\n";
            std::cout << "Número " << i + 1 << ": ";
            std::cin >> numeros[i];
        }
    }

    std::cout << "\nBarras de asteriscos:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << "Codigo " << i + 1 << ": ";
        std::cout << std::string(numeros[i], '*') << "\n";
    }

    return 0;
}
