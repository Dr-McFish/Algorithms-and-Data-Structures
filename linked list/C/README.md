# Linked lists!

cool!

## Demo

Run `make test` for demo. This compiles both the `linked_list.c` and `linked_list_test.c`. `linked_list_test.c` contains the way you would use this.

## How to change the data type to something other than int:

In `linked_list.h`:
```c
 9 # ifndef LL_DATA_TYPE
10 #  define LL_DATA_TYPE int
					   ^ HERE
11 #  define LL_DATA_SIZE 4
					   ^ CHANGE TO CORRECT NUMBER OF BYTES
```

In `linked_list_x_data.h`: (substitute x for small if more that 8 bytes, otherwise use short)
```c
 9	/* change to appropriate type */
10	typedef char NODE_DATA[32];
			^ here			^
```