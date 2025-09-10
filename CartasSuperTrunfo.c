#include <stdio.h>
#include <string.h>  // Função inserida para correção do problema com o espaço no nome das cidades.
    

    
int main() {
    /* DECLARAÇÃO DE VARIÁVEIS */   
    char Estado1, Estado2;
    char CodigoCarta1[3], CodigoCarta2[3];
    char NomeCidade1[20], NomeCidade2[20];
    int Populacao1, Populacao2, PontosTuristicos1, PontosTuristicos2;
    float Pib1, Pib2, Area1, Area2;
    float RendaPerCapita1,RendaPerCapita2,DensidadeDemografica1,DensidadeDemografica2;
    /* FIM DECLARAÇÃO DE VARIÁVEIS */

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
    NomeCidade1[strcspn(NomeCidade1, "\n")] = '\0'; // remove '\n'

    printf("Digite o número de habitantes:\n");
    scanf("%d", &Populacao1);

    printf("Digite a área da cidade em km² (use ponto para decimal):\n");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade em bilhões de reais (use ponto para decimal):\n");
    scanf("%f", &Pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &PontosTuristicos1);

    /*Calcula Pib per capita e densidade demográfica da carta 1 */

    RendaPerCapita1 = Pib1*(1e9)/Populacao1;
    DensidadeDemografica1 = Populacao1/(Area1);

    printf("\nCarta 1 cadastrada com sucesso!\n\nVamos Cadastrasr uma nova carta?\n\n");

    /* CADASTRO CARTA 2 */
    printf("=== Cadastro da Carta 2 ===\n");

    printf("Digite uma letra entre 'A' e 'H' para representar o estado:\n");
    scanf(" %c", &Estado2);

    printf("Digite um número entre '01' e '04' para o código da carta:\n");
    scanf("%s", CodigoCarta2);

    printf("Digite o nome da cidade (sem acentos):\n");
    getchar(); // limpa buffer
    fgets(NomeCidade2, sizeof(NomeCidade2), stdin);
    NomeCidade2[strcspn(NomeCidade2, "\n")] = '\0';

    printf("Digite o número de habitantes:\n");
    scanf("%d", &Populacao2);

    printf("Digite a área da cidade em km² (use ponto para decimal):\n");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade em bilhões de reais (use ponto para decimal):\n");
    scanf("%f", &Pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &PontosTuristicos2);

    
    /*Calcula Pib per capita e densidade demográfica da carta 2 */

    RendaPerCapita2 = Pib2*(1e9)/Populacao2;
    DensidadeDemografica2 = Populacao2/(Area2);


    /* APRESENTAÇÃO DAS CARTAS */
    printf("\n=== Cartas Cadastradas ===\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %c%s\n", Estado1, CodigoCarta1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %d habitantes\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de Reais\n", Pib1);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Área: %.2f km²\n", Area1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadeDemografica1);
    printf("Pib per Capita: %.2f Reais\n", RendaPerCapita1);


    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %c%s\n", Estado2, CodigoCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %d habitantes\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de Reais\n", Pib2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadeDemografica2);
    printf("Pib per Capita: %.2f Reais\n", RendaPerCapita2);


    







    return 0;
}


    