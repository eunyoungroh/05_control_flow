#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num = 0;
	
	printf("������ �Է��ϼ���: \n");
	scanf("%d", &num);
	
	if(num > 0)
	{
		printf("����� �Է��ϼ̽��ϴ�.\n");
	}
	else
	{
		printf("����� �ƴմϴ�.\n");
	}
	
	printf("����� �Է°�: %d\n", num);
	
	return 0;
	
}