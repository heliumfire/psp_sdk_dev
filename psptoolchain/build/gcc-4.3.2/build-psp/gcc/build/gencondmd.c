/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#include "system.h"

/* It is necessary, but not entirely safe, to include the headers below
   in a generator program.  As a defensive measure, don't do so when the
   table isn't going to have anything in it.  */
#if GCC_VERSION >= 3001

/* Do not allow checking to confuse the issue.  */
#undef ENABLE_CHECKING
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "coretypes.h"
#include "tm.h"
#include "insn-constants.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"
#include "tm-constrs.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx insn;
extern rtx ins1;
extern rtx operands[];

#endif /* gcc >= 3.0.1 */

/* Structure definition duplicated from gensupport.h rather than
   drag in that file and its dependencies.  */
struct c_test
{
  const char *expr;
  int value;
};

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time.
   If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */

#if GCC_VERSION >= 3001
static const struct c_test insn_conditions[] = {

#line 1815 "../../gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_FIX_R4000\n\
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)",
    __builtin_constant_p 
#line 1815 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    ? (int) 
#line 1815 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    : -1 },
#line 6187 "../../gcc/config/mips/mips.md"
  { "reload_completed",
    __builtin_constant_p 
#line 6187 "../../gcc/config/mips/mips.md"
(reload_completed)
    ? (int) 
#line 6187 "../../gcc/config/mips/mips.md"
(reload_completed)
    : -1 },
  { "(!ISA_MIPS1) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 2041 "../../gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 2041 "../../gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && INTVAL (operands[2]) > 8\n\
   && INTVAL (operands[2]) <= 16) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4860 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 4860 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && (Pmode == DImode)",
    __builtin_constant_p (
#line 4355 "../../gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 4355 "../../gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(ISA_HAS_NMADD_NMSUB (V2SFmode)\n\
   && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (V2SFmode)\n\
   && !HONOR_NANS (V2SFmode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 1913 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (V2SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 1913 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (V2SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 5829 "../../gcc/config/mips/mips.md"
  { "TARGET_SIBCALLS && SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 5829 "../../gcc/config/mips/mips.md"
(TARGET_SIBCALLS && SIBLING_CALL_P (insn))
    ? (int) 
#line 5829 "../../gcc/config/mips/mips.md"
(TARGET_SIBCALLS && SIBLING_CALL_P (insn))
    : -1 },
#line 1698 "../../gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1698 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000)
    ? (int) 
#line 1698 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000)
    : -1 },
  { "(!ISA_HAS_MACCHI) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4208 "../../gcc/config/mips/mips.md"
(!ISA_HAS_MACCHI) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 4208 "../../gcc/config/mips/mips.md"
(!ISA_HAS_MACCHI) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p ((
#line 3792 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) ((
#line 3792 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (Pmode == DImode)",
    __builtin_constant_p (
#line 6055 "../../gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 6055 "../../gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_HARD_FLOAT) && (!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 4295 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 525 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 4295 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 525 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 3935 "../../gcc/config/mips/mips.md"
  { "!TARGET_MIPS16\n\
   && (register_operand (operands[0], QImode)\n\
       || reg_or_0_operand (operands[1], QImode))",
    __builtin_constant_p 
#line 3935 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || reg_or_0_operand (operands[1], QImode)))
    ? (int) 
#line 3935 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || reg_or_0_operand (operands[1], QImode)))
    : -1 },
#line 1164 "../../gcc/config/mips/mips.md"
  { "ISA_HAS_MUL3",
    __builtin_constant_p 
#line 1164 "../../gcc/config/mips/mips.md"
(ISA_HAS_MUL3)
    ? (int) 
#line 1164 "../../gcc/config/mips/mips.md"
(ISA_HAS_MUL3)
    : -1 },
#line 4764 "../../gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_MIPS16",
    __builtin_constant_p 
#line 4764 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16)
    ? (int) 
#line 4764 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16)
    : -1 },
  { "(TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 1069 "../../gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 1069 "../../gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 4078 "../../gcc/config/mips/mips.md"
  { "(TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16\n\
   && (register_operand (operands[0], DFmode)\n\
       || reg_or_0_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 4078 "../../gcc/config/mips/mips.md"
((TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    ? (int) 
#line 4078 "../../gcc/config/mips/mips.md"
((TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    : -1 },
#line 1722 "../../gcc/config/mips/mips.md"
  { "!TARGET_64BIT && (ISA_HAS_MSAC || GENERATE_MADD_MSUB || ISA_HAS_DSPR2 || TARGET_ALLEGREX)",
    __builtin_constant_p 
#line 1722 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && (ISA_HAS_MSAC || GENERATE_MADD_MSUB || ISA_HAS_DSPR2 || TARGET_ALLEGREX))
    ? (int) 
#line 1722 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && (ISA_HAS_MSAC || GENERATE_MADD_MSUB || ISA_HAS_DSPR2 || TARGET_ALLEGREX))
    : -1 },
#line 4163 "../../gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT\n\
   && TARGET_PAIRED_SINGLE_FLOAT\n\
   && TARGET_64BIT\n\
   && (register_operand (operands[0], V2SFmode)\n\
       || reg_or_0_operand (operands[1], V2SFmode))",
    __builtin_constant_p 
#line 4163 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && TARGET_PAIRED_SINGLE_FLOAT
   && TARGET_64BIT
   && (register_operand (operands[0], V2SFmode)
       || reg_or_0_operand (operands[1], V2SFmode)))
    ? (int) 
#line 4163 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && TARGET_PAIRED_SINGLE_FLOAT
   && TARGET_64BIT
   && (register_operand (operands[0], V2SFmode)
       || reg_or_0_operand (operands[1], V2SFmode)))
    : -1 },
#line 1317 "../../gcc/config/mips/mips.md"
  { "reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GP_REG_P (true_regnum (operands[0]))\n\
   && true_regnum (operands[3]) == LO_REGNUM",
    __builtin_constant_p 
#line 1317 "../../gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[3]) == LO_REGNUM)
    ? (int) 
#line 1317 "../../gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[3]) == LO_REGNUM)
    : -1 },
#line 2901 "../../gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT",
    __builtin_constant_p 
#line 2901 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT)
    ? (int) 
#line 2901 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT)
    : -1 },
  { "(ISA_HAS_FP4 && TARGET_FLOAT64 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 2077 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FLOAT64 && flag_unsafe_math_optimizations) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 2077 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FLOAT64 && flag_unsafe_math_optimizations) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 5683 "../../gcc/config/mips/mips.md"
  { "TARGET_CALL_CLOBBERED_GP",
    __builtin_constant_p 
#line 5683 "../../gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP)
    ? (int) 
#line 5683 "../../gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP)
    : -1 },
  { "(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && (TARGET_64BIT && TARGET_FLOAT64)",
    __builtin_constant_p (
#line 4320 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 526 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64))
    ? (int) (
#line 4320 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 526 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64))
    : -1 },
#line 1743 "../../gcc/config/mips/mips.md"
  { "ISA_HAS_MULHI || !TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1743 "../../gcc/config/mips/mips.md"
(ISA_HAS_MULHI || !TARGET_FIX_R4000)
    ? (int) 
#line 1743 "../../gcc/config/mips/mips.md"
(ISA_HAS_MULHI || !TARGET_FIX_R4000)
    : -1 },
  { "(ISA_HAS_ROR) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2212 "../../gcc/config/mips/mips.md"
(ISA_HAS_ROR) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2212 "../../gcc/config/mips/mips.md"
(ISA_HAS_ROR) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 3974 "../../gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x80)\n\
       || (INTVAL (operands[1]) >= 32\n\
	   && INTVAL (operands[1]) <= 31 + 0x7f))",
    __builtin_constant_p 
#line 3974 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32
	   && INTVAL (operands[1]) <= 31 + 0x7f)))
    ? (int) 
#line 3974 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32
	   && INTVAL (operands[1]) <= 31 + 0x7f)))
    : -1 },
  { "(TARGET_64BIT && !TARGET_MIPS16) && ( reload_completed)",
    __builtin_constant_p (
#line 2455 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 2457 "../../gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 2455 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 2457 "../../gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 1535 "../../gcc/config/mips/mips.md"
  { "GENERATE_MADD_MSUB",
    __builtin_constant_p 
#line 1535 "../../gcc/config/mips/mips.md"
(GENERATE_MADD_MSUB)
    ? (int) 
#line 1535 "../../gcc/config/mips/mips.md"
(GENERATE_MADD_MSUB)
    : -1 },
  { "(!TARGET_MIPS16) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5345 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 5345 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 763 "../../gcc/config/mips/mips.md"
  { "ISA_HAS_COND_TRAP",
    __builtin_constant_p 
#line 763 "../../gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP)
    ? (int) 
#line 763 "../../gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP)
    : -1 },
#line 4208 "../../gcc/config/mips/mips.md"
  { "!ISA_HAS_MACCHI",
    __builtin_constant_p 
#line 4208 "../../gcc/config/mips/mips.md"
(!ISA_HAS_MACCHI)
    ? (int) 
#line 4208 "../../gcc/config/mips/mips.md"
(!ISA_HAS_MACCHI)
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected) && ( reload_completed)",
    __builtin_constant_p (
#line 3304 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected) && 
#line 3306 "../../gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 3304 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected) && 
#line 3306 "../../gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 2414 "../../gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) >= 32",
    __builtin_constant_p 
#line 2414 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) >= 32)
    ? (int) 
#line 2414 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) >= 32)
    : -1 },
  { "(HAVE_AS_TLS && !TARGET_MIPS16) && (Pmode == SImode)",
    __builtin_constant_p (
#line 6246 "../../gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 6246 "../../gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "((!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && (TARGET_64BIT)) && ( reload_completed && REG_P (operands[1]))",
    __builtin_constant_p ((
#line 2676 "../../gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 2680 "../../gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    ? (int) ((
#line 2676 "../../gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 2680 "../../gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    : -1 },
#line 1217 "../../gcc/config/mips/mips.md"
  { "TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1217 "../../gcc/config/mips/mips.md"
(TARGET_FIX_R4000)
    ? (int) 
#line 1217 "../../gcc/config/mips/mips.md"
(TARGET_FIX_R4000)
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 577 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 577 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 3703 "../../gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && INTVAL (operands[1]) >= 0x100\n\
   && INTVAL (operands[1]) <= 0xff + 0x7f",
    __builtin_constant_p 
#line 3703 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && INTVAL (operands[1]) >= 0x100
   && INTVAL (operands[1]) <= 0xff + 0x7f)
    ? (int) 
#line 3703 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && INTVAL (operands[1]) >= 0x100
   && INTVAL (operands[1]) <= 0xff + 0x7f)
    : -1 },
  { "(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && ( reload_completed && REG_P (operands[1]))",
    __builtin_constant_p (
#line 2722 "../../gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 2726 "../../gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    ? (int) (
#line 2722 "../../gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 2726 "../../gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    : -1 },
  { "(!ISA_MIPS1) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2041 "../../gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2041 "../../gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(ISA_HAS_COND_TRAP) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 779 "../../gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 779 "../../gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(!HONOR_NANS (V2SFmode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2190 "../../gcc/config/mips/mips.md"
(!HONOR_NANS (V2SFmode)) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2190 "../../gcc/config/mips/mips.md"
(!HONOR_NANS (V2SFmode)) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "(ISA_HAS_CLZ_CLO) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2140 "../../gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2140 "../../gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 524 "../../gcc/config/mips/mips.md"
  { "!TARGET_64BIT && TARGET_DOUBLE_FLOAT",
    __builtin_constant_p 
#line 524 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)
    ? (int) 
#line 524 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)
    : -1 },
#line 2711 "../../gcc/config/mips/mips.md"
  { "GENERATE_MIPS16E",
    __builtin_constant_p 
#line 2711 "../../gcc/config/mips/mips.md"
(GENERATE_MIPS16E)
    ? (int) 
#line 2711 "../../gcc/config/mips/mips.md"
(GENERATE_MIPS16E)
    : -1 },
  { "(ISA_HAS_FP4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 1874 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 1874 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 3514 "../../gcc/config/mips/mips.md"
  { "!TARGET_64BIT && TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 3514 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 3514 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3370 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 3370 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 3882 "../../gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x80)\n\
       || (INTVAL (operands[1]) >= 32 * 2\n\
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)\n\
       || (INTVAL (operands[1]) >= 0\n\
	   && INTVAL (operands[1]) < 32 * 2\n\
	   && (INTVAL (operands[1]) & 1) != 0))",
    __builtin_constant_p 
#line 3882 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 2
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 2
	   && (INTVAL (operands[1]) & 1) != 0)))
    ? (int) 
#line 3882 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 2
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 2
	   && (INTVAL (operands[1]) & 1) != 0)))
    : -1 },
#line 23 "../../gcc/config/mips/mips-fixed.md"
  { "ISA_HAS_DSP",
    __builtin_constant_p 
#line 23 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP)
    ? (int) 
#line 23 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP)
    : -1 },
#line 2140 "../../gcc/config/mips/mips.md"
  { "ISA_HAS_CLZ_CLO",
    __builtin_constant_p 
#line 2140 "../../gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO)
    ? (int) 
#line 2140 "../../gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO)
    : -1 },
#line 4839 "../../gcc/config/mips/mips.md"
  { "TARGET_64BIT && TARGET_MIPS16",
    __builtin_constant_p 
#line 4839 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16)
    ? (int) 
#line 4839 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16)
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 577 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 577 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "(ISA_HAS_NMADD_NMSUB (DFmode)\n\
   && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (DFmode)\n\
   && !HONOR_NANS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 1927 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (DFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 1927 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (DFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 4032 "../../gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], SFmode)\n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 4032 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 4032 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)))
    : -1 },
#line 1193 "../../gcc/config/mips/mips.md"
  { "ISA_HAS_MUL3 && peep2_reg_dead_p (2, operands[0])",
    __builtin_constant_p 
#line 1193 "../../gcc/config/mips/mips.md"
(ISA_HAS_MUL3 && peep2_reg_dead_p (2, operands[0]))
    ? (int) 
#line 1193 "../../gcc/config/mips/mips.md"
(ISA_HAS_MUL3 && peep2_reg_dead_p (2, operands[0]))
    : -1 },
  { "(mips_current_loadgp_style () == LOADGP_RTP) && (Pmode == SImode)",
    __builtin_constant_p (
#line 4383 "../../gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 4383 "../../gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(TARGET_MIPS16) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3431 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 3431 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3387 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 3387 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 1796 "../../gcc/config/mips/mips.md"
  { "ISA_HAS_MULHI",
    __builtin_constant_p 
#line 1796 "../../gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
    ? (int) 
#line 1796 "../../gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
    : -1 },
#line 5887 "../../gcc/config/mips/mips.md"
  { "reload_completed && TARGET_SPLIT_CALLS && (operands[2] = insn)",
    __builtin_constant_p 
#line 5887 "../../gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[2] = insn))
    ? (int) 
#line 5887 "../../gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[2] = insn))
    : -1 },
#line 1763 "../../gcc/config/mips/mips.md"
  { "!ISA_HAS_MULHI && !TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1763 "../../gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_FIX_R4000)
    ? (int) 
#line 1763 "../../gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_FIX_R4000)
    : -1 },
#line 1240 "../../gcc/config/mips/mips.md"
  { "ISA_HAS_MACC && !ISA_HAS_MUL3",
    __builtin_constant_p 
#line 1240 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MUL3)
    ? (int) 
#line 1240 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MUL3)
    : -1 },
  { "(ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 6137 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 6137 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 1710 "../../gcc/config/mips/mips.md"
  { "!TARGET_64BIT && ISA_HAS_MULS",
    __builtin_constant_p 
#line 1710 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MULS)
    ? (int) 
#line 1710 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MULS)
    : -1 },
  { "(TARGET_64BIT && TARGET_MIPS16) && ( reload_completed)",
    __builtin_constant_p (
#line 992 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16) && 
#line 994 "../../gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 992 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16) && 
#line 994 "../../gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 5649 "../../gcc/config/mips/mips.md"
  { "reload_completed && !TARGET_DEBUG_D_MODE",
    __builtin_constant_p 
#line 5649 "../../gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE)
    ? (int) 
#line 5649 "../../gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE)
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS) && ( epilogue_completed)",
    __builtin_constant_p (
#line 3250 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS) && 
#line 3252 "../../gcc/config/mips/mips.md"
( epilogue_completed))
    ? (int) (
#line 3250 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS) && 
#line 3252 "../../gcc/config/mips/mips.md"
( epilogue_completed))
    : -1 },
#line 5671 "../../gcc/config/mips/mips.md"
  { "TARGET_USE_GOT",
    __builtin_constant_p 
#line 5671 "../../gcc/config/mips/mips.md"
(TARGET_USE_GOT)
    ? (int) 
#line 5671 "../../gcc/config/mips/mips.md"
(TARGET_USE_GOT)
    : -1 },
  { "(ISA_HAS_FP4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 1874 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 1874 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 2830 "../../gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W",
    __builtin_constant_p 
#line 2830 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W)
    ? (int) 
#line 2830 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W)
    : -1 },
#line 3227 "../../gcc/config/mips/mips.md"
  { "!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0])",
    __builtin_constant_p 
#line 3227 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0]))
    ? (int) 
#line 3227 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0]))
    : -1 },
#line 5637 "../../gcc/config/mips/mips.md"
  { "! TARGET_64BIT",
    __builtin_constant_p 
#line 5637 "../../gcc/config/mips/mips.md"
(! TARGET_64BIT)
    ? (int) 
#line 5637 "../../gcc/config/mips/mips.md"
(! TARGET_64BIT)
    : -1 },
#line 1336 "../../gcc/config/mips/mips.md"
  { "ISA_HAS_MACC",
    __builtin_constant_p 
#line 1336 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACC)
    ? (int) 
#line 1336 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACC)
    : -1 },
  { "((ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE) && (TARGET_HARD_FLOAT)) && (TARGET_64BIT)",
    __builtin_constant_p ((
#line 6091 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE) && 
#line 498 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) ((
#line 6091 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE) && 
#line 498 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(!TARGET_FIX_VR4120) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2011 "../../gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2011 "../../gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 1572 "../../gcc/config/mips/mips.md"
  { "reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GP_REG_P (true_regnum (operands[0]))\n\
   && true_regnum (operands[1]) == LO_REGNUM",
    __builtin_constant_p 
#line 1572 "../../gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[1]) == LO_REGNUM)
    ? (int) 
#line 1572 "../../gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[1]) == LO_REGNUM)
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == DImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3356 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3358 "../../gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3356 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3358 "../../gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 4176 "../../gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT\n\
   && TARGET_PAIRED_SINGLE_FLOAT\n\
   && !TARGET_64BIT\n\
   && (register_operand (operands[0], V2SFmode)\n\
       || reg_or_0_operand (operands[1], V2SFmode))",
    __builtin_constant_p 
#line 4176 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && TARGET_PAIRED_SINGLE_FLOAT
   && !TARGET_64BIT
   && (register_operand (operands[0], V2SFmode)
       || reg_or_0_operand (operands[1], V2SFmode)))
    ? (int) 
#line 4176 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && TARGET_PAIRED_SINGLE_FLOAT
   && !TARGET_64BIT
   && (register_operand (operands[0], V2SFmode)
       || reg_or_0_operand (operands[1], V2SFmode)))
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS) && (Pmode == DImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3387 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3389 "../../gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3387 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3389 "../../gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "(ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 6137 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 6137 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 3304 "../../gcc/config/mips/mips.md"
  { "TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected",
    __builtin_constant_p 
#line 3304 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected)
    ? (int) 
#line 3304 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected)
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3356 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 3356 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 1298 "../../gcc/config/mips/mips.md"
  { "reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GP_REG_P (true_regnum (operands[0]))\n\
   && GP_REG_P (true_regnum (operands[3]))",
    __builtin_constant_p 
#line 1298 "../../gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[3])))
    ? (int) 
#line 1298 "../../gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[3])))
    : -1 },
  { "(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2676 "../../gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2676 "../../gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p ((
#line 6106 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 498 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) ((
#line 6106 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 498 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(GENERATE_LL_SC) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4679 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 4679 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(!HONOR_NANS (SFmode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2190 "../../gcc/config/mips/mips.md"
(!HONOR_NANS (SFmode)) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2190 "../../gcc/config/mips/mips.md"
(!HONOR_NANS (SFmode)) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(ISA_HAS_SEB_SEH) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2696 "../../gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2696 "../../gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 1635 "../../gcc/config/mips/mips.md"
  { "!TARGET_64BIT && TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1635 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000)
    ? (int) 
#line 1635 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000)
    : -1 },
  { "(TARGET_SB1) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2041 "../../gcc/config/mips/mips.md"
(TARGET_SB1) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2041 "../../gcc/config/mips/mips.md"
(TARGET_SB1) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "(ISA_HAS_MACCHI) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4218 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACCHI) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 4218 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACCHI) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 1553 "../../gcc/config/mips/mips.md"
  { "reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GP_REG_P (true_regnum (operands[0]))\n\
   && GP_REG_P (true_regnum (operands[1]))",
    __builtin_constant_p 
#line 1553 "../../gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[1])))
    ? (int) 
#line 1553 "../../gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[1])))
    : -1 },
#line 171 "../../gcc/config/mips/mips-dspr2.md"
  { "ISA_HAS_DSPR2 && !TARGET_64BIT",
    __builtin_constant_p 
#line 171 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT)
    ? (int) 
#line 171 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT)
    : -1 },
#line 2781 "../../gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W",
    __builtin_constant_p 
#line 2781 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W)
    ? (int) 
#line 2781 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W)
    : -1 },
#line 1841 "../../gcc/config/mips/mips.md"
  { "(TARGET_MAD || ISA_HAS_MACC || GENERATE_MADD_MSUB || ISA_HAS_DSPR2 || TARGET_ALLEGREX)\n\
   && !TARGET_64BIT",
    __builtin_constant_p 
#line 1841 "../../gcc/config/mips/mips.md"
((TARGET_MAD || ISA_HAS_MACC || GENERATE_MADD_MSUB || ISA_HAS_DSPR2 || TARGET_ALLEGREX)
   && !TARGET_64BIT)
    ? (int) 
#line 1841 "../../gcc/config/mips/mips.md"
((TARGET_MAD || ISA_HAS_MACC || GENERATE_MADD_MSUB || ISA_HAS_DSPR2 || TARGET_ALLEGREX)
   && !TARGET_64BIT)
    : -1 },
#line 2011 "../../gcc/config/mips/mips.md"
  { "!TARGET_FIX_VR4120",
    __builtin_constant_p 
#line 2011 "../../gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120)
    ? (int) 
#line 2011 "../../gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120)
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 28 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 28 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "((HAVE_AS_TLS && !TARGET_MIPS16) && (Pmode == DImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 6229 "../../gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 6231 "../../gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 6229 "../../gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 6231 "../../gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 3633 "../../gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 3633 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 3633 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    : -1 },
#line 855 "../../gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) > 0x7f\n\
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)\n\
       || (INTVAL (operands[1]) < - 0x80\n\
	   && INTVAL (operands[1]) >= - 0x80 - 0x80))",
    __builtin_constant_p 
#line 855 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0x7f
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)
       || (INTVAL (operands[1]) < - 0x80
	   && INTVAL (operands[1]) >= - 0x80 - 0x80)))
    ? (int) 
#line 855 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0x7f
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)
       || (INTVAL (operands[1]) < - 0x80
	   && INTVAL (operands[1]) >= - 0x80 - 0x80)))
    : -1 },
  { "(mips_current_loadgp_style () == LOADGP_RTP) && (Pmode == DImode)",
    __builtin_constant_p (
#line 4383 "../../gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 4383 "../../gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(!TARGET_FIX_R4000) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1206 "../../gcc/config/mips/mips.md"
(!TARGET_FIX_R4000) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 1206 "../../gcc/config/mips/mips.md"
(!TARGET_FIX_R4000) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_MIPS16) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5357 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 5357 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p ((
#line 3792 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) ((
#line 3792 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "(TARGET_HARD_FLOAT) && (!TARGET_64BIT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 4295 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 524 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 4295 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 524 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 2743 "../../gcc/config/mips/mips.md"
  { "ISA_HAS_SEB_SEH",
    __builtin_constant_p 
#line 2743 "../../gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH)
    ? (int) 
#line 2743 "../../gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH)
    : -1 },
  { "(!TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 1056 "../../gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 1056 "../../gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 5146 "../../gcc/config/mips/mips.md"
  { "!TARGET_MIPS16",
    __builtin_constant_p 
#line 5146 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16)
    ? (int) 
#line 5146 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16)
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p ((
#line 3792 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) ((
#line 3792 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 5602 "../../gcc/config/mips/mips.md"
  { "mips_can_use_return_insn ()",
    __builtin_constant_p 
#line 5602 "../../gcc/config/mips/mips.md"
(mips_can_use_return_insn ())
    ? (int) 
#line 5602 "../../gcc/config/mips/mips.md"
(mips_can_use_return_insn ())
    : -1 },
  { "(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3227 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3227 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 135 "../../gcc/config/mips/mips-fixed.md"
  { "ISA_HAS_DSP && !TARGET_64BIT",
    __builtin_constant_p 
#line 135 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP && !TARGET_64BIT)
    ? (int) 
#line 135 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP && !TARGET_64BIT)
    : -1 },
  { "(TARGET_CALL_CLOBBERED_GP) && ( reload_completed)",
    __builtin_constant_p (
#line 5683 "../../gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP) && 
#line 5685 "../../gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 5683 "../../gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP) && 
#line 5685 "../../gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 4458 "../../gcc/config/mips/mips.md"
  { "ISA_HAS_SYNCI",
    __builtin_constant_p 
#line 4458 "../../gcc/config/mips/mips.md"
(ISA_HAS_SYNCI)
    ? (int) 
#line 4458 "../../gcc/config/mips/mips.md"
(ISA_HAS_SYNCI)
    : -1 },
  { "(!TARGET_MIPS16) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3422 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 3422 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 1947 "../../gcc/config/mips/mips.md"
(TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 1947 "../../gcc/config/mips/mips.md"
(TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 6043 "../../gcc/config/mips/mips.md"
  { "ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS",
    __builtin_constant_p 
#line 6043 "../../gcc/config/mips/mips.md"
(ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS)
    ? (int) 
#line 6043 "../../gcc/config/mips/mips.md"
(ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS)
    : -1 },
  { "((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p ((
#line 6106 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 498 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) ((
#line 6106 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 498 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 4089 "../../gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 4089 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 4089 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 3041 "../../gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT",
    __builtin_constant_p 
#line 3041 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
    ? (int) 
#line 3041 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
    : -1 },
#line 4067 "../../gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT\n\
   && (register_operand (operands[0], DFmode)\n\
       || reg_or_0_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 4067 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    ? (int) 
#line 4067 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    : -1 },
  { "(ISA_HAS_NMADD_NMSUB (DFmode)\n\
   && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (DFmode)\n\
   && !HONOR_NANS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 1913 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (DFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 1913 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (DFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && (!TARGET_64BIT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 4320 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 524 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 4320 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 524 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 526 "../../gcc/config/mips/mips.md"
  { "TARGET_64BIT && TARGET_FLOAT64",
    __builtin_constant_p 
#line 526 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64)
    ? (int) 
#line 526 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64)
    : -1 },
#line 3206 "../../gcc/config/mips/mips.md"
  { "!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1])",
    __builtin_constant_p 
#line 3206 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1]))
    ? (int) 
#line 3206 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1]))
    : -1 },
#line 5807 "../../gcc/config/mips/mips.md"
  { "TARGET_SIBCALLS",
    __builtin_constant_p 
#line 5807 "../../gcc/config/mips/mips.md"
(TARGET_SIBCALLS)
    ? (int) 
#line 5807 "../../gcc/config/mips/mips.md"
(TARGET_SIBCALLS)
    : -1 },
  { "(mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),\n\
		       INTVAL (operands[3]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3134 "../../gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),
		       INTVAL (operands[3]))) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3134 "../../gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),
		       INTVAL (operands[3]))) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 3662 "../../gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x80)\n\
       || (INTVAL (operands[1]) >= 32 * 4\n\
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)\n\
       || (INTVAL (operands[1]) >= 0\n\
	   && INTVAL (operands[1]) < 32 * 4\n\
	   && (INTVAL (operands[1]) & 3) != 0))",
    __builtin_constant_p 
#line 3662 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 4
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 4
	   && (INTVAL (operands[1]) & 3) != 0)))
    ? (int) 
#line 3662 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 4
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 4
	   && (INTVAL (operands[1]) & 3) != 0)))
    : -1 },
#line 1514 "../../gcc/config/mips/mips.md"
  { "ISA_HAS_MUL3 && peep2_reg_dead_p (3, operands[1])",
    __builtin_constant_p 
#line 1514 "../../gcc/config/mips/mips.md"
(ISA_HAS_MUL3 && peep2_reg_dead_p (3, operands[1]))
    ? (int) 
#line 1514 "../../gcc/config/mips/mips.md"
(ISA_HAS_MUL3 && peep2_reg_dead_p (3, operands[1]))
    : -1 },
  { "(TARGET_HARD_FLOAT) && (TARGET_64BIT && TARGET_FLOAT64)",
    __builtin_constant_p (
#line 4295 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 526 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64))
    ? (int) (
#line 4295 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 526 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64))
    : -1 },
  { "(!TARGET_MIPS16) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3422 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 3422 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 945 "../../gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && REG_P (operands[1])\n\
   && M16_REG_P (REGNO (operands[1]))\n\
   && REGNO (operands[0]) != REGNO (operands[1])\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && ((INTVAL (operands[2]) > 0x7\n\
	&& INTVAL (operands[2]) <= 0x7 + 0xf)\n\
       || (INTVAL (operands[2]) < - 0x8\n\
	   && INTVAL (operands[2]) >= - 0x8 - 0x10))",
    __builtin_constant_p 
#line 945 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && REG_P (operands[1])
   && M16_REG_P (REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])
   && GET_CODE (operands[2]) == CONST_INT
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0xf)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x10)))
    ? (int) 
#line 945 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && REG_P (operands[1])
   && M16_REG_P (REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])
   && GET_CODE (operands[2]) == CONST_INT
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0xf)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x10)))
    : -1 },
