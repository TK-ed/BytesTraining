void sortColors(int* arr, int numsSize){
    int cz=0,co=0;
    for(int i=0;i<numsSize;i++){
        if(arr[i]==0) ++cz;
        if(arr[i]==1) ++co;
    }
    for(int i=0;i<cz;i++)
    arr[i]=0;
    for(int i=cz;i<cz+co;i++)
    arr[i]=1;
    for(int i=cz+co;i<numsSize;i++)
    arr[i]=2;


}