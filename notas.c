#include <stdio.h>
 
int main(){
    float nota1 , nota2, nota3, nota4, media;
     printf("Digite a primeira nota:");
     scanf("%f",&nota1);
 
     printf("Digite a segunda nota:");
     scanf("%f",&nota2);
 
     printf("Digite a terceira nota:");
     scanf("%f",&nota3);
 
     printf("Digite a quarta nota:");
     scanf("%f",& nota4);
 
     media = (nota1 + nota2 + nota3 + nota4) / 4;
 
     printf("a media do estudante e: %f\n", media);
 
     if (media >= 6){
        printf("Estudante aprovado!%.2f\n");
     } else{
        printf("Estudante reprovado!%.2f\n");
     }
    return 0;
}

