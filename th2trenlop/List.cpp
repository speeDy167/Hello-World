#include "List.h"
#include "Worker.h"
Worker List::highest()
{
	Worker a;
	for (int i = 0; i < n; i++)
	{
		if (arr[i]->L == 1) {
			if (((Worker*)arr[i])->getluong() > a.getluong())
			{
				a = *((Worker*)arr[i]);
			}
		}
	}

	return a;

}