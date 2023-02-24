#include <stdio.h>
#include <stdlib.h>
int printOddEven( int llimit , int ulimit);
int main()
{ int llimit,ulimit;
puts(" enter the lower limit :");
scanf(" %d" , &llimit);
puts(" enter the lower limit :");
scanf(" %d", &ulimit);
printOddEven( llimit ,  ulimit);
    return 0;
}
 int printOddEven( int llimit , int ulimit){
  if(llimit>ulimit){
    return ;
    }
    else {
            if(llimit%2==0){
            printf(" the even number : %d \n" , llimit);
            return printOddEven( ++llimit , ulimit);
            }
            if(llimit%2!=0){
            printf(" the odd number : %d \n" , llimit);
            return printOddEven( ++llimit , ulimit);
            }

    }


}
