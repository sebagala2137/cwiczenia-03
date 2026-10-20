#include <stdio.h>
#define MAX 20

int main(){

    int wA=2,kA=3;
    double A[MAX][MAX]={
        {1.0,2.0},
        {4.0,5.0}
    };
    int wB=2,kA=3;
    double B[MAX][MAX]={
        {4.0,5.0},
        {1.0,4.0}
    };
    double C[MAX][MAX];

    if (wA<1||wA>MAX||kA<1||kA>MAX||wB<1||wB>MAX||kB<1||kB>MAX){
        printf("za duże liczby :(");
        return 1;
    }
    if(wA!=wB||kA!=kB){
        printf("złe liczby :(");
        return 1;
    }
return 0;
}