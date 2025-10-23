#include <stdio.h>

int main(){
	int i,j,num;
	printf("Multiplication Table (1-5):\n\n");
	printf("Enter number of tables: ");
	scanf("%d", &num);
	for(i =1; i<=num;i++){
		printf("%d: ",i);
		for (j =1; j<=num;j++){
			printf("%4d",j*i);
		}
		printf("\n");
	}
	
	
	return 0;
}
