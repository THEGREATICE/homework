#include<stdio.h>
int main()
{
	int a;
	printf("请输入一个整数\n");
	scanf("%d",&a);
switch(a){
case 0:
printf("Sunday\n");
break;
case 1:
printf("Monday\n");
break;
case 2:
printf("Tuesday\n");
break;
case 3:
printf("Wednesday\n");
break;
case 4:
printf("Thursday\n");
break;
case 5:
printf("Friday\n");
break;
case 6:
printf("Saturday\n");
break;
default:
printf("Input Error\n");
}
}
