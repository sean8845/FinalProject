#include <stdio.h>
#include<stdlib.h>
#include <time.h>
int main()
{
	 int turn,number,point,sum=0,add,host,start;
	 srand(time(NULL));
	 printf("21�I�C���W�h:���a�I�ƥ����j����a�Y����ӡA�Y�p��ζW�L21�I(��3��)�h��������\n");
	 printf("�A�L������o10���A���ƥ[����M��j��Τp����a���I�ơC��J1�}�l�A��J-1�h�����C��\n");
	 scanf_s("%d", &start);
	 host=rand() % 5 + 17;//���a�I��
		 for (turn = 0; turn < 5; turn++)
		 {
			 number = rand() % 5 + 1;
			 sum = sum + number;
			 if (turn == 4 && sum <= 21)
				 {
				 printf("�z�ثe��%d�I\n", sum);
				 printf("���߹L����!!!��o�I��10�I!\n");
				 point = 10;
				 system("pause");
				 return point;
				 }
			 else if (sum <= 21)
			 {
				 printf("�z�ثe��%d�I\n", sum);
				 printf("�а��٭n�~���?(��J1�[�P�A0���[�P)\n");
				 scanf_s("%d", &add);
				 if (add == 1)
				 {
					 turn = turn + 1;
					 turn = turn - 1;
				 }
				 else
				 {
					 if (host >= sum)
					 {
						 printf("���a�I�Ƭ�%d�A�A��%d�A���a���!\n",host,sum);
						 printf("�����I��%d�I:\n",host - sum);
						 point = -(host - sum);
						 system("pause");
						 return point;
					 }
					 else
					 {
						 printf("���a�I�Ƭ�%d�A�A��%d�A���a���!\n", host, sum);
						 printf("��o�I��%d�I\n",sum - host);
						 point = sum - host;
						 system("pause");
						 return point;
					 }
				 }
			 }
			 else
			 {
				 printf("�z���F!���a���!�����I��3�I!\n");
				 point = -3;
				 system("pause");
				 return point;
			 }
		 }
		 return ;
}