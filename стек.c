#include <stdio.h>
#include <stdlib.h>
char st[10];
int k=0,i=0;
char x=0;

void push(char x){
    if (k<=9){
        st[k]=x;
        k++;
    }
    else{
        printf("stak full\n");
    }

}
void pop(){
    if (k>0){
        k--;
        st[k]="\0";
    }
    else{
        printf("stak empty\n");
    }
}

int main()
{
    for (x=0;x<11;x++){
        push(x);
    }
    for (i=0;i<k;i++){
        printf("%d ", st[i]);
    }
    for (i=0;i<11;i++){
        pop();
    }
    for (i=0;i<k;i++){
        printf("%d ", st[i]);
    }
    return 0;
}
