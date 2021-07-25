#include <stdbool.h>
#include <string.h>

typedef struct parents {
    char *name;
    char *father;
    char *mother;
} parents;

bool areSiblings(const parents *const member1, const parents *const member2) {
    return strcmp(member1->mother, member2->mother) == 0;
}