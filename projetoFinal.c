#include <stdio.h>
#define R 25

float calcularPeso(float V){
    return V*R;
}

int main(){
    //Variaveis do volume
    float altura, largura, comprimento, volumeTotal;
    float pesoGuindaste;

    printf("Digite o valor da altura: \n");
    scanf("%f",&altura);
    printf("Digite o valor da largura: \n");
    scanf("%f",&largura);
    printf("Digite o valor da comprimento: \n");
    scanf("%f",&comprimento);
    volumeTotal = altura * comprimento * largura;

    pesoGuindaste = calcularPeso(volumeTotal);

    

}