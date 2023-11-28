#include <stdio.h>

int isMagicSquare(int ** square, const int n) {
    if(n < 0) {
        return 0;
    }

    int M = (n * (n*n + 1))/2;

    printf("M=%d\n",M);
    int i, j;

    for(i=0;i<n;i++){
        int rowsum=0;
        int colsum=0;
        for(j=0;j<n;j++){
            rowsum+=square[i][j];
            colsum+=square[i][j];
        }
        printf("i=%d, rowSum=%d, colSum=%d\n",i,rowsum,colsum);
        if(rowsum!=M || colsum!=M){
            
            printf("Not a magic square\n");
            return 0;
        }
    }

    int mdiag=0,sdiag=0;

    for(i=0;i<n;i++){

        mdiag+=square[i][i];
        sdiag+=square[i][n-1-i];
    }

    printf("Main diagonal sum=%d, Secondary diagonal sum=%d\n",mdiag,sdiag);

    if(mdiag!=M || sdiag!=M){
        printf("Not a magic square\n");
        return 0;
    }

    return 1;
}
