#include <stdio.h>

int main() {
    int N, i, j;
    float nota, soma, maior, menor, nota_final_candidato = 0;
    float notas[100]; // Vetor para armazenar as notas de cada área
    char *areas[] = {
        "Raciocínio Lógico",
        "Conceitos de Gerenciamento de Projetos",
        "Língua Inglesa",
        "Conceitos de Metodologia Ágil",
        "Linguagem JavaScript"
    };
    
    
    for (i = 0; i < 5; i++) {
        printf("Digite a quantidade de notas para %s: ", areas[i]);
        scanf("%d", &N);
        
        
        if (N <= 2) {
            printf("Quantidade de notas inválida. Deve ser maior que 2.\n");
            return 1; // Termina o programa caso N <= 2
        }
        
        
        printf("Digite as %d notas para %s: ", N, areas[i]);
        for (j = 0; j < N; j++) {
            scanf("%f", &notas[j]);
        }
        
        
        soma = 0;
        maior = notas[0];
        menor = notas[0];
        
        
        for (j = 0; j < N; j++) {
            soma += notas[j];
            if (notas[j] > maior) {
                maior = notas[j];
            }
            if (notas[j] < menor) {
                menor = notas[j];
            }
        }
        
        
        soma = soma - maior - menor;
        
        
        printf("Nota de %s = %.0f\n", areas[i], soma);
        
        
        nota_final_candidato += soma;
    }
    
    
    printf("Nota final do candidato = %.0f\n", nota_final_candidato);

    return 0;
}