#line 4218 "../../gcc/config/mips/mips.md"
  { "ISA_HAS_MACCHI",
    __builtin_constant_p 
#line 4218 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACCHI)
    ? (int) 
#line 4218 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACCHI)
    : -1 },
  { "(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3455 "../../gcc/config/mips/mips.md"
(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 3455 "../../gcc/config/mips/mips.md"
(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 3806 "../../gcc/config/mips/mips.md"
  { "ISA_HAS_LWXS",
    __builtin_constant_p 
#line 3806 "../../gcc/config/mips/mips.md"
(ISA_HAS_LWXS)
    ? (int) 
#line 3806 "../../gcc/config/mips/mips.md"
(ISA_HAS_LWXS)
    : -1 },
  { "(mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),\n\
		       INTVAL (operands[2]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3172 "../../gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),
		       INTVAL (operands[2]))) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3172 "../../gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),
		       INTVAL (operands[2]))) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 3622 "../../gcc/config/mips/mips.md"
  { "!TARGET_MIPS16\n\
   && (register_operand (operands[0], SImode)\n\
       || reg_or_0_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 3622 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || reg_or_0_operand (operands[1], SImode)))
    ? (int) 
#line 3622 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || reg_or_0_operand (operands[1], SImode)))
    : -1 },
