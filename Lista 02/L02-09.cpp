/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 2
Questão 09
*/
#include <iostream>

int main() {
    // Constantes de custo por quilômetro
    const double custoAte50Km = 1.75;
    const double custoEntre51E150Km = 1.65;
    const double custoAcima150Km = 1.50;

    // Variável para armazenar a distância percorrida em quilômetros
    double distanciaKm;

    // Solicita ao usuário que insira a distância percorrida em quilômetros
    std::cout << "Digite a distância percorrida em quilômetros: ";
    std::cin >> distanciaKm;

    // Calcula o custo total do aluguel do automóvel
    double custoTotal;
    if (distanciaKm <= 50) {
        custoTotal = distanciaKm * custoAte50Km;
    } else if (distanciaKm <= 150) {
        custoTotal = 50 * custoAte50Km + (distanciaKm - 50) * custoEntre51E150Km;
    } else {
        custoTotal = 50 * custoAte50Km + 100 * custoEntre51E150Km + (distanciaKm - 150) * custoAcima150Km;
    }

    // Calcula o custo médio por quilômetro
    double custoMedioPorKm = custoTotal / distanciaKm;

    // Exibe o custo total do aluguel e o custo médio por quilômetro
    std::cout << "Custo total do aluguel do automovel: " << custoTotal << " reais" << std::endl;
    std::cout << "Custo médio por quilômetro: " << custoMedioPorKm << " reais" << std::endl;

    return 0;
}
