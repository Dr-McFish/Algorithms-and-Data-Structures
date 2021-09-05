#ifndef BOOL_ARRAY_H
# define BOOL_ARRAY_H

#include <stdbool.h>
#include <stdint.h>

typedef char bools;

#define N_BOOLS_TO_N_BYTES(n) ((n/8) + ((n % 8) ? 1 : 0))

bool get_bool_array_at_index(bools* bs, int idx);
void set_bool_array_at_index(bools* bs, int idx, bool set);

bools* alloc_bools(size_t n);

#endif
