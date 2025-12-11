/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, largest, smallest, a, b, c, d, flag1, flag2;
    scanf("%d", &num);
    a = num/1000;
    b = (num%=1000, num/100);
    c = (num%=100, num/10);
    d = num%10;
    
    //largest
    if (a>=b) {largest = a; flag1 = 1;}
    else {largest = b; flag1 = 2;}
    
    if (largest>=c) ;
    else {largest = c; flag1 = 3;}
    
    if (largest>=d) ;
    else {largest = d; flag1 = 4;}
    printf("%d\n", largest);
    
    //smallest
    if (a<=b) {smallest = a; flag2 = 1;}
    else {smallest = b; flag2 = 2;}
    
    if (smallest<=c) ;
    else {smallest = c; flag2 = 3;}
    
    if (smallest<=d) ;
    else {smallest = d; flag2 = 4;}
    printf("%d\n", smallest);
    
    
    if (flag1==1 && flag2==2){
        printf("%d%d%d%d", smallest, largest, c, d);
    }
    else if (flag1==1 && flag2==3){
        printf("%d%d%d%d", smallest, b, largest, d);
    }
    else if (flag1==1 && flag2==4){
        printf("%d%d%d%d", smallest, b, c, largest);
    }
    else if (flag1==2 && flag2==1){
        printf("%d%d%d%d", largest, smallest, c, d);
    }
    else if (flag1==2 && flag2==3){
        printf("%d%d%d%d", smallest, b, largest, d);
    }
    else if (flag1==2 && flag2==4){
        printf("%d%d%d%d", a, smallest, c, largest);
    }
    else if (flag1==3 && flag2==1){
        printf("%d%d%d%d", largest, b, smallest, d);
    }
    else if (flag1==3 && flag2==2){
        printf("%d%d%d%d", a, largest, smallest, d);
    }
    else if (flag1==3 && flag2==4){
        printf("%d%d%d%d", a, b, smallest, largest);
    }
    else if (flag1==4 && flag2==1){
        printf("%d%d%d%d", largest, b, c, smallest);
    }
    else if (flag1==4 && flag2==2){
        printf("%d%d%d%d", a, largest, c, smallest);
    }
    else if (flag1==4 && flag2==3){
        printf("%d%d%d%d", a, b, largest, smallest);
    }
    
    return 0;
}
