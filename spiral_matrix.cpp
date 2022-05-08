** Programa C para gerar uma matriz espiral com o usuário inserido limite*/
#incluir <stdio.h>
#incluir <math.h>
#incluir <conio.h>
int principal()
{
	int A[10][10]];
	int N,L,M,i,j,a=1,b=2,x;
	printf ("\n Digite o número");
	scanf ("%d",&N);
	L=N*N;
	    se (N%2==0)
		M=(N/2)-1;
	    mais
		M=N/2;
	
	i = M, j = M;
	A[M][M] = 1;
	enquanto (b <= L)
	{
		se (i == j)
		{
			para(x = 1; x <= a; x++)
			{
 j = (j + pow(-1,a+1)*1);
				A[i][j] = b++;
			}
			a++;
		}
		mais se (i<j)
		{
			while(i!=j)
				A[++i][j]=b++;
		}
		mais se (i>j)
		{
			enquanto (i!=j)
				A[--i][j]=b++;	
		}
	}
	para(i=0;i<N;i++)
	{
		printf ("\n");
		para(j=0;j<N;j++)
			printf("\t%d",A[i][j]);
	}
	getch();
}
