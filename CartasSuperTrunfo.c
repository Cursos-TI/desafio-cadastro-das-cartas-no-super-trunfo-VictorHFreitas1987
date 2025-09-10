#include <stdio.h>
#include <string.h>

int main() {
    /* DECLARAÇÃO DE VARIÁVEIS */   
    char Estado1, Estado2;
    char CodigoCarta1[3], CodigoCarta2[3];
    char NomeCidade1[20], NomeCidade2[20];
    unsigned long int Populacao1, Populacao2;
    int PontosTuristicos1, PontosTuristicos2;
    float Pib1, Pib2, Area1, Area2;
    float RendaPerCapita1, RendaPerCapita2;
    float DensidadeDemografica1, DensidadeDemografica2;
    float SuperPoder1, SuperPoder2;
    int Comparacao;

    /* MENSAGEM INICIAL */
    printf("Olá, bem-vindo ao Jogo Super Trunfo!\nVamos cadastrar cartas no jogo?\n");
    printf("Após digitar o valor, aperte ENTER para confirmar e seguir para o próximo item.\n\n");

    /* CADASTRO CARTA 1 */
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite uma letra entre 'A' e 'H' para representar o estado:\n");
    scanf(" %c", &Estado1);

    printf("Digite um número entre '01' e '04' para o código da carta:\n");
    scanf("%s", CodigoCarta1);

    printf("Digite o nome da cidade (sem acentos):\n");
    getchar(); // limpa buffer do ENTER anterior
    fgets(NomeCidade1, sizeof(NomeCidade1), stdin);
    NomeCidade1[strcspn(NomeCidade1, "\n")] = '\0';

    printf("Digite o número de habitantes:\n");
    scanf("%lu", &Populacao1);

    printf("Digite a área da cidade em km² (use ponto para decimal):\n");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade em bilhões de reais (use ponto para decimal):\n");
    scanf("%f", &Pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &PontosTuristicos1);

    /* Cálculo da Carta 1 */
    RendaPerCapita1 = Pib1 * 1e9 / Populacao1;
    DensidadeDemografica1 = Populacao1 / Area1;
    SuperPoder1 = Populacao1 + Area1 + Pib1 + PontosTuristicos1 + RendaPerCapita1 + (1.0 / DensidadeDemografica1);

    printf("\nCarta 1 cadastrada com sucesso!\n\nVamos cadastrar uma nova carta?\n\n");

    /* CADASTRO CARTA 2 */
    printf("=== Cadastro da Carta 2 ===\n");
    printf("Digite uma letra entre 'A' e 'H' para representar o estado:\n");
    scanf(" %c", &Estado2);

    printf("Digite um número entre '01' e '04' para o código da carta:\n");
    scanf("%s", CodigoCarta2);

    printf("Digite o nome da cidade (sem acentos):\n");
    getchar();
    fgets(NomeCidade2, sizeof(NomeCidade2), stdin);
    NomeCidade2[strcspn(NomeCidade2, "\n")] = '\0';

    printf("Digite o número de habitantes:\n");
    scanf("%lu", &Populacao2);

    printf("Digite a área da cidade em km² (use ponto para decimal):\n");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade em bilhões de reais (use ponto para decimal):\n");
    scanf("%f", &Pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &PontosTuristicos2);

    /* Cálculo da Carta 2 */
    RendaPerCapita2 = Pib2 * 1e9 / Populacao2;
    DensidadeDemografica2 = Populacao2 / Area2;
    SuperPoder2 = Populacao2 + Area2 + Pib2 + PontosTuristicos2 + RendaPerCapita2 + (1.0 / DensidadeDemografica2);

    /* APRESENTAÇÃO DAS CARTAS */
    printf("\n=== Cartas Cadastradas ===\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %c%s\n", Estado1, CodigoCarta1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %lu habitantes\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de Reais\n", Pib1);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadeDemografica1);
    printf("PIB per Capita: %.2f Reais\n", RendaPerCapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %c%s\n", Estado2, CodigoCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %lu habitantes\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de Reais\n", Pib2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadeDemografica2);
    printf("PIB per Capita: %.2f Reais\n", RendaPerCapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    /* COMPARAÇÃO */
    printf("\n=== Comparação de Cartas ===\n\n");

    printf("População: Carta 1 venceu (%d)\n", Populacao1 > Populacao2);
    printf("Área: Carta 1 venceu (%d)\n", Area1 > Area2);
    printf("PIB: Carta 1 venceu (%d)\n", Pib1 > Pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", PontosTuristicos1 > PontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", DensidadeDemografica1 < DensidadeDemografica2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", RendaPerCapita1 > RendaPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);

    return 0;
}
