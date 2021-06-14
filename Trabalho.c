main(){
float nota1[3],nota2[3],nota3[3],media[3],y;
int i=0,matricula[3],k=0,x;
for (i=0;i<3;i++){
	printf ("Digite a matricula do aluno:");
	scanf ("%d",&matricula[i]);
	printf ("Digite a nota da diciplina 1:");
	scanf ("%f",&nota1[i]);
	printf ("Digite a nota da diciplina 2:");
	scanf ("%f",&nota2[i]);
	printf ("Digite a nota da diciplina 3:");
	scanf ("%f",&nota3[i]);
	media[i]=(nota1[i]+nota2[i]+nota3[i])/3;
}
while (k==0){
	k=1;
	for (i=0;i<2;i++){
		if (matricula[i]>matricula[i+1]){
			k=0;
			x=matricula[i];
			matricula[i]=matricula[i+1];
			matricula[i+1]=x;
			y=media[i];
			media[i]=media[i+1];
			media[i+1]=y;
			y=nota1[i];
			nota1[i]=nota1[i+1];
			nota1[i+1]=y;
			y=nota2[i];
			nota2[i]=nota2[i+1];
			nota2[i+1]=y;
			y=nota3[i];
			nota3[i]=nota3[i+1];
			nota3[i+1]=y;
		}
	}
}
printf ("Ordenação por ordem crescente de matricula\n");
for (i=0;i<3;i++){
	printf ("matricula: %d - nota1: %f - nota2 %f - nota3 %f\n",matricula[i],nota1[i],nota2[i],nota3[i]);
}
k=0;
while (k==0){
	k=1;
	for (i=0;i<2;i++){
		if (media[i]<media[i+1]){
			y=media[i];
			media[i]=media[i+1];
			media[i+1]=y;
			x=matricula[i];
			matricula[i]=matricula[i+1];
			matricula[i+1]=x;
			k=0;

		}
	}
}
printf ("Ordenação por ordem decrescente das medias\n");
for (i=0;i<3;i++){
	printf ("media: %f - matricula: %d\n",media[i],matricula[i]);
}
}