#line 4699 "../../gcc/config/mips/mips.md"
  { "!TARGET_MIPS16 && !TARGET_MEMCPY",
    __builtin_constant_p 
#line 4699 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !TARGET_MEMCPY)
    ? (int) 
#line 4699 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !TARGET_MEMCPY)
    : -1 },
#line 4473 "../../gcc/config/mips/mips.md"
  { "GENERATE_SYNC",
    __builtin_constant_p 
#line 4473 "../../gcc/config/mips/mips.md"
(GENERATE_SYNC)
    ? (int) 
#line 4473 "../../gcc/config/mips/mips.md"
(GENERATE_SYNC)
    : -1 },
#line 1815 "../../gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_FIX_R4000\n\
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)",
    __builtin_constant_p 
#line 1815 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    ? (int) 
#line 1815 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    : -1 },
#line 3831 "../../gcc/config/mips/mips.md"
  { "!TARGET_MIPS16\n\
   && (register_operand (operands[0], HImode)\n\
       || reg_or_0_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 3831 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || reg_or_0_operand (operands[1], HImode)))
    ? (int) 
#line 3831 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || reg_or_0_operand (operands[1], HImode)))
    : -1 },
  { "(!HONOR_NANS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 2190 "../../gcc/config/mips/mips.md"
(!HONOR_NANS (DFmode)) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 2190 "../../gcc/config/mips/mips.md"
(!HONOR_NANS (DFmode)) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p ((
#line 3792 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) ((
#line 3792 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 5982 "../../gcc/config/mips/mips.md"
  { "reload_completed && TARGET_SPLIT_CALLS && (operands[4] = insn)",
    __builtin_constant_p 
#line 5982 "../../gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[4] = insn))
    ? (int) 
#line 5982 "../../gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[4] = insn))
    : -1 },
  { "(!TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 1056 "../../gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 1056 "../../gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(TARGET_64BIT && !TARGET_FIX_R4000) && ( reload_completed)",
    __builtin_constant_p (
#line 1648 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000) && 
#line 1650 "../../gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 1648 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000) && 
#line 1650 "../../gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 612 "../../gcc/config/mips/mips-ps-3d.md"
  { "TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT",
    __builtin_constant_p 
#line 612 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)
    ? (int) 
#line 612 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)
    : -1 },
#line 6003 "../../gcc/config/mips/mips.md"
  { "TARGET_SPLIT_CALLS",
    __builtin_constant_p 
#line 6003 "../../gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
    ? (int) 
#line 6003 "../../gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
    : -1 },
#line 1475 "../../gcc/config/mips/mips.md"
  { "ISA_HAS_MUL3\n\
   && true_regnum (operands[1]) == LO_REGNUM\n\
   && peep2_reg_dead_p (2, operands[1])\n\
   && GP_REG_P (true_regnum (operands[3]))",
    __builtin_constant_p 
#line 1475 "../../gcc/config/mips/mips.md"
(ISA_HAS_MUL3
   && true_regnum (operands[1]) == LO_REGNUM
   && peep2_reg_dead_p (2, operands[1])
   && GP_REG_P (true_regnum (operands[3])))
    ? (int) 
#line 1475 "../../gcc/config/mips/mips.md"
(ISA_HAS_MUL3
   && true_regnum (operands[1]) == LO_REGNUM
   && peep2_reg_dead_p (2, operands[1])
   && GP_REG_P (true_regnum (operands[3])))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3356 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 3356 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 3566 "../../gcc/config/mips/mips.md"
  { "TARGET_64BIT && TARGET_MIPS16 && reload_completed\n\
   && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x10)\n\
       || (INTVAL (operands[1]) >= 32 * 8\n\
	   && INTVAL (operands[1]) <= 31 * 8 + 0x8)\n\
       || (INTVAL (operands[1]) >= 0\n\
	   && INTVAL (operands[1]) < 32 * 8\n\
	   && (INTVAL (operands[1]) & 7) != 0))",
    __builtin_constant_p 
#line 3566 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16 && reload_completed
   && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x10)
       || (INTVAL (operands[1]) >= 32 * 8
	   && INTVAL (operands[1]) <= 31 * 8 + 0x8)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 8
	   && (INTVAL (operands[1]) & 7) != 0)))
    ? (int) 
#line 3566 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16 && reload_completed
   && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x10)
       || (INTVAL (operands[1]) >= 32 * 8
	   && INTVAL (operands[1]) <= 31 * 8 + 0x8)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 8
	   && (INTVAL (operands[1]) & 7) != 0)))
    : -1 },
