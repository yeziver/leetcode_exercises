//METHOD WITH HASHMAP

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct pair {
    int key;
    int val;
    struct pair* next;
} Pair;

typedef struct hashmap {
    Pair** list;       // the list of Pair*
    unsigned int cap;  // capacity, the length of list
    unsigned int len;  // length, the number of pairs
} HashMap;

unsigned hashcode(HashMap* this, int key) {
    return key%this->cap;
}

void set(HashMap* this, int key, int val) {
    unsigned index = hashcode(this, key);
    Pair* current;
    for (current = this->list[index]; current;
         current = current->next) {
        // if key has been already in hashmap
        if (current->key == key) {
            current->val = val;
            return;
        }
    }
    // key is not in the hashmap
    Pair* p = malloc(sizeof(Pair));
    p->key = key;
    p->val = val;
    p->next = this->list[index];
    this->list[index] = p;
    this->len++;
}

int get(HashMap* this, int key) {
    Pair* current;
    for (current = this->list[hashcode(this, key)]; current;
         current = current->next) {
        if (current->key == key) {
            return current->val;
        }
    }
    return -1;
}

HashMap* newHashMap(){
    HashMap* this = malloc(sizeof(HashMap));
    this->cap = 8;   
    this->len = 0;
    this->list = calloc((this->cap), sizeof(Pair*));
    return this;
}


int *twoSum(int *nums, int numsSize, int target, int* returnSize){
  HashMap* m = newHashMap();
  int cnt = 0;
  int *toreturn = (int*) malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
      int req = target-nums[i];
      if (get(m, req) != -1) {
        toreturn[0] = get(m, req);
        toreturn[1] = i;
      }
      set(m, nums[i], i);
    }
    *returnSize = 2;
    return toreturn;
}




//METHOD WITHOUT HASHMAP

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int *twoSum(int *nums, int numsSize, int target, int* returnSize){
    int*lis = (int*)malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        for (int j = i+1; j < numsSize; j++) {
            if (nums[j] + nums[i] == target) {
                lis[0] = i;
                lis[1] = j;
            }
        }
    }
    *returnSize = 2;
    return lis;
}
