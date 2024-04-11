/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 2
Questão 07
Fórmula: hipotenusa^2= cateto1^2 + cateto2^2
*/
#include <iostream>
#include <cmath>

int main (){
    double cateto1, cateto2, hipotenusa;
    
    // Solicita ao usuário que insera os valores dos catetos
    std::cout << "Digite o valor do primeiro cateto: ";
    std::cin >> cateto1;
    
    std::cout << "Digite o valor do segundo cateto: ";
    std:: cin >> cateto2;
    
    // Calcula a hipotenusa utilizando o Teorema de Pitágoras
    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
    
    // Exibe o valor da hipotenusa
    std::cout << "O valor da hipotenusa é: " << hipotenusa << std::endl;
    
    return 0;

}

