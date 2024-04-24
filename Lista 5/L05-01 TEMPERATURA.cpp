/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 5
Questão 01
- função para retornar o equivalente em Fahrenheit de uma
temperatura Celsius.
*/
#include <iostream>
#include <iomanip>

using namespace std;

double celsius_para_fahrenheit(double celsius) {
    return (9.0/5.0) * celsius + 32;
}

int main() {
    cout << "Celsius / Fahrenheit" << endl;
    cout << "-------------------" << endl;
    cout << fixed << setprecision(1);
    for (int celsius = 0; celsius <= 100; ++celsius) {
        double fahrenheit = celsius_para_fahrenheit(celsius);
        cout << setw(7) << left << celsius << "  -  " << setw(10) << right << fahrenheit << endl;
    }
    return 0;
}

