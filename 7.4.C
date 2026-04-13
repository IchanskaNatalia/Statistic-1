#include <stdio.h>
int max_array(int ar[], int n){
    int maximum = ar[0];
    for(int i=1; i<n; i++){
        if(maximum <ar[i]){
            maximum=a[i];
        }
    }
return maximum;
}
void task4(){
int K=input_array(mas);
int maximum = max_array(mas, K);
printf("maximum=%d",maximim);
}