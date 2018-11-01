#include <stdio.h>
void printArr (int *,int) ;
void makeSwap (int * , int* ) ; 
void selectionSort(int *,int ) ;
int main()
{
  int arr[] = {10,8,9,7,6,5,4,3,2,1} ;
  selectionSort(arr,10) ;
    printArr(arr,10);
    return 0;
}

void printArr (int arr[],int length){ 
	for (int i = 0 ; i<length ;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

void makeSwap(int *a , int *b ){

int temp ; 
temp = *b ; 
*b = *a ; 
*a = temp ; 

}
void selectionSort(int *arr,int length )  
{
    int min_loc ;
    int i , j ;
    for (i=0;i<length-1;i++)
    {
        min_loc = i;
        for (j=i+1;j<=length-1;j++)
        {
            if (arr[j]<=arr[min_loc])
            {
                min_loc=j ;
            }
        }
        makeSwap(&arr[min_loc],&arr[i]) ;
    }
}


