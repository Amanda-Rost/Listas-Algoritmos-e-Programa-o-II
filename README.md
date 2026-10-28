# Listas-Algoritmos-e-Programa-o-II
Listas de exercicios da cadeira Algoritmos e Programação II

## 🚀 Como executar

Execute o comando abaixo para criar o executavel:

* Arquivo unico:
```bash
gcc exercicio5.c -o exercicio5
```
* Grupo de arquivos um deles:
1) 
```bash
gcc *.c -o calculadora
```
2) 
```bash
gcc (Get-ChildItem *.c | ForEach-Object { $_.Name }) -o calculadora
```

**Executar**
```bash
./calculadora
```