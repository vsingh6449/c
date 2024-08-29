#include <stdio.h>
int main()
{
    int r, g, b, big;
    float w, c, m, y, k;
    printf("Enter the RGB values(0-255) = ");
    scanf("%d %d %d", &r, &g, &b);
    if (r == 0 && g == 0 && b == 0)
    {
        c = 0;
        m = 0;
        y = 0;
        k = 1;
        printf("Cyan: %.2f\n", c * 100); // we are multiply 100 for percentage
        printf("Magenta: %.2f\n", c * 100);
        printf("Yellow: %.2f\n", c * 100);
        printf("Black: %.2f\n", c * 100);
    }
    else if ((r>=0 && r<=255) && (g>=0 && g<=255) && (b>=0 && b<=255))
    {
        big = (r>g)?((r>b)?r:b):((g>b)?g:b);
        w= (float)big/255;
        c=(w-(float)r/255)/w;
        m=(w-(float)g/255)/w;
        y=(w-(float)b/255)/w;
        k=1-w;
        printf("Cyan: %.2f\n", c * 100);
        printf("Magenta: %.2f\n", m * 100);
        printf("Yellow: %.2f\n", y * 100);
        printf("Black: %.2f\n", k * 100); 
    } 
    else
    {
        if(r<=0 || r>=255)
        {
            printf("Red Invalid");
        }
        if(g<=0 || g>=255)
        {
            printf("Green Invalid");
        }
        if(b<=0 || b>=255)
        {
            printf("Blue Invalid");
        }
    }  
    return 0;
}