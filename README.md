# Super Trunfo: C
Desafio de codificação da matéria de Programação de Computadores do curso de Engenharia de Software da Faculdade Estácio.

## Requisitos funcionais

- [x] Menu Interativo: Criar um menu interativo no terminal usando a estrutura switch que permita ao jogador escolher qual atributo será usado para comparar as cartas. O menu deve ser claro e fácil de usar.
- [x] Comparação de Atributos: Implementar a lógica de comparação entre duas cartas com base no atributo selecionado pelo jogador. Os atributos disponíveis são:
  - [x] Nome do país (string - usado apenas para exibir informações, não para comparação direta)
  - [x] População (int)
  - [x] Área (float)
  - [x] PIB (float)
  - [x] Número de pontos turísticos (int)
  - [x] Densidade demográfica (float - já calculada no desafio anterior).

- [x] Regras de Comparação: A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.
- [x] Exibição do Resultado: Mostrar na tela, de forma clara, o resultado da comparação, incluindo:
  - [x] O nome dos dois países. 
  - [x] O atributo usado na comparação.
  - [x] Os valores do atributo para cada carta.
  - [x] Qual carta venceu.
  - [x] Em caso de empate, exibir a mensagem "Empate!".


## Requisitos não funcionais

- [x] Usabilidade: O menu e as mensagens exibidas no terminal devem ser intuitivos e fáceis de entender.
- [x] Performance: O sistema deve responder rapidamente às ações do usuário.
- [x] Manutenibilidade: Escreva um código limpo, organizado e bem comentado.
- [x] Segurança: (Embora menos crítico neste nível, comece a pensar em como seu código poderia lidar com entradas inválidas do usuário, como a escolha de uma opção inexistente no menu. Um default no switch pode ajudar).

## Como usar
Siga os passos abaixo para compilar e executar o programa Super Trunfo em C no seu ambiente local (Windows):

### Requisitos

- Compilador C (recomendado: MinGW)
- Terminal de comando (CMD ou PowerShell)
- Sistema Windows (devido ao uso de <windows.h> e _sleep)

### Compilação

- Salve o código no arquivo super_trunfo.c
- Abra o terminal na pasta onde o arquivo está salvo.
- Compile com:
```bash
gcc super_trunfo.c -o super_trunfo.exe
```

### Execução

Após compilar, execute com:
```bash
./super_trunfo.exe
```

### Funcionamento

1. O programa exibe um menu com os atributos disponíveis para comparação.
2. Você digita o número correspondente ao atributo desejado.
3. O programa compara os valores das duas cartas com base na regra:
   - Maior valor vence, exceto em Densidade Demográfica, onde o menor valor vence.
4. O resultado da disputa é exibido no terminal, com:
   - Nome das cidades (países)
   - Valores de comparação 
   - Cidade vencedora ou mensagem de empate