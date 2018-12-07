#include <stdio.h>
#include <string.h>
struct Candidate{
	char name[10];
	int count;
};
int main(){
	struct Candidate c[3];
	strcpy(c[0].name, "hello");
	c[0].name[1] = 'e';
	return 0;
}
