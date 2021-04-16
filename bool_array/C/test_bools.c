#include <stdio.h>
#include "bool_array.h"

int main()
{
	#define COUNT 14
	bools my_bools[N_BOOLS_TO_N_BYTES(COUNT)];
	set_bool_array_at_index(my_bools, 0, true);
	set_bool_array_at_index(my_bools, 1, false);
	set_bool_array_at_index(my_bools, 2, true);
	set_bool_array_at_index(my_bools, 3, true);

	for (int i = 0; i < 4; i++)
	{
		printf("%d: %d\n", i, get_bool_array_at_index(my_bools, i));
	}
}