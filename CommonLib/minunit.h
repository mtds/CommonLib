#ifndef __MINUNIT_H
#define __MINUNIT_H

/*

MinUnit. Programming pearl found here:

http://www.jera.com/techinfo/jtns/jtn002.html

*/

/* file: minunit.h */
#define mu_assert(message, test) do { if (!(test)) return message; } while (0)
#define mu_run_test(test) do { char *message = test(); tests_run++; \
                                if (message) return message; } while (0)
extern int tests_run;

#endif