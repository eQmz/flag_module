/**
 * @file flag_module.h
 * @author EM2 (you@domain.com)
 * @brief This "library" consists of a module to generate 32 flags with 1 bit size each of them.
 * The user can add more flags with another struct of type flag_t in CREATE_FLAGS() and more FLAG_x MACROS. 
 * Example to add more flags:
 * @code
    #define FLAG_32 fooFlgs.f0
    #define FLAG_33 fooFlgs.f1
    #define FLAG_34 fooFlgs.f2
    #define FLAG_USRNAME fooFlgs.f3
    // .
    // .
    // .

   
   #define CREATE_FLAGS() static flag_t flgs = { 0 };\
   static flag_t fooFlgs = { 0 }
   @endcode
 * 
 * On the other hand, the "library" works with other .h file named usr_flags.h where the user adds
 * an extra layer to mask the original MACROS names, i.e., the user names his flags and associates them
 * with the variables of bitfield type
 * @version 1.0
 * @date 2024-12-11
 * 
 * @example
 * @code
 *  //****************urs_flags.h file****************
    #ifndef _USR_FLAGS_
    #define _USR_FLAGS_

    #include "flag_module.h"

    #define myFlag FLAG_0
    #define ursFlag FLAG_1
    #define nameFlag FLAG_2

    #endif //_USR_FLAGS_
 * @endcode
 *
 * @code
 *  //****************main.c file****************
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
#ifndef _FLAG_MODULE_H_
#define _FLAG_MODULE_H_

#include "stdint.h"

#define FLAG_0 flgs.f0
#define FLAG_1 flgs.f1
#define FLAG_2 flgs.f2
#define FLAG_3 flgs.f3
#define FLAG_4 flgs.f4
#define FLAG_5 flgs.f5
#define FLAG_6 flgs.f6
#define FLAG_7 flgs.f7
#define FLAG_8 flgs.f8
#define FLAG_9 flgs.f9
#define FLAG_10 flgs.f10
#define FLAG_11 flgs.f11
#define FLAG_12 flgs.f12
#define FLAG_13 flgs.f13
#define FLAG_14 flgs.f14
#define FLAG_15 flgs.f15
#define FLAG_16 flgs.f16
#define FLAG_17 flgs.f17
#define FLAG_18 flgs.f18
#define FLAG_19 flgs.f19
#define FLAG_20 flgs.f20
#define FLAG_21 flgs.f21
#define FLAG_22 flgs.f22
#define FLAG_23 flgs.f23
#define FLAG_24 flgs.f24
#define FLAG_25 flgs.f25
#define FLAG_26 flgs.f26
#define FLAG_27 flgs.f27
#define FLAG_28 flgs.f28
#define FLAG_29 flgs.f29
#define FLAG_30 flgs.f30
#define FLAG_31 flgs.f31

#define FLAG_32 fooFlgs.f0
#define FLAG_33 fooFlgs.f1
#define FLAG_34 fooFlgs.f2
#define FLAG_USRNAME fooFlgs.f3

/**
 * @brief This is the variable type named flag_t to create a bitfield which generates 32 flags of 1 bit size.
 * 
 */
typedef struct 
{
   uint32_t f0 : 1;
   uint32_t f1 : 1; 
   uint32_t f2 : 1;
   uint32_t f3 : 1;
   uint32_t f4 : 1;
   uint32_t f5 : 1; 
   uint32_t f6 : 1;
   uint32_t f7 : 1;
   uint32_t f8 : 1;
   uint32_t f9 : 1; 
   uint32_t f10 : 1;
   uint32_t f11 : 1;
   uint32_t f12 : 1;
   uint32_t f13 : 1; 
   uint32_t f14 : 1;
   uint32_t f15 : 1;
   uint32_t f16 : 1;
   uint32_t f17 : 1; 
   uint32_t f18 : 1;
   uint32_t f19 : 1;
   uint32_t f20 : 1;
   uint32_t f21 : 1; 
   uint32_t f22 : 1;
   uint32_t f23 : 1;
   uint32_t f24 : 1;
   uint32_t f25 : 1; 
   uint32_t f26 : 1;
   uint32_t f27 : 1;
   uint32_t f28 : 1;
   uint32_t f29 : 1; 
   uint32_t f30 : 1;
   uint32_t f31 : 1;
}flag_t;

/**
 * @brief This Macro creates a flag_t instance to generate the 32 flags of 1 bit size 
 * 
 *    You can add more instance in the macro to generate more flags.
 *    Note: Each instance generates 32 flags of 1 bit size. Futhermore, for each instance 
 *    you have to create 32 MACROS, for instance: 
 * @code
    #define FLAG_32 fooFlgs.f0
    #define FLAG_33 fooFlgs.f1
    #define FLAG_34 fooFlgs.f2
    #define FLAG_USRNAME fooFlgs.f3
    // .
    // .
    // .

   
   #define CREATE_FLAGS() static flag_t flgs = { 0 };\
   static flag_t fooFlgs = { 0 }
   @endcode
 * 
 */
#define CREATE_FLAGS() static flag_t flgs = { 0 }

#endif