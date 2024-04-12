/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 3
Questão 06
*/
#include <iostream>

int main() {
    double lado1, lado2, lado3;

    // Solicita ao usuário que insira as medidas dos lados do triângulo
    std::cout << "Digite o comprimento do primeiro lado do triângulo: ";
    std::cin >> lado1;

    std::cout << "Digite o comprimento do segundo lado do triângulo: ";
    std::cin >> lado2;

    std::cout << "Digite o comprimento do terceiro lado do triângulo: ";
    std::cin >> lado3;

    // Verifica o tipo de triângulo com base nas medidas dos lados
    if (lado1 == lado2 && lado2 == lado3) {
        std::cout << "O triangulo é Equilátero." << std::endl;
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        std::cout << "O triangulo é Isósceles." << std::endl;
    } else {
        std::cout << "O triangulo é Escaleno." << std::endl;
    }

    return 0;
}
