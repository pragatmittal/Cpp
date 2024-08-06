void heapify(int arr[],int n.int i){
    int largest =i;
    int leftIndex=2*i;
    int rightIndex=2*i+1;
    if(leftIndex<n && arr[largest]<arr[leftIndex] ){
        largest=leftIndex;

    }
    else if(rightIndex<n && arr[largest]<arr[rightIndex]){
        i=rightIndex;

    }
    else{
        swap(arr[largest],arr[i]);
        heapify(arr,n,i);


    }


}