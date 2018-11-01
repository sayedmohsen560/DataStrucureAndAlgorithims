#include <stdio.h>
/* Algorthim analysis : */ 
int getArrayLength(int*); 
void printarr(int*,int );
int inserationsort(int*,int) ;

int main (void){
int arr[9] = {6,3,2,1,9,10,5,3,4};
//int  length = getArrayLength(arr);
int length = 9 ; 
printarr(arr,length);
inserationsort(arr,length);
return 0 ; 

}
/*
int getArrayLength(int arr[]){
int length = (int) (sizeof(arr)/sizeof(arr[0]));
return length ; 
}
*/
void printarr (int arr[],int length){ 
	for (int i = 0 ; i<length ;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

int inserationsort(int arr[],int length){
	int i, j=1 , key ; 
	while (j<=length){
		key = arr[j];
		 i = j-1;

		while (i>=0&& key<arr[i]){
				arr[i+1] = arr[i];
				i = i-1 ;  

		}
	arr[i+1] = key ; 
	printarr(arr,length);
	j++;

	}


}


