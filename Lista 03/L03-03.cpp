/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 3
Questão 03
Obs: Apresentei dificuldades para entender a fórumula matemática. 
O código poderia ser realizado de duas formas: 
1- Transformar o número em uma string e inverter ela
2- Separar os dígitos utilizando divisão e operador módulo (dificuldade)
*/
#include <iostream>

int main() {
    int numero;

    // Solicita ao usuário que insira um número de cinco dígitos
    std::cout << "Digite um numero de cinco digitos: ";
    std::cin >> numero;

    // Separa os dígitos do número
    int digito1 = numero / 10000;
    int digito2 = (numero % 10000) / 1000;
    int digito3 = (numero % 1000) / 100;
    int digito4 = (numero % 100) / 10;
    int digito5 = numero % 10;

    // Verifica se o número é um palíndromo
    if (digito1 == digito5 && digito2 == digito4) {
        std::cout << "O numero " << numero << " é um palindromo!" << std::endl;
    } else {
        std::cout << "O numero " << numero << " não é um palindromo." << std::endl;
    }

    return 0;
}
