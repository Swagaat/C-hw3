// question-1
#include <stdio.h>

void printArray(int* A, int n){
     for (int i=0; i < n; i++)
     {
         printf("%d", A[i]);
         
     }
     printf("\n");
     
}
void bubblesort(int *A, int n){
    int temp;
    for (int i=0; i< n-1; i++) // for number of pass
    {
        for (int j = 0; j <n-1-i ; j++) // for comparison in each pass
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                 
            }
        }
    }
}
int main(){
    int A[ ] = {5, 6, 2, 7, 1};
    int n =5;
    printArray(A, n);
    bubblesort(A, n);
    printArray(A, n);
    return 0;
}


// Solution-2


//Question-3
#include <stdio.h> 

int Pieces(int n) {
    int s = n / 2;
    return 1 + n*(n+1)/2;
}

int main() {
    int n, pic; 
    printf("How many cuts you want? : "); 
    scanf("%d", &n); 
    pic = Pieces(n); 
    printf("There will be: %d pieces", pic); 
    return 0; 
}


// Question-4
// convert binary to decimal

#include <stdio.h>
#include <math.h>

// function prototype
int convert(long long);

int main() {
  long long n;
  printf("Enter a binary number: ");
  scanf("%lld", &n);
  printf("%lld in binary = %d in decimal", n, convert(n));
  return 0;
}

// function definition
int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}
