#include <stdio.h>

//int getArrayLength (int * );
void printArr (int * , int) ;
void quickSort(int * , int , int )  ; 
 

int main (void) {
//int arr [9] = {9,4,3,2,1,6,5,7,0} ;
int arr [10] = {0,1,2,3,4,5,6,7,8,9} ;
//int length = 9 ;
int length = 10 ; 
printf ("Un sorted array\n");
printArr(arr,length) ;  
//quickSort (arr,0,8) ;
quickSort (arr,0,9) ;  
}

void printArr (int arr[],int length){ 
	for (int i = 0 ; i<length ;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

void quickSort (int arr[] , int right, int left ) {
int pivot = arr[left]  ;
printf("pivot = %d\n" , pivot) ; 

int i = right ; 
int j = left ; 
printf ("array to be sorted\n [%d --->%d]\n",i,j);

while (i<=j){

while (arr[i]<pivot) {
i = i+1 ;
}
while (arr[j]>pivot){
j = j-1 ; 
}
if (i<=j){
int temp = arr[i] ;
arr[i] = arr[j] ;
arr[j] = temp ; 
i = i+1 ; 
j= j-1 ; 
}
printArr (arr,10);
} 

if (left > i ) {
quickSort(arr,i , left ) ; 
}
if (right < j ) {
quickSort(arr,right,j) ; 
}
 printArr (arr,10) ;
}
