/*
Autor: Welison da Silva Alves
Matrícula: 241037711
Disciplina: Computação para Engenharia
ENE0334 TURMA 02
Professor: Wesin Alves
Título: Lista de Exercício 3
Questão 01
Obs: Eu adaptei o problema original para solucionar uma dúvida minha.
Cálculo determinado: Solicitamos ao usuário que insira o valor total 
abastecido em reais para cada tanque completo. 
Com base no valor total abastecido e no valor do litro do combustível, 
calculamos a quantidade de litros consumidos. 
Em seguida, calculamos o consumo do tanque completo em km/l 
com essa quantidade de litros consumidos.
*/
#include <iostream>
#include <string>

int main() {
    double totalkm= 0.0; // total de km percorridos
    double valorLitro; // Valor do litro do combustível
    double valorTotalAbastecido= 0.0; // Valor total de litro abastecido
    int tanques= 0; // Total de tanques completados
    
    // Solicita ao usuário que insira o valor do litro do combustível
    std::string valorString;
    std::cout << "Digite o valor do combustível (R$): ";
    std::cin >> valorString;
    
    // Converte a string para um valor double
    valorLitro = std::stod(valorString);
    
    // Solicita ao usuário que insira os dados de cada tanque completo
    while (true) {
        double km;
        
        std::cout << "Digite a quantidade de km percorridos (ou -1 para encerrar): ";
        std::cin >> km;
        
        // Verifica se o Km é negativo, indicando o fim da entrada
        if (km < 0) {
            break;
        }
        
        // Calcula o valor total gasto no abastecimento;
        std::cout << "Digite o valor total abastecido (R$): ";
        double valorAbastecido;
        std::cin >> valorAbastecido;
        
        // Calcula a quantidade de litros consumidos
        double litrosConsomidos= valorAbastecido / valorLitro;
        
        // Calcula o consumo do tanque completo em km por litro (km/l)
        double consumo= km / litrosConsomidos;
        
        // Exibe o consumo do tanque completo
        std::cout << "Consumo do tanque " << tanques + 1 << ": " << consumo << " km/l" << std::endl;
        
        
        // Atualiza os totais
        totalkm += km;
        valorTotalAbastecido += valorAbastecido;
        tanques++;
        
        }
        
        // Calcula a média do consumo total
        double mediaConsumo= totalkm / (valorTotalAbastecido / valorLitro);
        
        // Exiba a média do consumo total
        std::cout << "Média do consumo total: " << mediaConsumo << " km/l" << std::endl;
        
        // Exiba o valor total gasto em reais no abastecimento
        std::cout << "Valor total gasto em abastecimento: R$ " << valorTotalAbastecido << std::endl;
        
        return 0;
    }