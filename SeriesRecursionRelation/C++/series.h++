#ifndef SERIES_H
#define SERIES_H

typedef int number;
typedef number (*firstst_order_relation_func)(number n_1);
typedef number (*second_order_relation_func)(number n_1, number n_2);

struct recurent_series_1st_order {
	number zeroth_memeber;
	firstst_order_relation_func recurence_relation;
};

struct recurent_series_2nd_order {
	number zeroth_memeber;
	number first_memeber;
	second_order_relation_func recurence_relation;
};

/*
*  returns nth member of a first order series
*  O(n)
*/
number get_nth_first_order(const struct recurent_series_1st_order& series, unsigned int n);

/*
*  returns nth member of a second order series
*  O(n) wow
*/
number get_nth_sedond_order(const struct recurent_series_2nd_order& series, unsigned int n);

#endif