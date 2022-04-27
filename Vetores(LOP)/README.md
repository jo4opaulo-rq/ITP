# Questões de vetores 

## Operação com vetores
Faça um programa que calcule a expressão matemática a seguir e que exiba na tela o seu valor.
A = B + C - 5D
Onde B, C e D são vetores de três elementos que devem ser lidos da entrada padrão, nesta ordem. 
|Exemplos de entrada|Exemplos de saída|
|-------------------|-----------------|
|1 2 3<br>3 4 5 <br>7 8 9|A = [-31,-34,-37]|
|9 8 7<br>6 5 4<br>3 2 1|A = [0,3,6]                |


## Soma de dois vetores
​Faça um programa para somar dois vetores a e b. O usuário deve primeiro fornecer o número de elementos dos vetores. Em seguida, deve inserir os elementos de a e b. Por fim, o vetor resultante da soma deve ser apresentado. Considere que o tamanho máximo dos vetores é 10. Caso esse limite não seja respeitado, a mensagem "Muitos elementos!" deve ser apresentada.​
|Exemplos de entrada|Exemplos de sáda|
|-------------------|----------------|
|5<br>1 2 3 4 5<br>1 2 3 4 5|2 4 6 8 10|
|11                 |Muitos elementos|

## Intercalação de vetores (com função)
Implemente uma função que receba como parâmetros de entrada
dois vetores de números inteiros de tamanhos diferentes
(0 <= tamanho <= 10).A função deve armazenar em um vetor de saída a intercalação dos dois vetores de entrada, sendo esta dada
pelo 1o. elemento do 1o. vetor, seguido pelo 1o. elemento
do 2o. vetor, seguido pelo 2o. elemento do 1o. vetor, seguido pelo 2o. elemento do 2o. vetor e assim sucessivamente. Caso os vetores não tenham o mesmo tamanho, os elementos do maior vetor devem aparecer consecutivamente no vetor, já que não há mais como intercalá-los com elementos do menor vetor.
A função main deve ler o tamanho e valores dos dois vetores, realizar uma chamada à função e exibir o resultado da função implementada.
|Exemplos de entrada|Exemplos de saída|
|-------------------|-----------------|
|5<br>1<br>2<br>3<br>4<br>5<br>5<br>6<br>7<br>8<br>9<br>0|Resultado: 1 6 2 7 3 8 4 9 5 0|
|3<br>7<br>4<br>1<br>6<br>2<br>5<br>0<br>4<br>4<br>5<br>6|Resultado: 7 2 4 0 1 4 4 5 6

## Separar números em três vetores
Implemente um programa que recebe 20 números inteiros positivos e os armazena em um vetor A. Depois separe os números em três vetores:a) Vetor dos números que são múltiplos de 3.b) Vetor dos números que são múltiplos de 4.c) Vetor dos números não são múltiplos, nem de 3 e nem de 4.