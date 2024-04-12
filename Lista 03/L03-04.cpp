/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 3
Questão 04
Obs: Apresentei dificuldades para entender a lógica da transformação do binário para decimal.
Utilizei o método de string para manipulação do resultado.
*/
#include <iostream>
#include <string>

int main() {
    std::string numeroBinario;

    // Solicita ao usuário que insira um número binário
    std::cout << "Digite um número binário: ";
    std::cin >> numeroBinario;

    // Converte o número binário para decimal
    int numeroDecimal = std::stoi(numeroBinario, nullptr, 2);

    // Exibe o resultado
    std::cout << "O número binário " << numeroBinario << " em decimal é: " << numeroDecimal << std::endl;

    return 0;
}


