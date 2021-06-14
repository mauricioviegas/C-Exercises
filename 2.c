int m[5][5],i,j;

int maiore (){
	int maior;
	maior=m[0][0];
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			if (m[i][j]>maior){
				maior=m[i][j];
			}
		}
	}
	return (maior);
}

main (){
	int melem;
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			printf ("Escreva o elemento da Matriz 5X5 da linha %d e coluna %d.\n",(i+1),(j+1));
			scanf ("%d",&m[i][j]);
		}
	}
	melem=maiore();
	printf ("O maior elemento da matriz é %d\n.",melem);
}


