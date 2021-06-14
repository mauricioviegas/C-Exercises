int v[50],i;
int funcao (){
	int rastreador;
	for (i=0;i<50;i++){
		if (v[i]==12){
			rastreador=i;
		}
	}
	return (rastreador);

}
main (){
	int uo12;
	for (i=0;i<50;i++){
		printf ("Digite vetor na posição %d.\n",i);
		scanf ("%d",&v[i]);
	}
	uo12=funcao();
	printf ("Ultima ocorrencia do numero 12 foi no campo: %d.\n",uo12);
}

