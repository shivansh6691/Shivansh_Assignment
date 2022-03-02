//      Write a function that receives marks received by a student in 3 subjects
//      and returns the total and percentage of these marks. Call this function from
//      main( ) and print the results in main( )


#include <stdio.h>

float fun(float a,float b,float c,int choice){
    float sum,per;
    sum =a+b+c;
    per=((a+b+c)/300)*100;
    if (choice==1){
        return sum;    
    }
    else{
        return per;    
    }
}

int main()
{
    int choice=1;
    float sub1,sub2,sub3,k;
    printf("Enter Marks of student--\n");
    scanf("%f%f%f",&sub1,&sub2,&sub3);
    printf("SUM = ");
    k=fun(sub1,sub2,sub3,choice);
    printf("%f\n",k);
    choice=0;
    
	printf("\n");	

    printf("PERCENTAGE = ");
    k=fun(sub1,sub2,sub3,choice);
    printf("%f\n",k);
    return 0;
}

