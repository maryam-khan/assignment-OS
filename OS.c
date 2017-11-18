# include <stdio.h>
int main()
    
{
  int a[100]={1,2,3,4,5,6,7,8,9,10,10, 11, 12, 13, 14, 
               15, 16, 17, 18, 19, 
               20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 
               30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 
               40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 
               50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 
               60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 
               70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 
               80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 
               90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 
               100};
  int sum1=0,sum2=0,sum=0,sum3=0,sum4=0;
  int id,x,y,z;
  for(x=0;x<2;x++)
  {
	  
	  if(x==0)
	  {
		 id=fork();
        if(id==0) 
        {
        for(y=0;y<=25;y=y++)
        {
           sum1=sum1 + *(p+y);
        }
        printf("Parent Sum : %d\n",sum1);
        }
        else
        {
         for(y=26;y<=50;y=y++)
        {
           sum2=sum2 + *(p+y);   
        }
       printf("Child Sum : %d\n",sum2);
        }
      }
	  if(x==1)
	  {
		if(id==0) 
        {
        for(z=51;z<=75;z=z++)
        {
           sum3=sum3 +*(p+z);
        }
        printf("Parent Sum : %d\n",sum3);
        }
        else
        {
         for(z=75;z<100;z=z++)
        {
           sum4=sum4 +*(p+z);   
        }
       printf("Child Sum : %d\n",sum4);
        }
		  
	  }
  }

  sum=sum1+sum2+sum3+sum4;
   
  printf("Final Sum is : %d\n", sum);
  return 0;    
}
