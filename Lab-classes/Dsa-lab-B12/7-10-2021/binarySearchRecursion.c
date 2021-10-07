void binarysearch(int list[]  , int l , int r , int ele){
	int mid;
 
    if (l > r)
    {
        printf("Key not found\n");
        return;
    }
    mid = (l + r) / 2;
    if (list[mid] == ele)
    {
        printf("Key found\n");
    }
    else if (list[mid] > ele)
    {
        binarysearch(list, l, mid - 1, ele);
    }
    else if (list[mid] < ele)
    {
        binarysearch(list, mid + 1, r, ele);
    }
}
void main(){
	int n ; 
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	int arr[n] , i  , ele;
	printf("Enter the elements in the array:\n");
	for(i = 0 ; i < n ; i++) scanf("%d",&arr[i]);
	printf("Enter the element to be searched:\n");
	scanf("%d",&ele);
	binarysearch(arr , 0 , n-1 , ele);
	
}
