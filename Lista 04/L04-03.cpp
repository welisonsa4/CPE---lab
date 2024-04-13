/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 4
Questão 03
Obs: Dificuldade nível avançado para resolver o determinado problema.
*/
#include <iostream>

int main() {
    std::cout << "Triplos de Pitagoras:\n";

    // Loop para lado1
    for (int lado1 = 1; lado1 <= 20; ++lado1) {
        // Loop para lado2
        for (int lado2 = lado1; lado2 <= 20; ++lado2) {
            // Loop para hipotenusa
            for (int hipotenusa = lado2; hipotenusa <= 20; ++hipotenusa) {
                // Verifica se é um triplo de Pitágoras
                if (lado1 * lado1 + lado2 * lado2 == hipotenusa * hipotenusa) {
                    std::cout << "Lado1: " << lado1 << ", Lado2: " << lado2 << ", Hipotenusa: " << hipotenusa << '\n';
                }
            }
        }
    }

    return 0;
}
