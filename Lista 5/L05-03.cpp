/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 5
Questão 03
função perfect 
*/
#include <iostream>

bool perfect(int num) {
    int sum = 1; // Inicia a soma com 1, já que todo número é divisível por 1
    std::cout << "Fatores de " << num << ": 1"; // Imprime o primeiro fator
    
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i; // Adiciona o fator à soma
            std::cout << " + " << i; // Imprime o fator
        }
    }

    std::cout << " = " << sum << std::endl; // Imprime a soma dos fatores
    return sum == num; // Retorna verdadeiro se a soma dos fatores for igual ao número
}

int main() {
    std::cout << "Números perfeitos entre 1 e 1000:" << std::endl;
    for (int i = 1; i <= 1000; ++i) {
        if (perfect(i)) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}

