#include<stdio.h>
typedef int keytype;
typedef int othertype;
typedef struct{
	keytype key;
	othertype otherfields;
}recordtype;
void swap(recordtype &x, recordtype &y){
	recordtype temp;
	temp = x;
	x = y;
	y = temp;
}
void BubleSort(recordtype a[], int n){
	int i, j;
	for(i = 0; i <= n-2; i++)
		for(j = n-1; j >= i+1; j--)
			if(a[j].key < a[j-1].key)
				swap(a[j], a[j-1]);
}
int main(){
	int n, i;
	recordtype a[1000];
	
	FILE *file = fopen("dayso.inp","r");
	fscanf(file, "%d", &n);
	for(i=0; i <= n-1; i++){
		fscanf(file, "%d", &a[i]);
	}
		printf("\n");
	printf("Thuat toan BubleSort\n\n");
	printf("Day so truoc khi sap xep: ");
	for(i = 0; i < n-1; i++){
		printf("%d ",a[i]);
	}
	printf("\n\n");
	BubleSort(a,n);
	printf("Day so sau khi sap xep: ");
	for(i = 0; i <= n-1; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
