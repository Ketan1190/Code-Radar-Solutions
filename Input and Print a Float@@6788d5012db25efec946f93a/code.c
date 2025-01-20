#include <stdio.h>
#include <math.h>
int main(){
    float n;
    scanf("%f",&n);
    float ans=rounded(n*100.0)/100;

    printf("You entered: %f",ans);
    return 0;
}