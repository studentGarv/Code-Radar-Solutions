int kthSmallest(int arr[],int n,int k){
    if(k>=n){
        return -1;
    }
    else{
    for(int i=0;i<k;i++){
        int temp,minIdx = i;
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[minIdx])
                minIdx = j;
        temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
        }
    }
    return arr[k-1];
    }
    
}