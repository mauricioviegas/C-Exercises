int m[20][20],i,j;
int funcao (){
	int contador=0;
	for (i=0;i<20;i++){
		for (j=0;j<20;j++){
			if (m[i][j]==5){
				contador=contador+1;
			}
		}
	}
	return (contador);
}

main (){
	int n5;
	for (i=0;i<20;i++){
		for (j=0;j<20;j++){
			printf ("Digite o elemento linha %d e coluna %d.\n",(i+1),(j+1));
			scanf ("%d",&m[i][j]);
		}
	}
	n5=funcao();
	printf ("Quantidade de numeros 5 : %d",n5);

}

