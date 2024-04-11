/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 2
Questão 06
*/
#include <iostream>
int main (){
    // Declaração das variáveis para armazenar os números
    int numero1, numero2;
    
    // Solicita que o usuário insira os dois números
    std::cout << "Digite o primeiro número: ";
    std::cin >> numero1;
    
    std::cout <<"Digite o segundo número: ";
    std::cin >> numero2;
    
    // Verifica se o primeiro número é múltiplo do segundo
    if (numero2 !=0 && numero1 % numero2 == 0) {
        std::cout << numero1 << " é múltiplo de " << numero2 << std:: endl;
    } else {
        std:: cout << numero1 << " não é múltiplo de " << numero2 << std:: endl;
    }
    
    return 0;
    }
        