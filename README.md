
# Simple Shell project

man_3_shell : custom manpage for our simple shell
main.c : holds entrance into program
shell.h : holds prototypes of functions 
prompt.c : handles outline of shell's reprompting and executing
non_interactive.c : handles output when shell is called outside of shell
_realloc.c : helper function handles reallocation
_strcat.c : concatenates two strings
_strcmp.c : compares if two strings match
_strcpy.c : copies a string
_strdup.c : duplicates a string
_str_tok.c : (custom) tokenizes user's command input and returns array
c_str_tok.c : tokenizes PATH to include ":" as Null, checks current dir
get_line.c : (custom) reads user's typed input into buffer
_which.c : appends command to PATHs, fleshes paths out, returns match
_cd.c : changes directories
linked_lists.c : adds and deletes nodes; prints and frees linked list
get_env.c : finds and returns copy of environmental variable
env_linked_list.c : prints and creates linked list of envrionmental variables
set_unset_env.c : finds environment variable index node, sets and unsets
free_double_ptr : frees double pointers (user's command, arrays)
_execve.c : executes and frees command, then exits program
__exit.c : handles if user types exit or exit(value)
int_to_string.c : converts int to string to write error messages
print_error.c : prints special error messages for certain fails

# Authors
ahmed sayed <https://github.com/ahmed-seryo>
