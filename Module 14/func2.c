 #include<stdio.h>

 //function part with return type & no parameter
 int sum()
 {
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    return sum;
    
 }

//main part

 int main()
 {
    printf("%d",sum());
 
     
     return 0;
 }
 
 
 