/* Test the `vmovls32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vmovls32 (void)
{
  int64x2_t out_int64x2_t;
  int32x2_t arg0_int32x2_t;

  out_int64x2_t = vmovl_s32 (arg0_int32x2_t);
}

/* { dg-final { scan-assembler "vmovl\.s32\[ 	\]+\[qQ\]\[0-9\]+, \[dD\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
