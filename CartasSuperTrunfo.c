#include <stdio.h>
#include <locale.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char Estado;
    char CodCarta[20];
    char Cidade[20];
    int Populacao;
    int PonTuristicos;
    float Area;
    float PIB;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Pergunta o nome do estado.
    printf("Qual o nome do Estado? \n");
    scanf("%c", &Estado);
    //Pergunta o código da carta.
    printf("Qual o código da carta? \n");
    scanf("%s", CodCarta);
    //Perguta o nome da cidade.
    printf("Qual o nome da cidade? \n");
    scanf("%s", Cidade);
    //Pergunta a população da cidade.
    printf("Qual a população da cidade? \n");
    scanf("%d", &Populacao);
    //Pergunta a área geográfica da cidade.
    printf("Qual a área geográfica da cidade (em km²)? \n");
    scanf("%f", &Area);
    //Perguta o PIB da cidade.
    printf("Qual o PIB da cidade (Bilhoes de reais)? \n");
    scanf("%f", &PIB);
    //Pergunta o número de pontos turísticos da cidade.
    printf("Quantos pontos turísticos ha na cidade? \n");
    scanf("%d", &PonTuristicos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Estado: %c\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("Código da carta: %s\n", CodCarta);
    printf("População: %d\n", Populacao);
    printf("Área (em km²): %f\n", Area);
    printf("PIB da cidade (Bilhoes de reais): %f\n", PIB);
    printf("Pontos turísticos: %d\n", PonTuristicos);

    return 0;
}