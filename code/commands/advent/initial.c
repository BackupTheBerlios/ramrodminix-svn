/*
  Initialization of adventure play variables
*/
#include	<string.h>
#include	<stdio.h>
#include	"advent.h"		/* #define preprocessor equates	 */
#define EXTERN				/* define, not declare, in advdec.h */
#include	"advdec.h"

int plac[MAXOBJ] = {
      0,   0,   3,   8,  10,  11,   0,  14,   0, 148,	/*   0 -   9 */
     96,  19,  17, 101, 103,   0, 106,   0,   0, 238,	/*  10 -  19 */
    238, 117, 190, 109,  25,  23, 111,  35,   0,  97,	/*  20 -  29 */
      0, 119,   0, 117,   0, 130,   0, 126, 140,   0,	/*  30 -  39 */
     96,  94, 158, 160, 188,   0, 155, 174, 166, 228,	/*  40 -  49 */
     18, 204,  27,  29,  30,   0,  92, 168,  97, 100,	/*  50 -  59 */
    101,   0, 119, 127, 130, 141, 144, 205,  28, 182,	/*  60 -  69 */
    225, 230,   0, 147, 241, 248,   0,   0,   0,   0,	/*  70 -  79 */
      0,   0,   0,   0,   0,   0,   0, 193, 102,   0,	/*  80 -  89 */
    159, 141, 172, 188, 189,   0,   0, 193, 227, 174,	/*  90 -  99 */
      0,  13, 238, 217, 171,   0, 146, 159,   3,   0,	/* 100 - 109 */
      0,   0,   0,   3, 180,  39,   5,   0, 110, 169,	/* 110 - 119 */
    200
};

int fixd[MAXOBJ] = {
      0,   0,   0,   9,   0,   0,   0,  15,   0,   0,	/*   0 -   9 */
      0,  -1,  27,  -1,   0,   0,   0,  -1,   0,   0,	/*  10 -  19 */
      0, 122, 235,  -1,  -1,  67,  -1, 110,   0,  -1,	/*  20 -  29 */
     -1, 121,   0, 122,   0,  -1,  -1,  -1,  -1,   0,	/*  30 -  39 */
     -1,  -1, 166, 167, 189,   0,   0,  -1,   0, 229,	/*  40 -  49 */
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,	/*  50 -  59 */
      0,   0, 121,   0,  -1,   0,   0,   0,   0,   0,	/*  60 -  69 */
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,	/*  70 -  79 */
      0,   0,   0,   0,   0,   0,   0,  -1, 194,  -1,	/*  80 -  89 */
      0,  -1, 174,  -1,  -1,   0,   0,  -1,  -1,  -1,	/*  90 -  99 */
      0,   0,   0,  -1,  -1,  -1,   0,   0,   0,   0,	/* 100 - 109 */
      0,   0,  -1,   0,   0,  -1,  -1,   0,   0,   0,	/* 110 - 119 */
      0
};

