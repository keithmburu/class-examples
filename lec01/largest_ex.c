#include <stdio.h>
#include <stdlib.h>

int largest(int arr[], int n){
	int l;
	l = 0;
	for (int i = 0; i < n; i++){
		if (arr[i] > l) {
			l = arr[i];
		}
	}
	return l;
}

int main(){
	int values[10];
	for (int i = 0;i < 10; i++){
		values[i] = rand();
		printf("%d\n", values[i]);
	}
	printf("The largest is %d\n", largest(values, 10));
	return 0;
}
