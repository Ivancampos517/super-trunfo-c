#include <stdio.h> // Inclusão da biblioteca padrão de entrada e saída

int main() {// Início da função principal
    int escolha;// Declaração da variável para armazenar a escolha do atributo
    double valorcartaA, valorcartaB;// Declaração das variáveis para armazenar a escolha do atributo e os valores das cartas

    printf("\nEscolha o atributo para comparar:\n"); // Menu de atributos
    printf("-------------------------------------------------------\n");// Linha de separação para melhor visualização
    printf("1 - Area (Tamanho total do pais)\n");// Este printef indica a escolha do atributo "Area (km²)"
    printf("2 - Densidade populacional do pais\n");// Este printef indica a escolha do atributo "Densidade populacional (pessoas por km²)"
    printf("3 - Expectativa de vida do pais\n");// Este printef indica a escolha do atributo "Expectativa de vida"
    printf("4 - Numero de capitais do pais\n");// Este printef indica a escolha do atributo "Numero de capitais"
    printf("5 - Numero de idiomas falados no pais\n");// Este printef indica a escolha do atributo "Numero de idiomas oficiais"
    printf("6 - Numero de pontos turisticos no pais\n\n");// Este printef indica a escolha do atributo "Numero de pontos turisticos"
    printf("--------------------------------------------------------\n");// Linha de separação para melhor visualização
    printf("Escolha um dos numero do atributo acima: ");// Solicita ao usuario que digite o numero do atributo escolhido
    scanf("%d", &escolha);// Lê a escolha do usuario

    printf("\nDigite o valor do atributo escolhido para a Carta A: ");// Solicita ao usuario que digite o valor do atributo escolhido para a Carta A
    scanf("%lf", &valorcartaA);// Lê o valor do atributo para a Carta A "%lf" é usado para ler valores do tipo double

    printf("\nDigite o valor do atributo escolhido para a Carta B: ");// Solicita ao usuario que digite o valor do atributo escolhido para a Carta B
    scanf("%lf", &valorcartaB);// Lê o valor do atributo para a Carta B "%lf" é usado para ler valores do tipo double

    printf("\nValor da Carta A: %.2f\n", valorcartaA);// Exibe o valor do atributo escolhido para a Carta A
                            // "%.2f" formata o valor para exibir duas casas decimais
    printf("\nValor da Carta B: %.2f\n", valorcartaB);// Exibe o valor do atributo escolhido para a Carta B
 
    if (valorcartaA > valorcartaB) {// Compara os valores e determina o vencedor
        printf("\nCarta A venceu..\n");// Indica que a Carta A venceu
    } 
    else if (valorcartaB > valorcartaA) { // Compara os valores e determina o vencedor
        printf("\nCarta B venceu..\n");// Indica que a Carta B venceu
    } 
    else { // Compara os valores e determina o vencedor
        printf("\nEmpate.\n");// Indica que houve um empate
    } 
        printf("\nObrigado por jogar!\n");// Mensagem de agradecimento ao usuario   
        
    return 0;// Indica que o programa terminou com sucesso
}
// Observação: O texto em verde são comentários explicativos sobre o código e podem ser removidos se necessário.