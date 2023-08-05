int	radix_sort (int *list){

	int	n; //quantidade de posições no vetor
	int	i; //posição no vector
	int	counter[10];//array onde iremos colocar a contagem dos lsd
	int	position[n];//array


}


int getQtyElementsArray (char *arreizin){

	

}


/*
Saber qual a quantidade de digitos do maior item, pois essa será nossa condição de qts vezes iremos fazer essa operação (BSD)
iterar e incremmentar na lista de contador na posição correspondente
ex: 123 dá +1 no contador do 3
ex: 263 dá +1 no contador do 3 
ex: 233 dá +1 no contador do 3
Ao final o contador do 3 = 3
ex: 087 dá +1 no contador do 7
Ao final o contador do 7 = 1

Em seguida, vamos contar as posições, em ordem crescente: Essa é ordem do desempilhamento, que já é a ordenação dauele fileira de digitos
0 = 0
1 = 0
2 = 0
3 = 3
4 = 0
5 = 0
6 = 0
7 = 4 //começa do 4 pq o ultimo foi 3. 
8 = 0
9 = 0
push na posição que está no position 
atenção, qdo vai desenpilhando, tem q ir decrementando o contador de posição, pq senão subscreve o digito de igual valor que por ventura ja tenha sido colocado

Para calcular os digitos sempre percorremos no maximo 10 vezes - de 0 a 9 do contador e digitos - se base 10






*/