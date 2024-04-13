/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 4
Questão 4
Obs: Eu adaptei o problema para meu uso pessoal. Gostei da ideia. Foi uma das questões que eu mais gostei de resolver.
*/
#include <iostream>
int main() {
    // Definindo os preços dos produtos
    const double precos_produtos1= 2.98;
    const double precos_produtos2= 4.50;
    const double precos_produtos3= 9.98;
    const double precos_produtos4= 4.49;
    const double precos_produtos5= 6.87;
    
    // Array para armazenar a quantidade de produtos vendidos. 
    // Obs: Pesquisei na biblioteca para descobrir esta função. Array funciona como uma matriz - vetor.
    int quantidades[5] = {0};
    
    // Solicita ao usuário que insira a quantidade vendida para cada produto
    std::cout << "Insira a quantidade vendida para cada produto:\n ";
    std::cout << "Produto 1 (R$2.98): ";
    std::cin >> quantidades[0];
    std::cout << "Produto 2 (R$4.50): ";
    std::cin >> quantidades[1];
    std::cout << "Produto 3 (R$9.98): ";
    std::cin >> quantidades[2];
    std::cout << "Produto 4 (R$4.49): ";
    std::cin >> quantidades[3];
    std::cout << "Produto 5 (R$6,87): ";
    std::cin >> quantidades[4];
    
    // Calcula o total de vendas para cada produto e o total geral
    double total_vendas_produto1 = precos_produtos1 * quantidades[0];
    double total_vendas_produto2 = precos_produtos2 * quantidades[1];
    double total_vendas_produto3 = precos_produtos3 * quantidades[2];
    double total_vendas_produto4 = precos_produtos4 * quantidades[3];
    double total_vendas_produto5 = precos_produtos5 * quantidades[4];
    double total_vendas_geral = total_vendas_produto1 + total_vendas_produto2 + total_vendas_produto3 + total_vendas_produto4 + total_vendas_produto5;
    
    // Exibe o total de vendas para cada produto e o total geral
    std::cout << "\nTotal de vendas do produto 1: R$ " << total_vendas_produto1 << std::endl;
    std::cout << "Total de vendas do produto 2: R$ " << total_vendas_produto2 << std::endl;
    std::cout << "Total de vendas do produto 3: R$ " << total_vendas_produto3 << std::endl;
    std::cout << "Total de vendas do produto 4: R$ " << total_vendas_produto4 << std::endl;
    std::cout << "Total de vendas do produto 5: R$ " << total_vendas_produto5 << std::endl;
    std::cout << "Total de geral vendas: R$ " << total_vendas_geral << std::endl;
    
    return 0;
    
}