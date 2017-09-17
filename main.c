#include <stdio.h>
#include <math.h>
int main(){
float a;
char b;
scanf("%f%c",&a,&b);
switch(b) {
    case'C':
        printf("F=%.2f""\nK=%.2f",(a*1.8+32),a+273.15);
        break;
    case'F':
        printf("C=%.2f""\nK=%.2f",(a-32)/1.8,((a-32)/1.8)+273.15);
        break;
    case'K':
        printf("C=%.2f""\nF=%.2f",(a-273.15),((a-273.15)*1.8)+32);
        break;
    default:
        printf("\nC=%.2f""\nF=%.2f""\nK=%.2f\n",a,((a*1.8)+32),(a+273.15));
        printf("\nF=%.2f""\nC=%.2f""\nK=%.2f\n",a,((a-32)/1.8),(((a-32)/1.8)+273.15));
        printf("\nK=%.2f""\nC=%.2f""\nF=%.2f\n",a,(a-273.15),((a-273.15)*1.8)+32);
        break;
}
return 0;
}
