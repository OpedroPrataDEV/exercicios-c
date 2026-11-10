# Exercícios de C

Resolução de exercícios em linguagem C, organizados por tema: variáveis, decisão, repetição, vetores, matrizes, strings, funções, recursão e structs.

## Origem dos enunciados

Os enunciados vêm da lista de exercícios do curso **Programação com a Linguagem C**, de **Wagner Gaspar** (Udemy). Os enunciados são do instrutor; as soluções deste repositório são minhas.

## Estrutura

- `Exercícios de Lógica/`: Seção 2 do curso (introdução à linguagem C), arquivos `Ex02.c` a `Ex08.c`.
- `Estruturas de Decisão/`: Seção 3 do curso (estruturas de decisão e seleção), arquivos `Ex01.c` a `Ex13.c`.
- `Estruturas de Repetição/`: Seção 4 do curso (estruturas de repetição), arquivos `Ex01.c` a `Ex22.c` (em andamento).
- `BeeCrowd/`: problemas do BeeCrowd (antigo URI Online Judge) resolvidos em C, arquivos `BeeCrowd_<número>.c`. Este repositório tem só as minhas soluções; os enunciados pertencem à plataforma.

Nas pastas do curso, os arquivos seguem a numeração dos exercícios da lista. Novas pastas serão criadas conforme eu avançar nas seções.

## Convenções

- Um arquivo por exercício, com o número do exercício no nome.
- Um commit por exercício, com o tema e o número na mensagem.
- Executáveis compilados não são versionados (veja o `.gitignore`).

## Como compilar e executar

```bash
gcc -Wall -o ex01 Ex01.c
./ex01
```
