/*
 * 
 *
 *    /--------------------------------------------O
 *    |                                            |
 *    |  COPYRIGHT : (c) 2024 per Linuxperoxo.     |
 *    |  AUTHOR    : Linuxperoxo                   |
 *    |  FILE      : types.h                       |
 *    |  SRC MOD   : 30/11/2024                    | 
 *    |                                            |
 *    O--------------------------------------------/
 *    
 *
 */

#ifndef __STDTYPES__
#define __STDTYPES__

/*
 *
 * Unsigned Types
 *
 */

typedef unsigned char __u8;
typedef unsigned short __u16;
typedef unsigned long int __u32;
typedef unsigned long long int __u64;

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long int uint64_t;

/*
 *
 * Signed Types
 *
 */

typedef signed char __i8;
typedef signed short __i16;
typedef signed long int __i32;
typedef signed long long int __i64;

typedef signed char int8_t;
typedef signed short int16_t;
typedef signed long int int32_t;
typedef signed long long int int64_t;

/*
 *
 * Bool Types (SOME C!)
 *
 */

typedef __u8 bool;

#define true 1
#define false 0

#endif