// & provied the address of something stores in the memory
// * tells the complier to go the memory 
#include<stdio.h>
int main()
{
    int n=50; 
    int *p=&n;  //here * declears p as a pointer 
    printf("%i",*p); //here * means go to the memory and show me what's there
    printf("%p",&n); //this prints the address of n
    

}
