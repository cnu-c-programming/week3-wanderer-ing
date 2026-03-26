#include <stdio.h>
#include <stdarg.h>

int my_sum(char c, int n, ...){
    va_list ap;
    va_start(ap,n);

    if (c=='S'){
        for(int i=0; i<n-1;i++){
            printf("%s ",va_arg(ap,char*));
        }
        printf("%s\n", va_arg(ap,char*));
    }
    else if (c=='C'){
        for(int i=0; i<n;i++){
            printf("%c",va_arg(ap,int));
        }
        printf("\n");
    }
    else if (c=='D'){
        int total=0;

        for(int i=0; i<n;i++){
            total+=va_arg(ap,int);
        }
        printf("%d\n", total);
    }
}
int main() {
    my_sum('S',2,"Hello","World");
    my_sum('C',3,'C','N','U');
    my_sum('D',4,10,20,30,40);

    return 0;
}