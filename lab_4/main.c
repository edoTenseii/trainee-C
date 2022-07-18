#include <stdio.h>

int main()
{

   double y11 = 0.00016347; 
   double y12 = -0.00008538; 
   double y21 = 0.00008538; 
   double y22 = -0.00010828;

   double h11 = 6111.6392;
   double h12 = 0.5222222;
   double h21 = 0.522287;
   double h22 = -0.00006369;

   double Y = 0.00066667; 


   double det_y = (y11 * y22) - (y12 * y21); 
   double det_h = (h11 * h22) - (h12 * h21);
   printf(" |y|: %f * 10^6\n |h|: %f\n", det_y * 1000000, det_h);

   double Ku_y = y21 / (Y - y22);
   double Ki_y = (y21 * Y) / ((y11 * Y) - det_y);
   double Yt_y = (y21 * Y) / (Y - y22);
   double Zt_y = y21 / ((y11 * Y) - det_y);
   printf("\n EXPERIMENT [y]\n Ku: %f\n Ki: %f\n Yt: %f\n Zt: %f\n",
   Ku_y, Ki_y, Yt_y, Zt_y);


   double Ku_h = h21 / ((h11 * Y) - (det_h));
   double Ki_h = (h21 * Y)/(Y - h22);
   double Yt_h = (h21 * Y)/((h11 * Y) - det_h);
   double Zt_h = h21/ (Y - h22);
   printf("\n EXPERIMENT [h] \n Ku: %f\n Ki: %f\n Yt: %f\n Zt: %f\n",
   Ku_h, Ki_h, Yt_h, Zt_h);
   
   double z_1 = (y22 - y12) / ((y11 * y22) + y12 * y12);
   double z_2 = - (y11 + y12) / ((y11 * y22) + y12 * y12);
   double z_3 = y12 / ((y11 * y22) + y12*y12);

   printf("\n Z1 = %f\n Z2 = %f\n Z3 = %f\n", z_1, z_2, z_3);

   return 0;
}