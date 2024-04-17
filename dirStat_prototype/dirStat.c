/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*\

    FILENAME      : dirStat.c
    FIRST-VERSION : April 17th, 2024
    FIRST-AUTHOR  : Tristin A. Manson (Trianan)
    CMD-ARGUMENTS : 
    CMD_RETURNS   :
    DESCRIPTION   :
        A utility for obtaining aggregate statistics about items within a 
        specified directory.


\*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
#pragma warning(disable: 4996)
#include <stdlib.h> // For system() specifically
#include <stdio.h>
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1


//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
typedef struct {
    char* name;
    char* extension;
    unsigned int size;
} DirItem;


//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
int getDirectories(char*, char**);


//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
int main(int argc, char** argv) {






    return EXIT_SUCCESS;
}


//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
/*
    FUNCTION     : getDirectories
    PARAMETER(S) :
        dirPath ------> A string representing path to directory for listing.
        dirContents --> A string-buffer for containing listed items.
    RETURNS      :
        An integer representing the number of items in the directory listed.
    DESCRIPTION  :
        Obtains all the filenames in the directory specified by dirPath, and
        stores them in dirContents.
*/
int getDirectories(char* dirPath, char** dirContents) {


    return -1;
}