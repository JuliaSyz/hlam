#include <stdlib.h>
#include <stdio.h>
int st[100];
int k=0;
/*void push(float x){
    if (k<=99){
        st[k]=x;
        k++;
    }
    else{
        printf("stak full\n");
    }

}
float pop() {
    return st[--k];
    stek[count]='\0';
}
*/
void push(char x){
    if (k<=99){
        st[k]=x;
        k++;
    }
    else{
        printf("stak full\n");
    }

}
float pop(){
        k--;
        return k;
        st[k]='\0';
}



int main()
{
    int x;
    char h;
    float pop1;
    while ((x=getchar())!='='){
        if (x>='0' && x<='9')
            push(x-'0');}
        else{
            h=x
            switch (h){
                case '+':
                    pop1=pop();
                    push(pop()+pop1);
                case '-':
                    pop1=pop();
                    push (pop()-pop1);
                case '/':
                    pop1=pop();
                    if (pop1!=0.0)
                        push(pop() / pop1);
                    else
                        printf(" delit nelzya");
                case '*':
                    pop1=pop();
                    push (pop()*pop1);
                }
    }
    printf("%d",pop());
    return 0;
}
