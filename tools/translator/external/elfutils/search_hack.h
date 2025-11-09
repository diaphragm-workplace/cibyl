#ifndef SEARCH_HACK
#define SEARCH_HACK
// This is here because newlib doesn't seem to implement tdestroy anymore
void tdestroy(void *root, void (*freefn)(void *));
#endif
