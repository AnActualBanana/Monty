#include "monty.h"
/* this function adds the top two elements of the stack (travel to the end, grab the value (tmp1), go back one node,
 * grab the value (tmp2), add the values together, insert that value at the second-to-last node, go forward to
 * the last node, remove that node.
 * at the end: (the top element of the stack contains the result, and the stack is one element shorter) */
