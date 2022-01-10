#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int passward() {
	printf("終極密碼遊戲規則:請在0~100內猜出數字(包括0和100)，僅有五次機會\n若五次皆失敗點數將扣一分，第一次成功加六分、第二次成功加五分以此類推\n輸入-1則結束遊戲\n");
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
			printf("請在%d到%d中，任選一個數字:", left, right);
			scanf_s("%d", &a);
			if (left <= a && right >= a) {
				if (a == ans) {
					printf("恭喜正確!\n\n");
					point = point + 6 - i;
					x = 1;
					break;
				}
				else if (a > ans) {
					right = a;
					printf("太大了喔\n\n");
				}
				else {
					left = a;
					printf("太小了喔\n\n");
				}
			}
			else printf("輸入錯誤!  數值要在%d到%d之間\n", left, right);
		}

		if (x == 1) printf("恭喜你在第%d次成功猜出答案!\n點數為:%d\n", i+1, point);
		else {
			point = point-1;
			printf("正確答案為:%d  你並未猜出答案，很可惜!\n點數為:%d\n",ans,point);
		}
		printf("您是否要繼續遊戲(繼續請按0，停止請按1):");
		scanf_s("%d", &con);
	}
	
	system("pause");
	return point;
}
