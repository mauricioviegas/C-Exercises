main(){
	int filhos,d=0,s4=0;
	float salario,salariom=0.0,filhosm=0.0,salariomedio,filhosmedia,salariomaior=0.0,ps400;
	printf ("O salario do socio e:");
	scanf ("%f",&salario);
	while (salario>=0.0){
		if (salariomaior<salario){
			salariomaior=salario;
		}
		if (salario<=400.0){
			s4=s4+1;
		}
		printf ("Numeros de filhos do socio:");
		scanf ("%d",&filhos);
		salariom=salariom+salario;
		filhosm=filhosm+filhos;
		d=d+1;
		printf ("O salario do proximo socio e:");
		scanf ("%f",&salario);
	}
	salariomedio=salariom/d;
	filhosmedia=filhosm/d;
	ps400=(s4*100)/d;
	printf ("A media do salario dos socios e:%f\n",salariomedio);
	printf ("A media do numero de filhos e:%f\n",filhosmedia);
	printf ("O maior salario e:%f\n",salariomaior);
	printf ("O percentual de pessoas com salário até 400 reais e:%fporcento\n",ps400);
}
