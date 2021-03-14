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

/* O(n) */
number get_nth_first_order(struct recurent_series_1st_order* series, unsigned int n);
/* O(n) */
number get_nth_sedond_order(struct recurent_series_2nd_order* series, unsigned int n);

#endif