#line 3503 "../../gcc/config/mips/mips.md"
  { "!TARGET_64BIT && TARGET_FLOAT64 && !TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || reg_or_0_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 3503 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FLOAT64 && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    ? (int) 
#line 3503 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FLOAT64 && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    : -1 },
  { "(ISA_HAS_NMADD_NMSUB (SFmode)\n\
   && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (SFmode)\n\
   && !HONOR_NANS (SFmode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 1913 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 1913 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 3536 "../../gcc/config/mips/mips.md"
  { "TARGET_64BIT && TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 3536 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 3536 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
#line 1607 "../../gcc/config/mips/mips.md"
  { "!TARGET_64BIT || !TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1607 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT || !TARGET_FIX_R4000)
    ? (int) 
#line 1607 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT || !TARGET_FIX_R4000)
    : -1 },
#line 4021 "../../gcc/config/mips/mips.md"
  { "TARGET_SOFT_FLOAT && !TARGET_MIPS16\n\
   && (register_operand (operands[0], SFmode)\n\
       || reg_or_0_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 4021 "../../gcc/config/mips/mips.md"
(TARGET_SOFT_FLOAT && !TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    ? (int) 
#line 4021 "../../gcc/config/mips/mips.md"
(TARGET_SOFT_FLOAT && !TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    : -1 },
#line 518 "../../gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)
    ? (int) 
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)
    : -1 },
  { "(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2077 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2077 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 4126 "../../gcc/config/mips/mips.md"
  { "reload_completed && !TARGET_64BIT\n\
   && mips_split_64bit_move_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 4126 "../../gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1]))
    ? (int) 
#line 4126 "../../gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1]))
    : -1 },
#line 1407 "../../gcc/config/mips/mips.md"
  { "ISA_HAS_MACC && reload_completed",
    __builtin_constant_p 
#line 1407 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACC && reload_completed)
    ? (int) 
#line 1407 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACC && reload_completed)
    : -1 },
#line 5939 "../../gcc/config/mips/mips.md"
  { "reload_completed && TARGET_SPLIT_CALLS && (operands[3] = insn)",
    __builtin_constant_p 
#line 5939 "../../gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[3] = insn))
    ? (int) 
#line 5939 "../../gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[3] = insn))
    : -1 },
#line 884 "../../gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && REG_P (operands[1])\n\
   && M16_REG_P (REGNO (operands[1]))\n\
   && REGNO (operands[0]) != REGNO (operands[1])\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && ((INTVAL (operands[2]) > 0x7\n\
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)\n\
       || (INTVAL (operands[2]) < - 0x8\n\
	   && INTVAL (operands[2]) >= - 0x8 - 0x80))",
    __builtin_constant_p 
#line 884 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && REG_P (operands[1])
   && M16_REG_P (REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])
   && GET_CODE (operands[2]) == CONST_INT
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x80)))
    ? (int) 
