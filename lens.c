#include<stdio.h>

int main()
{
    int n;
    char c[30];
    float DO,DI,HO;
  printf("Enter student name:(without spaces)\n");
  scanf("%s",c);
  printf("Select any numbers from 1 to 3 numbers\n1-find Focal Length\n2-find Magnific0ation \n3-Height Of Image\n");
  scanf("%d",&n);
  printf("Enter distance of object, distance of image , Height of object\n");
  scanf("%f%f%f",&DO,&DI,&HO);
 if(n==1)
 printf("The Focal length of Image = %f\n",(DO+DI)/(DO*DI));
 else if(n==2)
 printf("The Magnification of Image = %f\n",(-(DI/DO)));
 else if(n==3)
 printf("The Height Of Image = %f\n",(HO*(-(DI/DO))));
 else
 printf("Please Enter Numbers Between 1 to 3");
}