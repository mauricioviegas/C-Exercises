int v[100];
int funcao (){
	return (v[18]);
}
main (){
	int i,n;
	for (i=0;i<100;i++){
		printf ("Digite vetor na posição %d.\n",i);
		scanf ("%d",&v[i]);
	}
	n=funcao();
	printf("Numero na posição 18 e:%d\n",n);
}


