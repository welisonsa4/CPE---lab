/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 3
Questão 08
Obs: Eu tive que utilizar a biblioteca iomanip para declarar números com ponto flutuantes.
*/
#include <iostream>
#include <iomanip> 

int main() {
    double numero1, numero2;
    char operacao;

    // Solicita ao usuário que insira os dois números reais
    std::cout << "Digite o primeiro número: ";
    std::cin >> numero1;

    std::cout << "Digite o segundo número: ";
    std::cin >> numero2;

    // Solicita ao usuário que insira a operação a ser realizada (+, -, * ou /)
    std::cout << "Digite a operação (+, -, * ou /): ";
    std::cin >> operacao;

    // Realiza a operação indicada pelo usuário e imprime o resultado
    switch (operacao) {
        case '+':
            std::cout << "Resultado: " << std::fixed << std::setprecision(2) << numero1 << " + " << numero2 << " = " << numero1 + numero2 << std::endl;
            break;
        case '-':
            std::cout << "Resultado: " << std::fixed << std::setprecision(2) << numero1 << " - " << numero2 << " = " << numero1 - numero2 << std::endl;
            break;
        case '*':
            std::cout << "Resultado: " << std::fixed << std::setprecision(2) << numero1 << " * " << numero2 << " = " << numero1 * numero2 << std::endl;
            break;
        case '/':
            if (numero2 != 0) {
                std::cout << "Resultado: " << std::fixed << std::setprecision(2) << numero1 << " / " << numero2 << " = " << numero1 / numero2 << std::endl;
            } else {
                std::cout << "Erro: Divisão por zero!" << std::endl;
            }
            break;
        default:
            std::cout << "Operação inválida!" << std::endl;
    }

    return 0;
}
