#include <stdio.h>
#include <stdlib.h>

int fibonacci(int num) {
	if (num < 2){
		return num;
	}
	return fibonacci(num-1) + fibonacci(num-2);
}
int main() {
	int num;
	printf("Entrer un numiro: ");
	scanf("%d",&num);
	printf("n eme fibonacci est : %d \n",fibonacci(num));
	system("pause");
	return 0;
}
