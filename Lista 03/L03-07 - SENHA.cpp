/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 3
Questão 07
*/
#include <iostream>

int main() {
    int senha;

    // Solicita ao usuário que insira a senha
    std::cout << "Digite a senha: ";
    std::cin >> senha;

    // Verifica se a senha é válida (1234)
    if (senha == 1234) {
        std::cout << "ACESSO PERMITIDO" << std::endl;
    } else {
        std::cout << "ACESSO NEGADO" << std::endl;
    }

    return 0;
}
