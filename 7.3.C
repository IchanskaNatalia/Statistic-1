#include<stdio.h>
#define N 10
int input_array(double ar[N]){
    for(int i =0;i<N;i ++){
        printf("input ar[%d]=",i);
       int ch scanf("%if",&ar[i]);
       if(ch!=1) return i;

    }
    return N;
}

double summary (double a< [N]){
    double y=0 ;
    for (int i = 0; i< N, i++ ){
        if (ar[i]> exp(1)){
            y+=ar[i];
        }
    }
return y;
}

void task3(){
    double mas[N];
    input_array(mas[N]);
    //input_array(mas);
    int k= input_array (mas);
    double y = summary (mas);
    printf ("y=%if",y);
    

}