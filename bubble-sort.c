#include <stdio.h>

const int MAX = 9;
void printValue(int*);
void sort(int*);
void swap(int*, int*);
void printValues(int*);

int main() {

	int values[] = {7,3,9,4,6,1,2,8,5};
	printf("before: ");
	printValues(values);
	sort(values);
	printf("after: ");
	printValues(values);






	//testing swap function
	/*
	int x = 3;
	int y = 5;
	printf("%d, %d,\n", x, y);
	swap(&x, &y);
	printf("%d, %d \n", x,y);
	*/	



}

void sort(int values[]){
	for (int i = 0; i < (MAX -1); i++){
	
		for (int j = 0; j < (MAX - 1); j++){
			if (values[j] > values[j + 1]) {
				swap(&values[j],&values[j +1]);
								}
		printValues(values);
	
		}
	}





}

void printValues(int values[]){
	printf("[");
	for (int i = 0; i < MAX; i++) {
		printf("%d,", values[i]);
	}
	printf("]\n");	
}

void swap(int* a, int* b){

	int temp;
	temp = *a;
	*a = *b; 
	*b = temp;
}