struct playinfo g = {
    0,							/* turns */
    1,							/* loc */
    1,							/* oldloc */
    1,							/* oldloc2 */
    1,							/* newloc */
    {							/* loc_attrib[MAXLOC] */
	  0,   73,   65,   73,   73,			/*   0 -   4 */
	 65,   65,   73, 1601,   33,			/*   5 -   9 */
	 32,   32,   32, 1824,   32,			/*  10 -  14 */
	  0,    2,    0,    0, 2816,			/*  15 -  19 */
	  2,    2,    2,    0,   10,			/*  20 -  24 */
	  0,    2,    0,    0,    0,			/*  25 -  29 */
	  0,    2,    2,    8,    0,			/*  30 -  34 */
	  0,    0,    0,    8,    0,			/*  35 -  39 */
	  2,    0,  256,  256,  256,			/*  40 -  44 */
	256,  272,  272,  272,  256,			/*  45 -  49 */
	256,    0,  256,  256,  272,			/*  50 -  54 */
	256,  272,    0,   16,    2,			/*  55 -  59 */
	  0,    0,    0,    0,    0,			/*  60 -  64 */
	  0,    0,    0,    0,    0,			/*  65 -  69 */
	  0,    0,    0,    0,    0,			/*  70 -  74 */
	  0,    0,    0,    0,    2,			/*  75 -  79 */
	256,  256,  272,    0,    0,			/*  80 -  84 */
	 16,  272,    0,    0,    2,			/*  85 -  89 */
	  2,    0,    0,    0,    0,			/*  90 -  94 */
	  8,    0,    0, 1280,  513,			/*  95 -  99 */
	513,  512,    0,    0,    0,			/*  00 -  04 */
	  0,    0,    0,  768,    0,			/* 105 - 109 */
	  0,    0,    0,    8,    0,			/* 110 - 114 */
	  1,    1,    0,    0,    0,			/* 115 - 119 */
	  0,    0,   16,   16,   16,			/* 120 - 124 */
	 16,   17,   16,   16,   16,			/* 125 - 129 */
	 16,    0,    0,    0,    0,			/* 130 - 134 */
	  0,    0,    0,    0,    0,			/* 135 - 139 */
	  0, 1040,   16,    0,    0,			/* 140 - 144 */
	  2,   65,   65,   65,   65,			/* 145 - 149 */
	 65,   65,   65,   65,   65,			/* 150 - 154 */
	 65,    3, 2625, 2113,   65,			/* 155 - 159 */
	 65,    3,    3,    3,    3,			/* 160 - 164 */
	  3,   41,   41,    9,    9,			/* 165 - 169 */
	  0,    0,    0,    0,    0,			/* 170 - 174 */
	  0,    0,    0,    2,    0,			/* 175 - 179 */
	  0,    2,    0,    0,    0,			/* 180 - 184 */
	  0,    0,    0,    0,   16,			/* 185 - 189 */
	  0,    0,    9,    0,    0,			/* 190 - 194 */
	  0,    0,    0,    9,    2,			/* 195 - 199 */
	  1,    1, 2304,    0,    0,			/* 200 - 204 */
	  0,    8,    8,    8,    0,			/* 205 - 209 */
	  0,    0,    1,    0,    9,			/* 210 - 214 */
	  0,    0,   12,    0,    0,			/* 215 - 219 */
	  0,    0,    0,    0,    0,			/* 220 - 224 */
	  0,    2, 2625,   73,   73,			/* 225 - 229 */
	  0,    2,    2,    2,    2,			/* 230 - 234 */
	  0,    0,    2,   65, 3137,			/* 235 - 239 */
	 65,   65,   65,   65,   65,			/* 240 - 244 */
	 65,   65,   65,   65	  			/* 245 - 249 */
    },							/* loc_attrib[MAXLOC] */
    {0 },						/* place[MAXOBJ] */
    {0 },						/* fixed[MAXOBJ] */
    {							/* weight[MAXOBJ] */
	0, 0, 1, 0, 1, 2, 2, 0, 0, 2,			/*   0 -   9 */
	1, 0, 0, 0, 7, 7, 1, 0, 0, 2,			/*  10 -  19 */
	1, 0, 0, 0, 0, 0, 0, 0, 3, 0,			/*  20 -  29 */
	0, 0, 0, 0, 0, 0, 0, 0, 0, 3,			/*  30 -  39 */
	0, 0, 0, 0, 0, 0, 1, 1, 0, 0,			/*  40 -  49 */
	6, 1, 2, 2, 3, 5, 4, 3, 2, 3,			/*  50 -  59 */
	4, 1, 3, 1, 3, 2, 1, 1, 2, 2,			/*  60 -  69 */
	2, 3, 1, 1, 3, 1, 0, 0, 0, 0,			/*  70 -  79 */
	0, 2, 2, 2, 2, 2, 2, 0, 0, 0,			/*  70 -  79 */
	1, 0, 0, 0, 0, 3, 2, 0, 0, 0,			/*  80 -  89 */
	0, 2, 1, 0, 0, 0, 1, 1, 2, 0,			/* 100 - 109 */
	3, 3, 0, 1, 1, 0, 0, 0, 3, 1,			/* 110 - 119 */
	2, 0, 0						/* 120 - 129 */
    },							/* weight[MAXOBJ] */
    {0 },						/* atloc[MAXLOC] */
    {0 },						/* link[MAXOBJ * 2] */
    {0 },						/* holder[MAXOBJ] */
    {0 },						/* hlink[MAXOBJ] */
    {0 },						/* visited[MAXLOC] */
    {0 },						/* prop[MAXOBJ] */
    {							/* obj_state[MAXOBJ] */
	    0,     0, 32800,    26, 32770,		/*   0 -   4 */
	   32,    32,  8192,     0,     0,		/*   5 -   9 */
	   32,   512,     0,   256,   770,		/*  10 -  14 */
	  770,   288,   512,     0,   160,		/*  15 -  19 */
	32802,     0,     0,     0,   128,		/*  20 -  24 */
	    0,     0,     0,    32,  8192,		/*  25 -  29 */
	  512,   512,     0,   512,     0,		/*  30 -  34 */
	  512,   256,     0, 32768,  8224,		/*  35 -  39 */
	    0,    18,    26,    26,     2,		/*  40 -  44 */
	    0,  8320, 18464, 32768,     0,		/*  45 -  49 */
	16384, 16416, 16416, 26656, 24608,		/*  50 -  54 */
	49240, 24608, 16384, 49184, 16416,		/*  55 -  59 */
	16416, 16416, 16384, 16544, 16442,		/*  60 -  64 */
	16416, 18464, 26656, 16416, 16416,		/*  65 -  69 */
	49184, 49154, 18464, 18464, 16416,		/*  70 -  74 */
	16416,     0,     0,     0,     0,		/*  75 -  79 */
	    0,     0,     0,     0,     0,		/*  80 -  84 */
	    0,     0,  8704,     0,     0,		/*  85 -  89 */
	    0,     0,     0,     0, 32768,		/*  90 -  94 */
	    0,   128,     0,     0,     0,		/*  95 -  99 */
	    0,   160,  8224,     0,     0,		/* 100 - 104 */
	    0,  8352,  8352, 32870,     0,		/* 105 - 109 */
	16674,   258, 32858,   288,    32,		/* 110 - 114 */
	  256,     0,     0, 32866, 16416,		/* 115 - 119 */
	16416,     0,     0				/* 120 - 123 */
    },							/* obj_state[MAXOBJ] */
    {							/* points[MAXOBJ] */
	   0,        0,        0,        0,        0,	/*   0 -   4 */
	   0,        0,        0,        0,        0,	/*   5 -   9 */
	   0,        0,        0,        0,        0,	/*  10 -  14 */
	   0,  1000108,        0,        0,        0,	/*  15 -  19 */
	   0,        0,        0,        0,        0,	/*  20 -  24 */
	   0,        0,        0,        0,        0,	/*  25 -  29 */
	   0,        0,        0,        0,        0,	/*  30 -  34 */
	   0,        0,        0,        0,        0,	/*  35 -  39 */
	   0,        0,        0,        0,        0,	/*  40 -  44 */
	   0,        0, -3000112,        0,        0,	/*  45 -  49 */
    -2000055, -2000112, -2000112, -1000112, -5000112,	/*  50 -  54 */
     5000003, -3000112, -2000055,  2000003, -3000112,	/*  55 -  59 */
    -4000112, -4000112,  3000003, -1000112, -4000112,	/*  60 -  64 */
    -4000112, -2000112, -3000112, -1000112, -1000112,	/*  65 -  69 */
    -2000112, -3012055, -4000112, -1000112, -5000112,	/*  70 -  74 */
    -5000112,        0,        0,        0,        0,	/*  75 -  79 */
	   0,        0,        0,        0,        0,	/*  80 -  84 */
	   0,        0,        0,        0,        0,	/*  85 -  89 */
	   0,        0,        0,        0,        0,	/*  90 -  94 */
	   0,        0,        0,        0,        0,	/*  95 -  99 */
	   0,        0,        0,        0,        0,	/* 100 - 104 */
	   0,        0,        0,        0,        0,	/* 105 - 109 */
    -2000112,        0,        0,        0,        0,	/* 110 - 114 */
	   0,        0,        0,        0, -4000118,	/* 115 - 119 */
    -2000112,        0					/* 120 - 122 */
    },							/* points[MAXOBJ] */
    {0 },						/* hinted[HNTMAX+1] */
    {							/* hints[HNTMAX+1][5] */
	{    0,    0,   0,   0,   0 },			/*  0 */
	{    0, 9999,   4,   0,   0 },			/*  1 */
        {    0, 9999,  10,   0,   0 },			/*  2 */
        {    0, 9999,   5,   0,   0 },			/*  3 */
	{    0,    0,   0,   0,   0 },			/*  4 */
	{    0,    0,   0,   0,   0 },			/*  5 */
	{    0,    0,   0,   0,   0 },			/*  6 */
        {    0,   15,   4, 176, 177 },			/*  7 */
        {    0,    8,   5, 178, 179 },			/*  8 */
        {    0,   13,   3, 180, 181 },			/*  9 */
        {    0,    6,  10, 211, 212 },			/* 10 */
        {    0,    6,   5, 213, 214 },			/* 11 */
	{    0,    4,   2,  62,  63 },			/* 12 */
	{    0,    5,   2,  18,  19 },			/* 13 */
	{    0,    4,   2,  62, 233 },			/* 14 */
	{    0,    6,   5, 274, 275 },			/* 15 */
	{    0,   10,   5, 289, 290 },			/* 16 */
	{    0,    8,   2,  20,  21 },			/* 17 */
	{    0,    5,   2, 404, 405 }			/* 18 */
    },							/* hints[HNTMAX+1][5] */
    {0 },						/* hintlc[HNTMAX+1] */
    0,							/* tally */
    0,							/* tally2 */
    0,							/* limit */
    0,							/* lmwarn */
    0,							/* wzdark */
    0,							/* closing */
    0,							/* closed */
    0,							/* holding */
    0,							/* detail */
    0,							/* knfloc */
    30,							/* clock */
    50,							/* clock2 */
    0,							/* panic */
    { 0, 19, 27, 33, 44, 64, 114 },			/* dloc[DWARFMAX+1] */
    0,							/* dflag */
    { 0, 0, 0, 0, 0, 0, 0 },				/* dseen[DWARFMAX+1] */
    { 0, 0, 0, 0, 0, 0, 0 },				/* odloc[DWARFMAX+1] */
    18,							/* daltloc */
    0,							/* dkill */
    114,						/* chloc */
    140,						/* chloc2 */
    0,							/* bonus */
    0,							/* numdie */
    0,							/* foobar */
    0,							/* combo */
    0,							/* terse */
    5,							/* abbnum */
    100,						/* health */
    0,							/* chase */
    FALSE,						/* flg239 */
    0							/* lastglob */
};

/*
  Initialization of adventure play variables
*/
void initialize()
{
    int i;

    for (i = MAXOBJ; i > 0; i--) {
	g.fixed[i] = fixd[i];
	if (fixd[i] > 0) {
	    drop(i + MAXOBJ, fixd[i]);
	    drop(i, plac[i]);
	}
	if ((plac[i] != 0) && (fixd[i] <= 0))
	    drop(i, plac[i]);
    }

    for (i = 1; i <= MAXOBJ; i++) {
	if (treasr(i)) {
	    g.prop[i] = -1;
	    g.tally++;
	}
    }

    newtravel = TRUE;
    g.place[BOOK] = -1;
    insert(BOOK, SAFE);
    g.place[WATER] = -1;
    insert(WATER, BOTTLE);
    g.prop[BOTTLE] = 8;
    return;
}
