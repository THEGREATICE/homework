#include <stdio.h>
/* ����һ���ĸ���������޲κ����ĸ���������вκ����أ� */
int study()
{
    printf("С����Ľ������ѧϰ\n");
    return 0;
}
int studynum(int n)
{
    int m=0, i;
    for(i=0; i<n; i++)
    {
        m=m+1;
    }
    printf("С����Ľ�������Ѿ�����ѧϰ��%d�ſγ�\n", m);
    return 0;
}


int main()
{
    study();
    studynum(5);
    return 0;
}
