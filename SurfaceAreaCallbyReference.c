#include <stdio.h>
#define PI 3.14159
float volume(float r, float h);
float totalsurfacearea(float r, float h);
int main()
{
 float r = 5;
 float h = 8;
 volume(r, h);
 totalsurfacearea(r, h);
 return 0;
}
float volume(float r, float h)
{
 float vol = PI * r * r * h;
 printf("Volume of Cylinder = %f \n" , vol);
}
float totalsurfacearea(float r, float h)
{
 float tsurf_ar = (2 * PI * r * h) + (2 * PI * r * r);
 printf("Total Surface Area Of Cylinder = %f \n" , tsurf_ar);
}
