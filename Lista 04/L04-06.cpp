/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 4
Questão 06
Obs: Apresentei dificuldade nivel avançado para pensar encontrar funções e uma lógica para achar o resultado.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr)); // Seed para gerar números aleatórios
    int minimo = 1; // Limite inferior
    int maximo = 100; // Limite superior
    int palpite; // Palpite do programa
    char resposta; // Resposta do usuário

    std::cout << "Pense em um número entre 1 e 100 e eu vou tentar adivinhar qual é.\n";

    // Loop para fazer no máximo sete perguntas
    for (int i = 0; i < 7; ++i) {
        // Adivinha um número no meio do intervalo atual
        palpite = minimo + (maximo - minimo) / 2;

        // Pergunta ao usuário se o palpite está correto, menor ou maior
        std::cout << "O número que você está pensando é menor que " << palpite << "? (S para Sim, N para Não): ";
        std::cin >> resposta;

        // Verifica a resposta do usuário
        if (resposta == 'S' || resposta == 's') {
            maximo = palpite - 1; // Atualiza o limite superior
        } else {
            minimo = palpite + 1; // Atualiza o limite inferior
        }

        // Se os limites se cruzarem, o programa identificou o número
        if (minimo > maximo) {
            std::cout << "O número que você pensou é: " << minimo << std::endl;
            break;
        }
    }

    return 0;
}
