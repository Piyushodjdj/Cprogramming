#include<stdio.h>
void count(int arr[], int n);
int main() {
    int a[100], size;
    printf("Enter the size: ");
    scanf("%d", &size);
    printf("Enter the elements: ");
    for(int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    count(a, size);
    return 0;
}

void count(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }
}
