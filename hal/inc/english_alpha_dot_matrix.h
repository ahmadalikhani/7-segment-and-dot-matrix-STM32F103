#ifndef __ENGLISH_ALPHA_DOT_MATRIX
#define __ENGLISH_ALPHA_DOT_MATRIX

#include <stdbool.h>

bool english_alphabetic[26][8][8] = {
{
0,0,0,1,1,0,0,0,
0,0,1,0,0,1,0,0,
0,1,0,0,0,0,1,0,
0,1,0,0,0,0,1,0,
0,1,1,1,1,1,1,0,
0,1,0,0,0,0,1,0,
0,1,0,0,0,0,1,0,
0,1,0,0,0,0,1,0
},
{
1,1,1,1,1,0,0,0,
1,0,0,0,0,1,0,0,
1,0,0,0,0,1,0,0,
1,1,1,1,1,1,0,0,
1,1,1,1,1,0,0,0,
1,0,0,0,0,1,0,0,
1,0,0,0,0,1,0,0,
1,1,1,1,1,1,0,0
},
{
0,0,1,1,1,1,1,0,
0,1,0,0,0,0,0,0,
1,0,0,0,0,0,0,0,
1,0,0,0,0,0,0,0,
1,0,0,0,0,0,0,0,
1,0,0,0,0,0,0,0,
0,1,0,0,0,0,0,0,
0,0,1,1,1,1,1,0
},
{
1,1,1,1,1,0,0,0,
1,0,0,0,0,1,0,0,
1,0,0,0,0,0,1,0,
1,0,0,0,0,0,1,0,
1,0,0,0,0,0,1,0,
1,0,0,0,0,0,1,0,
1,0,0,0,0,1,0,0,
1,1,1,1,1,0,0,0
},
{
1,1,1,1,1,1,1,0,
1,0,0,0,0,0,0,0,
1,0,0,0,0,0,0,0,
1,0,0,0,0,0,0,0,
1,1,1,1,1,1,1,0,
1,0,0,0,0,0,0,0,
1,0,0,0,0,0,0,0,
1,1,1,1,1,1,1,0
},
{
1,1,1,1,1,1,1,0,
1,0,0,0,0,0,0,0,
1,0,0,0,0,0,0,0,
1,0,0,0,0,0,0,0,
1,1,1,1,1,0,0,0,
1,0,0,0,0,0,0,0,
1,0,0,0,0,0,0,0,
1,0,0,0,0,0,0,0
},
{
0,0,1,1,1,1,1,0,
0,1,0,0,0,0,0,0,
1,0,0,0,0,0,0,0,
1,0,0,0,0,0,0,0,
1,0,0,1,1,1,1,1,
1,0,0,0,0,0,0,1,
0,1,0,0,0,0,0,1,
0,0,1,1,1,1,1,0
},
{
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,1,
1,1,1,1,1,1,1,1,
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,1
},
{
1,1,1,1,1,1,1,1,
0,0,0,1,1,0,0,0,
0,0,0,1,1,0,0,0,
0,0,0,1,1,0,0,0,
0,0,0,1,1,0,0,0,
0,0,0,1,1,0,0,0,
0,0,0,1,1,0,0,0,
1,1,1,1,1,1,1,1
},
{
1,1,1,1,1,1,1,1,
0,0,0,1,1,0,0,0,
0,0,0,1,1,0,0,0,
0,0,0,1,1,0,0,0,
0,0,0,1,1,0,0,0,
0,0,0,1,1,0,0,0,
0,0,0,1,1,0,0,0,
1,1,1,1,1,0,0,0
},
{
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,1,0,
1,0,0,0,0,1,0,0,
1,1,1,1,1,0,0,0,
1,1,1,1,1,0,0,0,
1,0,0,0,0,1,0,0,
1,0,0,0,0,0,1,0,
1,0,0,0,0,0,0,1
},
{
1,0,0,0,0,0,0,0,
1,0,0,0,0,0,0,0,
1,0,0,0,0,0,0,0,
1,0,0,0,0,0,0,0,
1,0,0,0,0,0,0,0,
1,0,0,0,0,0,0,0,
1,0,0,0,0,0,0,0,
1,1,1,1,1,1,1,0
},
{
1,0,0,0,0,0,0,1,
1,1,0,0,0,0,1,1,
1,0,1,0,0,1,0,1,
1,0,0,1,1,0,0,1,
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,1
},
{
1,0,0,0,0,0,0,1,
1,1,0,0,0,0,0,1,
1,1,0,0,0,0,1,0,
1,0,1,0,0,0,1,0,
1,0,1,0,0,1,0,0,
1,0,0,1,0,1,0,0,
1,0,0,1,1,0,0,0,
1,0,0,0,1,0,0,0
},
{
0,0,1,1,1,1,0,0,
0,1,0,0,0,0,1,0,
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,1,
0,1,0,0,0,0,1,0,
0,0,1,1,1,1,0,0
},
{
1,1,1,1,1,1,0,0,
1,0,0,0,0,0,1,0,
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,1,0,
1,1,1,1,1,1,0,0,
1,0,0,0,0,0,0,0,
1,0,0,0,0,0,0,0
},
{
0,0,1,1,1,1,0,0,
0,1,0,0,0,0,1,0,
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,1,
1,0,0,0,1,0,0,1,
1,0,0,0,0,1,0,1,
0,1,0,0,0,0,1,0,
0,0,1,1,1,1,0,1
},
{
1,1,1,1,1,1,0,0,
1,0,0,0,0,0,1,0,
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,1,0,
1,1,1,1,1,1,0,0,
1,1,0,0,0,0,0,0,
1,0,1,0,0,0,0,0,
1,0,0,1,0,0,0,0
},
{
0,1,1,1,1,1,1,1,
1,0,0,0,0,0,0,0,
1,0,0,0,0,0,0,0,
0,1,1,1,1,1,1,0,
0,0,0,0,0,0,0,1,
0,0,0,0,0,0,0,1,
0,0,0,0,0,0,0,1,
1,1,1,1,1,1,1,0
},
{
1,1,1,1,1,1,1,1,
0,0,0,1,1,0,0,0,
0,0,0,1,1,0,0,0,
0,0,0,1,1,0,0,0,
0,0,0,1,1,0,0,0,
0,0,0,1,1,0,0,0,
0,0,0,1,1,0,0,0,
0,0,0,1,1,0,0,0
},
{
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,1,
0,1,0,0,0,0,1,0,
0,0,1,1,1,1,0,0
},
{
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,1,
0,1,0,0,0,0,1,0,
0,1,0,0,0,0,1,0,
0,0,1,0,0,1,0,0,
0,0,1,0,0,1,0,0,
0,0,0,1,1,0,0,0,
0,0,0,1,1,0,0,0
},
{
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,1,
0,1,0,0,0,0,1,0,
0,1,0,1,1,0,1,0,
0,1,0,1,1,0,1,0,
0,0,1,0,0,1,0,0,
0,0,1,0,0,1,0,0
},
{
1,0,0,0,0,0,0,1,
0,1,0,0,0,0,1,0,
0,0,1,0,0,1,0,0,
0,0,0,1,1,0,0,0,
0,0,0,1,1,0,0,0,
0,0,1,0,0,1,0,0,
0,1,0,0,0,0,1,0,
1,0,0,0,0,0,0,1
},
{
1,0,0,0,0,0,0,1,
0,1,0,0,0,0,1,0,
0,0,1,0,0,1,0,0,
0,0,0,1,1,0,0,0,
0,0,0,1,1,0,0,0,
0,0,0,1,1,0,0,0,
0,0,0,1,1,0,0,0,
0,0,0,1,1,0,0,0
},
{
1,1,1,1,1,1,1,1,
0,0,0,0,0,0,1,0,
0,0,0,0,0,1,0,0,
0,0,0,0,1,0,0,0,
0,0,0,1,0,0,0,0,
0,0,1,0,0,0,0,0,
0,1,0,0,0,0,0,0,
1,1,1,1,1,1,1,1
},

};



#endif //__ENGLISH_ALPHA_DOT_MATRIX