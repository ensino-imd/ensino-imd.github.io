#include "BackwardSubstitution.h"

void BackwardSubstitution(double **A, double *x, double *b, int dim){

	int m=dim-1;
	x[m] = b[m]/A[m][m];

	double SUM=0.0;
	int i, j;
	for (i=m-1; i>=0; i--){
		for (j=i+1; j<=m; j++){
			SUM += A[i][j]*x[j];
		}	
		x[i] = (b[i] - SUM)/A[i][i];
		SUM = 0.0;
	}
}
