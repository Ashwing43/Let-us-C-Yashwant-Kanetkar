#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int r,g,b;
    float c,m,y,k,w;
    printf("Enter RGB color values ");
    scanf("%d %d %d", &r, &g, &b);
    w = fmax(r/(255*1.0), fmax(g/(255*1.0), b/(255*1.0)));
    if (w == 0) {
        c = m = y = 0;
        k = 1;
    }else{
        c = (w - r/(255*1.0))/w;
        m = (w - g/(255*1.0))/w;
        y = (w - b/(255*1.0))/w;
        k = 1 - w;
    }
    printf("CMYK values are %f %f %f %f", c, m, y, k);
    return 0;
}