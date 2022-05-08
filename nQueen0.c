#incluir <stdio.h>
int LINHA[20];
int COLUNA[20]];
int TOP=-1;
int contagem=0;
int total=0;
int ORDEM;
vazio PUSH (int,int);
vazio POP();
exibição vazio();
int CHECK(int,int);
int PLACE (int,int);
vazio EXECUTE (int,int,int);
vazio PUSH (int a,int b)
{
	TOP++;
 LINHA[TOP]=a;
 COLUNA[TOP]=b;
}
vazio POP()
{
	TOP--;
	total--;
}
exibição vazio()
{
	int i,j,k,flag=0;
	printf ("\n");
	para(i=0;i<=TOP;i++)
	printf(% d , %d)\n",ROW[i],COLUMN[i]);
	printf ("\n");
	para(i=0;i<ORDER;i++)
	{
		para(j=0;j<ORDER;j++)
		{
			para(k=0;k<=TOP;k++)
			{
				se (ROW[k]===i)&&(COLUMN[k]==j))
 bandeira=1;
			}
			se (flag===1)
			printf(" o ");
			mais
			printf(" * ");
 bandeira=0;
		}
		printf ("\n");
	}
}
int CHECK (int R,int C)
{
	int c=0,i=0;
	while(i<=TOP)
	{
		se(ROW[i]==R)|| (COLUNA[i]==C)|| (abs(ROW[i]-R)===abs(COLUMN[i]-C))
		c++;
		i++;
	}
	retorno c;
}
int PLACE (int K,int L)
{
	se(K==ROW[0])&&(L===COLUNA[0]))
	contagem de retorno;
	mais se (CHECK(K,L)==0)
	{
		PUSH(K,L);
		count++;
	}
	if(L==ORDER-1)
	{
		if(K==ORDER-1)
		PLACE(0,0);
		else
		PLACE(K+1,0);
	}
	else
	PLACE(K,L+1);
}
vazio EXECUTE (int rainhas, int linha,coluna int)
{
 total=total+PLACE(linha,coluna);
 conde=0;
	se (total==queens)
	EXPOSIÇÃO();
	mais
	{
		se(ROW[TOP]==ORDER-1)&&(COLUMN[TOP]==ORDER-1))
		POP();
		POP();
		se (COLUNA[TOP+1]==ORDER-1)
		EXECUTE(rainhas,ROW[TOP+1]+1,0);
		mais
		EXECUTE(rainhas,ROW[TOP+1],COLUNA[TOP+1]+1);
	}
}
vazio principal()
{
	int num;
	printf ("___THIS É O PROBLEMA N-QUEEN. O USUÁRIO FORNECE O NÚMERO DE QUEENS N E O PEDIDO E RETORNA AS MELHORES POSIÇÕES PARA COLOCAR N QUEENS EM UMA PLACA [ORDER*ORDER] PARA QUE ELES NÃO CRUZEM CADA OTHER___ \n");
	printf ("\nENTER ORDEM E NÚMERO DE QUEENS\n");
	scanf ("%d%d",&ORDER,&num);
	se (num>ORDER)
	printf ("NÃO É POSSÍVEL");
	mais
	EXECUTE (num,0,0);	
}
