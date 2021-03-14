#include "series.h"

number get_nth_first_order(struct recurent_series_1st_order* series, unsigned int n)
{
	if(n == 0)
		return series->zeroth_memeber;
	else
		return series->recurence_relation(get_nth_first_order(series, n - 1));
}

number get_nth_sedond_order(struct recurent_series_2nd_order* series, unsigned int n)
{
	number a;
	number rt;
	static number cashe;

	switch (n)
	{
		case 0:
			return series->zeroth_memeber;
		case 1:
			cashe = series->zeroth_memeber;
			return series->first_memeber;
		default:
			a = get_nth_sedond_order(series, n - 1);	
			rt = series->recurence_relation(cashe, a);
			cashe = a;
			return (rt);
			break;
	}
}