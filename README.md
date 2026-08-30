# Jogo Super Trunfo em Linguagem C

Trabalho para a faculdade: criacao de um jogo de cartas Super Trunfo em linguagem C.

Este projeto e um jogo simples de Super Trunfo em linguagem C. O programa compara duas cartas de paises usando atributos numericos e indica qual carta vence.

## Funcionalidades

- Escolha de um atributo para comparacao.
- Leitura do valor do atributo para a Carta A e para a Carta B.
- Exibicao de qual carta venceu (ou se houve empate).

## Atributos das cartas

Cada carta possui os seguintes atributos:

- Area (tamanho total do pais em km2)
- Densidade populacional do pais
- Expectativa de vida do pais
- Numero de capitais do pais
- Numero de idiomas falados no pais
- Numero de pontos turisticos no pais

## Como compilar e executar

Em um terminal, dentro da pasta do projeto:

```bash
gcc trabalho.c -o jogo
```

Depois, execute o programa gerado:

```bash
./jogo
```

(No Windows, use `jogo.exe` para executar.)

## Como jogar

1. Execute o programa.
2. Escolha o numero do atributo que deseja comparar.
3. Digite o valor do atributo para a Carta A.
4. Digite o valor do atributo para a Carta B.
5. Veja qual carta venceu segundo o valor maior informado.
