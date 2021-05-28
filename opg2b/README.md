# Actie 1 
4 8 4 5 - + *

#       Stack       (Rest)                      token       toelichting
0       leeg        4 8 4 5 - + *               4           start situatie, push 4
1       4           8 4 5 - + *                 8           push 8
2       8,4         4 5 - + *                   4           push 4
3       4,8,4       5 - + *                     5           push 5
4       5,4,8,4     - + *                       -           2x pop 4-5 = -1 push -1
5       -1,8,4      + *                         +           2x pop 8+-1 = 7 push 7
6       7,4         *                           *           2x pop 4*7 = 28 push 28

# Actie 2
4 1 + 1 2 3 * – 15 8 – * + 

#       Stack       (Rest)                      token       toelichting
1       leeg        4 1 + 1 2 3 * – 15 8 – * +  4           push 4
2       4           1 + 1 2 3 * – 15 8 – * +    1           push 1
3       1,4         + 1 2 3 * – 15 8 – * +      +           2x pop 4+1 = 5 push 5
4       5           1 2 3 * – 15 8 – * +        1           push 1
5       1,5         2 3 * – 15 8 – * +          2           push 2 
6       2,1,5       3 * – 15 8 – * +            3           push 3
7       3,2,1,5     * – 15 8 – * +              *           2x pop 2*3 = 6 push 6
8       6,1,5       – 15 8 – * +                -           2x pop 1-6 = -5 push -5
9       -5,5        15 8 – * +                  15          push 15
10      15,-5,5     8 – * +                     8           push 8
11      8,15,-5,5   - * +                       -   	    2x pop 15-8 =  push 7
12      7,-5,5      * +                         *           2x pop -5*7 = -35 push -35
13      -35,5       +                           +           2x pop 5+-35 = -30 push -30


# Actie 3
( 6 + 2 ) * 3 / ( 11 + 1 ) + 16
6 2 + 3 * 11 1 + / 16 +

#       Stack       (Rest)                      token       toelichting
1       leeg        6 2 + 3 * 11 1 + / 16 +     6           push 6
2       6           2 + 3 * 11 1 + / 16 +       2           push 2
3       2,6         + 3 * 11 1 + / 16 +         +           2x pop 6+2 =8 push 8
4       8           3 * 11 1 + / 16 +           3           push 3
5       3,8         * 11 1 + / 16 +             *           2x pop 8*3 = 24 push 24
6       24          11 1 + / 16 +               11          push 11
7       11,24       1 + / 16 +                  1           push 1
8       1,11,24     + / 16 +                    +           2x pop 11+1 = 12 push 12
9       12,24       / 16 +                      /           2x pop 24/12 = 2 push 2
10      2           16 +                        16          push 16
11      16,2        +                           +           2x pop 2+16 = 18

# Actie 4













