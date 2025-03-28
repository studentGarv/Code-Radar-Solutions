int kthSmallest(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        int minIdx = i;
        for (j = i + 1; j < n; j++){
            if (arr[j] < arr[minIdx])
                minIdx = j;
        temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
        }
    }
}