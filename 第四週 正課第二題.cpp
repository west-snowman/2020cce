#include <stdio.h>
struct DATA{///�ŧi
    float x,y,z;///�w�q�̭���...
} point1 ;

///point1 �O�ܼơA���o��DATA
///DATA�̭��� x,y,z

int main()
{
    point1.x=3;///�ϥ�(�̭�����)
    point1.y=5;///�ϥ�
    point1.z=7;///�ϥ�
    printf("%f %f %f\n",point1.x,point1.y,point1.z);

}
