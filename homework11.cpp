#include <stdio.h> 
#include <stdlib.h> 

int main()
{
 
    int x,y,z; 
    int m1,a,m2; 

    printf("叫块计\n"); 
    printf("计x="); scanf("%d",&x); 
    printf("计y="); scanf("%d",&y); 
    printf("计z="); scanf("%d",&z); 

    x > y ? (m1 = x, m2 = y) : (m1 = y, m2 = x); 
    z > m1 ? (a = m1, m1 = z) : 
    z > m2 ? a = z : (a = m2, m2 = z); 

    printf("程:%d い丁:%d 程:%d\n", m2, a, m1); 

    system("PAUSE"); 
    return 0; 
}
