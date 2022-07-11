# Questões 

### 1ª Questão

Strings: crie um programa que receba dois valores naturais como entrada.
Esses valores podem ter até 255 dígitos. Por fim, exiba a soma dos valores.

### 2ª Questão
Ponteiros e alocação dinâmica de memóri: crie um programa que possua uma função responsável por receber uma mensagem da entrada padrão de dados. A função deve retornar um vetor contendo a mensagem e deve receber somente um parâmetro passado por referência para indicar a quantidade de posições do vetor. A mensagem consiste num valor binário terminado por uma sequência consecutiva de 10 zeros. A quantidade de posições do vetor deve ser igual à quantidade de bits na mensagem e não deve incluir o terminador. Apresente a mensagem no final do programa.

### 3ª Questão
Registros: uma biblioteca está atualizando o seu sistema cadastrando todos os seus livros indicando o título, os autores (máximo de três autores), o ano
de publicação, a quantidade de páginas, um indicador se o livro está disponível para empréstimo (pode assumir o valor livre para disponível para empréstimo e interno em caso contrário) e o valor do livro. Crie um programa que receba um inteiro N indicando a quantidade de livro da biblioteca e depois os dados dos N livros na ordem apresentada de modo que cada dado é descrita em uma linha da entrada padrão. Em seguida, receba campos de consulta de modo que deve ser listado todos os livros que satisfaçam ao
menos um dos campos e estejam livres para empréstimo. Cada livro só deve ser listado uma única vez na mesma ordem apresentada durante o cadastro e os campos de consultas podem ser AUTOR, seguido pelo nome de uma pessoa, ou TITULO, seguido pelo nome de um livro. Campo é separado por uma linha e encerra com o caractere '*'. Assuma que as string terão no máximo 255 caracteres.


### 4ª Questão
Recursão: crie um programa recursivo que receba um valor natural na base decimal e exiba o valor corresponde na base binária. Para realizar a conversão de decimal para binário, divida sucessiva o valor por 2. O agrupamento dos restos da divisão na ordem será o número binário. A figura abaixo apresenta um exemplo da conversão do valor 157 resultando em 10011101. Não devem ser utilizadas instruções de repetição como for, while nem estruturas de armazenamento como vetores ou similares.