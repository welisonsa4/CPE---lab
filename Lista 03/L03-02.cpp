/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 3
Questão 02
*/
#include <iostream>

int main() {
    double precoAlcool, precoGasolina;

    // Solicita ao usuário os preços do álcool e da gasolina
    std::cout << "Digite o preço do litro do álcool: ";
    std::cin >> precoAlcool;

    std::cout << "Digite o preço do litro da gasolina: ";
    std::cin >> precoGasolina;

    // Calcula a relação entre os preços do álcool e da gasolina
    double relacao = precoAlcool / precoGasolina;

    // Verifica se o etanol vale a pena em relação à gasolina
    if (relacao <= 0.7) {
        std::cout << "Recomendação: Abastecer com álcool." << std::endl;
    } else {
        std::cout << "Recomendação: Abastecer com gasolina." << std::endl;
    }

    return 0;
}
