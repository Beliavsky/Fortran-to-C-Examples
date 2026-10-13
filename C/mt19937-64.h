#ifndef MT19937_64_H_INCLUDED
#define MT19937_64_H_INCLUDED

extern void me(...);
void init_genrand64_i4(mt19937 *me, const int seed); /* ! Initializes `me%mt(nn)` with a seed */
void init_genrand64(mt19937 *me, const long long seed); /* ! Initializes `me%mt(nn)` with a seed */
void init_by_array64(mt19937 *me, const int n, const long long *init_key); /* ! Initializes by an array with array-length */
long long genrand64_int64(mt19937 * me); /* ! Generates a random number on [-2^63, 2^63-1]-interval */
double genrand64_real1(mt19937 * me); /* ! Generates a random number on [0,1]-real-interval */
double genrand64_real2(mt19937 * me); /* ! Generates a random number on [0,1)-real-interval */
double genrand64_real3(mt19937 * me); /* ! Generates a random number on (0,1)-real-interval */

#endif /* MT19937_64_H_INCLUDED */
