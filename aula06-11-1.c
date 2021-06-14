float funcao (float a,int b,float c){
	float d;
	if (b==0){
		d=a/c;
	}
	if (b==1){
		d=a*c;
	}
	return (d);
}



main (){
	int operacao;
	float valor,valord,resultado;
	printf ("Digite o valor para conversao.\n");
	scanf ("%f",&valor);
	printf ("Digite o valor do dolar atual\n");
	scanf ("%f",&valord);
	printf ("Digite a conversao a ser efetuada, seguindo o codigo abaixo:\n0 para conversao real-->dolar;\n1 para conversao dolar-->real.\n");
	scanf ("%d",&operacao);
	resultado=funcao(valor,operacao,valord);
	if (operacao==0){
	printf ("O valor em dolar e: %f\n",resultado);
	}
	if (operacao==1){
	printf ("O valor em reais e: %f\n",resultado);
	}
}


