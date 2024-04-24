/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 5
Questão 04
Jogo multiplicação
*/
#include <iostream>
#include <cstdlib> // Para a função rand() e srand()
#include <ctime>   // Para a função time()

int main() {
    // Gerar números aleatórios
    srand(time(nullptr));

    while (true) {
        // Gerar dois números inteiros entre 0 e 1000
        int num1 = rand() % 10 + 1;
        int num2 = rand() % 10 + 1;

        // Exibir a pergunta
        std::cout << "Quanto é " << num1 << " vezes " << num2 << "? ";

        // Ler a resposta do aluno
        int resposta;
        std::cin >> resposta;

        // Verificar se a resposta está correta
        while (resposta != num1 * num2) {
            std::cout << "Não. Por favor, tente novamente." << std::endl;
            std::cout << "Quanto é " << num1 << " vezes " << num2 << "? ";
            std::cin >> resposta;
        }

        // Se a resposta estiver correta, imprimir "Muito bom!"
        std::cout << "Muito bom!" << std::endl;
    }

    return 0;
}
