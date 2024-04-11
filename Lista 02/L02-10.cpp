/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 2
Questão 10
Obs: Tive dificuldades por conta das variáveis. 
Utilizei ferramentas de pesquisas online como auxílio.
*/
#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Digite uma string com 5 caracteres: ";
    std::cin >> input;

    if (input.length() != 5) {
        std::cerr << "Erro: A string fornecida deve conter exatamente 5 caracteres." << std::endl;
        return 1;
    }

    // Contadores de vogais
    int frequenciaA = 0, frequenciaE = 0, frequenciaI = 0, frequenciaO = 0, frequenciaU = 0;

    // Calcula a frequência das vogais
    for (char c : input) {
        switch (c) {
            case 'a':
                frequenciaA++;
                break;
            case 'e':
                frequenciaE++;
                break;
            case 'i':
                frequenciaI++;
                break;
            case 'o':
                frequenciaO++;
                break;
            case 'u':
                frequenciaU++;
                break;
        }
    }

    // Exibe a frequência das vogais
    std::cout << "Frequencia das vogais na string:" << std::endl;
    std::cout << "a: " << frequenciaA << " vezes" << std::endl;
    std::cout << "e: " << frequenciaE << " vezes" << std::endl;
    std::cout << "i: " << frequenciaI << " vezes" << std::endl;
    std::cout << "o: " << frequenciaO << " vezes" << std::endl;
    std::cout << "u: " << frequenciaU << " vezes" << std::endl;

    // Aplica a criptografia na string
    for (char& c : input) {
        switch (c) {
            case 'a':
                c = 'i';
                break;
            case 'e':
                c = 'o';
                break;
            case 'i':
                c = 'u';
                break;
        }
    }

    // Exibe a nova string criptografada
    std::cout << "Nova string criptografada: " << input << std::endl;

    return 0;
}