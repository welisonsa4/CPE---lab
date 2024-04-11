/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 2
Questão 05
*/
#include <iostream>

int main() {
    // Variáveis para armazenar a largura e o comprimento da sala
    double largura, comprimento;

    // Solicita ao usuário que insira a largura da sala em metros
    std::cout << "Digite a largura da sala (em metros): ";
    std::cin >> largura;

    // Solicita ao usuário que insira o comprimento da sala em metros
    std::cout << "Digite o comprimento da sala (em metros): ";
    std::cin >> comprimento;

    // Calcula a área da sala
    double area = largura * comprimento;

    // Exibe a área da sala
    std::cout << "A área da sala é: " << area << " metros quadrados." << std::endl;

    return 0;
}
