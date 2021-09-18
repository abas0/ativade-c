#include <stdlib.h>
#include <stdio.h>

float salarioLiquido(float salario, float imposto){
    salario -= imposto;
    return salario;
}

void imprimirCadastro(char nome_trabalhador[61], float salario, float imposto){
    printf("<------------- CADASTRO DO TRABALHADOR ------------>\n");
    printf("Nome do trabalhador: %s\n", nome_trabalhador);
    salario = salarioLiquido(salario, imposto);
    printf("Salario líquido: %.2f\n", salario);
}

float aumentoSalario(float aumento, float salario, float imposto){
    salario = salarioLiquido(salario, imposto);
    salario = salario + salario * (aumento/100);
    return salario;
}

void imprimirAumento(char nome_trabalhador[61], float salario, float aumento, float imposto){
    printf("<------------- SALÁRIO ATUALIZADO ------------>\n");
    printf("Nome do trabalhador: %s\n", nome_trabalhador);

    salario = aumentoSalario(aumento, salario, imposto);
    printf("Aumento: %.2f\n", aumento);
    printf("Salario: %.2f\n", salario);
    printf("Imposto: %.2f\n", imposto);
    printf("Novo salário: %.2f\n", salario);
}

int main (){
    char nome_trabalhador[61];
    float salario, imposto, aumento;
    printf("Digite o nome do trabalhador: \n");
    scanf("%s", nome_trabalhador);
    printf("Digite seu salario bruto: \n");
    scanf("%f", &salario);
    printf("Digite o imposto sob o salário: \n");
    scanf("%f", &imposto);
    imprimirCadastro(nome_trabalhador, salario, imposto);
    printf("Digite a porcentagem do aumento:\n");
    scanf("%f", &aumento);
    imprimirAumento(nome_trabalhador, salario, aumento, imposto);
    return 0;
}
