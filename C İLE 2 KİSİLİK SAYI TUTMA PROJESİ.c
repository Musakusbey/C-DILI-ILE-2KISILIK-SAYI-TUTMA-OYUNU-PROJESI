#include <stdio.h>
#include <stdlib.h>

int main()

{
	int o1,o2,iobak,bobak;
	
	printf("Ýki oyuncu sirasiyla aklinizdakileri girin lutfen:\n \n");
	
	printf("Birinci oyuncu:\n");
	
	scanf("%d",&o1);
	
	system("CLS");
	
	printf("Ýkinci oyuncu\n");
	
	scanf("%d",&o2);
	
	system("CLS");
	
	while(1)
	{
		printf("Ýkinci oyuncu kac tuttu?\n");
		
		scanf("%d",&iobak);
		
		if(iobak>o2)
		{
			printf("ÝKinci oyuncu daha kucuk tutmustur.\n");
		}
		
		else if(iobak<o2)
		{
			printf("Ýkinci oyuncu daha buyuk tutmustur.\n");
		}
		
		else
		{
			printf("Birinci oyuncu kazandi.\n");
			
			break;
		}
		
		printf("Birinci oyuncu kac tuttu?\n");
		
		scanf("%d",&bobak);
		
		if(bobak>o1)
		{
			printf("Birinci oyuncu daha kucuk tutmustur.\n");
		}
		
		else if(bobak<1)
		{
			printf("Birinci oyuncu daha buyuk tutmustur.\n");
		}
		
		else
		{
			printf("Ýkinci oyuncu kazandi\n");
			
			break;
     	}	
	}
	
	return 0;
	
}
