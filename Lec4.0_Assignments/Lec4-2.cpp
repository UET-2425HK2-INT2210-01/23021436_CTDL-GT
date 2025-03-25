/*
     Hash function h(i) = (2i+5) mod 11

    i       2i+5	mod 11
    12	    29	    7
    44	    93	    5
    13	    31	    9
    88	    181	    5
    23	    51	    7
    94	    193	    6
    11	    27	    5
    39	    83	    6
    20	    45	    1
    16	    37	    4
    5	    15	    4

     a)Chaining

     Key    Values
     0      empty
     1      20
     2      empty
     3      empty
     4      16->5
     5      44->88->11
     6      94->39
     7      12->23
     8      empty
     9      13
     10     empty

     b)Linear Probing

     Key    Values
     0      11
     1      39
     2      20
     3      16
     4      5
     5      44
     6      88
     7      12
     8      23
     9      13
     10     94

*/