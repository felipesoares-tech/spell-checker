<h1 align="center"> Processamento de texto 📖</h1>
Este projeto visa implementar um verificador ortográfico simples, que
verifica se as palavras de um texto de entrada estão em um dicionário
predefinido e sugere correções para as palavras não encontradas.

## O verificador ortográfico

O verificador de ortografia recebe um texto de entrada e verifica se suas palavras
estão em um dicionário. A saída deve reproduzir fielmente o texto de
entrada (inclusive espaços e quebras de linha), mas colocando entre colchetes as
palavras não encontradas no dicionário.

**Por exemplo, para esta entrada:**

```txt
Para que o pocessador possa interromper a execução de uma tarefa e retornar a ela mais
tarde, sem corromper seu estado interno, é necessário definir operações para salvar e restaurrar
o contexto da tarefa.
===
O ato de salvar os valores do contexto atual em seu TCB e possivelmente restaurar o
contexto de outra tarefa, previamente salvo em outro TCB, é denominado "troca de contexto".
```

**O programa deve gerar esta saída:**

```txt
Para que o [pocessador] possa interromper a execução de uma tarefa e retornar a ela mais
tarde, sem corromper seu estado interno, é necessário definir operações para salvar e
[restaurrar] o contexto da tarefa.
===
O ato de salvar os valores do contexto atual em seu [TCB] e possivelmente restaurar o
contexto de outra tarefa, previamente salvo em outro [TCB], é denominado "troca de contexto".
```

Consideram-se como palavras as sequências contíguas de letras (A-Z, a-z) com ou sem
acentos e as cedilhas; os demais caracteres (números, espaços e outros símbolos) não
fazem parte de palavras.

Um bom verificador ortográfico deve sugerir correções para as palavras incorretas.
Programe o verificador para informar as palavras conhecidas mais próximas das palavras
não encontradas no dicionário, como mostra este exemplo:

```txt
Para que o [pocessador (processador)] possa interromper a execução de uma tarefa e
retornar a ela mais tarde, sem corromper seu estado interno, é necessário definir operações para
salvar e [restaurrar (restaurar)] o contexto da tarefa.
===
O ato de salvar os valores do contexto atual em seu [TCB (aba)] e possivelmente restaurar o
contexto de outra tarefa, previamente salvo em outro [TCB (aba)], é denominado "troca de
contexto".
```

<h2 align="center"> Execução 👨🏻‍💻</h2>

Quanto a execução do código, será necessário a passagem de 3 parâmetros!

- Código fonte;
- Texto de entrada;
- 1 ou 0 (1 para ativar a sugestão de palavras, 0 para desativar);

Exemplo:
```bash
./ortografia brascubas.txt 1
```
ou
```bash
./ortografia brascubas.txt 0
```


