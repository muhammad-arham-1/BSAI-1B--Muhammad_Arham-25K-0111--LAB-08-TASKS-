#include <stdio.h>

int main(){
	int i,j;
	char seating[5][5];
	int seated=0,empty=0;
	printf("Classroom Seating Chart:\n");
	printf("=======================\n");
	printf("(x = Student, o = Empty)\n");
	for (i=0;i<5;i++){
		
		for (j=0;j<5;j++){
			if ((i+j)%2==0){

				seating[i][j]= 'x';
			} 
			else{

				seating[i][j] = 'o';
			}  
			
		}
		
	}

	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			if (seating[i][j] == 'x') seated++;
			else empty++;
		}
	}
	printf("\n");
	for (i=0;i<5;i++){
		printf("Row %d ",i+1);
		for (j=0;j<5;j++){
			printf("%c ", seating[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Summary:\n");
	printf("Students seated: %d\n", seated);
	printf("Empty desks: %d\n",empty);
	printf("Total desks: %d\n", seated+empty);
	
	return 0;
}
