//fprintf.c
#include <stdio.h>

int main(void)
{
	char* string = "World, Hello!";
	short int data = 0xAEFC;
	
	// ���� ���� �ؽ�Ʈ ������ ������
	FILE* p_file = fopen("hello.txt", "wt");

	if (NULL != p_file)
	{
		// ���� ���⿡ ������ ���
		fprintf(p_file, "%x\n", string);
		fprintf(p_file, "%x\n", data);

		printf("���� ������ �̷��� ����!~");

		fclose(p_file);
	}
	return 0;
}