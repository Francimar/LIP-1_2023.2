# LIP-1_2023.2

### UNIDADE I
#### Assuntos Estudados
1 - Iteração x Recursão;
2 - Desempenho e performance;
3 - Depuração (GDB) e Profiling (Gprof);
4 - Gnuplot; 

### BUSCA BINÁRIA
A busca binária é um eficiente algoritmo para encontrar um item em uma lista ordenada de itens. 
Ela funciona dividindo repetidamente pela metade a porção da lista que deve conter o item, até 
reduzir as localizações possíveis a apenas uma. Um pré-requisito é que o vetor esteja ordenado.
[Mais Informações](https://pt.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search) 

#### COMPORTAMENTO DA BUSCA BINÁRIA
<img src="/img/binary_search.png">

### BUSCA LINEAR
Na área de informática, ou Ciência da Computação, costuma-se usar o termo busca linear (ou busca sequencial) para expressar 
um tipo de pesquisa em vetores ou listas de modo sequencial, i. e., elemento por elemento, de modo que a função do tempo em 
relação ao número de elementos é linear, ou seja, cresce proporcionalmente.
[Mais Informações](https://pt.wikipedia.org/wiki/Busca_linear)

#### COMPORTAMENTO DA BUSCA LINEAR
<img src="/img/linear.png"> 

### SEQUÊNCIA DE FIBONACCI
Na matemática, a sucessão de Fibonacci (ou sequência de Fibonacci), é uma sequência de números inteiros, começando normalmente 
por 0 e 1, na qual cada termo subsequente corresponde à soma dos dois anteriores. A sequência recebeu o nome do matemático italiano 
Leonardo de Pisa ou Leonardo Fibonacci, mais conhecido por apenas Fibonacci, que descreveu, no ano de 1202, o crescimento de uma população 
de coelhos, a partir desta. Esta sequência já era, no entanto, conhecida na antiguidade.
[Mais Informações](https://pt.wikipedia.org/wiki/Sequ%C3%AAncia_de_Fibonacci) 

#### COMPORTAMENTO DO ALGORITMO DE FIBONACCI ITERATIVO
<img src="/img/fibo_iterativo.png">

#### COMPORTAMENTO DO ALGORITMO DE FIBONACCI RECURSIVO
<img src="/img/fibo_recur.png">


### FATORIAL
Na matemática, o fatorial (AO 1945: factorial) de um número natural n, representado por n!, é o produto de todos os inteiros positivos menores 
ou iguais a n. A notação n! foi introduzida por Christian Kramp em 1808. A seguir estão os comportamentos dos algoritmos para cálculo do fatorial de n.
[Mais Informações](https://pt.wikipedia.org/wiki/Fatorial) 

#### COMPORTAMENTO DO ALGORITMO FATORIAL RECURSIVO
<img src="/img/fat_recursivo.png">

#### COMPORTAMENTO DO ALGORITMO FATORIAL RECURSIVO TAIL (CAUDA)
<img src="/img/fat_tail.png">

#### COMPORTAMENTO DO ALGORITMO FATORIAL ITERATIVO
<img src="/img/fat_it.png">

#### COMPARATIVO DAS TRÊS ABORDAGENS
<img src="/img/fat_comp.png">


#### COMANDOS PARA COMPILAR E EXECUTAR UM PROGRAMA C++
Usando um terminal em um ambiente Linux faça: 
1 - g++ programa.cpp -o programa
2 - ./programa
2.1 - ./programa > data.txt (pega a saída do programa e cria um arquivo de txt com os dados)

#### COMANDOS PARA GERAR OS GRÁFICOS NO GNUPLOT
1 - Gnuplot (Necessário ter o Gnuplot instalado na máquina)
2 - plot 'data.txt' with lines
[Mais Informações sobre o Gnuplot](http://www.gnuplot.info/documentation.html)
