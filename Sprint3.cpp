// Sprint3.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int cock, hen, chick;
	for (cock = 0; cock <= 20; cock++)
		for (hen = 0; hen <= 30; hen++)
			for (chick = 3; chick <= 99; chick++)
				if (cock + hen + chick == 100)
					if (5 * cock + 3 * hen + chick / 3 == 100)
						if(chick%3 == 0)
							printf("公鸡：%d, 母鸡：%d，小鸡：%d",cock, hen, chick);

}

