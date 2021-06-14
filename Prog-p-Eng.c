main (){
     int i,z,m[4][4],soma[4],somat,mmaior=-100000000000,mmenor=100000000000;
     for (i=0;i<4;i++){
         printf ("Digite elementos da matriz por linha\n");
         scanf ("%d",&m[i][0]);
         scanf ("%d",&m[i][1]);
         scanf ("%d",&m[i][2]);
         scanf ("%d",&m[i][3]);
         soma[i]=m[i][0]+m[i][1]+m[i][2]+m[i][3];
         printf ("Soma: %d\n",soma[i]);
         if (mmaior<m[i][0])
            mmaior=m[i][0];
         if (mmaior<m[i][1])
            mmaior=m[i][1];
         if (mmaior<m[i][2])
            mmaior=m[i][2];
         if (mmaior<m[i][3])
            mmaior=m[i][3];
         if (mmenor>m[i][0])
            mmenor=m[i][0];
         if (mmenor>m[i][1])
            mmenor=m[i][1];
         if (mmenor>m[i][2])
            mmenor=m[i][2];
         if (mmenor>m[i][3])
            mmenor=m[i][3];
     }
     printf ("Matriz 4x4\n");
     for (i=0;i<4;i++){
         printf ("%d %d %d %d\n",m[i][0],m[i][1],m[i][2],m[i][3]);
     }
     somat=soma[0]+soma[1]+soma[2]+soma[3];
     printf ("Soma da Matriz: %d\n",somat);
     printf ("Maior numero: %d\n",mmaior);
     printf ("Menor numero: %d\n",mmenor);
     scanf ("%d",&z);
}

