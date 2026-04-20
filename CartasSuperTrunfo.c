#include    <stdio.h>
int main () {

    int c1_populacao, c2_populacao, c1_pontosturistico, c2_pontosturistico;
    char estados[5], nomecidade[30], codigocidade[20];
    char estados2[5], nomecidade2[30], codigocidade2[20];
    float c1_area, c2_area, c1_densidade, c2_densidade;
    double c1_pib, c2_pib, c1_percapita, c2_percapita;


    c1_area = 1521.11;
    c1_pib = 699280000.0;
    c1_populacao = 12325000;
    c1_pontosturistico = 50;
    c1_densidade = c1_populacao/c1_area;
    c1_percapita = c1_pib/c1_populacao;

    
    c2_area = 6748000.00;
    c2_pib = 300500000.0;
    c2_populacao = 6748000;
    c2_pontosturistico = 30;
    c2_densidade = c2_populacao/c2_area;
    c2_percapita = c2_pib/c2_populacao;


    /*Entrada de Dados*/
    printf("Cadastrando CARTA 1 \n");    
    printf(" Estado: ( Selecione: A,B,C,D,E,F ou H ) \n");
    scanf("%s", &estados[0]);

    printf("Digite o Código da Cidade: ( Selecione: 01,02,03 ou 04 ) \n");
    scanf("%s", &codigocidade);   

    printf("Digite o nome da cidade: Exemplo: Vitoria, Fortaleza ... \n");
    scanf("%s", &nomecidade);
    printf("\n");


    printf("Cadastrando CARTA 2 \n");    
    printf(" Estado: ( Selecione: A,B,C,D,E,F ou H ) \n");
    scanf("%s", &estados2[0]);

    printf("Digite o Código da Cidade: ( Selecione: 01,02,03 ou 04 ) \n");
    scanf("%s", &codigocidade2);   

    printf("Digite o nome da cidade: Exemplo: Curitiba, Santos ... \n");
    scanf("%s", &nomecidade2);

    /* Saída de Dados */    
    printf(" Informações da CARTA 1 \n");
    printf(" Cidade: %s \n", estados);    
    printf(" Código da Cidade: %s %s \n", estados, codigocidade);
    printf(" Nome da Cidade: %s \n", nomecidade);
    printf(" População: %d \n", c1_populacao);
    printf(" Área: %2.2f \n", c1_area);
    printf(" PIB: %2.2f \n", c1_pib);
    printf(" Pontos Turísticos: %d \n", c1_pontosturistico);
    printf(" Densidade populacional: %2.2f \n", c1_densidade);
    printf(" PIB per capita: %2.2f \n \n", c1_percapita);


    printf(" Informações da CARTA 2 \n");
    printf(" Cidade: %s \n", estados2);    
    printf(" Código da Cidade: %s %s \n", estados2, codigocidade2);
    printf(" Nome da Cidade: %s \n", nomecidade2);
    printf(" População: %d \n", c2_populacao);
    printf(" Área: %2.2f \n", c2_area);
    printf(" PIB: %2.2f \n", c2_pib);
    printf(" Pontos Turísticos: %d \n", c2_pontosturistico);
    printf(" Densidade populacional: %2.2f \n", c2_densidade);
    printf(" PIB per capita: %2.2f \n", c1_percapita);



        return 0;
}
