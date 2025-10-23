#include <stdio.h>

int main(){
	int i,j;
	int matrix[3][3] = {
		{12,45,33},
		{2,13,45},
		{56,72,41}
	};
	int matrix1[3][3] = {
		{1,1,1},
		{1,1,1},
		{1,1,1}
	};
	
	for (i =0;i<3;i++){
		for (j=0;j<3;j++){
			printf("%2d ",matrix[i][j] + matrix1[i][j]);

		}
		printf("\n");
	}
	
	return 0;
}
