#ifndef TABLE_H
#define TABLE_H

#include "common.h"
#include "value.h"
#include <sys/types.h>

typedef struct {
  ObjString *key;
  Value value;
} Entry;

typedef struct {
  Entry *entries;
  int capacity;
  int count;
} Table;

void initTable(Table *table);
void freeTable(Table *table);
bool tableGet(Table *table, ObjString *key, Value *value);
bool tableSet(Table *table, ObjString *key, Value value);
bool tableDelete(Table *table, ObjString *key);
void tableAddAll(Table *from, Table *to);
ObjString *tableFindString(Table *table, const char *chars, int length,
                           u_int32_t hash);
#endif