#line 884 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && REG_P (operands[1])
   && M16_REG_P (REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])
   && GET_CODE (operands[2]) == CONST_INT
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x80)))
    : -1 },
  { "(GENERATE_MIPS16E) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2665 "../../gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2665 "../../gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(ISA_HAS_FP4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 1874 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 1874 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 3134 "../../gcc/config/mips/mips.md"
  { "mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),\n\
		       INTVAL (operands[3]))",
    __builtin_constant_p 
#line 3134 "../../gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),
		       INTVAL (operands[3])))
    ? (int) 
#line 3134 "../../gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),
		       INTVAL (operands[3])))
    : -1 },
#line 519 "../../gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT",
    __builtin_constant_p 
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
    ? (int) 
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
    : -1 },
#line 3760 "../../gcc/config/mips/mips.md"
  { "ISA_HAS_8CC && TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 3760 "../../gcc/config/mips/mips.md"
(ISA_HAS_8CC && TARGET_HARD_FLOAT)
    ? (int) 
#line 3760 "../../gcc/config/mips/mips.md"
(ISA_HAS_8CC && TARGET_HARD_FLOAT)
    : -1 },
#line 4679 "../../gcc/config/mips/mips.md"
  { "GENERATE_LL_SC",
    __builtin_constant_p 
#line 4679 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC)
    ? (int) 
#line 4679 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC)
    : -1 },
