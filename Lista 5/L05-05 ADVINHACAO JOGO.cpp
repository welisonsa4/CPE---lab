/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 5
Questão 05
Jogo advinhação
*/
#include <iostream>
#include <cstdlib> // Para as funções rand() e srand()
#include <ctime>   // Para a função time()

int main() {
    // Inicializa o gerador de números aleatórios com uma semente única
    srand(time(nullptr));

    char jogarNovamente;

    do {
        // Escolhe um número aleatório entre 1 e 1000
        int numeroSecreto = rand() % 1000 + 1;

        std::cout << "Eu tenho um número entre 1 e 1000." << std::endl;
        std::cout << "Você consegue adivinhar o meu número?" << std::endl;

        int palpite;
        std::cout << "Digite seu primeiro palpite: ";
        std::cin >> palpite;

        while (palpite != numeroSecreto) {
            if (palpite < numeroSecreto) {
                std::cout << "Muito baixo. Tente novamente." << std::endl;
            } else {
                std::cout << "Muito alto. Tente novamente." << std::endl;
            }

            std::cout << "Digite seu palpite: ";
            std::cin >> palpite;
        }

        std::cout << "Excelente! Você adivinhou o número!" << std::endl;
        std::cout << "Você gostaria de jogar novamente (s ou n)? ";
        std::cin >> jogarNovamente;
    } while (jogarNovamente == 's');

    return 0;
}
