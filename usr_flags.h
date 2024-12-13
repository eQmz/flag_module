/**
 * @file usr_flags.h
 * @author your name (you@domain.com)
 * @brief This file is the extra layer for the flag_module.h "library". It makes an extra layer for the user to define his flags and
 *  link them to the original MACRO names.
 * @version 0.0
 * @date 2024-12-11
 * 
 *  @code
 *  //****************urs_flags.h file****************
    #ifndef _USR_FLAGS_
    #define _USR_FLAGS_

    #include "flag_module.h"

    #define myFlag FLAG_0
    #define ursFlag FLAG_1
    #define nameFlag FLAG_2

    #endif //_USR_FLAGS_
 * @endcode
 * @example
 * @code
 * //****************main.c file****************
   #include "stdio.h"
   #include "usr_flags.h"

   CREATE_FLAGS();

   int main(int argc, char const *argv[])
   {
      ursFlag = 1;
      printf("ursFlag: %d\n", ursFlag);

      ursFlag = 0;
      printf("ursFlag: %d\n", ursFlag);

      myFlag = 1;
      printf("myFlag: %d\n", myFlag);

      myFlag = 0;
      printf("myFlag: %d\n", myFlag);


      return 0;
   }

   Output:
      
   ursFlag: 0
   ursFlag: 1
   myFlag: 1
   myFlag: 0
 * @endcode
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef _USR_FLAGS_
#define _USR_FLAGS_

#include "flag_module.h"

#define myFlag FLAG_0
#define ursFlag FLAG_1
#define nameFlag FLAG_2

#endif //_USR_FLAGS_