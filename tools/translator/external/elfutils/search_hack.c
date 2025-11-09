#include <search.h>
#include <stddef.h>
#include <stdlib.h>
inline static void tdestroy_helper(void *node, void (*freefn)(void *)) {
	if (!node)
		return;

	void **n = (void **)node;

	tdestroy_helper(n[0], freefn);
	tdestroy_helper(n[1], freefn);

	if (freefn)
		freefn(n[2]); 

	free(node);
}

void tdestroy(void *root, void (*freefn)(void *)) {
	tdestroy_helper(root, freefn);
}
