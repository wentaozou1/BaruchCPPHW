// Multiply.h
//
// @author Xinyuan Zhang
// @version 1.0 07/11/18

#ifndef MAX2
#define MAX2(x, y) ((x > y) ? x : y)
#endif

#ifndef MAX3
#define MAX3(x, y, z) (MAX2(MAX2(x, y), z))
#endif
