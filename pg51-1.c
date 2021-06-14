main(){
	int numeroint,i=1,numero025=0,numero2550=0,numero5075=0,numero75100=0;
	while (i<=5){
		printf ("Digite um numero inteiro:");
		scanf("%d",&numeroint);
		if ((numeroint>=0)&&(numeroint<25))
			numero025=numero025+1;
		if ((numeroint>=25)&&(numeroint<50))
			numero2550=numero2550+1;
		if ((numeroint>=50)&&(numeroint<75))
			numero5075=numero5075+1;
		if ((numeroint>=75)&&(numeroint<=100))
			numero75100=numero75100+1;
		i=i+1;
	}
	printf("Existem %d numero(s) entre [0, 25)\n",numero025);
	printf("Existem %d numero(s) entre [25, 50)\n",numero2550);
	printf("Existem %d numero(s) entre [50, 75)\n",numero5075);
	printf("Existem %d numero(s) entre [75, 100]\n",numero75100);
}
