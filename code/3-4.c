#include <stdio.h>
#include <stdarg.h>

int max_of(int n, ...){
    va_list ap;
    va_start(ap, n);
    int max_num=0;
    for(int i=0; i<n; i++){
        int num = va_arg(ap, int);
        if (max_num<num){
            max_num=num;
        }
    }
    va_end(ap);
    return max_num;
}

int main() {
    printf("%d\n", max_of(4,5,12,3,9));
    printf("%d\n", max_of(6,1,2,3,4,5,6));
    printf("%d\n", max_of(3,100,200,300));
    return 0;
}