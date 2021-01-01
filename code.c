#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	

	int i,j,random1,random2,column,state=1;
	double x[15][15]={{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},monster;
	char difficult;
	srand(time(NULL));
	
	while(state==1){
	
		printf("Enter the game difficulty level.\nEASY(3-7 monsters) for (E/e)\nHARD(16-32 monsters) for (H/h)\nDEATH WISH(32-64 monsters) for (d/D)\nONE DOWN(64-128 monsters) for (o/O)\n");
		scanf(" %c", &difficult);
		
		switch(difficult){
			case 'E':
			case 'e':
				
				monster = 3 + (rand() % 5);
				state =0;
				break;
				
			case 'H':
			case 'h':
				
				monster = 16 + (rand() % 17);
				state =0;
				break;
	
			case 'D':
			case 'd':
				
				monster = 32 + (rand() % 33);
				state =0;
				break;

			case 'O':
			case 'o':
				
				monster = 64 + (rand() % 65);
				state =0;
				break;
				
			default:
				
				printf("Wrong Value. Try Again.\n\n");
				
				break;
		}
	}
	
	// operation part

	for(i=0 ;i<monster;i++){
		random1 = rand() % 16;
		random2 = rand() % 16;
		if(x[random1][random2]== 0){
			x[random1][random2] = 1;
		}
		else{
			i--;
		}
	}
	
	// game part
	
	for(i=0;i<15;i++){
		printf("%d. Move Enter a column value between 1-16:\n",i+1);
		scanf("%d", &column);
		
		if(column<1 ||  column>16){
			printf("Wrong Value. Try Again.\n");
			i--;
			continue;
		}
		
		if(x[i][column-1]==1){
			printf("You lost in the %d. column. Try Again.\n",i+1);
			break;
		}
		
	}
	
	//it shows the playground
	
	printf("\t   NORTH\n");
	for(i=0;i<15;i++){
		for(j=0;j<15;j++){
			printf("%.lf ",x[i][j]);
		}
		printf("\n");
	}
	printf("\t   SOUTH\n");		
	
	return 0;
}
