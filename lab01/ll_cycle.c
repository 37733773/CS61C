#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    node *hare;
    node *tortoise;
    hare = head;
    tortoise = head;
    if (head == NULL) {
	    return 0;
    }
    if(head->next == NULL){
	    return 0;
    }
    while (hare->next != NULL && hare->next->next != NULL){
	   hare = hare->next->next;
           tortoise = tortoise->next; 
           if (hare == tortoise) {
	        return 1;
           }
    }
    return 0;
}
