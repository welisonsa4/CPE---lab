/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 3
Questão 05
Obs: Declarei maiúsculas e minúsculas para ter o mesmo resultado.
Obs: Poderia utilizar a função caractere = tolower(caractere) para chegar no mesmo resultado.
*/
#include <iostream>

int main() {
    char caractere;

    // Solicita ao usuário que insira um caractere
    std::cout << "Digite um caractére (minúsculo): ";
    std::cin >> caractere;

    // Verifica se o caractere é uma vogal usando a estrutura de switch case
    switch (caractere) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            std::cout << "O caractére " << caractere << " é uma vogal." << std::endl;
            break;
        default:
            std::cout << "O caractére " << caractere << " não é uma vogal." << std::endl;
    }

    return 0;
}
