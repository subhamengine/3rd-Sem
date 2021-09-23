#include<stdio.h>
void printing(int arr[],int size){
	int i = 0;
	for(i = 0 ; i < size ; i++) printf("%d ",arr[i]);
	printf("\n");
}

void sorting(int arr[] , int size){
	int i,j,temp;
	for(i=size-2;i>=0;i--){
      for(j=0;j<=i;j++){
        if(arr[j]>arr[j+1]){
           temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
        }
      }
   }
   printing(arr , size);
}
void searching(int arr[] , int ele , int size){
	int i = 0 , pos = -1;
	int flag = 0;
	for(i = 0 ; i < size ; i++){
		if(ele == arr[i]){
			flag = 1;
			pos = i;
			break;
		}
	}
	printf("\nPosition of the element is %d",pos);
}
void finddup(int arr[] , int size){
	int i,j,visited = -1;
	int fr[size];
	for(i = 0; i < size; i++){    
        int count = 1;    
        for(j = i+1; j < size; j++){    
            if(arr[i] == arr[j]){    
                count++;    
                //To avoid counting same element again    
                fr[j] = visited;    
            }    
        }    
        if(fr[i] != visited)    
            fr[i] = count;    
    }
	for(i = 0; i < size; i++){    
        if(fr[i] != visited){    
            printf("    %d", arr[i]);    
            printf("  ->  ");    
            printf("  %d\n", fr[i]);    
        }    
    }    
    printf("---------------------\n");        
}
void inserting(int arr[] , int ele , int pos , int size){
	int i = 0;
	for(i = size ; i >pos ; i--){
		arr[i] = arr[i-1];
	}
	arr[pos] = ele;
	printing(arr,size);
}
void deletion(int arr[] , int ele , int size){
	int i;
	int pos = -1;
	for(i = 0 ; i < size ; i++){
		if(arr[i] == ele){
			pos = i;
		}
	}
	if(pos != -1){
		for(i = pos; i < size; i ++){
			arr[i] = arr[i+1]; 
		}
		printing(arr,size-1);
	}
	else printf("No such value exist\n");
}
void max(int arr[],int size){
	int i = 0; 
	int maxi = arr[0];
	for(i = 1 ; i < size ; i++){
		if(arr[i] > maxi) maxi = arr[i];
	}
	printf("Maximum element %d",maxi);
}
void min(int arr[],int size){
	int i = 0; 
	int mini = arr[0];
	for(i = 1 ; i < size ; i++){
		if(arr[i] < mini) mini = arr[i];
	}
	printf("Minimum element %d",mini);
}
void totaleven(int arr[] , int size){
	int i = 0 , count = 0;
	for(i = 0 ; i < size ; i++){
		if(arr[i]%2==0){
			count++;
		}
	}
	printf("Total even Numbers are: %d",count);
}
void totalodd(int arr[] , int size){
	int i = 0 , count = 0;
	for( i = 0 ; i < size ; i++){
		if(arr[i]%2 != 0){
			count++;
		}
	}
	printf("Total odd Numbers are: %d",count);
}
int main(){
	int arr[15];
	printf("Enter 10 integers:\n");
	int i;
	for(i = 0 ; i < 10 ; i++){
		scanf("%d",&arr[i]);
	}
	int optn;
	int n = 10;
	int ele,pos;
	while(1){
		printf("\n\nEnter the option:\n1. Sort the array.\n2. Search an Element\n3. Print dublicate values\n4. Insert an element\n5. Delete an element\n6. Max and min\n7. Total even and odds\n0. Exit\n");
		scanf("%d",&optn);
		switch(optn){
			case 1:
				printf("\nBefore sorting:\n");
				printing(arr,n);
				printf("\nAfter sorting:\n");
				sorting(arr , n);
				break;
				
			case 2:
				printf("Enter the element to be searched ");
				scanf("%d",&ele);
				printf("Find the element in array\n");
				printing(arr,n);
				searching(arr,ele,n);
				break;
			case 3:
				printf("The duplicates in the array are:\n\n");
				printf("The array is:\n");
				printing(arr,n);
				finddup(arr,n);
				break;
			case 4:
				printf("Enter the Element and postion:\n");
				scanf("%d%d",&ele,&pos);
				printf("Before Inserting\n\n");
				printing(arr,n);
				printf("After Inserting\n\n");
				inserting(arr,ele,pos,n+1);
				n=n+1;
				break;
				
			case 5:
				printf("Enter the element to be delete\n");
				scanf("%d",&ele);
				printf("Before Deleting\n");
				printing(arr,n);
				printf("After Deleting\n");
				deletion(arr,ele,n);
				n=n-1;
				break;
				
			case 6:
				printf("Maximum and Minimum element\n");
				max(arr,n);
				printf("\n");
				min(arr,n);
				printf("\n");
				break;
			case 7:
				totaleven(arr,n);
				printf("\n");
				totalodd(arr,n);
				printf("\n");
				break;
				
			case 0:
				printf("Have a nice day\n");
				exit(0);
				break;
				
			default:
				printf("Enter proper option\n");
		}		
	}
	return 0;
}
//created by subham sharma(IT)
