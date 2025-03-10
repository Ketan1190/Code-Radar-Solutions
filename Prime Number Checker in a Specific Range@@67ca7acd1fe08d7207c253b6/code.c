int isPrime(int n){
    if(n<2){
        return 0;
    }
    int isIt=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isIt=0;
            return isIt;
        }
    }
    return isIt;
}
void printPrimesInRange(int a,int b){
    int found;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            printf("%d ",i);
            found=1;
        }
    }
    if(!found){
        printf("No prime numbers")
    }
}