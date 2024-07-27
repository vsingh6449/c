#include<stdio.h>
int main()
{
 int a0h,a0w,a1h,a1w,a2h,a2w,a3h,a3w,a4h,a4w,a5h,a5w,a6h,a6w,a7h,a7w,a8h,a8w;
 a0h=1189,a0w=841;
 a1h=a0w,a1w=a0h/2;
 a2h=a1w,a2w=a1h/2;
 a3h=a2w,a3w=a2h/2;
 a4h=a3w,a4w=a3h/2;
 a5h=a4w,a5w=a4h/2;
 a6h=a5w,a6w=a5h/2;
 a7h=a6w,a7w=a6h/2;
 a8h=a7w,a8w=a7h/2;
 printf("A0 = %dmm X %dmm\n",a0h,a0w);
 printf("A1 = %dmm X %dmm\n",a1h,a1w);
 printf("A2 = %dmm X %dmm\n",a2h,a2w);
 printf("A3 = %dmm X %dmm\n",a3h,a3w);
 printf("A4 = %dmm X %dmm\n",a4h,a4w);
 printf("A5 = %dmm X %dmm\n",a5h,a5w);
 printf("A6 = %dmm X %dmm\n",a6h,a6w);
 printf("A7 = %dmm X %dmm\n",a7h,a7w);
 printf("A8 = %dmm X %dmm\n",a8h,a8w);
 return 0;
 
}