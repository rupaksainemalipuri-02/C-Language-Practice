#include <stdio.h>

int main()
{
    int N, a, b, c, d;
    int d1, d2, d3, d4;
    printf("Enter a 4 digit number: ");
    scanf("%d", &N);
    a = N/1000;
    b = (N%=1000, N/100);
    c = (N%=100, N/10);
    d = N%10;
    
    if (a>=b && a>=c && a>=d){
        d1 = a;
        if (b>=c && b>=d){
            d2 = b;
            if (c>=d){
                d3 = c;
                d4 = d;
            }
            else{
                d3 = d;
                d4 = c;
            }
        }
        if (c>=d && c>=b){
            d2 = c;
            if (b>=d){
                d3 = b;
                d4 = d;
            }
            else{
                d3 = d;
                d4 = b;
            }
        }
        if (d>=c && d>=b){
            d2 = d;
            if (c>=b){
                d3 = c;
                d4 = b;
            }
            else{
                d3 = b;
                d4 = c;
            }
        }
    }
    else if (b>=a && b>=c && b>=d){
        d1 = b;
        if (a>=c && a>=d){
            d2 = a;
            if (c>=d){
                d3 = c;
                d4 = d;
            }
            else{
                d3 = d;
                d4 = c;
            }
        }
        if (c>=d && c>=a){
            d2 = c;
            if (b>=d){
                d3 = a;
                d4 = d;
            }
            else{
                d3 = d;
                d4 = a;
            }
        }
        if (d>=c && d>=a){
            d2 = d;
            if (c>=a){
                d3 = c;
                d4 = a;
            }
            else{
                d3 = a;
                d4 = c;
            }
        }
    }
    else if (c>=a && c>=b && c>=d){
        d1 = c;
        if (b>=a && b>=d){
            d2 = b;
            if (c>=d){
                d3 = a;
                d4 = d;
            }
            else{
                d3 = d;
                d4 = a;
            }
        }
        else if (a>=d && a>=b){
            d2 = a;
            if (b>=d){
                d3 = b;
                d4 = d;
            }
            else{
                d3 = d;
                d4 = b;
            }
        }
        else if (d>=a && d>=b){
            d2 = d;
            if (a>=b){
                d3 = a;
                d4 = b;
            }
            else{
                d3 = b;
                d4 = a;
            }
        }
    }
    else if (d>=a && d>=c && d>=b){
        d1 = d;
        if (b>=c && b>=a){
            d2 = b;
            if (c>=a){
                d3 = c;
                d4 = a;
            }
            else{
                d3 = a;
                d4 = c;
            }
        }
        else if (c>=a && c>=b){
            d2 = c;
            if (b>=a){
                d3 = b;
                d4 = a;
            }
            else{
                d3 = a;
                d4 = b;
            }
        }
        else if (a>=c && a>=b){
            d2 = a;
            if (c>=b){
                d3 = c;
                d4 = b;
            }
            else{
                d3 = b;
                d4 = c;
            }
        }
    }
    
    printf("%d%d%d%d", d1, d2, d3, d4);
    return 0;
}
