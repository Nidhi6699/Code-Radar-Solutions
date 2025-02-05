#include <stdio.h>
int main() {
    int number;
    scanf("%d",&number);
    if ((number%number==0) && (number%1==0)){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}