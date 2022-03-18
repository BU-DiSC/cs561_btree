# cs561_btree

## Compilation
Run the "make" command in the terminal to compile using the Makefile provided. 

Note, the "-DBPLUS" compilation flag converts the B-epsilon tree implementation to a B+ tree. Essentially, A B-epsilon tree with a single spot in the buffer of every internal node (including the root) will function as a B+ tree, since all these internal nodes will immediately flush the inserted entry down to the lower levels (cascading until the inserted entry reaches the leaf level). 
