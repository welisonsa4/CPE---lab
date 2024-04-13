/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 4
Questão 01-C
Obs: Tive que utilizar ajuda de ferramentas online para me ajudar a formatar tal código.
*/
#include <iostream>
#include <cmath>

int main() {
    double x;

    // Solicita ao usuário que insira o valor de x
    std::cout << "Digite o valor de x para calcular e^x: ";
    std::cin >> x;

    double e_to_the_x = 1.0; // Inicializa o valor de e^x como 1.0
    double termo = 1.0; // Inicializa o valor do termo atual como 1.0

    // Calcula o valor de e^x usando 10 termos da série de Taylor
    for (int i = 1; i <= 10; ++i) {
        termo *= x / i; // Calcula o próximo termo da série
        e_to_the_x += termo; // Adiciona o termo atual ao valor de e^x
    }

    // Imprime o valor aproximado de e^x
    std::cout << "O valor aproximado de e^" << x << " com 10 termos é: " << e_to_the_x << std::endl;

    return 0;
}
