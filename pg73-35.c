main (){
	int m[10][10],i,j,x;
	for (i=0;i<10;i++){
		for (j=0;j<10;j++){
			printf ("Escreva o componente da linha %d, coluna %d.\n",(i+1),(j+1));
			scanf ("%d",&m[i][j]);
		}
	}
	printf ("Matriz 10x10:\n");
	for (i=0;i<10;i++){
		for (j=0;j<10;j++){
			printf ("%d\t",m[i][j]);
		}
		printf ("\n");
	}


	for (j=0;j<10;j++){
		x = m[1][j];
		m[1][j] = m[7][j];
		m[7][j] = x;
	}
	printf ("Matriz 10x10 com linha 2 trocada com linha 8:\n");
	for (i=0;i<10;i++){
		for (j=0;j<10;j++){
			printf ("%d\t",m[i][j]);
		}
		printf ("\n");
	}



	for (j=0;j<10;j++){
		x = m[j][3];
		m[j][3] = m[j][9];
		m[j][9] = x;
	}
	printf ("Matriz 10x10 com coluna 4 trocada com coluna 10:\n");
	for (i=0;i<10;i++){
		for (j=0;j<10;j++){
			printf ("%d\t",m[i][j]);
		}
		printf ("\n");
	}



	for (j=0;j<10;j++){
		x = m[j][j];
		m[j][j] = m[j][(9-j)];
		m[j][(9-j)] = x;
	}
	printf ("Matriz 10x10 com a diagonal principal trocada com a diagolnal secundária:\n");
	for (i=0;i<10;i++){
		for (j=0;j<10;j++){
			printf ("%d\t",m[i][j]);
		}
		printf ("\n");
	}



	for (j=0;j<10;j++){
		x = m[4][j];
		m[4][j] = m[j][9];
		m[j][9] = x;
	}
	printf ("Matriz 10x10 com linha 5 trocada com coluna 10:\n");
	for (i=0;i<10;i++){
		for (j=0;j<10;j++){
			printf ("%d\t",m[i][j]);
		}
		printf ("\n");
	}


	
	for (j=0;j<10;j++){
		x = m[0][j];
		m[0][j] = m[j][(9-j)];
		m[j][(9-j)] = x;
	}
	printf ("Matriz 10x10 com linha 1 trocada com a diagonal secundária:\n");
	for (i=0;i<10;i++){
		for (j=0;j<10;j++){
			printf ("%d\t",m[i][j]);
		}
		printf ("\n");
	}

	

	for (j=0;j<10;j++){
		x = m[j][6];
		m[j][6] = m[j][j];
		m[j][j] = x;
	}
	printf ("Matriz 10x10 com coluna 7 trocada com a diagonal principal:\n");
	for (i=0;i<10;i++){
		for (j=0;j<10;j++){
			printf ("%d\t",m[i][j]);
		}
		printf ("\n");
	}
}

