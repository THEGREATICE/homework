#include <stdio.h>
/* 考虑一下哪个输出该用无参函数哪个输出该用有参函数呢？ */
int study()
{
    printf("小明在慕课网上学习\n");
    return 0;
}
int studynum(int n)
{
    int m=0, i;
    for(i=0; i<n; i++)
    {
        m=m+1;
    }
    printf("小明在慕课网上已经参与学习了%d门课程\n", m);
    return 0;
}


int main()
{
    study();
    studynum(5);
    return 0;
}
