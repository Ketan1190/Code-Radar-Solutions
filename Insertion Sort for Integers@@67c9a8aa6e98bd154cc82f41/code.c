int getMax(int arr[],int s,int e){
    int max=-9999;
    for(int i=s;i<=e;i++){
        if(arr[i]>arr[max]){
            max=i;
        }
    }
    return max;
}
void insertionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int last=n-i-1;
        int max=getMax(arr,0,last);
        int temp=arr[last];
        arr[last]=arr[max];
        arr[max]=temp;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}