#include <stdio.h>
int main(){
    int a[5][5],r,c,i,j,zero=1,diag=1,ident=1,sym=1,skew=1;
    printf("Enter rows and columns (max 5): ");
    scanf("%d%d",&r,&c);
    printf("Enter elements:\n");
    for(i=0;i<r;i++)for(j=0;j<c;j++)scanf("%d",&a[i][j]);
    if(r==c) printf("\nSquare Matrix\n"); else printf("\nRectangular Matrix\n");
    for(i=0;i<r;i++)for(j=0;j<c;j++){
        if(a[i][j]!=0) zero=0;
        if(i!=j && a[i][j]!=0) diag=0;
        if(i==j && a[i][j]!=1) ident=0;
        if(r==c && a[i][j]!=a[j][i]) sym=0;
        if(r==c && a[i][j]!=-a[j][i]) skew=0;
    }
    if(zero) printf("Zero Matrix\n");
    if(ident) printf("Identity Matrix\n");
    if(diag && !ident) printf("Diagonal Matrix\n");
    if(sym) printf("Symmetric Matrix\n");
    if(skew) printf("Skew-Symmetric Matrix\n");
}

