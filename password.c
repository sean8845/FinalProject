#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("�׷��K�X�C���W�h:�Цb0~100���q�X�Ʀr(�]�A0�M100)�A�Ȧ��������|\n�Y�����ҥ����I�ƱN���@���A�Ĥ@�����\�[�����B�ĤG�����\�[�����H������\n��J-1�h�����C��\n");
	printf("------------------------------------------------------------------\n");
	srand(time(NULL));
	int left, right,ans,a,point=0,x,i,con=0;
	while (con==0)
	{
		x = 0;
		right = 100;
		left = 0;
		ans = rand() % 101;
		//printf("%d\n", ans);

		for ( i = 0; i < 5 ; i++) {
			printf("�Цb%d��%d���A����@�ӼƦr:", left, right);
			scanf_s("%d", &a);
			if (left <= a && right >= a) {
				if (a == ans) {
					printf("���ߥ��T!\n\n");
					point = point + 6 - i;
					x = 1;
					break;
				}
				else if (a > ans) {
					right = a;
					printf("�Ӥj�F��\n\n");
				}
				else {
					left = a;
					printf("�Ӥp�F��\n\n");
				}
			}
			else printf("��J���~!  �ƭȭn�b%d��%d����\n", left, right);
		}

		if (x == 1) printf("���ߧA�b��%d�����\�q�X����!\n�I�Ƭ�:%d\n", i+1, point);
		else {
			point = point-1;
			printf("���T���׬�:%d  �A�å��q�X���סA�ܥi��!\n�I�Ƭ�:%d\n",ans,point);
		}
		printf("�z�O�_�n�~��C��(�~��Ы�0�A����Ы�1):");
		scanf_s("%d", &con);
	}
	
	system("pause");
	return point;
}