// stdafx.cpp : 只包括标准包含文件的源文件
// Sprint3.pch 将作为预编译标头
// stdafx.obj 将包含预编译类型信息

#include "stdafx.h"

// TODO: 在 STDAFX.H 中引用任何所需的附加头文件，
//而不是在此文件中引用
void CalculateChikenNumber()
{
	int cock, hen, chick;
	for (cock = 0; cock <= 20; cock++)
		for (hen = 0; hen <= 30; hen++)
			for (chick = 3; chick <= 99; chick++)
				if (cock + hen + chick == 100)
					if (5 * cock + 3 * hen + chick / 3 == 100)
						if (chick % 3 == 0)
							printf("公鸡：%d, 母鸡：%d，小鸡：%d", cock, hen, chick);
}
int main()
{
	CalculateChikenNumber(); //百钱买百鸡问题
}
