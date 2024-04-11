/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 2
Questão 04
*/
#include <iostream>

// Função para desenhar um quadrado
void desenharQuadrado(int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

// Função para desenhar um círculo oval
void desenharCirculoOval(int raio) {
    for (int i = -raio; i <= raio; ++i) {
        for (int j = -raio; j <= raio; ++j) {
            if (i * i + j * j <= raio * raio) {
                std::cout << "* ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }
}

// Função para desenhar uma seta
void desenharSeta(int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    
    for (int i = tamanho - 1; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

// Função para desenhar um losango
void desenharLosango(int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho - i - 1; ++j) {
            std::cout << "  ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    
    for (int i = tamanho - 2; i >= 0; --i) {
        for (int j = 0; j < tamanho - i - 1; ++j) {
            std::cout << "  ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

int main() {
    // Chama cada função para desenhar os diferentes padrões
    std::cout << "Quadrado:" << std::endl;
    desenharQuadrado(5);
    std::cout << std::endl;
    
    std::cout << "Círculo Oval:" << std::endl;
    desenharCirculoOval(5);
    std::cout << std::endl;
    
    std::cout << "Seta:" << std::endl;
    desenharSeta(5);
    std::cout << std::endl;
    
    std::cout << "Losango:" << std::endl;
    desenharLosango(5);
    std::cout << std::endl;
    
    return 0;
}
