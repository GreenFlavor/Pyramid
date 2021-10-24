#include <stdio.h>
int main()
{
	int floor = 0;
	int work, space, star;

	printf("층 수를 입력하세요 : ");
	scanf_s("%d", &floor);  // 별표 피라미드의 층 개수를 정한다

	/*
	피라미드 모양은 3층이라면
	  *
	 ***
	*****
	스페이스는 처음 층 수 - 1 , 그 다음부터는 한 개씩 줄어들어야 한다.
	별은 처음 하나를 찍고 그 다음부터는 두 개씩 늘어나야 한다.
	 */

	for (work = 1; work <= floor; work++) // 스페이스와 별을 입력하는 작업을 얼마나 반복할지 정함
	{									  // 층 수 만큼 반복을 해야하니 floor에 입력된 수 만큼 반복하도록 해둔다
		for (space = 0; space < floor - work; space++) // 공백은 처음 층수 - 1이어야 하니 floor에서 work를 뺀 값이 limit,
		{											   // work는 1씩 늘어나니 그 다음층부터 공백이 하나씩 줄어든다.
			printf(" ");
		}
		for (star = 1; star < work * 2; star++) // 별표는 처음 변수를 1로 정하고 wokr * 2 를 limit으로 정해서 층수마다 두개씩 늘어나게 만듬
		{										// 첫 층은 work가 1이니 limit이 2가 되고 star는 1부터 시작하니 별표는 하나만 찍힌다.
			printf("*");
		}

		printf("\n"); // 각 층마다 줄 바꿈
	}

	return 0;
}