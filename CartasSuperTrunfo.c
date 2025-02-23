#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char Pais[20];
    char Estado[20];
    char Cidade[20];
    char CodCarta[3];
    int Populacao;
    int PonTuristicos;
    float Area;
    float PIB;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Pergunta o nome do país.
    printf("Qual o nome do Pais? \n");
    scanf("%s", Pais);
    //Pergunta o nome do estado.
    printf("Qual o nome do Estado? \n");
    scanf("%s", Estado);
    //Perguta o nome da cidade.
    printf("Qual o nome da cidade? \n");
    scanf("%s", Cidade);
    //Pergunta o código da carta.
    printf("Qual o codigo da carta? \n");
    scanf("%s", CodCarta);
    //Pergunta a população da cidade.
    printf("Qual a população da cidade? \n");
    scanf("%d", &Populacao);
    //Pergunta a área geográfica da cidade.
    printf("Qual a area geografica da cidade? \n");
    scanf("%f", &Area);
    //Perguta o PIB da cidade.
    printf("Qual o PIB da cidade? \n");
    scanf("%f", &PIB);
    //Pergunta o número de pontos turísticos da cidade.
    printf("Quantos pontos turisticos ha na cidade? \n");
    scanf("%d", &PonTuristicos);
    
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}