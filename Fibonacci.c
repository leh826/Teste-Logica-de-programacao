#include <stdio.h>

int main() {
    int num, a = 0, b = 1, ultimo = 0, op =1;
	while(op == 1)
	{
		printf("\nDigite um numero inteiro: ");
	    scanf("%d", &num);
		if (num == 1){
	        printf("%d faz parte da serie de Fibonacci.\n", num);
		}else if (num == 0) {
	        printf("%d faz parte da serie de Fibonacci.\n", num);
	
	    } else {
	        while (ultimo < num) {
	            ultimo = a + b; 
	            a = b;
	            b = ultimo;
	        }
	
	        if (ultimo == num) {
	            printf("%d faz parte da serie de Fibonacci.\n", num);
	        } else {
	            printf("%d nao faz parte da serie de Fibonacci.\n", num);
	        }
	    }
		
		printf("Deseja continuar?\n(1)sim (2)nao\n");
		scanf("%d", &op);	
	}
    

    return 0;
}