#line 6121 "../../gcc/config/mips/mips.md"
  { "ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE",
    __builtin_constant_p 
#line 6121 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE)
    ? (int) 
#line 6121 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE)
    : -1 },
  { "(ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6121 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 6121 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && (!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 4320 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 525 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 4320 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 525 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 916 "../../gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) > 0xf\n\
	&& INTVAL (operands[1]) <= 0xf + 0xf)\n\
       || (INTVAL (operands[1]) < - 0x10\n\
	   && INTVAL (operands[1]) >= - 0x10 - 0x10))",
    __builtin_constant_p 
#line 916 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0xf
	&& INTVAL (operands[1]) <= 0xf + 0xf)
       || (INTVAL (operands[1]) < - 0x10
	   && INTVAL (operands[1]) >= - 0x10 - 0x10)))
    ? (int) 
#line 916 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0xf
	&& INTVAL (operands[1]) <= 0xf + 0xf)
       || (INTVAL (operands[1]) < - 0x10
	   && INTVAL (operands[1]) >= - 0x10 - 0x10)))
    : -1 },
  { "(TARGET_64BIT) && ( reload_completed && REG_P (operands[1]))",
    __builtin_constant_p (
#line 2531 "../../gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2539 "../../gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    ? (int) (
#line 2531 "../../gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2539 "../../gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    : -1 },
#line 1206 "../../gcc/config/mips/mips.md"
  { "!TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1206 "../../gcc/config/mips/mips.md"
(!TARGET_FIX_R4000)
    ? (int) 
#line 1206 "../../gcc/config/mips/mips.md"
(!TARGET_FIX_R4000)
    : -1 },
  { "(TARGET_USE_GOT) && (Pmode == DImode)",
    __builtin_constant_p (
#line 5749 "../../gcc/config/mips/mips.md"
(TARGET_USE_GOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 5749 "../../gcc/config/mips/mips.md"
(TARGET_USE_GOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p ((
#line 3792 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) ((
#line 3792 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p ((
#line 3792 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) ((
#line 3792 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(TARGET_MIPS16) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3431 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 3431 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 2792 "../../gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W",
    __builtin_constant_p 
#line 2792 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W)
    ? (int) 
#line 2792 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W)
    : -1 },
#line 4114 "../../gcc/config/mips/mips.md"
  { " reload_completed",
    __builtin_constant_p 
#line 4114 "../../gcc/config/mips/mips.md"
( reload_completed)
    ? (int) 
#line 4114 "../../gcc/config/mips/mips.md"
( reload_completed)
    : -1 },
#line 3492 "../../gcc/config/mips/mips.md"
  { "!TARGET_64BIT && !TARGET_FLOAT64 && !TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || reg_or_0_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 3492 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_FLOAT64 && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    ? (int) 
#line 3492 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_FLOAT64 && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    : -1 },
#line 3525 "../../gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || reg_or_0_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 3525 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    ? (int) 
#line 3525 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    : -1 },
#line 4055 "../../gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_64BIT\n\
   && (register_operand (operands[0], DFmode)\n\
       || reg_or_0_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 4055 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    ? (int) 
#line 4055 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    : -1 },
  { "(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && (Pmode == SImode)",
    __builtin_constant_p (
#line 4355 "../../gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 4355 "../../gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(TARGET_64BIT && !TARGET_MIPS16) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2484 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2484 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3206 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3206 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "((ISA_HAS_CONDMOVE) && (TARGET_64BIT)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p ((
#line 6106 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 498 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) ((
#line 6106 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 498 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == DImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3370 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3372 "../../gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3370 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3372 "../../gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "(!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 1947 "../../gcc/config/mips/mips.md"
(!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 1947 "../../gcc/config/mips/mips.md"
(!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 1625 "../../gcc/config/mips/mips.md"
  { "!TARGET_64BIT && !TARGET_FIX_R4000 && !ISA_HAS_DSPR2",
    __builtin_constant_p 
#line 1625 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_FIX_R4000 && !ISA_HAS_DSPR2)
    ? (int) 
#line 1625 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_FIX_R4000 && !ISA_HAS_DSPR2)
    : -1 },
  { "(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (Pmode == SImode)",
    __builtin_constant_p (
#line 6055 "../../gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 6055 "../../gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 3276 "../../gcc/config/mips/mips.md"
  { "TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS",
    __builtin_constant_p 
#line 3276 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS)
    ? (int) 
#line 3276 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS)
    : -1 },
#line 4010 "../../gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT\n\
   && (register_operand (operands[0], SFmode)\n\
       || reg_or_0_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 4010 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    ? (int) 
#line 4010 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    : -1 },
#line 1830 "../../gcc/config/mips/mips.md"
  { "TARGET_MAD",
    __builtin_constant_p 
#line 1830 "../../gcc/config/mips/mips.md"
(TARGET_MAD)
    ? (int) 
#line 1830 "../../gcc/config/mips/mips.md"
(TARGET_MAD)
    : -1 },
  { "(ISA_HAS_NMADD_NMSUB (SFmode)\n\
   && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (SFmode)\n\
   && !HONOR_NANS (SFmode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 1927 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 1927 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(reload_completed && !TARGET_64BIT\n\
   && mips_split_64bit_move_p (operands[0], operands[1])) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 4126 "../../gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])) && 
#line 502 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 4126 "../../gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])) && 
#line 502 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == SImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3356 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3358 "../../gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3356 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3358 "../../gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "((ISA_HAS_CONDMOVE) && (TARGET_64BIT)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p ((
#line 6106 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 498 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) ((
#line 6106 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 498 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3370 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 3370 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 3847 "../../gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 3847 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    ? (int) 
#line 3847 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && ( reload_completed)",
    __builtin_constant_p (
#line 360 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 362 "../../gcc/config/mips/mips-ps-3d.md"
( reload_completed))
    ? (int) (
#line 360 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 362 "../../gcc/config/mips/mips-ps-3d.md"
( reload_completed))
    : -1 },
  { "(TARGET_FIX_R4000) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1217 "../../gcc/config/mips/mips.md"
(TARGET_FIX_R4000) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 1217 "../../gcc/config/mips/mips.md"
(TARGET_FIX_R4000) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(ISA_HAS_NMADD_NMSUB (V2SFmode)\n\
   && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (V2SFmode)\n\
   && !HONOR_NANS (V2SFmode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 1927 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (V2SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 1927 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (V2SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 1379 "../../gcc/config/mips/mips.md"
  { "ISA_HAS_MACC && !ISA_HAS_MSAC",
    __builtin_constant_p 
#line 1379 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC)
    ? (int) 
#line 1379 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC)
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == SImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3370 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3372 "../../gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3370 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3372 "../../gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 6204 "../../gcc/config/mips/mips.md"
  { "operands[1] == stack_pointer_rtx\n\
   && mips16e_save_restore_pattern_p (operands[0], INTVAL (operands[2]), NULL)",
    __builtin_constant_p 
#line 6204 "../../gcc/config/mips/mips.md"
(operands[1] == stack_pointer_rtx
   && mips16e_save_restore_pattern_p (operands[0], INTVAL (operands[2]), NULL))
    ? (int) 
#line 6204 "../../gcc/config/mips/mips.md"
(operands[1] == stack_pointer_rtx
   && mips16e_save_restore_pattern_p (operands[0], INTVAL (operands[2]), NULL))
    : -1 },
  { "(TARGET_USE_GOT) && (Pmode == SImode)",
    __builtin_constant_p (
#line 5749 "../../gcc/config/mips/mips.md"
(TARGET_USE_GOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 5749 "../../gcc/config/mips/mips.md"
(TARGET_USE_GOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 494 "../../gcc/config/mips/mips.md"
  { "Pmode == SImode",
    __builtin_constant_p 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)
    ? (int) 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)
    : -1 },
  { "(mips_current_loadgp_style () == LOADGP_NEWABI) && (Pmode == SImode)",
    __builtin_constant_p (
#line 4338 "../../gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 4338 "../../gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 3172 "../../gcc/config/mips/mips.md"
  { "mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),\n\
		       INTVAL (operands[2]))",
    __builtin_constant_p 
#line 3172 "../../gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),
		       INTVAL (operands[2])))
    ? (int) 
#line 3172 "../../gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),
		       INTVAL (operands[2])))
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS) && (Pmode == SImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3387 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3389 "../../gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3387 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3389 "../../gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "((HAVE_AS_TLS && !TARGET_MIPS16) && (Pmode == SImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 6229 "../../gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 6231 "../../gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 6229 "../../gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 6231 "../../gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 494 "../../gcc/config/mips/mips.md"
  { "Pmode == DImode",
    __builtin_constant_p 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)
    ? (int) 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)
    : -1 },
#line 24 "../../gcc/config/mips/mips-fixed.md"
  { "ISA_HAS_DSPR2",
    __builtin_constant_p 
#line 24 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2)
    ? (int) 
#line 24 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2)
    : -1 },
#line 4860 "../../gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && INTVAL (operands[2]) > 8\n\
   && INTVAL (operands[2]) <= 16",
    __builtin_constant_p 
#line 4860 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16)
    ? (int) 
#line 4860 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16)
    : -1 },
#line 525 "../../gcc/config/mips/mips.md"
  { "!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT",
    __builtin_constant_p 
#line 525 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)
    ? (int) 
#line 525 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)
    : -1 },
#line 2722 "../../gcc/config/mips/mips.md"
  { "!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E",
    __builtin_constant_p 
#line 2722 "../../gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E)
    ? (int) 
#line 2722 "../../gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E)
    : -1 },
#line 3951 "../../gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode))",
    __builtin_constant_p 
#line 3951 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    ? (int) 
#line 3951 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    : -1 },
  { "(TARGET_SB1 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2077 "../../gcc/config/mips/mips.md"
(TARGET_SB1 && flag_unsafe_math_optimizations) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2077 "../../gcc/config/mips/mips.md"
(TARGET_SB1 && flag_unsafe_math_optimizations) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "((ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE) && (TARGET_64BIT)) && (TARGET_64BIT)",
    __builtin_constant_p ((
#line 6091 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE) && 
#line 498 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) ((
#line 6091 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE) && 
#line 498 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 2212 "../../gcc/config/mips/mips.md"
  { "ISA_HAS_ROR",
    __builtin_constant_p 
#line 2212 "../../gcc/config/mips/mips.md"
(ISA_HAS_ROR)
    ? (int) 
#line 2212 "../../gcc/config/mips/mips.md"
(ISA_HAS_ROR)
    : -1 },
  { "(ISA_HAS_MACC && !ISA_HAS_MSAC) && ( reload_completed)",
    __builtin_constant_p (
#line 1379 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC) && 
#line 1381 "../../gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 1379 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC) && 
#line 1381 "../../gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 2819 "../../gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W",
    __builtin_constant_p 
#line 2819 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W)
    ? (int) 
#line 2819 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W)
    : -1 },
  { "(TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 1069 "../../gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 1069 "../../gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(mips_current_loadgp_style () == LOADGP_NEWABI) && (Pmode == DImode)",
    __builtin_constant_p (
#line 4338 "../../gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 4338 "../../gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 1358 "../../gcc/config/mips/mips.md"
  { "ISA_HAS_MSAC",
    __builtin_constant_p 
#line 1358 "../../gcc/config/mips/mips.md"
(ISA_HAS_MSAC)
    ? (int) 
#line 1358 "../../gcc/config/mips/mips.md"
(ISA_HAS_MSAC)
    : -1 },
#line 3328 "../../gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed",
    __builtin_constant_p 
#line 3328 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed)
    ? (int) 
#line 3328 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed)
    : -1 },
#line 4139 "../../gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && INTVAL (operands[1]) < 0",
    __builtin_constant_p 
#line 4139 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && INTVAL (operands[1]) < 0)
    ? (int) 
#line 4139 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && INTVAL (operands[1]) < 0)
    : -1 },
#line 1274 "../../gcc/config/mips/mips.md"
  { "(TARGET_MIPS3900\n\
   || GENERATE_MADD_MSUB)\n\
   && !TARGET_MIPS16",
    __builtin_constant_p 
#line 1274 "../../gcc/config/mips/mips.md"
((TARGET_MIPS3900
   || GENERATE_MADD_MSUB)
   && !TARGET_MIPS16)
    ? (int) 
#line 1274 "../../gcc/config/mips/mips.md"
((TARGET_MIPS3900
   || GENERATE_MADD_MSUB)
   && !TARGET_MIPS16)
    : -1 },
#line 1422 "../../gcc/config/mips/mips.md"
  { "ISA_HAS_MSAC && reload_completed",
    __builtin_constant_p 
#line 1422 "../../gcc/config/mips/mips.md"
(ISA_HAS_MSAC && reload_completed)
    ? (int) 
#line 1422 "../../gcc/config/mips/mips.md"
(ISA_HAS_MSAC && reload_completed)
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 577 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 577 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(ISA_HAS_DSP) && (ISA_HAS_DSP)",
    __builtin_constant_p (
#line 785 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 16 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    ? (int) (
#line 785 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 16 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    : -1 },
  { "(TARGET_64BIT) && ( reload_completed && register_operand (operands[1], VOIDmode))",
    __builtin_constant_p (
#line 2644 "../../gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2648 "../../gcc/config/mips/mips.md"
( reload_completed && register_operand (operands[1], VOIDmode)))
    ? (int) (
#line 2644 "../../gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2648 "../../gcc/config/mips/mips.md"
( reload_completed && register_operand (operands[1], VOIDmode)))
    : -1 },
  { "(HAVE_AS_TLS && !TARGET_MIPS16) && (Pmode == DImode)",
    __builtin_constant_p (
#line 6246 "../../gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 6246 "../../gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3387 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 3387 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 1590 "../../gcc/config/mips/mips.md"
  { "ISA_HAS_MULS",
    __builtin_constant_p 
#line 1590 "../../gcc/config/mips/mips.md"
(ISA_HAS_MULS)
    ? (int) 
#line 1590 "../../gcc/config/mips/mips.md"
(ISA_HAS_MULS)
    : -1 },
#line 6166 "../../gcc/config/mips/mips.md"
  { "TARGET_MIPS16",
    __builtin_constant_p 
#line 6166 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16)
    ? (int) 
#line 6166 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16)
    : -1 },
  { "(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3455 "../../gcc/config/mips/mips.md"
(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 3455 "../../gcc/config/mips/mips.md"
(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 490 "../../gcc/config/mips/mips.md"
  { "TARGET_64BIT",
    __builtin_constant_p 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)
    ? (int) 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)
    : -1 },
  { "(ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 6091 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE) && 
#line 498 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 6091 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE) && 
#line 498 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 125 "../../gcc/config/mips/allegrex.md"
  { "TARGET_ALLEGREX",
    __builtin_constant_p 
#line 125 "../../gcc/config/mips/allegrex.md"
(TARGET_ALLEGREX)
    ? (int) 
#line 125 "../../gcc/config/mips/allegrex.md"
(TARGET_ALLEGREX)
    : -1 },

};
#endif /* gcc >= 3.0.1 */

int
main(void)
{
  unsigned int i;
  const char *p;
  puts ("(define_conditions [");
#if GCC_VERSION >= 3001
  for (i = 0; i < ARRAY_SIZE (insn_conditions); i++)
    {
      printf ("  (%d \"", insn_conditions[i].value);
      for (p = insn_conditions[i].expr; *p; p++)
        {
          switch (*p)
	     {
	     case '\\':
	     case '\"': putchar ('\\'); break;
	     default: break;
	     }
          putchar (*p);
        }
      puts ("\")");
    }
#endif /* gcc >= 3.0.1 */
  puts ("])");
  fflush (stdout);
return ferror (stdout) != 0 ? FATAL_EXIT_CODE : SUCCESS_EXIT_CODE;
}
