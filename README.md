# Estrutura de dados

## O que é estrutura de dados?

Durante o processo de computação, a saída de um algoritmo manipula dados obtidos de sua entrada. Quando manipulados de forma homogênea, constituem em um tipo abstrato de dados.

Segundo Pereira(1996), um tipo abstrato de dados é formado por um conjunto de valores e por uma série de funções que podem ser aplicadas sobre esses valores. Funções e valores em conjunto constituem, em um modelo matemático que pode ser empregado para modelar e solucionar os problemas do mundo real.

Um algoritmo é projetado em função de tipos abstratos de dados. Para implementa-los em uma linguagem de programação é necessário, utilizar os tipos e operações suportadas pelo o computador de acordo com a linguagem. Nessa representação do tipo abstrato de dados, emprega-se uma estrutura de dados.

É durante o processo de implementação que a estrutura de armazenamento dos valores é especificada os algoritmos que irão desepenhar o papel de funções. Segundo Cormen (2002), uma estrutura de dados é um meio para armazenar e organizar dados com o objetivo de facilitar o acesso e as modificações.

As estruturas são diferentes umas das outras pela a disposição e manipulação desses dados, de modo que não se pode separar as estruturas de dados e os algoritmos associados a elas. Os problemas que serão resolvidos por algoritmos possuem dados que precisam ser armazenados, e em estruturas, de acordo com o problema. A escolha de um algoritmo para resolver um problema vai depender do tipo da estutura que será utilizada para o armazenamento dos dados. Sendo assim a estrutura será escolhida de acordo com as operações que poderam ser realizadas sobre ela e com o custo de cada operação.

## O que é análise de algoritmos?

Um algoritmo deve considerar o desempenho que terá após sua implementação. Os pontos mais importantes a serem relevados é a execução e o espaço que será ocupado.

Analisar um algoritmo significa, que irá prever os recursos que será necessário. Que geralmente são memória, largura de banda de comunicação ou hardware de computação são as preocupações primordiais.

Para Knuth(apud Ziviani 1971), a área da análise de algoritmos possui dois tipos de problemas:

- Análise de um algoritmo particular, calculo do custo de um determinado algoritmo que será utilizado para resolver um problema específico. Geralmente, algumas características serão investigados, como o número de vezes que cada algoritmo será executado e a quantidade de memória que será necessário.
- Análise de uma classe de algoritmos, considerando um problema em particular, determina o algoritmo de menor custo possível para ser resolvido. Assim um conjunto de algoritmos utlizado para resolver um problema específico será analisado com propósito de determinar qual será o melhor. Por isso é necessário colocar limites para o tempo de execução dos algoritmos que irão pertencer a esse conjunto.

O custo de utilização ou tempo de execução de um algoritmo pode ser medido por uma execução em um computador real. Com os resultados pode se considerar algumas inrregularidades como exemplo, o compilador que pode levar em conta algumas construções e outras não, hardware, a quantidade de memória utilizada também pode interferir no tempo e desempenho do algoritmo.

Pode-se também calcular o custo por meio do modelo matemático ou computação genérico utilizando um único processador, a RAM (Random Access Machine - Máquina de acesso aleatório).

O modelo de RAM, contém instruções serão encontradas em computadores, como aritméticas (soma, substração, multiplicação, divisão, piso, teto, resto). da movimentação dos dados (carregar, armazenar, copiar), do controle (desvio condicional, chamada e retorno de funções).

As operações mais significativas são aquelas que irá contribuir para o tempo de execução, exemplo em algoritmos de ordenação, é considerado o número de comparações entre os elementos do conjunto que será ordenado e desconsideram-se as operações aritméticas, que irá atribuir na manipulação dos índices.

# Blibliografia

Livro: Estutura de dados, algoritmos análise da complexidade e implementações em Java e C/C++
Autores: Ana Fernanda Gomes Ascencio & Graziela Santos de Araújo
Editora Pearson, São Paulo, 2020 by Pearson education do Brasil
