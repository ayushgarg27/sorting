#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++){             // input array
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n; i++){            // buuble sort
        for(int j=0; j<n-i; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

     for(int i=0; i<n; i++){           // selection sort
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%d", a[i]);
        printf(" ");
    }

}