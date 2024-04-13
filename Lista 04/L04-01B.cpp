/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 4
Questão 01-B
*/
#include <iostream>

int main() {
    const int termos = 10; // Número de termos na série

    double e = 1.0; // Inicializa o valor de e como 1.0
    double fatorial = 1.0; // Inicializa o fatorial como 1.0

    // Calcula o valor de e usando a série fornecida
    for (int i = 1; i <= termos; ++i) {
        fatorial *= i; // Calcula o fatorial de i
        e += 1.0 / fatorial; // Adiciona 1/i! ao valor de e
    }

    // Imprime o valor aproximado de e
    std::cout << "O valor aproximado de e com " << termos << " termos é: " << e << std::endl;

    return 0;
}
