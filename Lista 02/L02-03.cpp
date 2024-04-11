/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 2
Questão 03
*/
#include <iostream>

int main () {
    // Declaração da constante pi
    const double pi = 3.14159;
    
    // Declaração da variável para o usuário armazenar o raio
    double raio;
    
    // Solicita ao usuário fornecer o raio do círculo
    std::cout << "Digite o raio do círculo: ";
    std::cin >> raio;
    
    // Calcula o diâmetro da circunferência
    double diametro = 2 * raio;
    
    // Calcula a área do círculo
    double area = pi * raio * raio;
    
    // Imprime o diâmetro e a área do círculo
    std:: cout << "Diametro da circunferência: " << diametro << std:: endl;
    std::cout << "Area do circulo: " << area << std::endl;
    return 0;
    
}
