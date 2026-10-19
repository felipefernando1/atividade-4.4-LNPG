# Resolução das questões finais do documento:

## 1.No exercício 2, explique por que a troca só funciona por referência.

### Porque, a troca do valor apenas copia o que foi passado, enquanto a troca por referência altera diretamente o valor armazenado no endereço da memória, assim, alterando o seu conteúdo.

## 2.No exercício 4, com n = 5 , desenhe os quadros da soma_rec sendo empilhados e desempilhados (como no interativo da unidade).

### Fase de Empilhamento (Call Stack)
Cada chamada suspende a anterior até atingir o caso base:

```text
 [ Topo da Pilha ]
 ├─ soma_rec(1)  --> Retorna 1 (Caso Base)
 ├─ soma_rec(2)  --> Aguarda: 2 + soma_rec(1)
 ├─ soma_rec(3)  --> Aguarda: 3 + soma_rec(2)
 ├─ soma_rec(4)  --> Aguarda: 4 + soma_rec(3)
 └─ soma_rec(5)  --> Aguarda: 5 + soma_rec(4)
```

### Fase de Desempilhamento (Resolução)
A pilha resolve os cálculos de cima para baixo, liberando a memória:

* **soma_rec(1)** resolve → retorna `1`
* **soma_rec(2)** resolve `2 + 1` $\rightarrow$ retorna `3`
* **soma_rec(3)** resolve `3 + 3` $\rightarrow$ retorna `6`
* **soma_rec(4)** resolve `4 + 6` $\rightarrow$ retorna `10`
* **soma_rec(5)** resolve `5 + 10` $\rightarrow$ retorna **`15`** (Resultado Final)

## 3.No exercício 6, cole o erro que aparece quando você esquece mathlib.o na ligação e explique, em uma frase, o que o ligador estava reclamando.

### Erro: referência não definida para "maior" e referência não definida para "fatorial". O ligador não encontrou as referencias para as funções "maior" e "fatorial", impedindo assim, a execução do programa.
