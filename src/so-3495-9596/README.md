### avl sub-directory

Miscellaneous bits of AVL tree code, all of them non-operational, and
not written by Jonathan Leffler (and not yet debugged or rewritten).

### SO 3495-9596

This question is still on SO.

* `AVL_tree.c`
* `AVL_tree.h`
* `avl2.c`
* `avl3.c`
* `test.c`

  Three test programs (`test.c`, `avl2.c`, `avl3.c`) plus common code.
  All the programs crash when run.

The official accepted answer is a self-answer:

* I find the bug for this codes now.  The right/left rotation functions
  use pointer to pointer.  When I pass the parent's l or r pointer to
  it.  It cause a bug inside the function.  A better way to improve this
  code is replace pointer to pointer by just pointer and update pointer
  by returning value.

### SO 3611-6746

* `avl-36116746.c`
  Deleted (but identified) question on SO.  Crashes.

### SO ????-????

* `avl-tree.c`
  Deleted (but unidentified) question on SO.  Crashes.
