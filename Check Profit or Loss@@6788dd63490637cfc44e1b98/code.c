#include <stdio.h>
int main() {
    int cp,sp,a;
    scanf("%d %d",&cp,&sp);
    a=sp-cp;
    if (a>0){
        printf("Profit");
    }
    else if (a<0){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}