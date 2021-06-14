int i,matricula[5],telefone[5];

int funcao(int a){
	int b=0;
	for (i=0;i<5;i++){
		if (matricula[i]==a){
			b=telefone[i];
		}
	}
	return (b);
}


main (){
	int matpro,telpro;
	for (i=0;i<5;i++){
		printf ("Digite a matricula do aluno.\n");
		scanf ("%d",&matricula[i]);
		printf ("Digite o telefone deste aluno.\n");
		scanf ("%d",&telefone[i]);
	}
	printf ("Digite o matricula para procura do telefone.\n");
	scanf ("%d",&matpro);
	telpro=funcao(matpro);
	if (telpro==0){
		printf ("MATRICULA NAO ENCONTRADA!!!\n");
	}
	else {
		printf ("Telefone do aluno com matricula %d e %d.\n",matpro,telpro);
	}
}



