# Fake Moulinnete
Testes que talvez funcionem corretamente para as listas da 42.

Neste arquivo criamos (emendes- & vgoncalv): testes que tentam checar as mesmas coisas que a Moulinette checa.

Atenção! Isto foi feito por outros campers e não é um programa oficial, é importante que você consiga entender o funcionamento de cada exercício e seja capaz de escrever seus próprios testes. Pense neste repositório como uma checagem extra antes de enviar seu projeto.

Existem 2 tipos de teste, um deles tem que ser compilado exercício por exercício e o outro testa a lista inteira de uma só vez (É necessário que todas as funções estejam definidas, mesmo que elas não façam nada).

Para executar os testes da lista inteira, compile da seguinte maneira:
(para rodar o `all.c` você precisa ter todas as funções da lista criadas)

```bash
$ gcc -Wall -Wextra -Werror $(find -type f -name "*.c") all.c [flags adicionais]
```

Para testar um arquivo por vez, o comando é:

```bash
$ gcc -Wall -Wextra -Werror [seu arquivo] [ex**.c] [flags adicionais]
```

Avisos
---
- O C06 consiste de programas, então não fizemos testes para eles.
- Caso encontrem algum erro, favor nos comunicar no Discord.
