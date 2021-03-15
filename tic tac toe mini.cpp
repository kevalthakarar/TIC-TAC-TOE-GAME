#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	char cm,cm1;
	char c='y';
	do
	{
   		printf("\t\tWELCOME\t\t\n");
		printf("\n\t      TIC TAC TOE \t\n");
		printf("\n ENTER THE CHARCTER O OR X: (for player 1) ");
		scanf("%c",&cm);
		if(cm=='o')
			cm1='x';
		if(cm=='x')
			cm1='o';
		fflush(stdin);
	}while(cm!='o' && cm!='x');
	
	int i,j,n,k=0;
	
	do
	{
		int a[3][3]={'1','2','3','4','5','6','7','8','9'};
		
		do
		{   system("cls");
		    printf("\t\tWELCOME\t\t\n");
			printf("\n\t      TIC TAC TOE \t\n");
            printf("\t\t\t\t| %c | %c | %c |\n",a[0][0],a[0][1],a[0][2]);
			printf("\t\t\t\t| %c | %c | %c |\n",a[1][0],a[1][1],a[1][2]);
			printf("\t\t\t\t| %c | %c | %c |\n",a[2][0],a[2][1],a[2][2]);
			j=0;

			for(i=0;i<3;i++)
			{

				if(a[i][j]==cm1 && a[i][j+1]==cm1 && a[i][j+2]==cm1)
				{	k++;
					printf("\n\n\n SECOND PLAYER IS WON THE MATCH\n\n\n");

				}
				if(a[j][i]==cm1 && a[j+1][i]==cm1 && a[j+2][i]==cm1)
				{		k++;
					printf("\n\n\n SECOND PLAYER IS WON THE MATCH\n\n\n");

				}
				if(i==0)
				{
					if(a[i][j]==cm1 && a[i+1][j+1]==cm1 && a[i+2][j+2]==cm1)
					{
						printf("\n\n\n SECOND PLAYER IS WON THE MATCH\n\n\n");
						k++;
					}
					if(a[i][2-j]==cm1 && a[i+1][1-j]==cm1 && a[i+2][j]==cm1)
					{
					printf("\n\n\n SECOND PLAYER IS WON THE MATCH\n\n\n");
					k++;
					}
				}



			}

			if(k>0)
			{
				k=0;
				break;
			}
			if(a[0][0]!='1'&&a[0][1]!='2'&&a[0][2]!='3'&&a[1][0]!='4'&&a[1][1]!='5'&&a[1][2]!='6'&&a[2][0]!='7'&&a[2][1]!='8'&&a[2][2]!='9')
			{
				printf("\nTHIS MATCH WAS DROW\n\n");
				break;
			}
			do
			{
				printf("enter number for 1 st player");
				scanf("%d",&n);
				fflush(stdin);
			if(n==1)
				i=0,j=0;
			else if(n==2)
				i=0,j=1;
			else if(n==3)
				i=0,j=2;
			else if(n==4)
				i=1,j=0;
			else if(n==5)
				i=1,j=1;
			else if(n==6)
				i=1,j=2;
			else if(n==7)
				i=2,j=0;
			else if(n==8)
				i=2,j=1;
			else if(n==9)
				i=2,j=2;
			if((a[i][j]=='o'||a[i][j]=='x')&&(n>=1 && n<=10))
			{
				n=10;
			}
		}while(n>=10||n<=0);
		k=0;

		a[i][j]=cm;
      	system("cls");
	    printf("\t\tWELCOME\t\t\n");
		printf("\n\t      TIC TAC TOE \t\n");
		printf("\t\t\t\t| %c | %c | %c |\n",a[0][0],a[0][1],a[0][2]);
		printf("\t\t\t\t| %c | %c | %c |\n",a[1][0],a[1][1],a[1][2]);
		printf("\t\t\t\t| %c | %c | %c |\n",a[2][0],a[2][1],a[2][2]);
		j=0;
		for(i=0;i<3;i++)
		{

			if(a[i][j]==cm && a[i][j+1]==cm && a[i][j+2]==cm)
			{
				printf("\n\n\n FIRST PLAYER IS WON THE MATCH\n\n\n");
				k++;
			}
			if(a[j][i]==cm && a[j+1][i]==cm && a[j+2][i]==cm)
			{
				printf("\n\n\n FIRST PLAYER IS WON THE MATCH\n\n\n");
				k++;
			}
			if(i==0)
			{
				if(a[i][j]==cm && a[i+1][j+1]==cm && a[i+2][j+2]==cm)
				{
						printf("\n\n\n FIRST PLAYER IS WON THE MATCH\n\n\n");
				k++;
				}
				if(a[i][2-j]==cm && a[i+1][1-j]==cm && a[i+2][j]==cm)
				{
				printf("\n\n\n FIRST PLAYER IS WON THE MATCH\n\n\n");
				k++;

				}
			}
		}
		if(k>0)
		{	
			k=0;
			break;
		}

		if(a[0][0]!='1'&&a[0][1]!='2'&&a[0][2]!='3'&&a[1][0]!='4'&&a[1][1]!='5'&&a[1][2]!='6'&&a[2][0]!='7'&&a[2][1]!='8'&&a[2][2]!='9')
		{
			printf("\n\nTHIS MATCH WAS DROW\n\n\n");
			break;
		}
		do
		{
			printf("enter number for 2 nd player");
			scanf("%d",&n);
				fflush(stdin);
			if(n==1)
				i=0,j=0;
			else if(n==2)
				i=0,j=1;
			else if(n==3)
				i=0,j=2;
			else if(n==4)
				i=1,j=0;
			else if(n==5)
				i=1,j=1;
			else if(n==6)
				i=1,j=2;
			else if(n==7)
				i=2,j=0;
			else if(n==8)
				i=2,j=1;
			else if(n==9)
				i=2,j=2;
			if((a[i][j]=='o'||a[i][j]=='x')&&(n>=1 && n<=10))
			{
				n=10;
			}
		}while(n>=10||n<=0);
		a[i][j]=cm1;
		}while(1);
		printf(" do you want to play another game (yes for y and not for n)");
		scanf("%c",&c);

	}while(c=='y');
	printf("\"THANK YOU\"");
}

