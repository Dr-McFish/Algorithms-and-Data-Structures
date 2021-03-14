#ifndef SEQUENCE_HPP
#define SEQUENCE_HPP

typedef int number;

typedef number (*firstst_order_relation_func)(number n_1);
struct recurent_sequence_1st_order {
	number zeroth_memeber;
	firstst_order_relation_func recurence_relation;
};

typedef number (*second_order_relation_func)(number n_1, number n_2);
struct recurent_sequence_2nd_order {
	number zeroth_memeber;
	number first_memeber;
	second_order_relation_func recurence_relation;
};

/*
*  returns nth member of a first order sequence
*  O(n)
*/
number get_nth_first_order(const struct recurent_sequence_1st_order& sequence, unsigned int n);

/*
*  returns nth member of a second order sequence
*  O(n) wow
*/
number get_nth_sedond_order(const struct recurent_sequence_2nd_order& sequence, unsigned int n);

#endif