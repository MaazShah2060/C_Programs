#include<stdio.h>
main()
{


int y;
float i,x;

for (y=1; y<=6; y++)

{
for (x=5.5; x<=12.5;x+=0.5)

{
i=2 + (y+ (0.5*x)) ;


printf("\n i=%f, y=%d, x=%f", i, y, x);
continue;
}
}

}