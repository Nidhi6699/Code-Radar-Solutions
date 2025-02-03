#include <stdio.h>
int main() {
    int profit,loss;
    scanf("%d %d",&profit,&loss);
    if (profit>loss){
        printf("Profit");
    }
    else if (profit<loss){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}