#include <stdio.h>

int main(){
	int i,j;
	int matrix[3][3] = {
		{12,45,33},
		{2,13,45},
		{56,72,41}
	};
	int largest= matrix[0][0];
	for (i =0;i<3;i++){
		for (j=0;j<3;j++){
			if (matrix[i][j]>largest){
				largest = matrix[i][j];
			}
		}
	
	}
	printf("The largest in the matrix is: %d", largest);
	
	
	
	
	
	return 0;
}
