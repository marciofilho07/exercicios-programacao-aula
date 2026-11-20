#include <stdio.h>

int main() {
    float nota, nota2, media;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota + nota2) / 2;

    printf("%s %.2f\n", media >= 6 ? "Aprovado com a media:" : "Reprovado com a media:", media);

    return 0;
}
