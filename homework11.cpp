#include <stdio.h> 
#include <stdlib.h> 

int main()
{
 
    int x,y,z; 
    int m1,a,m2; 

    printf("�п�J�T�Ӽƭ�\n"); 
    printf("�ƭ�x="); scanf("%d",&x); 
    printf("�ƭ�y="); scanf("%d",&y); 
    printf("�ƭ�z="); scanf("%d",&z); 

    x > y ? (m1 = x, m2 = y) : (m1 = y, m2 = x); 
    z > m1 ? (a = m1, m1 = z) : 
    z > m2 ? a = z : (a = m2, m2 = z); 

    printf("�̤p��:%d ������:%d �̤j��:%d\n", m2, a, m1); 

    system("PAUSE"); 
    return 0; 
}
