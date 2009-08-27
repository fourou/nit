/* This C header file is generated by NIT to compile modules and programs that requires hash_collection. */
#ifndef hash_collection_sep
#define hash_collection_sep
#include "array._sep.h"
#include "hash._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_HashCollection[];

extern const classtable_elt_t VFT_HashNode[];

extern const classtable_elt_t VFT_HashMap[];

extern const classtable_elt_t VFT_HashMapNode[];

extern const classtable_elt_t VFT_HashMapIterator[];

extern const classtable_elt_t VFT_HashSet[];

extern const classtable_elt_t VFT_HashSetNode[];

extern const classtable_elt_t VFT_HashSetIterator[];
extern const char *LOCATE_hash_collection;
extern const int SFT_hash_collection[];
#define ID_HashCollection (SFT_hash_collection[0])
#define COLOR_HashCollection (SFT_hash_collection[1])
#define ATTR_hash_collection___HashCollection____array(recv) ATTR(recv, (SFT_hash_collection[2] + 0))
#define ATTR_hash_collection___HashCollection____capacity(recv) ATTR(recv, (SFT_hash_collection[2] + 1))
#define ATTR_hash_collection___HashCollection____length(recv) ATTR(recv, (SFT_hash_collection[2] + 2))
#define ATTR_hash_collection___HashCollection____first_item(recv) ATTR(recv, (SFT_hash_collection[2] + 3))
#define ATTR_hash_collection___HashCollection____last_item(recv) ATTR(recv, (SFT_hash_collection[2] + 4))
#define ATTR_hash_collection___HashCollection____last_accessed_index(recv) ATTR(recv, (SFT_hash_collection[2] + 5))
#define ATTR_hash_collection___HashCollection____last_accessed_key(recv) ATTR(recv, (SFT_hash_collection[2] + 6))
#define INIT_TABLE_POS_HashCollection (SFT_hash_collection[3] + 0)
#define CALL_hash_collection___HashCollection___first_item(recv) ((hash_collection___HashCollection___first_item_t)CALL((recv), (SFT_hash_collection[3] + 1)))
#define CALL_hash_collection___HashCollection___index_at(recv) ((hash_collection___HashCollection___index_at_t)CALL((recv), (SFT_hash_collection[3] + 2)))
#define CALL_hash_collection___HashCollection___store(recv) ((hash_collection___HashCollection___store_t)CALL((recv), (SFT_hash_collection[3] + 3)))
#define CALL_hash_collection___HashCollection___remove_index(recv) ((hash_collection___HashCollection___remove_index_t)CALL((recv), (SFT_hash_collection[3] + 4)))
#define CALL_hash_collection___HashCollection___raz(recv) ((hash_collection___HashCollection___raz_t)CALL((recv), (SFT_hash_collection[3] + 5)))
#define CALL_hash_collection___HashCollection___enlarge(recv) ((hash_collection___HashCollection___enlarge_t)CALL((recv), (SFT_hash_collection[3] + 6)))
#define CALL_hash_collection___HashCollection___init(recv) ((hash_collection___HashCollection___init_t)CALL((recv), (SFT_hash_collection[3] + 7)))
#define ID_HashNode (SFT_hash_collection[4])
#define COLOR_HashNode (SFT_hash_collection[5])
#define ATTR_hash_collection___HashNode____next_item(recv) ATTR(recv, (SFT_hash_collection[6] + 0))
#define ATTR_hash_collection___HashNode____prev_item(recv) ATTR(recv, (SFT_hash_collection[6] + 1))
#define INIT_TABLE_POS_HashNode (SFT_hash_collection[7] + 0)
#define CALL_hash_collection___HashNode___key(recv) ((hash_collection___HashNode___key_t)CALL((recv), (SFT_hash_collection[7] + 1)))
#define CALL_hash_collection___HashNode___next_item(recv) ((hash_collection___HashNode___next_item_t)CALL((recv), (SFT_hash_collection[7] + 2)))
#define CALL_hash_collection___HashNode___next_item__eq(recv) ((hash_collection___HashNode___next_item__eq_t)CALL((recv), (SFT_hash_collection[7] + 3)))
#define CALL_hash_collection___HashNode___prev_item(recv) ((hash_collection___HashNode___prev_item_t)CALL((recv), (SFT_hash_collection[7] + 4)))
#define CALL_hash_collection___HashNode___prev_item__eq(recv) ((hash_collection___HashNode___prev_item__eq_t)CALL((recv), (SFT_hash_collection[7] + 5)))
#define CALL_hash_collection___HashNode___init(recv) ((hash_collection___HashNode___init_t)CALL((recv), (SFT_hash_collection[7] + 6)))
#define ID_HashMap (SFT_hash_collection[8])
#define COLOR_HashMap (SFT_hash_collection[9])
#define INIT_TABLE_POS_HashMap (SFT_hash_collection[10] + 0)
#define CALL_hash_collection___HashMap___init(recv) ((hash_collection___HashMap___init_t)CALL((recv), (SFT_hash_collection[10] + 1)))
#define ID_HashMapNode (SFT_hash_collection[11])
#define COLOR_HashMapNode (SFT_hash_collection[12])
#define INIT_TABLE_POS_HashMapNode (SFT_hash_collection[13] + 0)
#define CALL_hash_collection___HashMapNode___init(recv) ((hash_collection___HashMapNode___init_t)CALL((recv), (SFT_hash_collection[13] + 1)))
#define ID_HashMapIterator (SFT_hash_collection[14])
#define COLOR_HashMapIterator (SFT_hash_collection[15])
#define ATTR_hash_collection___HashMapIterator____map(recv) ATTR(recv, (SFT_hash_collection[16] + 0))
#define ATTR_hash_collection___HashMapIterator____node(recv) ATTR(recv, (SFT_hash_collection[16] + 1))
#define INIT_TABLE_POS_HashMapIterator (SFT_hash_collection[17] + 0)
#define CALL_hash_collection___HashMapIterator___init(recv) ((hash_collection___HashMapIterator___init_t)CALL((recv), (SFT_hash_collection[17] + 1)))
#define ID_HashSet (SFT_hash_collection[18])
#define COLOR_HashSet (SFT_hash_collection[19])
#define INIT_TABLE_POS_HashSet (SFT_hash_collection[20] + 0)
#define CALL_hash_collection___HashSet___init(recv) ((hash_collection___HashSet___init_t)CALL((recv), (SFT_hash_collection[20] + 1)))
#define ID_HashSetNode (SFT_hash_collection[21])
#define COLOR_HashSetNode (SFT_hash_collection[22])
#define ATTR_hash_collection___HashSetNode____key(recv) ATTR(recv, (SFT_hash_collection[23] + 0))
#define INIT_TABLE_POS_HashSetNode (SFT_hash_collection[24] + 0)
#define CALL_hash_collection___HashSetNode___key__eq(recv) ((hash_collection___HashSetNode___key__eq_t)CALL((recv), (SFT_hash_collection[24] + 1)))
#define CALL_hash_collection___HashSetNode___init(recv) ((hash_collection___HashSetNode___init_t)CALL((recv), (SFT_hash_collection[24] + 2)))
#define ID_HashSetIterator (SFT_hash_collection[25])
#define COLOR_HashSetIterator (SFT_hash_collection[26])
#define ATTR_hash_collection___HashSetIterator____set(recv) ATTR(recv, (SFT_hash_collection[27] + 0))
#define ATTR_hash_collection___HashSetIterator____node(recv) ATTR(recv, (SFT_hash_collection[27] + 1))
#define INIT_TABLE_POS_HashSetIterator (SFT_hash_collection[28] + 0)
#define CALL_hash_collection___HashSetIterator___init(recv) ((hash_collection___HashSetIterator___init_t)CALL((recv), (SFT_hash_collection[28] + 1)))
#define LOCATE_hash_collection___HashCollection___length "hash_collection::HashCollection::(abstract_collection::Collection::length)"
val_t hash_collection___HashCollection___length(val_t p0);
typedef val_t (*hash_collection___HashCollection___length_t)(val_t p0);
#define LOCATE_hash_collection___HashCollection___first_item "hash_collection::HashCollection::first_item"
val_t hash_collection___HashCollection___first_item(val_t p0);
typedef val_t (*hash_collection___HashCollection___first_item_t)(val_t p0);
#define LOCATE_hash_collection___HashCollection___index_at "hash_collection::HashCollection::index_at"
val_t hash_collection___HashCollection___index_at(val_t p0, val_t p1);
typedef val_t (*hash_collection___HashCollection___index_at_t)(val_t p0, val_t p1);
#define LOCATE_hash_collection___HashCollection___store "hash_collection::HashCollection::store"
void hash_collection___HashCollection___store(val_t p0, val_t p1, val_t p2);
typedef void (*hash_collection___HashCollection___store_t)(val_t p0, val_t p1, val_t p2);
#define LOCATE_hash_collection___HashCollection___remove_index "hash_collection::HashCollection::remove_index"
void hash_collection___HashCollection___remove_index(val_t p0, val_t p1);
typedef void (*hash_collection___HashCollection___remove_index_t)(val_t p0, val_t p1);
#define LOCATE_hash_collection___HashCollection___raz "hash_collection::HashCollection::raz"
void hash_collection___HashCollection___raz(val_t p0);
typedef void (*hash_collection___HashCollection___raz_t)(val_t p0);
#define LOCATE_hash_collection___HashCollection___enlarge "hash_collection::HashCollection::enlarge"
void hash_collection___HashCollection___enlarge(val_t p0, val_t p1);
typedef void (*hash_collection___HashCollection___enlarge_t)(val_t p0, val_t p1);
#define LOCATE_hash_collection___HashCollection___init "hash_collection::HashCollection::init"
void hash_collection___HashCollection___init(val_t p0, int* init_table);
typedef void (*hash_collection___HashCollection___init_t)(val_t p0, int* init_table);
val_t NEW_HashCollection_hash_collection___HashCollection___init();
#define LOCATE_hash_collection___HashNode___key "hash_collection::HashNode::key"
val_t hash_collection___HashNode___key(val_t p0);
typedef val_t (*hash_collection___HashNode___key_t)(val_t p0);
#define LOCATE_hash_collection___HashNode___next_item "hash_collection::HashNode::next_item"
val_t hash_collection___HashNode___next_item(val_t p0);
typedef val_t (*hash_collection___HashNode___next_item_t)(val_t p0);
#define LOCATE_hash_collection___HashNode___next_item__eq "hash_collection::HashNode::next_item="
void hash_collection___HashNode___next_item__eq(val_t p0, val_t p1);
typedef void (*hash_collection___HashNode___next_item__eq_t)(val_t p0, val_t p1);
#define LOCATE_hash_collection___HashNode___prev_item "hash_collection::HashNode::prev_item"
val_t hash_collection___HashNode___prev_item(val_t p0);
typedef val_t (*hash_collection___HashNode___prev_item_t)(val_t p0);
#define LOCATE_hash_collection___HashNode___prev_item__eq "hash_collection::HashNode::prev_item="
void hash_collection___HashNode___prev_item__eq(val_t p0, val_t p1);
typedef void (*hash_collection___HashNode___prev_item__eq_t)(val_t p0, val_t p1);
#define LOCATE_hash_collection___HashNode___init "hash_collection::HashNode::init"
void hash_collection___HashNode___init(val_t p0, int* init_table);
typedef void (*hash_collection___HashNode___init_t)(val_t p0, int* init_table);
val_t NEW_HashNode_hash_collection___HashNode___init();
#define LOCATE_hash_collection___HashMap___iterator "hash_collection::HashMap::(abstract_collection::Collection::iterator)"
val_t hash_collection___HashMap___iterator(val_t p0);
typedef val_t (*hash_collection___HashMap___iterator_t)(val_t p0);
#define LOCATE_hash_collection___HashMap___is_empty "hash_collection::HashMap::(abstract_collection::Collection::is_empty)"
val_t hash_collection___HashMap___is_empty(val_t p0);
typedef val_t (*hash_collection___HashMap___is_empty_t)(val_t p0);
#define LOCATE_hash_collection___HashMap___has "hash_collection::HashMap::(abstract_collection::Collection::has)"
val_t hash_collection___HashMap___has(val_t p0, val_t p1);
typedef val_t (*hash_collection___HashMap___has_t)(val_t p0, val_t p1);
#define LOCATE_hash_collection___HashMap___has_only "hash_collection::HashMap::(abstract_collection::Collection::has_only)"
val_t hash_collection___HashMap___has_only(val_t p0, val_t p1);
typedef val_t (*hash_collection___HashMap___has_only_t)(val_t p0, val_t p1);
#define LOCATE_hash_collection___HashMap___count "hash_collection::HashMap::(abstract_collection::Collection::count)"
val_t hash_collection___HashMap___count(val_t p0, val_t p1);
typedef val_t (*hash_collection___HashMap___count_t)(val_t p0, val_t p1);
#define LOCATE_hash_collection___HashMap___first "hash_collection::HashMap::(abstract_collection::Collection::first)"
val_t hash_collection___HashMap___first(val_t p0);
typedef val_t (*hash_collection___HashMap___first_t)(val_t p0);
#define LOCATE_hash_collection___HashMap___clear "hash_collection::HashMap::(abstract_collection::RemovableCollection::clear)"
void hash_collection___HashMap___clear(val_t p0);
typedef void (*hash_collection___HashMap___clear_t)(val_t p0);
#define LOCATE_hash_collection___HashMap___remove "hash_collection::HashMap::(abstract_collection::RemovableCollection::remove)"
void hash_collection___HashMap___remove(val_t p0, val_t p1);
typedef void (*hash_collection___HashMap___remove_t)(val_t p0, val_t p1);
#define LOCATE_hash_collection___HashMap_____braeq "hash_collection::HashMap::(abstract_collection::Map::[]=)"
void hash_collection___HashMap_____braeq(val_t p0, val_t p1, val_t p2);
typedef void (*hash_collection___HashMap_____braeq_t)(val_t p0, val_t p1, val_t p2);
#define LOCATE_hash_collection___HashMap___remove_at "hash_collection::HashMap::(abstract_collection::Map::remove_at)"
void hash_collection___HashMap___remove_at(val_t p0, val_t p1);
typedef void (*hash_collection___HashMap___remove_at_t)(val_t p0, val_t p1);
#define LOCATE_hash_collection___HashMap___couple_at "hash_collection::HashMap::(abstract_collection::CoupleMap::couple_at)"
val_t hash_collection___HashMap___couple_at(val_t p0, val_t p1);
typedef val_t (*hash_collection___HashMap___couple_at_t)(val_t p0, val_t p1);
#define LOCATE_hash_collection___HashMap___init "hash_collection::HashMap::init"
void hash_collection___HashMap___init(val_t p0, int* init_table);
typedef void (*hash_collection___HashMap___init_t)(val_t p0, int* init_table);
val_t NEW_HashMap_hash_collection___HashMap___init();
#define LOCATE_hash_collection___HashMapNode___key "hash_collection::HashMapNode::(hash_collection::HashNode::key)"
val_t hash_collection___HashMapNode___key(val_t p0);
typedef val_t (*hash_collection___HashMapNode___key_t)(val_t p0);
#define LOCATE_hash_collection___HashMapNode___init "hash_collection::HashMapNode::init"
void hash_collection___HashMapNode___init(val_t p0, val_t p1, val_t p2, int* init_table);
typedef void (*hash_collection___HashMapNode___init_t)(val_t p0, val_t p1, val_t p2, int* init_table);
val_t NEW_HashMapNode_hash_collection___HashMapNode___init(val_t p0, val_t p1);
#define LOCATE_hash_collection___HashMapIterator___item "hash_collection::HashMapIterator::(abstract_collection::Iterator::item)"
val_t hash_collection___HashMapIterator___item(val_t p0);
typedef val_t (*hash_collection___HashMapIterator___item_t)(val_t p0);
#define LOCATE_hash_collection___HashMapIterator___next "hash_collection::HashMapIterator::(abstract_collection::Iterator::next)"
void hash_collection___HashMapIterator___next(val_t p0);
typedef void (*hash_collection___HashMapIterator___next_t)(val_t p0);
#define LOCATE_hash_collection___HashMapIterator___is_ok "hash_collection::HashMapIterator::(abstract_collection::Iterator::is_ok)"
val_t hash_collection___HashMapIterator___is_ok(val_t p0);
typedef val_t (*hash_collection___HashMapIterator___is_ok_t)(val_t p0);
#define LOCATE_hash_collection___HashMapIterator___key "hash_collection::HashMapIterator::(abstract_collection::MapIterator::key)"
val_t hash_collection___HashMapIterator___key(val_t p0);
typedef val_t (*hash_collection___HashMapIterator___key_t)(val_t p0);
#define LOCATE_hash_collection___HashMapIterator___init "hash_collection::HashMapIterator::init"
void hash_collection___HashMapIterator___init(val_t p0, val_t p1, int* init_table);
typedef void (*hash_collection___HashMapIterator___init_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_HashMapIterator_hash_collection___HashMapIterator___init(val_t p0);
#define LOCATE_hash_collection___HashSet___iterator "hash_collection::HashSet::(abstract_collection::Collection::iterator)"
val_t hash_collection___HashSet___iterator(val_t p0);
typedef val_t (*hash_collection___HashSet___iterator_t)(val_t p0);
#define LOCATE_hash_collection___HashSet___is_empty "hash_collection::HashSet::(abstract_collection::Collection::is_empty)"
val_t hash_collection___HashSet___is_empty(val_t p0);
typedef val_t (*hash_collection___HashSet___is_empty_t)(val_t p0);
#define LOCATE_hash_collection___HashSet___has "hash_collection::HashSet::(abstract_collection::Collection::has)"
val_t hash_collection___HashSet___has(val_t p0, val_t p1);
typedef val_t (*hash_collection___HashSet___has_t)(val_t p0, val_t p1);
#define LOCATE_hash_collection___HashSet___first "hash_collection::HashSet::(abstract_collection::Collection::first)"
val_t hash_collection___HashSet___first(val_t p0);
typedef val_t (*hash_collection___HashSet___first_t)(val_t p0);
#define LOCATE_hash_collection___HashSet___clear "hash_collection::HashSet::(abstract_collection::RemovableCollection::clear)"
void hash_collection___HashSet___clear(val_t p0);
typedef void (*hash_collection___HashSet___clear_t)(val_t p0);
#define LOCATE_hash_collection___HashSet___remove "hash_collection::HashSet::(abstract_collection::RemovableCollection::remove)"
void hash_collection___HashSet___remove(val_t p0, val_t p1);
typedef void (*hash_collection___HashSet___remove_t)(val_t p0, val_t p1);
#define LOCATE_hash_collection___HashSet___add "hash_collection::HashSet::(abstract_collection::SimpleCollection::add)"
void hash_collection___HashSet___add(val_t p0, val_t p1);
typedef void (*hash_collection___HashSet___add_t)(val_t p0, val_t p1);
#define LOCATE_hash_collection___HashSet___init "hash_collection::HashSet::init"
void hash_collection___HashSet___init(val_t p0, int* init_table);
typedef void (*hash_collection___HashSet___init_t)(val_t p0, int* init_table);
val_t NEW_HashSet_hash_collection___HashSet___init();
#define LOCATE_hash_collection___HashSetNode___key "hash_collection::HashSetNode::(hash_collection::HashNode::key)"
val_t hash_collection___HashSetNode___key(val_t p0);
typedef val_t (*hash_collection___HashSetNode___key_t)(val_t p0);
#define LOCATE_hash_collection___HashSetNode___key__eq "hash_collection::HashSetNode::key="
void hash_collection___HashSetNode___key__eq(val_t p0, val_t p1);
typedef void (*hash_collection___HashSetNode___key__eq_t)(val_t p0, val_t p1);
#define LOCATE_hash_collection___HashSetNode___init "hash_collection::HashSetNode::init"
void hash_collection___HashSetNode___init(val_t p0, val_t p1, int* init_table);
typedef void (*hash_collection___HashSetNode___init_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_HashSetNode_hash_collection___HashSetNode___init(val_t p0);
#define LOCATE_hash_collection___HashSetIterator___item "hash_collection::HashSetIterator::(abstract_collection::Iterator::item)"
val_t hash_collection___HashSetIterator___item(val_t p0);
typedef val_t (*hash_collection___HashSetIterator___item_t)(val_t p0);
#define LOCATE_hash_collection___HashSetIterator___next "hash_collection::HashSetIterator::(abstract_collection::Iterator::next)"
void hash_collection___HashSetIterator___next(val_t p0);
typedef void (*hash_collection___HashSetIterator___next_t)(val_t p0);
#define LOCATE_hash_collection___HashSetIterator___is_ok "hash_collection::HashSetIterator::(abstract_collection::Iterator::is_ok)"
val_t hash_collection___HashSetIterator___is_ok(val_t p0);
typedef val_t (*hash_collection___HashSetIterator___is_ok_t)(val_t p0);
#define LOCATE_hash_collection___HashSetIterator___init "hash_collection::HashSetIterator::init"
void hash_collection___HashSetIterator___init(val_t p0, val_t p1, int* init_table);
typedef void (*hash_collection___HashSetIterator___init_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_HashSetIterator_hash_collection___HashSetIterator___init(val_t p0);
#endif