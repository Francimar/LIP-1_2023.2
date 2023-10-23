# LIP-1_2023.2

### UNIDADE II
A busca binária, como estudado na unidade I, é muito eficiente para encontrar um número em um vetor, porém exige que o vetor esteja ordenado! Isso em alguns contextos pode ser uma tarefa um tanto quanto difícil ou até mesmo muito custoso. Como proposta, será que existe uma solução para buscar um número em um vetor não ordenado que seja mais eficiente do que ordenar o vetor e fazer a busca binária? 

Como trabalho prático, foi proposto buscar um número em um vetor não ordenado usando características da busca binária como o uso de índices e recursão. E após isso comparar com o tempo de ordenar o vetor e fazer a busca binária. 

Como resultado encontrei uma solução na ordem de O(n/3) enquanto que o tempo para ordenar o vetor (usando a função sort do c++) mais a busca binária resultou em uma complexidade O(n + log(n)). Segue os comparativos.

#### SOLUÇÃO PROPOSTA
Na solução encontrada faço três verificações por chamadas: Uma no início do vetor, uma no final e uma no meio (calculado por (início + fim)/2) obtendo o desempenho como na imagem abaixo:
<img src="/img/time-fcm.png"> 

#### ORDENAÇÃO MAIS BUSCA BINÁRIA
Como falado anteriormente o tempo da função sort do C++ é O(n). Com isso somando o tempo dela à soma da busca binária que é O(log(n)) temos O(n + log(n)) como mostra o gráfico abaixo: 
<img src="/img/time_sort-binary_search.png"> 

### UNIDADE I
#### Assuntos Estudados
1 - Iteração x Recursão;<br/>
2 - Desempenho e performance; <br/>
3 - Depuração (GDB) e Profiling (Gprof);<br/>
4 - Gnuplot; <br/>

### BUSCA BINÁRIA
A busca binária é um eficiente algoritmo para encontrar um item em uma lista ordenada de itens. 
Ela funciona dividindo repetidamente pela metade a porção da lista que deve conter o item, até 
reduzir as localizações possíveis a apenas uma. Um pré-requisito é que o vetor esteja ordenado.
[Mais Informações](https://pt.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search) 

#### COMPORTAMENTO DO ALGORITMO DA BUSCA BINÁRIA
<img src="/img/binary_search.png">

### BUSCA LINEAR
Na área de informática, ou Ciência da Computação, costuma-se usar o termo busca linear (ou busca sequencial) para expressar 
um tipo de pesquisa em vetores ou listas de modo sequencial, i. e., elemento por elemento, de modo que a função do tempo em 
relação ao número de elementos é linear, ou seja, cresce proporcionalmente.
[Mais Informações](https://pt.wikipedia.org/wiki/Busca_linear)

#### COMPORTAMENTO DO ALGORITMO DA BUSCA LINEAR
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
Usando um terminal em um ambiente Linux faça: <br/>
1 - g++ programa.cpp -o programa <br/>
2 - ./programa <br/>
2.1 - ./programa > data.txt (pega a saída do programa e cria um arquivo de txt com os dados) <br/>

#### COMANDOS PARA GERAR OS GRÁFICOS NO GNUPLOT
1 - Gnuplot (Necessário ter o Gnuplot instalado na máquina) <br/>
2 - plot 'data.txt' with lines <br/>
[Mais Informações sobre o Gnuplot](http://www.gnuplot.info/)
