#include <stdio.h>
#include <math.h>
int main(){
    float a[3][3], t[3][3], cof[3][3], adj[3][3], inv[3][3], det;
    int i,j;
    printf("Enter 9 elements of the 3x3 matrix:\n");
    for(i=0;i<3;i++)for(j=0;j<3;j++)scanf("%f",&a[i][j]);
    for(i=0;i<3;i++)for(j=0;j<3;j++)t[j][i]=a[i][j];
    det=a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])
       -a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])
       +a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
    for(i=0;i<3;i++)for(j=0;j<3;j++){
        cof[i][j]=pow(-1,i+j)*(a[(j+1)%3][(i+1)%3]*a[(j+2)%3][(i+2)%3]-a[(j+1)%3][(i+2)%3]*a[(j+2)%3][(i+1)%3]);
        adj[i][j]=cof[j][i];
        inv[i][j]=adj[i][j]/det;
    }
    printf("\nTranspose:\n");for(i=0;i<3;i++){for(j=0;j<3;j++)printf("%.1f ",t[i][j]);printf("\n");}
    printf("\nDeterminant: %.2f\n",det);
    printf("\nCofactor:\n");for(i=0;i<3;i++){for(j=0;j<3;j++)printf("%.1f ",cof[i][j]);printf("\n");}
    printf("\nAdjoint:\n");for(i=0;i<3;i++){for(j=0;j<3;j++)printf("%.1f ",adj[i][j]);printf("\n");}
    printf("\nInverse:\n");for(i=0;i<3;i++){for(j=0;j<3;j++)printf("%.2f ",inv[i][j]);printf("\n");}
}

