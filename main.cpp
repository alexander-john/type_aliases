/*
 * What You Need:
 * CLion
 *
 * Step 1:
 * Download Zip
 *
 * Step 2:
 * Unzip
 *
 * Step 3:
 * Open main.cpp in CLion
 *
 * Step 4:
 * Done!
 *
 * A type alias is a different name by which a type can be identified. In C++, any
 * valid type can be aliased so that it can be referred to with a different identifier.
 *
 * In C++, there are two syntaxes for creating such type aliases. The first, inherited
 * from the C language, uses the typedef keyword.
 *
 * example:
 * typedef existing_type new_type_name;
 *
 * where existing_type is any type, either fundamental or compound, and new_type_name is an identifier
 * with the new name given to the type.
 *
 * Example:
 * typedef char C;
 * typedef unsigned int WORD;
 * typedef char * pChar;
 * typedef char field[50];
 *
 * This defines four type aliases: c, WORD, pChar, and field as char, unsigned int, char *, and char[50],
 * respectively. Once these aliases are defined, they can be used in any declaration just like any other
 * valid type.
 *
 * Example:
 * C mychar, anotherchar, *ptcl;
 * WORD myword;
 * pChar ptc2;
 * field name;
 *
 * more recently, a second syntax to define type aliases was introduced in the C++ language.
 *
 * using new_type_name = existing_type;
 *
 * example:
 * using C = char;
 * using WORD = unsigned int;
 * using pChar = char *;
 * using field = char[50];
 *
 * Both aliases defined with typedef and aliases defined with using are semantically equivalent.
 * The only difference being that typedef has certain limitations in the realm of templates that
 * using has not. Therefore, using is more generic, although typedef has a longer history
 * and is probably more common in existing code.
 *
 * Note that neither typedef nor using create new distinct data types. They only create synonyms
 * of existing types. That means that the type of myword above, declared with type WORD, can as well
 * be considered of type unsigned int; it does not really matter, since both are actually referring
 * to the same type.
 *
 * Type aliases can be used to reduce the length of long or confusing type names, but they are
 * most useful as tools to abstract programs from the underlying types they use. For example,
 * by using an alias of int to refer to a particular kind of parameter instead of using int directly
 * it allows for the type to be easily replaced by long (or some other type) in a later version,
 * without having to change every instance where it is used.
 *
 * This program was written by Alexander John using information used from the source below:
 *
 * Source: https://cplusplus.com/doc/tutorial/other_data_types/
 */

#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
