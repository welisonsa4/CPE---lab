/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 4
Questão 01
O maior fatorial possível para calcular corresponde a quantidade de memória interna do seu desktop.
Obs: Apresentei dificuldade para resolver os cálculos matemáticos.
Obs: Utilizei de recursos online para auxiliar a programar e entender os cálculos.
*/
#include <iostream>

int main() {
    int numero;

    // Solicita ao usuário que insira um número inteiro não negativo
    std::cout << "Digite um numero inteiro não negativo: ";
    std::cin >> numero;

    // Verifica se o número é negativo
    if (numero < 0) {
        std::cout << "O número deve ser não negativo." << std::endl;
        return 1; // Encerra o programa com código de erro
    }

    // Inicializa o fatorial como 1
    unsigned long long fatorial = 1;

    // Calcula o fatorial usando um loop for
    for (int i = 1; i <= numero; ++i) {
        fatorial *= i;
    }

    // Imprime o fatorial do número
    std::cout << "O fatorial de " << numero << " é: " << fatorial << std::endl;

    return 0;
}
