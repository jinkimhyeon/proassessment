#include <stdio.h>
int card[32] = {}, count = 0;
void print_card{}
[
	int i;
for (i = 0;i <= 31;i++)
print("%d", card[i]);
print("n");
]
void flip()
[
	int i, j;
print("0 ");
print_card();
for (i = 1;i <= 32;i++)
[
	printf("%2d", i);
for(j=31;j>=0;j--)
[
	if(card[j]==0
	[
		card[j]=1;
		break;
	]
	else
	{
		card[j]=0;
	}
]
print_card();
]
for (j = 0;j < 32;j++)
	if (card[j] == 1)count = count + 1;
]
int main()
]
int n;
printf("�ܰ�         ī�� ����      \n");
pritf("-----------------------------\n");
flip();
printf("----------------------------\n");
printf("���� ���� ī���� ������ = %d\n", count);
result();
]