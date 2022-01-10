#include <stdio.h>
#include<stdlib.h>
#include <time.h>
int point21()
{
	 int turn,number,point,sum=0,add,host,start;
	 srand(time(NULL));
	 printf("21點遊戲規則:玩家點數必須大於莊家即為獲勝，若小於或超過21點(扣3分)則視為失敗\n");
	 printf("，過五關獲得10分，分數加減取決於大於或小於莊家的點數。輸入1開始，輸入-1則結束遊戲\n");
	 scanf_s("%d", &start);
	 host=rand() % 5 + 17;//莊家點數
		 for (turn = 0; turn < 5; turn++)
		 {
			 number = rand() % 5 + 1;
			 sum = sum + number;
			 if (turn == 4 && sum <= 21)
				 {
				 printf("您目前為%d點\n", sum);
				 printf("恭喜過五關!!!獲得點數10點!\n");
				 point = 10;
				 system("pause");
				 return point;
				 }
			 else if (sum <= 21)
			 {
				 printf("您目前為%d點\n", sum);
				 printf("請問還要繼續嗎?(輸入1加牌，0不加牌)\n");
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
						 printf("莊家點數為%d，你為%d，莊家獲勝!\n",host,sum);
						 printf("扣除點數%d點:\n",host - sum);
						 point = -(host - sum);
						 system("pause");
						 return point;
					 }
					 else
					 {
						 printf("莊家點數為%d，你為%d，玩家獲勝!\n", host, sum);
						 printf("獲得點數%d點\n",sum - host);
						 point = sum - host;
						 system("pause");
						 return point;
					 }
				 }
			 }
			 else
			 {
				 printf("爆炸了!莊家獲勝!扣除點數3點!\n");
				 point = -3;
				 system("pause");
				 return point;
			 }
		 }
		 return ;
}
