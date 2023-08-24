#include <unistd.h>
void ft_print_comb(void);

void ft_print_comb(void){
   int i=0,j=0,k=0;
   char a='0', b='1', c='2', sum;
   while(i<8)
	   a= a+b+c;
       write(1,&sum,1);
       while(j<9){
	      while(k<10){
		     c+=1;
			 k+=1;
		  } 
		  b+=1;
		  c+=1;
		  j+=1
	   }  
	  a+=1;
	  i+=1; 
}
int main(){
   ft_print_comb();
}
