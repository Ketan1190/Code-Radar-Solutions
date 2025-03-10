void selectionSort(char arr[],int n){
    for(int i=0;i<n-1;i++){
        int key=i+1;
        for(int j=key;j>0;j--){
            if((int)arr[j-1]>(int)arr[j]){
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
            else{
                break;
            }

        }
    }
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}