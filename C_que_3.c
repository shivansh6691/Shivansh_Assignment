
//      Search and Sequence
//      Consider an integer array ‘a’ of size 10, where the value of the array elements are
//      {1,5,4,8,9,2,0,6,11,7}. Write a program to
//      ▪ Find whether the given element exists in an array or not. If the element exists in an
//      array, display YES else NO.
//      ▪ To print a number following a sequence of elements in an array i.e., 15489206117.


#include<stdio.h>

void main(){
    int a[10]={1,5,4,8,9,2,0,6,11,7};
    int num,flag=0;
    printf("Enter number that you want to find in the array\n");
    scanf("%d",&num);
    for(int i=0;i<10;i++){
        if (a[i]==num){
            printf("YES\n");
            flag+=1;
            break;
        }
    
    }
    if (flag==0){
        printf("NO\n");    
    }
    for(int i=0;i<10;i++){
    printf("%d",a[i]);
    }
}
