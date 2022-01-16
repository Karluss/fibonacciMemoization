//Carlos Manoel Pedrosa de Oliveira - TIA: 32068549

#include <stdio.h>

int fibonacci(int n, int vetor[]){
    if (n < 1) return 0;
    else if (n == 1) return 1;
    else return  memoization(n-1,vetor) + memoization(n-2, vetor);
}

int memoization(int n, int vetor[]){
    for (int i = 0; i < n+1; i++){
        if (vetor[i] == n){
            return vetor[i];
        }
    return vetor[n] = fibonacci(n, vetor);
    }

}

int main(){
    int num;

    printf("Deseja realizar o Fibonacci de quanto? ");
    scanf("%d", &num);

    int valuesSaved[num+1];


    printf("Fibonacci de %d: %d\n", num, fibonacci(num, valuesSaved));

}
