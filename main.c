#include <stdio.h>


int mdc(int a,int b);
int main(){
 int n, x, n1, d1, n2, d2,num, mdcr, den;
 char o;

 scanf("%d\n",&n);
 for(x = 0; x < n; x++){
  scanf("%d / %d %c %d / %d",&n1,&d1,&o,&n2,&d2);
  if(o == '/'){
   num = d1*n2;
   den = n1*d2;
   mdcr = mdc(den,num);
   printf("%d/%d = %d/%d\n",den,num,den/mdcr,num/mdcr);
  }
  else{
   num = d1*d2;
   if(o == '+')
   den = n1*(num/d1) + n2*(num/d2);
   else if(o == '-')
   den = n1*(num/d1) - n2*(num/d2);
   else if(o == '*')
   den = n1*n2;
   mdcr = mdc(den,num);
   if(mdcr < 0) mdcr = -1*mdcr;
   printf("%d/%d = %d/%d\n",den,num,den/mdcr,num/mdcr);
  }
 }
 return 0;
}

int mdc(int a,int b)
 {
 if(b == 0) 
  return a;
 else
  return mdc(b,a%b);
} 