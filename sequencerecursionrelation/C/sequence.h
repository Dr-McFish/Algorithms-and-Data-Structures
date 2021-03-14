#ifndef SEQUENCE_H
#define SEQUENCE_H

typedef int number;
typedef number (*firstst_order_relation_func)(number n_1);
typedef number (*second_order_relation_func)(number n_1, number n_2);

struct recurent_sequence_1st_order {
	number zeroth_memeber;
	firstst_order_relation_func recurence_relation;
};

struct recurent_sequence_2nd_order {
	number zeroth_memeber;
	number first_memeber;
	second_order_relation_func recurence_relation;
};

/*
*  returns nth member of a first order sequence
*  O(n)
*/
number get_nth_first_order(struct recurent_sequence_1st_order* sequence, unsigned int n);

/*
*  returns nth member of a second order sequence
*  O(n) wow
*/
number get_nth_sedond_order(struct recurent_sequence_2nd_order* sequence, unsigned int n);

#endif