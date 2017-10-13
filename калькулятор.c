#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <io.h>
char st[10000];
int k=0,i=0;
char x=0;
int test(char x){
    if (x=="+"){
        return (st[k-2]+st[k-1]);}
    if (x=="-"){
        return (st[k-2]-st[k-1]);}
    if (x=="/"){
        return (st[k-2]/st[k-1]);}
    if (x=="*"){
        return (st[k-2]+st[k-1]);}
}
void push(char x){
    if (k<=9999){
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
    x=getchar();
    while (x!="="){

        /*if ("0"<=x<="9"){
            push(x);
        }
        else{
          i=test(x);
          pop();
          st[k-1]=i;
        }
        x=getchar();*/
        printf("%c",x);
        x=getchar();
    }
    /*printf("%c",st[0]);*/
    return 0;
}
