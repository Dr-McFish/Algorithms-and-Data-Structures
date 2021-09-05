#include <stdio.h>
#include "sequence.h"

number add10(number r) { return r + 10; }
void test_1st_order(){
	struct recurent_sequence_1st_order multiples_of_10;
	multiples_of_10.recurence_relation = &add10;
	multiples_of_10.zeroth_memeber = 0;

	printf("8th member is %d\n", get_nth_first_order(&multiples_of_10, 8));
	printf("9th member is %d\n", get_nth_first_order(&multiples_of_10, 9));
	printf("10th member is %d\n", get_nth_first_order(&multiples_of_10, 10));
	printf("11th member is %d\n", get_nth_first_order(&multiples_of_10, 11));
	printf("12th member is %d\n", get_nth_first_order(&multiples_of_10, 12));
	printf("13th member is %d\n", get_nth_first_order(&multiples_of_10, 13));
}

number sum(number n_1, number n_2) { return n_1 + n_2; }
void test_2nd_order() {
	struct recurent_sequence_2nd_order fibbonaci;
	fibbonaci.recurence_relation = &sum;
	fibbonaci.zeroth_memeber = 0;
	fibbonaci.first_memeber = 1;
	int i;

	for (i = 0; i < 40; i++)
	{
		printf("n:%3d, fibb %8d\n", i, get_nth_second_order(&fibbonaci, i));
	}
}

int main()
{
	test_1st_order();
	printf("\n");
	test_2nd_order();
	return 0;
}