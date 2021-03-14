#include "sequence.h"

number get_nth_first_order(const struct recurent_sequence_1st_order* sequence, unsigned int n)
{
	if(n == 0)
		return sequence->zeroth_memeber;
	else
		return sequence->recurence_relation(get_nth_first_order(sequence, n - 1));
}

number get_nth_sedond_order(const struct recurent_sequence_2nd_order* sequence, unsigned int n)
{
	number a;
	number rt;
	static number cashe;

	switch (n)
	{
		case 0:
			return sequence->zeroth_memeber;
		case 1:
			cashe = sequence->zeroth_memeber;
			return sequence->first_memeber;
		default:
			a = get_nth_sedond_order(sequence, n - 1);	
			rt = sequence->recurence_relation(cashe, a);
			cashe = a;
			return (rt);
			break;
	}
}