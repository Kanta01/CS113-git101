#include <stdio.h>
// void addTen(int number[], int n)
// รับpointer ส่งaddress
void addTen(int *number, int n){
    for (int i=0;i<n;i++){
        printf("add Ten [%p] = %d\n", number+i, *(number+i));
        *(number+i) += 10;
    }
}
int addTwenty(int *n){
    *n += 20;
    return 1;
}
int main()
{
    int number[] = {4, 5, 6, 7, 8, 9};
    int n = 6;
    addTen(number, n);
    for (int i=0;i<n;i++){
        printf("[%p] = %d\n", number+i, *(number+i));
    }
    addTwenty(&n);
    printf("n = %d\n", n);
}