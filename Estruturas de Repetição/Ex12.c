#include <stdio.h>

int main(void) {
    int idade;
    float altura;

    int totalIdade = 0;
    int contadorIdade = 0; // Conta alunos com < 1.70m

    float totalAltura = 0.0;
    int contadorAltura = 0; // Conta alunos com > 20 anos

    for(int i = 1; i <= 5; i++) {
        printf("Digite a Idade e a Altura do Aluno %d: ", i);
        scanf("%d %f", &idade, &altura);

        // Alunos com menos de 1.70m (usar PONTO, não vírgula)
        if(altura < 1.70) {
            totalIdade += idade;
            contadorIdade++;
        }

        // Alunos com mais de 20 anos
        if(idade > 20) {
            totalAltura += altura;
            contadorAltura++;
        }
    }

    printf("\n--- RESULTADOS ---\n");

    // Processamento da Letra a) (Idade média dos com < 1.70m)
    if(contadorIdade == 0) {
        printf("Nenhum Aluno com menos de 1.70m\n");
    } else {
        float mediaIdade = (float)totalIdade / contadorIdade;
        printf("A idade media dos alunos com menos de 1.70m: %.2f anos\n", mediaIdade);
    }

    // Processamento da Letra b) (Altura média dos com > 20 anos)
    if(contadorAltura == 0) {
        printf("Nenhum Aluno Com mais de 20 Anos\n");
    } else {
        float mediaAltura = totalAltura / contadorAltura;
        printf("A altura media dos alunos com mais de 20 anos: %.2f m\n", mediaAltura);
    }

    return 0;
}