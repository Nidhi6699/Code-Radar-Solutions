#include <stdio.h>
int main() {
    int age,c_s;
    scanf("%d %d",&age,&c_s);
    if(age>=18 && c_s==1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}