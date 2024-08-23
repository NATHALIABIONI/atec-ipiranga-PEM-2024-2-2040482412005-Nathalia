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
    
    // Processamento para as 5 áreas
    for (i = 0; i < 5; i++) {
        printf("Digite a quantidade de notas para %s: ", areas[i]);
        scanf("%d", &N);
        
        // Verifica se N é maior que 2
        if (N <= 2) {
            printf("Quantidade de notas inválida. Deve ser maior que 2.\n");
            return 1; // Termina o programa caso N <= 2
        }
        
        // Ler as N notas para a área
        printf("Digite as %d notas para %s: ", N, areas[i]);
        for (j = 0; j < N; j++) {
            scanf("%f", &notas[j]);
        }
        
        // Inicializar variáveis
        soma = 0;
        maior = notas[0];
        menor = notas[0];
        
        // Encontrar maior, menor e somar todas as notas
        for (j = 0; j < N; j++) {
            soma += notas[j];
            if (notas[j] > maior) {
                maior = notas[j];
            }
            if (notas[j] < menor) {
                menor = notas[j];
            }
        }
        
        // Excluir a maior e a menor nota da soma
        soma = soma - maior - menor;
        
        // Imprimir a nota da área
        printf("Nota de %s = %.0f\n", areas[i], soma);
        
        // Acumular a soma final do candidato
        nota_final_candidato += soma;
    }
    
    // Imprimir a nota final do candidato
    printf("Nota final do candidato = %.0f\n", nota_final_candidato);

    return 0;
}

