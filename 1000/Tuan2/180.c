#include <stdio.h>
#include <math.h>

void lietKeCacSoTrongMangMotChieu(int a[], int n){
    int i;
    for(int = 1; i < n - 1 ; i++){
        if((fabs(a[i - 1]) < a[i]) && (fabs(a[i + 1]) > a[i])){
                    printf("%0.3f ", a[i]);
    }
}
