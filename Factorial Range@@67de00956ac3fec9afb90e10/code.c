void factorialRange(int start,int end){
    if(start<0 | end>start){
        printf("Invalid range");
    }
    for (int i=start;i<=end;i++){
    if(i==0){
    printf("%d\n",1);
    continue;
}
    int no=1;
    for(int n=1; n<=i;n++){
        no*=n;
    }
    printf("%d\n",no);
}   
}