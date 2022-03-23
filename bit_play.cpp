/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define BIT_0          0x00000001U
#define BIT_1          0x00000002U
#define BIT_2          0x00000004U
#define BIT_3          0x00000008U
#define BIT_4          0x00000010U
#define BIT_5          0x00000020U
#define BIT_6          0x00000040U
#define BIT_7          0x00000080U
#define BIT_8          0x00000100U
#define BIT_9          0x00000200U
#define BIT_10         0x00000400U
#define BIT_11         0x00000800U
#define BIT_12         0x00001000U
#define BIT_13         0x00002000U
#define BIT_14         0x00004000U
#define BIT_15         0x00008000U
#define BIT_16         0x00010000U
#define BIT_17         0x00020000U
#define BIT_18         0x00040000U
#define BIT_19         0x00080000U
#define BIT_20         0x00100000U
#define BIT_21         0x00200000U
#define BIT_22         0x00400000U
#define BIT_23         0x00800000U
#define BIT_24         0x01000000U
#define BIT_25         0x02000000U
#define BIT_26         0x04000000U
#define BIT_27         0x08000000U
#define BIT_28         0x10000000U
#define BIT_29         0x20000000U
#define BIT_30         0x40000000U
#define BIT_31         0x80000000U

int main()
{
    
   unsigned int data;
   data = 0;
   printf("\n data = %d \n",data);

   data |= BIT_0;
   printf("\n data = %d \n",data);
   
   data = 0;
   data = data |BIT_0 |BIT_1;
   printf("\n data = %d \n",data);
    return 0;
}
