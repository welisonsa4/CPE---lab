/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 2
*/

#include <iostream>

int main(){
    // Declaração das variáveis para armazenar os números fornecidos pelo usuário
    double numero1, numero2;
    
    // Solicita ao usuário fornecer os dois números
    std::cout << "Digite o primeiro número: ";
    std::cin >> numero1;
    
    std::cout <<"Digite o segundo número: ";
    std::cin >> numero2;
    
    // Calcula e imprime a soma dos números
    std::cout << "Soma: " <<numero1 + numero2 << std:: endl;
    
    // Calcula e imprime o produto dos números
    std::cout << "Produto: " << numero1 * numero2 << std:: endl;
    
    // Calcula e imprime a diferença dos números (subtração)
    std:: cout << "Diferença: " << numero1 - numero2 << std:: endl;
    
    // Verifica se o segundo número não é zero antes de calcular o quociente
    if (numero2 !=0) {
        // Calcula e imprime o quociente dos números
        std::cout << "Quociente: " << numero1 / numero2 << std:: endl;
    } else {
        std:: cout << "Não é possível dividir por zero." << std:: endl;
    }
    
    return 0;
    }