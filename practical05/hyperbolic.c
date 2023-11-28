#include<stdio.h>
#include<stdlib.h>
void fibonacci(int *a, int *b);
int main(){
int n, i;
int f0=0, f1=1;
printf("Enter a positive integer\n");
scanf("%d", &n);
if(n<1) {
printf("The number is not positive. \n");
exit(1);
}
printf("The fibonacci sequence is: \n");
printf("%d, %d, ", f0, f1);
//Calculating fibonacci sequence from 2
for (i = 2; i < n; i++) {
    fibonacci(&f1, &f0);
    printf("%d, ", f1);

    if ((i + 1) % 10 == 0) printf("\n");
}
return 0;
}

void fibonacci (int* a, int *b) {
int next;
//*a-fn-1 *b=fn-2 next=fn
next= *a+*b;
//*afn *b=fn-1
*b=*a;
*a= next;
}
