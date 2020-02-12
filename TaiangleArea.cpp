#include<stdio.h>
#include<string.h>
#include<math.h>
float TaiangleArea(float a,float b,float c)
  {
      if(a+b >c && a+c  >b  &&  b+c >a)
          {
              float  p=(a+b+c)*0.5;
              float s=sqrt(p*(p-a)*(p-b)*(p-c));
              return s;
            }
       else
       {
       
       return  -1;
       }
}
