#ifndef CONSTANT
#define CONSTANT

// Defining custom indexes for the counter array
enum Constant { switch_shed, last_cta_cycle , OTHER };

// Counter array size
#define NUM_COUNTERS (OTHER + 1)

// Declaring the counter array
extern unsigned long long constants[NUM_COUNTERS];

#endif
