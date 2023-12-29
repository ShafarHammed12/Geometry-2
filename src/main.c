#include <stdio.h>
#include <math.h>
int main() {
   float radius, area;
   printf("Enter the radius of the circle:");
   scanf("%f", &radius);
   printf("%f \n", radius);
   
   area = M_PI * pow(radius, 2);
   printf("The area of the given circle is %f", area);
   return 0;
}