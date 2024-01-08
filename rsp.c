#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int game(char,char);
void main()
{
	printf("!!!!! rock paper scissor game !!!!!\n");
	char you,computer,i;
	int ans,n;
	printf("\ns-scissor,r-rock,p-paper\n");
	printf("\nenter any of s,r,p : ");
	scanf("%c",&you);
	scanf("%c",&i);
	if((you!='s')&&(you!='r')&&(you!='p')){
		again:
		printf("\ninvalid input\n");
		printf("\nenter again any of s,r,p : ");
		scanf("%c",&you);
		scanf("%c",&i);
	    if((you!='s')&&(you!='r')&&(you!='p')){
	    	goto again;
		}
	}
	srand(time(NULL));
	n=rand()%100;
	if((n>=0)&&(n<=33)){
		computer='s';
	}
	else if((n>33)&&(n<=66)){
		computer='r';
	}
	else{
		computer='p';
	}
	printf("\ncomputer enter : %c\n",computer);
	ans=game(you,computer);
	if(ans==1){
		printf("\n!!!!! you won !!!!!");
	}
	else if(ans==-1){
		printf("\n!!!!! you loose !!!!!");
	}
	else{
		printf("\n!!!!! its tie !!!!!");
	}
}
int game(char x,char y)
{
	if(x==y){
		return (0);
	}
	if((x=='s')&&(y=='p')){
		return (1);
	}
	if((x=='s')&&(y=='r')){
		return (-1);
	}
	if((x=='r')&&(y=='p')){
		return (-1);
	}
	if((x=='r')&&(y=='s')){
		return (1);
	}
    if((x=='p')&&(y=='r')){
		return (1);
	}
	if((x=='p')&&(y=='s')){
		return (-1);
	}
}
