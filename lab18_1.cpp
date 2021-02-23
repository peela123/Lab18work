#include <iostream>
using namespace std;

struct Rect
{
	double x, y, w, h;
};

double overlap(Rect R1, Rect R2)
{

	double max, min, L1, L2;

	if (R1.x > R2.x)
	{
		max = R1.x;
	}
	else
	{
		max = R2.x;
	}
	if (R1.x + R1.w > R2.x + R2.w)
	{
		min = R2.x + R2.w;
	}
	else
	{
		min = R1.x + R1.w;
	}
	L1 = max - min;
	max = 0;
	min = 0;
	if (R1.y - R1.h > R2.y - R2.h)
	{
		max = R1.y - R1.h;
	}
	else
	{
		max = R2.y - R2.h;
	}
	if (R1.y > R2.y)
	{
		min = R2.y;
	}
	else
	{
		min = R1.y;
	}
	L2 = max - min;
	double ans = L2 * L1;
	if (ans <= 0)
	{
		ans = 0;
	}
	return ans;
}
