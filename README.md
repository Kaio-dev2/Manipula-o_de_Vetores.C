# Manipulação_de_Vetores.C

Um programa eficiente em C para gerenciamento de um vetor de números inteiros, desenvolvido para desenvolver conceitos fundamentais de manipulação de arrays e interação via console. Oferece operações essenciais de CRUD, com validações robustas e uma condição simples para saída, tornando-o ideal para aprendizado e uso prático.

📋 Descrição
Este projeto implementa um sistema de gerenciamento de vetores utilizando um array estático de tamanho máximo definido (100 elementos). Ele permite ao usuário realizar operações básicas como cadastro, busca, exclusão, listagem e cálculo de soma, com uma interface de menu interativa. Uma condição especial exige que o usuário liste os números cadastrados antes de sair, proporcionando uma interação consciente com os dados.

✨ Funcionalidades
Opção

Descrição

UM
Cadastrar um novo número no vetor (se houver espaço disponível).

B
Ônibus

C
Excluir um número do vetor, deslocando os elementos restantes.

D
Listar todos os números cadastrados.

E
Calcular e exibir a soma de todos os números cadastrados.

F
Sair do sistema (apenas após listar os números com a opção D).

Validações Integradas : Verifique se o vetor está vazio ou cheio, evitando operações inválidas.
Tratamento de Entrada : Converte automaticamente para maiúsculo para maior usabilidade.
Limitação de Capacidade : Suporte até 100 números, com mensagens claras quando o limite é atingido.
🛠️ Requisitos
Compilador C : Compatível com C99, como GCC, Clang ou MSVC.
Sistema Operacional : Windows, Linux ou macOS.
Bibliotecas : Utilize apenas bibliotecas padrão ( stdio.h, stdlib.h, ctype.h).
🚀 Como Compilar e Executar
Obtenha o código : salve o arquivo fonte (ex. gerenciador_vetor.c:) em um diretório local.

Compilação :

Abra o terminal no diretório do arquivo.
Executar: gcc gerenciador_vetor.c -o gerenciador_vetor.
Isso gera um novo chamado gerenciador_vetor(ou gerenciador_vetor.exeno Windows).
Execução :

Executar: ./gerenciador_vetor.
Navegue pelo menu interativo conforme as instruções.
📖 Exemplo de Uso

Copiar código
===== MENU =====

A - Cadastrar um novo numero

B - Buscar um numero

C - Excluir um numero

D - Listar os numeros cadastrados

E - Exibir a soma dos numeros

F - Sair do sistema

Escolha uma opcao: A

Digite o numero para cadastrar: 42
Numero cadastrado com sucesso!

... (operações adicionais) ...

Escolha uma opcao: D
Numeros cadastrados: 42 15 7

Escolha uma opcao: F
Saindo do sistema...
Nota : A opção F requer que a opção D tenha sido selecionada pelo menos uma vez na sessão.

🏗️ Estrutura do Código
Variáveis ​​Principais :

vetor[TAM]: Matriz para armazenamento dos números.
qtd: Contador de elementos cadastrados.
podeSair: Flag para controle de saída.
Fluxo de Execução :

Loop infinito com menu baseado em switch.
Cada caso implementa uma operação específica, com validações e manipulações adequadas do vetor.
Este projeto é prioritário e claro e eficiente, facilitando a compreensão e manutenção do código.
