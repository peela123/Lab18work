#include <iostream>
using namespace std;

struct Rect
{
	double x, y, w, h;
};

double overlap(Rect *x, Rect *y)
{

	double max, min, L1, L2;

	if (x->x > y->x)
	{
		max = x->x;
	}
	else
	{
		max = y->x;
	}
	if (x->x + x->w > y->x + y->w)
	{
		min = y->x + y->w;
	}
	else
	{
		min = x->x + x->w;
	}
	L1 = max - min;
	max = 0;
	min = 0;
	if (x->y - x->h > y->y - y->h)
	{
		max = x->y - x->h;
	}
	else
	{
		max = y->y - y->h;
	}
	if (y->y > y->y)
	{
		min = y->y;
	}
	else
	{
		min = x->y;
	}
	L2 = max - min;
	double ans = L1 * L2;
	if (ans <= 0)
	{
		ans = 0;
	}
	return ans;
}
