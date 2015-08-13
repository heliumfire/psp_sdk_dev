/* Generated automatically by the program `genrecog' from the target
   machine description file.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "insn-config.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"
#include "regs.h"
#include "tm-constrs.h"



/* `recog' contains a decision tree that recognizes whether the rtx
   X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.  If the rtx is valid, recog
   returns a nonnegative number which is the insn code number for the
   pattern that matched.  This is the same as the order in the machine
   description of the entry that matched.  This number can be used as an
   index into `insn_data' and other tables.

   The third argument to recog is an optional pointer to an int.  If
   present, recog will accept a pattern if it matches except for missing
   CLOBBER expressions at the end.  In that case, the value pointed to by
   the optional pointer will be set to the number of CLOBBERs that need
   to be added (it should be initialized to zero by the caller).  If it
   is set nonzero, the caller should allocate a PARALLEL of the
   appropriate size, copy the initial entries, and call add_clobbers
   (found in insn-emit.c) to fill in the CLOBBERs.


   The function split_insns returns 0 if the rtl could not
   be split or the split rtl as an INSN list if it can be.

   The function peephole2_insns returns 0 if the rtl could not
   be matched. If there was a match, the new rtl is returned in an INSN list,
   and LAST_INSN will point to the last recognized insn in the old sequence.
*/


extern rtx gen_split_714 (rtx, rtx *);
extern rtx gen_split_715 (rtx, rtx *);
extern rtx gen_split_716 (rtx, rtx *);
extern rtx gen_split_717 (rtx, rtx *);
extern rtx gen_split_718 (rtx, rtx *);
extern rtx gen_peephole2_723 (rtx, rtx *);
extern rtx gen_peephole2_724 (rtx, rtx *);
extern rtx gen_split_725 (rtx, rtx *);
extern rtx gen_split_726 (rtx, rtx *);
extern rtx gen_split_727 (rtx, rtx *);
extern rtx gen_peephole2_728 (rtx, rtx *);
extern rtx gen_peephole2_729 (rtx, rtx *);
extern rtx gen_peephole2_730 (rtx, rtx *);
extern rtx gen_split_731 (rtx, rtx *);
extern rtx gen_split_732 (rtx, rtx *);
extern rtx gen_split_735 (rtx, rtx *);
extern rtx gen_split_736 (rtx, rtx *);
extern rtx gen_split_752 (rtx, rtx *);
extern rtx gen_split_753 (rtx, rtx *);
extern rtx gen_split_754 (rtx, rtx *);
extern rtx gen_split_755 (rtx, rtx *);
extern rtx gen_split_756 (rtx, rtx *);
extern rtx gen_split_757 (rtx, rtx *);
extern rtx gen_split_763 (rtx, rtx *);
extern rtx gen_split_768 (rtx, rtx *);
extern rtx gen_split_769 (rtx, rtx *);
extern rtx gen_split_770 (rtx, rtx *);
extern rtx gen_split_771 (rtx, rtx *);
extern rtx gen_split_773 (rtx, rtx *);
extern rtx gen_split_783 (rtx, rtx *);
extern rtx gen_peephole2_784 (rtx, rtx *);
extern rtx gen_split_785 (rtx, rtx *);
extern rtx gen_split_786 (rtx, rtx *);
extern rtx gen_split_787 (rtx, rtx *);
extern rtx gen_split_788 (rtx, rtx *);
extern rtx gen_split_789 (rtx, rtx *);
extern rtx gen_split_790 (rtx, rtx *);
extern rtx gen_split_791 (rtx, rtx *);
extern rtx gen_split_792 (rtx, rtx *);
extern rtx gen_split_793 (rtx, rtx *);
extern rtx gen_split_794 (rtx, rtx *);
extern rtx gen_split_795 (rtx, rtx *);
extern rtx gen_split_796 (rtx, rtx *);
extern rtx gen_split_797 (rtx, rtx *);
extern rtx gen_split_798 (rtx, rtx *);
extern rtx gen_split_800 (rtx, rtx *);
extern rtx gen_split_802 (rtx, rtx *);
extern rtx gen_split_803 (rtx, rtx *);
extern rtx gen_split_807 (rtx, rtx *);
extern rtx gen_split_809 (rtx, rtx *);
extern rtx gen_split_813 (rtx, rtx *);
extern rtx gen_split_814 (rtx, rtx *);
extern rtx gen_split_815 (rtx, rtx *);
extern rtx gen_split_816 (rtx, rtx *);
extern rtx gen_split_817 (rtx, rtx *);
extern rtx gen_split_827 (rtx, rtx *);
extern rtx gen_split_828 (rtx, rtx *);
extern rtx gen_split_829 (rtx, rtx *);
extern rtx gen_split_830 (rtx, rtx *);
extern rtx gen_split_831 (rtx, rtx *);
extern rtx gen_split_832 (rtx, rtx *);
extern rtx gen_split_841 (rtx, rtx *);
extern rtx gen_split_842 (rtx, rtx *);
extern rtx gen_split_843 (rtx, rtx *);
extern rtx gen_split_844 (rtx, rtx *);
extern rtx gen_split_845 (rtx, rtx *);
extern rtx gen_split_846 (rtx, rtx *);
extern rtx gen_split_847 (rtx, rtx *);
extern rtx gen_split_889 (rtx, rtx *);
extern rtx gen_split_892 (rtx, rtx *);
extern rtx gen_split_896 (rtx, rtx *);
extern rtx gen_split_898 (rtx, rtx *);
extern rtx gen_split_899 (rtx, rtx *);
extern rtx gen_split_905 (rtx, rtx *);
extern rtx gen_split_913 (rtx, rtx *);
extern rtx gen_split_914 (rtx, rtx *);



static int
recog_1 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L16;
    case MINUS:
      goto L72;
    case MULT:
      goto L108;
    case NEG:
      goto L875;
    case DIV:
      goto L980;
    case SQRT:
      goto L1060;
    case ABS:
      goto L1117;
    case FLOAT_TRUNCATE:
      goto L1263;
    case FLOAT:
      goto L1597;
    case MEM:
      goto L1815;
    case IF_THEN_ELSE:
      goto L3404;
    case VEC_SELECT:
      goto L3545;
    case UNSPEC:
      goto L6374;
    default:
     break;
   }
  goto ret0;

 L16: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L6379;
  goto ret0;

 L6379: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L828;
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L17;
    }
  goto ret0;

 L828: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L829;
    }
  goto ret0;

 L829: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L830;
    }
  goto ret0;

 L830: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L831;
    }
  goto ret0;

 L831: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1864 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 59;  /* *maddsf */
    }
  goto ret0;

 L17: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L18;
    }
  goto ret0;

 L18: ATTRIBUTE_UNUSED_LABEL
  if (
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 3;  /* addsf3 */
    }
  goto ret0;

 L72: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L6381;
  goto ret0;

 L6381: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L852;
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L73;
    }
  goto ret0;

 L852: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode)
    goto L6383;
  goto ret0;

 L6383: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L904;
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L853;
    }
  goto ret0;

 L904: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L905;
    }
  goto ret0;

 L905: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L906;
    }
  goto ret0;

 L906: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L907;
    }
  goto ret0;

 L907: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1899 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 68;  /* *nmaddsf_fastmath */
    }
  goto ret0;

 L853: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L854;
    }
  goto ret0;

 L854: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L855;
    }
  goto ret0;

 L855: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1874 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 62;  /* *msubsf */
    }
  goto ret0;

 L73: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L6385;
  goto ret0;

 L6385: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L958;
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L74;
    }
  goto ret0;

 L958: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L959;
    }
  goto ret0;

 L959: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[3] = x3;
      goto L960;
    }
  goto ret0;

 L960: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1927 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 74;  /* *nmsubsf_fastmath */
    }
  goto ret0;

 L74: ATTRIBUTE_UNUSED_LABEL
  if (
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 12;  /* subsf3 */
    }
  goto ret0;

 L108: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L109;
    }
  goto ret0;

 L109: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L110;
    }
  goto ret0;

 L110: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1056 "../../gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 18;  /* *mulsf3 */
    }
 L122: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1069 "../../gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 20;  /* *mulsf3_r4300 */
    }
  goto ret0;

 L875: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L6386;
  goto ret0;

 L6386: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L876;
    case MINUS:
      goto L930;
    case REG:
    case SUBREG:
      goto L6388;
    default:
      goto ret0;
   }
 L6388: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1152;
    }
  goto ret0;

 L876: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == MULT)
    goto L877;
  goto ret0;

 L877: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L878;
    }
  goto ret0;

 L878: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L879;
    }
  goto ret0;

 L879: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[3] = x3;
      goto L880;
    }
  goto ret0;

 L880: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1885 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 65;  /* *nmaddsf */
    }
  goto ret0;

 L930: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == MULT)
    goto L931;
  goto ret0;

 L931: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L932;
    }
  goto ret0;

 L932: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SFmode))
    {
      operands[3] = x4;
      goto L933;
    }
  goto ret0;

 L933: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L934;
    }
  goto ret0;

 L934: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1913 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 71;  /* *nmsubsf */
    }
  goto ret0;

 L1152: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2190 "../../gcc/config/mips/mips.md"
(!HONOR_NANS (SFmode)) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 103;  /* negsf2 */
    }
  goto ret0;

 L980: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L981;
    }
  if (const_1_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L999;
    }
  goto ret0;

 L981: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L982;
    }
  goto ret0;

 L982: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1970 "../../gcc/config/mips/mips.md"
(!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 77;  /* *divsf3 */
    }
  goto ret0;

 L999: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L6390;
  goto ret0;

 L6390: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SQRT)
    goto L1077;
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L1000;
    }
  goto ret0;

 L1077: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L1078;
    }
  goto ret0;

 L1078: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2059 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 90;  /* *rsqrtsfa */
    }
  goto ret0;

 L1000: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1988 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 80;  /* *recipsf3 */
    }
  goto ret0;

 L1060: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L6392;
  goto ret0;

 L6392: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == DIV)
    goto L1097;
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1061;
    }
  goto ret0;

 L1097: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (const_1_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L1098;
    }
  goto ret0;

 L1098: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L1099;
    }
  goto ret0;

 L1099: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2077 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 93;  /* *rsqrtsfb */
    }
  goto ret0;

 L1061: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2041 "../../gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 87;  /* sqrtsf2 */
    }
  goto ret0;

 L1117: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1118;
    }
  goto ret0;

 L1118: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2108 "../../gcc/config/mips/mips.md"
(!HONOR_NANS (SFmode)) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 96;  /* abssf2 */
    }
  goto ret0;

 L1263: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1264;
    }
  goto ret0;

 L1264: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2355 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 122;  /* truncdfsf2 */
    }
  goto ret0;

 L1597: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L6393;
    case DImode:
      goto L6394;
    default:
      break;
    }
  goto ret0;

 L6393: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1598;
    }
  goto ret0;

 L1598: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2890 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 182;  /* floatsisf2 */
    }
  goto ret0;

 L6394: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1603;
    }
  goto ret0;

 L1603: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2901 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 183;  /* floatdisf2 */
    }
  goto ret0;

 L1815: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L6395;
    case DImode:
      goto L6396;
    default:
      break;
    }
  goto ret0;

 L6395: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1816;
  goto ret0;

 L1816: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1817;
    }
  goto ret0;

 L1817: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1818;
    }
  goto ret0;

 L1818: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3783 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 222;  /* *lwxc1_si */
    }
  goto ret0;

 L6396: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1837;
  goto ret0;

 L1837: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1838;
    }
  goto ret0;

 L1838: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1839;
    }
  goto ret0;

 L1839: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3783 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 225;  /* *lwxc1_di */
    }
  goto ret0;

 L3404: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L6397;
    case DImode:
      goto L6398;
    case CCmode:
      goto L6399;
    default:
      break;
    }
  goto ret0;

 L6397: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L3405;
    }
  goto ret0;

 L3405: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3406;
    }
  goto ret0;

 L3406: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3407;
  goto ret0;

 L3407: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3408;
    }
  goto ret0;

 L3408: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L3409;
    }
  goto ret0;

 L3409: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6106 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 450;  /* *movsf_on_si */
    }
  goto ret0;

 L6398: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L3423;
    }
  goto ret0;

 L3423: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3424;
    }
  goto ret0;

 L3424: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3425;
  goto ret0;

 L3425: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3426;
    }
  goto ret0;

 L3426: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L3427;
    }
  goto ret0;

 L3427: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 6106 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 498 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 452;  /* *movsf_on_di */
    }
  goto ret0;

 L6399: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, CCmode))
    {
      operands[4] = x2;
      goto L3441;
    }
  goto ret0;

 L3441: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[1] = x3;
      goto L3442;
    }
  goto ret0;

 L3442: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3443;
  goto ret0;

 L3443: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3444;
    }
  goto ret0;

 L3444: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L3445;
    }
  goto ret0;

 L3445: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 6106 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 498 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 454;  /* *movsf_on_cc */
    }
  goto ret0;

 L3545: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3546;
    }
  goto ret0;

 L3546: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L3547;
  goto ret0;

 L3547: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (const_0_or_1_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L3548;
    }
  goto ret0;

 L3548: ATTRIBUTE_UNUSED_LABEL
  if (
#line 160 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 468;  /* vec_extractv2sf */
    }
  goto ret0;

 L6374: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L6400;
    case 2:
      goto L6401;
    default:
      break;
    }
  goto ret0;

 L6400: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 209L:
      goto L3768;
    case 211L:
      goto L3801;
    default:
      break;
    }
  goto ret0;

 L3768: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3769;
    }
  goto ret0;

 L3769: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 548 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 498;  /* mips_rsqrt1_s */
    }
  goto ret0;

 L3801: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3802;
    }
  goto ret0;

 L3802: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 567 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 504;  /* mips_recip1_s */
    }
  goto ret0;

 L6401: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 210L:
      goto L3783;
    case 212L:
      goto L3816;
    default:
      break;
    }
  goto ret0;

 L3783: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3784;
    }
  goto ret0;

 L3784: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3785;
    }
  goto ret0;

 L3785: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 558 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 501;  /* mips_rsqrt2_s */
    }
  goto ret0;

 L3816: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3817;
    }
  goto ret0;

 L3817: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3818;
    }
  goto ret0;

 L3818: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 577 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 507;  /* mips_recip2_s */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_2 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L22;
    case MINUS:
      goto L78;
    case MULT:
      goto L114;
    case NEG:
      goto L884;
    case DIV:
      goto L986;
    case SQRT:
      goto L1065;
    case ABS:
      goto L1122;
    case FLOAT_EXTEND:
      goto L1536;
    case FLOAT:
      goto L1587;
    case MEM:
      goto L1822;
    case UNSPEC:
      goto L6424;
    case IF_THEN_ELSE:
      goto L3413;
    default:
     break;
   }
  goto ret0;

 L22: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L6432;
  goto ret0;

 L6432: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L836;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L23;
    }
  goto ret0;

 L836: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L837;
    }
  goto ret0;

 L837: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L838;
    }
  goto ret0;

 L838: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L839;
    }
  goto ret0;

 L839: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1864 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 60;  /* *madddf */
    }
  goto ret0;

 L23: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L24;
    }
  goto ret0;

 L24: ATTRIBUTE_UNUSED_LABEL
  if (
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 4;  /* adddf3 */
    }
  goto ret0;

 L78: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L6434;
  goto ret0;

 L6434: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L860;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L79;
    }
  goto ret0;

 L860: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode)
    goto L6436;
  goto ret0;

 L6436: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L913;
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L861;
    }
  goto ret0;

 L913: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L914;
    }
  goto ret0;

 L914: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L915;
    }
  goto ret0;

 L915: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L916;
    }
  goto ret0;

 L916: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1899 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (DFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 69;  /* *nmadddf_fastmath */
    }
  goto ret0;

 L861: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L862;
    }
  goto ret0;

 L862: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L863;
    }
  goto ret0;

 L863: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1874 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 63;  /* *msubdf */
    }
  goto ret0;

 L79: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L6438;
  goto ret0;

 L6438: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L966;
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L80;
    }
  goto ret0;

 L966: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L967;
    }
  goto ret0;

 L967: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[3] = x3;
      goto L968;
    }
  goto ret0;

 L968: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1927 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (DFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 75;  /* *nmsubdf_fastmath */
    }
  goto ret0;

 L80: ATTRIBUTE_UNUSED_LABEL
  if (
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 13;  /* subdf3 */
    }
  goto ret0;

 L114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L115;
    }
  goto ret0;

 L115: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L116;
    }
  goto ret0;

 L116: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1056 "../../gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 19;  /* *muldf3 */
    }
 L128: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1069 "../../gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 21;  /* *muldf3_r4300 */
    }
  goto ret0;

 L884: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L6439;
  goto ret0;

 L6439: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L885;
    case MINUS:
      goto L939;
    case REG:
    case SUBREG:
      goto L6441;
    default:
      goto ret0;
   }
 L6441: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1157;
    }
  goto ret0;

 L885: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == MULT)
    goto L886;
  goto ret0;

 L886: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L887;
    }
  goto ret0;

 L887: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L888;
    }
  goto ret0;

 L888: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[3] = x3;
      goto L889;
    }
  goto ret0;

 L889: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1885 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (DFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 66;  /* *nmadddf */
    }
  goto ret0;

 L939: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == MULT)
    goto L940;
  goto ret0;

 L940: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L941;
    }
  goto ret0;

 L941: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DFmode))
    {
      operands[3] = x4;
      goto L942;
    }
  goto ret0;

 L942: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L943;
    }
  goto ret0;

 L943: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1913 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (DFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 72;  /* *nmsubdf */
    }
  goto ret0;

 L1157: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2190 "../../gcc/config/mips/mips.md"
(!HONOR_NANS (DFmode)) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 104;  /* negdf2 */
    }
  goto ret0;

 L986: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L987;
    }
  if (const_1_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1005;
    }
  goto ret0;

 L987: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L988;
    }
  goto ret0;

 L988: ATTRIBUTE_UNUSED_LABEL
  if (
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 78;  /* *divdf3 */
    }
  goto ret0;

 L1005: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L6443;
  goto ret0;

 L6443: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SQRT)
    goto L1084;
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L1006;
    }
  goto ret0;

 L1084: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L1085;
    }
  goto ret0;

 L1085: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2059 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FLOAT64 && flag_unsafe_math_optimizations) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 91;  /* *rsqrtdfa */
    }
  goto ret0;

 L1006: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1988 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FLOAT64 && flag_unsafe_math_optimizations) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 81;  /* *recipdf3 */
    }
  goto ret0;

 L1065: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L6445;
  goto ret0;

 L6445: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == DIV)
    goto L1104;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1066;
    }
  goto ret0;

 L1104: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (const_1_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L1105;
    }
  goto ret0;

 L1105: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L1106;
    }
  goto ret0;

 L1106: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2077 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FLOAT64 && flag_unsafe_math_optimizations) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 94;  /* *rsqrtdfb */
    }
  goto ret0;

 L1066: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2041 "../../gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 88;  /* sqrtdf2 */
    }
  goto ret0;

 L1122: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1123;
    }
  goto ret0;

 L1123: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2108 "../../gcc/config/mips/mips.md"
(!HONOR_NANS (DFmode)) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 97;  /* absdf2 */
    }
  goto ret0;

 L1536: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1537;
    }
  goto ret0;

 L1537: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2753 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 173;  /* extendsfdf2 */
    }
  goto ret0;

 L1587: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L6446;
    case DImode:
      goto L6447;
    default:
      break;
    }
  goto ret0;

 L6446: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1588;
    }
  goto ret0;

 L1588: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2868 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 180;  /* floatsidf2 */
    }
  goto ret0;

 L6447: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1593;
    }
  goto ret0;

 L1593: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2879 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 181;  /* floatdidf2 */
    }
  goto ret0;

 L1822: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L6448;
    case DImode:
      goto L6449;
    default:
      break;
    }
  goto ret0;

 L6448: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1823;
  goto ret0;

 L1823: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1824;
    }
  goto ret0;

 L1824: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1825;
    }
  goto ret0;

 L1825: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3783 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 223;  /* *ldxc1_si */
    }
  goto ret0;

 L6449: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1844;
  goto ret0;

 L1844: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1845;
    }
  goto ret0;

 L1845: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1846;
    }
  goto ret0;

 L1846: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3783 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 226;  /* *ldxc1_di */
    }
  goto ret0;

 L6424: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L6450;
    case 2:
      goto L6451;
    default:
      break;
    }
  goto ret0;

 L6450: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 0L:
      goto L1987;
    case 209L:
      goto L3773;
    case 211L:
      goto L3806;
    default:
      break;
    }
  goto ret0;

 L1987: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1988;
    }
  goto ret0;

 L1988: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4265 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 523 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 253;  /* load_lowdf */
    }
  goto ret0;

 L3773: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3774;
    }
  goto ret0;

 L3774: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 548 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 499;  /* mips_rsqrt1_d */
    }
  goto ret0;

 L3806: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3807;
    }
  goto ret0;

 L3807: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 567 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 505;  /* mips_recip1_d */
    }
  goto ret0;

 L6451: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 1L:
      goto L2007;
    case 32L:
      goto L2055;
    case 210L:
      goto L3789;
    case 212L:
      goto L3822;
    default:
      break;
    }
  goto ret0;

 L2007: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2008;
    }
  goto ret0;

 L2008: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2009;
    }
  goto ret0;

 L2009: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4280 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 523 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 257;  /* load_highdf */
    }
  goto ret0;

 L2055: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2056;
    }
  goto ret0;

 L2056: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2057;
    }
  goto ret0;

 L2057: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4310 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 523 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 265;  /* mthc1df */
    }
  goto ret0;

 L3789: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3790;
    }
  goto ret0;

 L3790: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3791;
    }
  goto ret0;

 L3791: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 558 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 502;  /* mips_rsqrt2_d */
    }
  goto ret0;

 L3822: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3823;
    }
  goto ret0;

 L3823: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3824;
    }
  goto ret0;

 L3824: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 577 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 508;  /* mips_recip2_d */
    }
  goto ret0;

 L3413: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L6457;
    case DImode:
      goto L6458;
    case CCmode:
      goto L6459;
    default:
      break;
    }
  goto ret0;

 L6457: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L3414;
    }
  goto ret0;

 L3414: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3415;
    }
  goto ret0;

 L3415: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3416;
  goto ret0;

 L3416: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3417;
    }
  goto ret0;

 L3417: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L3418;
    }
  goto ret0;

 L3418: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6106 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 451;  /* *movdf_on_si */
    }
  goto ret0;

 L6458: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L3432;
    }
  goto ret0;

 L3432: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3433;
    }
  goto ret0;

 L3433: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3434;
  goto ret0;

 L3434: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3435;
    }
  goto ret0;

 L3435: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L3436;
    }
  goto ret0;

 L3436: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 6106 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 498 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 453;  /* *movdf_on_di */
    }
  goto ret0;

 L6459: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, CCmode))
    {
      operands[4] = x2;
      goto L3450;
    }
  goto ret0;

 L3450: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[1] = x3;
      goto L3451;
    }
  goto ret0;

 L3451: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3452;
  goto ret0;

 L3452: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3453;
    }
  goto ret0;

 L3453: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L3454;
    }
  goto ret0;

 L3454: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 6106 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 498 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 455;  /* *movdf_on_cc */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_3 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L28;
    case MINUS:
      goto L84;
    case MULT:
      goto L132;
    case NEG:
      goto L893;
    case DIV:
      goto L992;
    case SQRT:
      goto L1070;
    case ABS:
      goto L1127;
    case MEM:
      goto L1829;
    case UNSPEC:
      goto L6487;
    case IF_THEN_ELSE:
      goto L3474;
    case VEC_MERGE:
      goto L3499;
    case VEC_CONCAT:
      goto L3539;
    default:
     break;
   }
  goto ret0;

 L28: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L6502;
  goto ret0;

 L6502: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L844;
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L29;
    }
  goto ret0;

 L844: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L845;
    }
  goto ret0;

 L845: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L846;
    }
  goto ret0;

 L846: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L847;
    }
  goto ret0;

 L847: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1864 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 61;  /* *maddv2sf */
    }
  goto ret0;

 L29: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L30;
    }
  goto ret0;

 L30: ATTRIBUTE_UNUSED_LABEL
  if (
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 5;  /* addv2sf3 */
    }
  goto ret0;

 L84: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L6504;
  goto ret0;

 L6504: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L868;
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L85;
    }
  goto ret0;

 L868: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SFmode)
    goto L6506;
  goto ret0;

 L6506: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L922;
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L869;
    }
  goto ret0;

 L922: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SFmode))
    {
      operands[1] = x4;
      goto L923;
    }
  goto ret0;

 L923: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L924;
    }
  goto ret0;

 L924: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L925;
    }
  goto ret0;

 L925: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1899 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (V2SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 70;  /* *nmaddv2sf_fastmath */
    }
  goto ret0;

 L869: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L870;
    }
  goto ret0;

 L870: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L871;
    }
  goto ret0;

 L871: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1874 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 64;  /* *msubv2sf */
    }
  goto ret0;

 L85: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode)
    goto L6508;
  goto ret0;

 L6508: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L974;
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L86;
    }
  goto ret0;

 L974: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L975;
    }
  goto ret0;

 L975: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[3] = x3;
      goto L976;
    }
  goto ret0;

 L976: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1927 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (V2SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 76;  /* *nmsubv2sf_fastmath */
    }
  goto ret0;

 L86: ATTRIBUTE_UNUSED_LABEL
  if (
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 14;  /* subv2sf3 */
    }
  goto ret0;

 L132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L133;
    }
  goto ret0;

 L133: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L134;
    }
  goto ret0;

 L134: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1079 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 22;  /* mulv2sf3 */
    }
  goto ret0;

 L893: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L6509;
  goto ret0;

 L6509: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L894;
    case MINUS:
      goto L948;
    case REG:
    case SUBREG:
      goto L6511;
    default:
      goto ret0;
   }
 L6511: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1162;
    }
  goto ret0;

 L894: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SFmode
      && GET_CODE (x3) == MULT)
    goto L895;
  goto ret0;

 L895: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SFmode))
    {
      operands[1] = x4;
      goto L896;
    }
  goto ret0;

 L896: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, V2SFmode))
    {
      operands[2] = x4;
      goto L897;
    }
  goto ret0;

 L897: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[3] = x3;
      goto L898;
    }
  goto ret0;

 L898: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1885 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (V2SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 67;  /* *nmaddv2sf */
    }
  goto ret0;

 L948: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SFmode
      && GET_CODE (x3) == MULT)
    goto L949;
  goto ret0;

 L949: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SFmode))
    {
      operands[2] = x4;
      goto L950;
    }
  goto ret0;

 L950: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, V2SFmode))
    {
      operands[3] = x4;
      goto L951;
    }
  goto ret0;

 L951: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L952;
    }
  goto ret0;

 L952: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1913 "../../gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB (V2SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 73;  /* *nmsubv2sf */
    }
  goto ret0;

 L1162: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2190 "../../gcc/config/mips/mips.md"
(!HONOR_NANS (V2SFmode)) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 105;  /* negv2sf2 */
    }
  goto ret0;

 L992: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L993;
    }
  if (const_1_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1011;
    }
  goto ret0;

 L993: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L994;
    }
  goto ret0;

 L994: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1970 "../../gcc/config/mips/mips.md"
(TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 79;  /* *divv2sf3 */
    }
  goto ret0;

 L1011: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode)
    goto L6513;
  goto ret0;

 L6513: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SQRT)
    goto L1091;
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L1012;
    }
  goto ret0;

 L1091: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L1092;
    }
  goto ret0;

 L1092: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2059 "../../gcc/config/mips/mips.md"
(TARGET_SB1 && flag_unsafe_math_optimizations) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 92;  /* *rsqrtv2sfa */
    }
  goto ret0;

 L1012: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1988 "../../gcc/config/mips/mips.md"
(TARGET_SB1 && flag_unsafe_math_optimizations) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 82;  /* *recipv2sf3 */
    }
  goto ret0;

 L1070: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L6515;
  goto ret0;

 L6515: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == DIV)
    goto L1111;
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1071;
    }
  goto ret0;

 L1111: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (const_1_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L1112;
    }
  goto ret0;

 L1112: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L1113;
    }
  goto ret0;

 L1113: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2077 "../../gcc/config/mips/mips.md"
(TARGET_SB1 && flag_unsafe_math_optimizations) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 95;  /* *rsqrtv2sfb */
    }
  goto ret0;

 L1071: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2041 "../../gcc/config/mips/mips.md"
(TARGET_SB1) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 89;  /* sqrtv2sf2 */
    }
  goto ret0;

 L1127: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1128;
    }
  goto ret0;

 L1128: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2108 "../../gcc/config/mips/mips.md"
(!HONOR_NANS (V2SFmode)) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 98;  /* absv2sf2 */
    }
  goto ret0;

 L1829: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L6516;
    case DImode:
      goto L6517;
    default:
      break;
    }
  goto ret0;

 L6516: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1830;
  goto ret0;

 L1830: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1831;
    }
  goto ret0;

 L1831: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1832;
    }
  goto ret0;

 L1832: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3783 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 224;  /* *ldxc1_si */
    }
  goto ret0;

 L6517: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1851;
  goto ret0;

 L1851: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1852;
    }
  goto ret0;

 L1852: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1853;
    }
  goto ret0;

 L1853: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3783 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 227;  /* *ldxc1_di */
    }
  goto ret0;

 L6487: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L6518;
    case 2:
      goto L6519;
    case 3:
      goto L6521;
    default:
      break;
    }
  goto ret0;

 L6518: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 0L:
      goto L1997;
    case 205L:
      goto L3565;
    case 206L:
      goto L3570;
    case 208L:
      goto L3581;
    case 209L:
      goto L3778;
    case 211L:
      goto L3811;
    default:
      break;
    }
  goto ret0;

 L1997: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1998;
    }
  goto ret0;

 L1998: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4265 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 525 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 255;  /* load_lowv2sf */
    }
  goto ret0;

 L3565: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3566;
    }
  goto ret0;

 L3566: ATTRIBUTE_UNUSED_LABEL
  if (
#line 252 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 471;  /* mips_cvt_pw_ps */
    }
  goto ret0;

 L3570: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3571;
    }
  goto ret0;

 L3571: ATTRIBUTE_UNUSED_LABEL
  if (
#line 262 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 472;  /* mips_cvt_ps_pw */
    }
  goto ret0;

 L3581: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3582;
    }
  goto ret0;

 L3582: ATTRIBUTE_UNUSED_LABEL
  if (
#line 298 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 474;  /* *mips_abs_ps */
    }
  goto ret0;

 L3778: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3779;
    }
  goto ret0;

 L3779: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 548 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 500;  /* mips_rsqrt1_ps */
    }
  goto ret0;

 L3811: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3812;
    }
  goto ret0;

 L3812: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 567 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 506;  /* mips_recip1_ps */
    }
  goto ret0;

 L6519: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 1L:
      goto L2019;
    case 32L:
      goto L2067;
    case 204L:
      goto L3559;
    case 207L:
      goto L3575;
    case 210L:
      goto L3795;
    case 212L:
      goto L3828;
    default:
      break;
    }
  goto ret0;

 L2019: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2020;
    }
  goto ret0;

 L2020: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2021;
    }
  goto ret0;

 L2021: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4280 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 525 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 259;  /* load_highv2sf */
    }
  goto ret0;

 L2067: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2068;
    }
  goto ret0;

 L2068: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2069;
    }
  goto ret0;

 L2069: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4310 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 525 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 267;  /* mthc1v2sf */
    }
  goto ret0;

 L3559: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3560;
    }
  goto ret0;

 L3560: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3561;
    }
  goto ret0;

 L3561: ATTRIBUTE_UNUSED_LABEL
  if (
#line 242 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 470;  /* mips_addr_ps */
    }
  goto ret0;

 L3575: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3576;
    }
  goto ret0;

 L3576: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3577;
    }
  goto ret0;

 L3577: ATTRIBUTE_UNUSED_LABEL
  if (
#line 273 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 473;  /* mips_mulr_ps */
    }
  goto ret0;

 L3795: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3796;
    }
  goto ret0;

 L3796: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3797;
    }
  goto ret0;

 L3797: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 558 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 503;  /* mips_rsqrt2_ps */
    }
  goto ret0;

 L3828: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3829;
    }
  goto ret0;

 L3829: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3830;
    }
  goto ret0;

 L3830: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 577 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 509;  /* mips_recip2_ps */
    }
  goto ret0;

 L6521: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 200L:
      goto L3492;
    case 202L:
      goto L3552;
    default:
      break;
    }
  goto ret0;

 L3492: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3493;
    }
  goto ret0;

 L3493: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3494;
    }
  goto ret0;

 L3494: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, CCV2mode))
    {
      operands[3] = x2;
      goto L3495;
    }
  goto ret0;

 L3495: ATTRIBUTE_UNUSED_LABEL
  if (
#line 41 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 462;  /* mips_cond_move_tf_ps */
    }
  goto ret0;

 L3552: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3553;
    }
  goto ret0;

 L3553: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3554;
    }
  goto ret0;

 L3554: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3555;
    }
  goto ret0;

 L3555: ATTRIBUTE_UNUSED_LABEL
  if (
#line 231 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 469;  /* mips_alnv_ps */
    }
  goto ret0;

 L3474: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L6532;
    case DImode:
      goto L6533;
    default:
      break;
    }
  goto ret0;

 L6532: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L3475;
    }
  goto ret0;

 L3475: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3476;
    }
  goto ret0;

 L3476: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3477;
  goto ret0;

 L3477: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3478;
    }
  goto ret0;

 L3478: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L3479;
    }
  goto ret0;

 L3479: ATTRIBUTE_UNUSED_LABEL
  if (
#line 28 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 460;  /* *movcc_v2sf_si */
    }
  goto ret0;

 L6533: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L3484;
    }
  goto ret0;

 L3484: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3485;
    }
  goto ret0;

 L3485: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3486;
  goto ret0;

 L3486: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3487;
    }
  goto ret0;

 L3487: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L3488;
    }
  goto ret0;

 L3488: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 28 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 461;  /* *movcc_v2sf_di */
    }
  goto ret0;

 L3499: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L6535;
  goto ret0;

 L6535: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L3516;
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3500;
    }
  goto ret0;

 L3516: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L3517;
    }
  goto ret0;

 L3517: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L3518;
  goto ret0;

 L3518: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L3519;
  goto ret0;

 L3519: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3520;
  goto ret0;

 L3520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode)
    goto L6537;
  goto ret0;

 L6537: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L3531;
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3521;
    }
  goto ret0;

 L3531: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L3532;
    }
  goto ret0;

 L3532: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L3533;
  goto ret0;

 L3533: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L3534;
  goto ret0;

 L3534: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3535;
  goto ret0;

 L3535: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && 
#line 119 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 466;  /* mips_plu_ps */
    }
  goto ret0;

 L3521: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && 
#line 103 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 465;  /* mips_pll_ps */
    }
  goto ret0;

 L3500: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode)
    goto L6539;
  goto ret0;

 L6539: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L3507;
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3501;
    }
  goto ret0;

 L3507: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L3508;
    }
  goto ret0;

 L3508: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L3509;
  goto ret0;

 L3509: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L3510;
  goto ret0;

 L3510: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3511;
  goto ret0;

 L3511: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && 
#line 89 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 464;  /* mips_puu_ps */
    }
  goto ret0;

 L3501: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && 
#line 75 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 463;  /* mips_pul_ps */
    }
  goto ret0;

 L3539: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3540;
    }
  goto ret0;

 L3540: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3541;
    }
  goto ret0;

 L3541: ATTRIBUTE_UNUSED_LABEL
  if (
#line 141 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 467;  /* vec_initv2sf_internal */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_4 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L34;
    case MINUS:
      goto L90;
    case MULT:
      goto L149;
    case NEG:
      goto L408;
    case TRUNCATE:
      goto L599;
    case CLZ:
      goto L1132;
    case NOT:
      goto L1166;
    case AND:
      goto L1175;
    case IOR:
      goto L1199;
    case XOR:
      goto L1223;
    case SIGN_EXTEND:
      goto L1334;
    case ZERO_EXTEND:
      goto L1346;
    case FIX:
      goto L1541;
    case ZERO_EXTRACT:
      goto L1607;
    case UNSPEC:
      goto L6567;
    case HIGH:
      goto L1701;
    case LO_SUM:
      goto L1711;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L6565;
    default:
      goto ret0;
   }
 L6565: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L1723;
    }
  goto ret0;

 L34: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L6571;
  goto ret0;

 L6571: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L235;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L35;
    }
  goto ret0;

 L235: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L236;
    }
  goto ret0;

 L236: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L237;
    }
  goto ret0;

 L237: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L238;
    }
 L803: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0])
      && 
#line 1830 "../../gcc/config/mips/mips.md"
(TARGET_MAD)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 56;  /* madsi */
    }
  goto ret0;

 L238: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1274 "../../gcc/config/mips/mips.md"
((TARGET_MIPS3900
   || GENERATE_MADD_MSUB)
   && !TARGET_MIPS16)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 28;  /* *mul_acc_si */
    }
 L259: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1336 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 29;  /* *macc */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L803;

 L35: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L36;
    }
  goto ret0;

 L36: ATTRIBUTE_UNUSED_LABEL
  if (
#line 810 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 6;  /* *addsi3 */
    }
 L48: ATTRIBUTE_UNUSED_LABEL
  if (
#line 821 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 8;  /* *addsi3_mips16 */
    }
  goto ret0;

 L90: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L91;
    }
  goto ret0;

 L91: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L6573;
  goto ret0;

 L6573: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L278;
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 15;  /* subsi3 */
    }
  goto ret0;

 L278: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L279;
    }
  goto ret0;

 L279: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L280;
    }
  goto ret0;

 L280: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1358 "../../gcc/config/mips/mips.md"
(ISA_HAS_MSAC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 30;  /* *msac */
    }
 L303: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1379 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 31;  /* *msac_using_macc */
    }
 L392: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1535 "../../gcc/config/mips/mips.md"
(GENERATE_MADD_MSUB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 34;  /* *mul_sub_si */
    }
  goto ret0;

 L149: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L150;
    }
  goto ret0;

 L150: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L151;
    }
  goto ret0;

 L151: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1164 "../../gcc/config/mips/mips.md"
(ISA_HAS_MUL3)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 23;  /* mulsi3_mult3 */
    }
 L166: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1206 "../../gcc/config/mips/mips.md"
(!TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 24;  /* mulsi3_internal */
    }
 L198: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1217 "../../gcc/config/mips/mips.md"
(TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 26;  /* mulsi3_r4000 */
    }
  goto ret0;

 L408: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L6574;
  goto ret0;

 L6574: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L409;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 101;  /* negsi2 */
    }
  goto ret0;

 L409: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L410;
    }
  goto ret0;

 L410: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L411;
    }
  goto ret0;

 L411: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1590 "../../gcc/config/mips/mips.md"
(ISA_HAS_MULS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 35;  /* *muls */
    }
  goto ret0;

 L599: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L6576;
  goto ret0;

 L6576: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case LSHIFTRT:
      goto L600;
    case ASHIFTRT:
      goto L1298;
    default:
     break;
   }
  goto ret0;

 L600: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L6578;
  goto ret0;

 L6578: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case MULT:
      goto L601;
    case NEG:
      goto L704;
    case REG:
    case SUBREG:
      goto L6580;
    default:
      goto ret0;
   }
 L6580: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1318;
    }
  goto ret0;

 L601: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L6581;
  goto ret0;

 L6581: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L602;
    case ZERO_EXTEND:
      goto L626;
    default:
     break;
   }
  goto ret0;

 L602: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L603;
    }
  goto ret0;

 L603: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L604;
  goto ret0;

 L604: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L605;
    }
  goto ret0;

 L605: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L6583;
  goto ret0;

 L6583: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 32L)
    goto L6585;
  goto ret0;

 L6585: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1763 "../../gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 48;  /* smulsi3_highpart_internal */
    }
 L6586: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1778 "../../gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 50;  /* smulsi3_highpart_mulhi_internal */
    }
  goto ret0;

 L626: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L627;
    }
  goto ret0;

 L627: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L628;
  goto ret0;

 L628: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L629;
    }
  goto ret0;

 L629: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L6587;
  goto ret0;

 L6587: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 32L)
    goto L6589;
  goto ret0;

 L6589: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1763 "../../gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 49;  /* umulsi3_highpart_internal */
    }
 L6590: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1778 "../../gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 51;  /* umulsi3_highpart_mulhi_internal */
    }
  goto ret0;

 L704: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L705;
  goto ret0;

 L705: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L6591;
  goto ret0;

 L6591: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L706;
    case ZERO_EXTEND:
      goto L734;
    default:
     break;
   }
  goto ret0;

 L706: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L707;
    }
  goto ret0;

 L707: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L708;
  goto ret0;

 L708: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L709;
    }
  goto ret0;

 L709: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 1796 "../../gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 52;  /* *smulsi3_highpart_neg_mulhi_internal */
    }
  goto ret0;

 L734: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L735;
    }
  goto ret0;

 L735: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L736;
  goto ret0;

 L736: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L737;
    }
  goto ret0;

 L737: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 1796 "../../gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 53;  /* *umulsi3_highpart_neg_mulhi_internal */
    }
  goto ret0;

 L1318: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 2424 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 131;  /* *mips.md:2419 */
    }
  goto ret0;

 L1298: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1299;
    }
  goto ret0;

 L1299: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1300;
    }
  goto ret0;

 L1300: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2414 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) >= 32))
    {
      return 128;  /* *mips.md:2409 */
    }
  goto ret0;

 L1132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1133;
    }
  goto ret0;

 L1133: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2124 "../../gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO))
    {
      return 99;  /* clzsi2 */
    }
  goto ret0;

 L1166: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 106;  /* one_cmplsi2 */
    }
  goto ret0;

 L1175: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L6594;
  goto ret0;

 L6594: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L1248;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1176;
    }
  goto ret0;

 L1248: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1249;
    }
  goto ret0;

 L1249: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L1250;
  goto ret0;

 L1250: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1251;
    }
  goto ret0;

 L1251: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2338 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 120;  /* *norsi3 */
    }
  goto ret0;

 L1176: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1177;
    }
 L1188: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1189;
    }
  goto ret0;

 L1177: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2252 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 108;  /* *andsi3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1188;

 L1189: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2263 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 110;  /* *andsi3_mips16 */
    }
  goto ret0;

 L1199: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1200;
    }
  goto ret0;

 L1200: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1201;
    }
 L1212: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1213;
    }
  goto ret0;

 L1201: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2282 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 112;  /* *iorsi3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1212;

 L1213: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2293 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 114;  /* *iorsi3_mips16 */
    }
  goto ret0;

 L1223: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1224;
    }
  goto ret0;

 L1224: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1225;
    }
  goto ret0;

 L1225: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2309 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 116;  /* *mips.md:2305 */
    }
 L1237: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2320 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 118;  /* *mips.md:2316 */
    }
  goto ret0;

 L1334: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L6595;
    case HImode:
      goto L6596;
    default:
      break;
    }
  goto ret0;

 L6595: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1335;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1462;
    }
  goto ret0;

 L1335: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1336;
    }
  goto ret0;

 L1336: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2455 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 134;  /* *extendsi_truncateqi */
    }
  goto ret0;

 L1462: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2665 "../../gcc/config/mips/mips.md"
(GENERATE_MIPS16E))
    {
      return 158;  /* *extendqisi2_mips16e */
    }
 L1482: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2676 "../../gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E))
    {
      return 162;  /* *extendqisi2 */
    }
 L1502: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2696 "../../gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH))
    {
      return 166;  /* *extendqisi2_seb */
    }
  goto ret0;

 L6596: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1341;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1472;
    }
  goto ret0;

 L1341: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1342;
    }
  goto ret0;

 L1342: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2455 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 135;  /* *extendsi_truncatehi */
    }
  goto ret0;

 L1472: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2665 "../../gcc/config/mips/mips.md"
(GENERATE_MIPS16E))
    {
      return 160;  /* *extendhisi2_mips16e */
    }
 L1492: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2676 "../../gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E))
    {
      return 164;  /* *extendhisi2 */
    }
 L1512: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2696 "../../gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH))
    {
      return 168;  /* *extendhisi2_seh */
    }
  goto ret0;

 L1346: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L6599;
    case QImode:
      goto L6600;
    default:
      break;
    }
  goto ret0;

 L6599: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1347;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1397;
    }
 L6604: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1417;
    }
 L6606: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1437;
    }
  goto ret0;

 L1347: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1348;
    }
  goto ret0;

 L1348: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2475 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 136;  /* *zero_extendsi_trunchi */
    }
  goto ret0;

 L1397: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2569 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 145;  /* *zero_extendhisi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L6604;

 L1417: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2579 "../../gcc/config/mips/mips.md"
(GENERATE_MIPS16E))
    {
      return 149;  /* *zero_extendhisi2_mips16e */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L6606;

 L1437: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2587 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 153;  /* *zero_extendhisi2_mips16 */
    }
  goto ret0;

 L6600: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1359;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1387;
    }
 L6603: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1407;
    }
 L6605: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1427;
    }
  goto ret0;

 L1359: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1360;
    }
  goto ret0;

 L1360: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2484 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 138;  /* *zero_extendsi_truncqi */
    }
  goto ret0;

 L1387: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2569 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 143;  /* *zero_extendqisi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L6603;

 L1407: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2579 "../../gcc/config/mips/mips.md"
(GENERATE_MIPS16E))
    {
      return 147;  /* *zero_extendqisi2_mips16e */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L6605;

 L1427: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2587 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 151;  /* *zero_extendqisi2_mips16 */
    }
  goto ret0;

 L1541: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L6607;
    case SFmode:
      goto L6608;
    default:
      break;
    }
  goto ret0;

 L6607: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1542;
    }
  goto ret0;

 L1542: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2781 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W))
    {
      return 174;  /* fix_truncdfsi2_insn */
    }
 L1555: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2792 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 175;  /* fix_truncdfsi2_macro */
    }
  goto ret0;

 L6608: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1560;
    }
  goto ret0;

 L1560: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2819 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W))
    {
      return 176;  /* fix_truncsfsi2_insn */
    }
 L1573: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2830 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 177;  /* fix_truncsfsi2_macro */
    }
  goto ret0;

 L1607: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1608;
    }
  goto ret0;

 L1608: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1609;
    }
  goto ret0;

 L1609: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1610;
    }
  goto ret0;

 L1610: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3134 "../../gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),
		       INTVAL (operands[3]))))
    {
      return 184;  /* extzvsi */
    }
  goto ret0;

 L6567: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L6609;
    case 3:
      goto L6610;
    default:
      break;
    }
  goto ret0;

 L6609: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 18L:
      goto L1635;
    case 24L:
      goto L1741;
    default:
      break;
    }
  goto ret0;

 L1635: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L1636;
    }
  goto ret0;

 L1636: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1637;
    }
  goto ret0;

 L1637: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3195 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1])))
    {
      return 188;  /* mov_lwl */
    }
  goto ret0;

 L1741: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1742;
    }
  goto ret0;

 L1742: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1743;
    }
  goto ret0;

 L1743: ATTRIBUTE_UNUSED_LABEL
  if (
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    {
      return 206;  /* load_gotsi */
    }
  goto ret0;

 L6610: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 19)
    goto L1647;
  goto ret0;

 L1647: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L1648;
    }
  goto ret0;

 L1648: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1649;
    }
  goto ret0;

 L1649: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1650;
    }
  goto ret0;

 L1650: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3206 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1])))
    {
      return 190;  /* mov_lwr */
    }
  goto ret0;

 L1701: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L6612;
  goto ret0;

 L6612: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1702;
    }
 L6613: ATTRIBUTE_UNUSED_LABEL
  if (got_page_ofst_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1732;
    }
  goto ret0;

 L1702: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3340 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 198;  /* *xgot_hisi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L6613;

 L1732: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3387 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 204;  /* *got_pagesi */
    }
  goto ret0;

 L1711: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1712;
    }
  goto ret0;

 L1712: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (got_disp_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1713;
    }
 L1754: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1755;
    }
  goto ret0;

 L1713: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3356 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 200;  /* *xgot_losi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1754;

 L1755: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3422 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 208;  /* *lowsi */
    }
 L1767: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3431 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 210;  /* *lowsi_mips16 */
    }
  goto ret0;

 L1723: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3370 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 202;  /* *got_dispsi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_5 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L6701;
    case 1:
      goto L6702;
    case 3:
      goto L6703;
    case 4:
      goto L6710;
    case 7:
      goto L6714;
    default:
      break;
    }
  goto ret0;

 L6701: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 26L:
      goto L1963;
    case 306L:
      goto L3967;
    case 327L:
      goto L4136;
    case 353L:
      goto L4476;
    case 354L:
      goto L4482;
    case 355L:
      goto L4488;
    case 437L:
      goto L5024;
    case 438L:
      goto L5030;
    case 441L:
      goto L5048;
    case 442L:
      goto L5054;
    default:
      break;
    }
  goto ret0;

 L1963: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1964;
    }
  goto ret0;

 L1964: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1965;
    }
  goto ret0;

 L1965: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4208 "../../gcc/config/mips/mips.md"
(!ISA_HAS_MACCHI))
    {
      return 249;  /* *mfhilo_si */
    }
 L1977: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4218 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACCHI))
    {
      return 251;  /* *mfhilo_si_macc */
    }
  goto ret0;

 L3967: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3968;
    }
  goto ret0;

 L3968: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3969;
    }
  goto ret0;

 L3969: ATTRIBUTE_UNUSED_LABEL
  if (
#line 124 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 522;  /* mips_modsub */
    }
  goto ret0;

 L4136: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4137;
    }
  goto ret0;

 L4137: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4138;
    }
  goto ret0;

 L4138: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 384 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 19 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)))
    {
      return 546;  /* mips_shra_r_w */
    }
  goto ret0;

 L4476: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L4477;
    }
  goto ret0;

 L4477: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L4478;
    }
  goto ret0;

 L4478: ATTRIBUTE_UNUSED_LABEL
  if (
#line 753 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 576;  /* mips_cmpgu_eq_qb */
    }
  goto ret0;

 L4482: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L4483;
    }
  goto ret0;

 L4483: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L4484;
    }
  goto ret0;

 L4484: ATTRIBUTE_UNUSED_LABEL
  if (
#line 763 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 577;  /* mips_cmpgu_lt_qb */
    }
  goto ret0;

 L4488: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L4489;
    }
  goto ret0;

 L4489: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L4490;
    }
  goto ret0;

 L4490: ATTRIBUTE_UNUSED_LABEL
  if (
#line 773 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 578;  /* mips_cmpgu_le_qb */
    }
  goto ret0;

 L5024: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5025;
    }
  goto ret0;

 L5025: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5026;
    }
  goto ret0;

 L5026: ATTRIBUTE_UNUSED_LABEL
  if (
#line 454 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 629;  /* mips_addqh_w */
    }
  goto ret0;

 L5030: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5031;
    }
  goto ret0;

 L5031: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5032;
    }
  goto ret0;

 L5032: ATTRIBUTE_UNUSED_LABEL
  if (
#line 464 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 630;  /* mips_addqh_r_w */
    }
  goto ret0;

 L5048: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5049;
    }
  goto ret0;

 L5049: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5050;
    }
  goto ret0;

 L5050: ATTRIBUTE_UNUSED_LABEL
  if (
#line 494 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 633;  /* mips_subqh_w */
    }
  goto ret0;

 L5054: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5055;
    }
  goto ret0;

 L5055: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5056;
    }
  goto ret0;

 L5056: ATTRIBUTE_UNUSED_LABEL
  if (
#line 504 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 634;  /* mips_subqh_r_w */
    }
  goto ret0;

 L6702: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 31L:
      goto L2079;
    case 307L:
      goto L3973;
    case 313L:
      goto L4030;
    case 314L:
      goto L4035;
    case 346L:
      goto L4418;
    case 449L:
      goto L5699;
    case 451L:
      goto L5709;
    case 455L:
      goto L5720;
    case 456L:
      goto L5725;
    case 457L:
      goto L5730;
    default:
      break;
    }
  goto ret0;

 L2079: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L6727;
    case DImode:
      goto L6728;
    case V2SFmode:
      goto L6729;
    default:
      break;
    }
  goto ret0;

 L6727: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2080;
    }
  goto ret0;

 L2080: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4320 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 523 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 269;  /* mfhc1df */
    }
  goto ret0;

 L6728: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2085;
    }
  goto ret0;

 L2085: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4320 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 524 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 270;  /* mfhc1di */
    }
  goto ret0;

 L6729: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2090;
    }
  goto ret0;

 L2090: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4320 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 525 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 271;  /* mfhc1v2sf */
    }
  goto ret0;

 L3973: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L3974;
    }
  goto ret0;

 L3974: ATTRIBUTE_UNUSED_LABEL
  if (
#line 134 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 523;  /* mips_raddu_w_qb */
    }
  goto ret0;

 L4030: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L4031;
    }
  goto ret0;

 L4031: ATTRIBUTE_UNUSED_LABEL
  if (
#line 207 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 530;  /* mips_preceq_w_phl */
    }
  goto ret0;

 L4035: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L4036;
    }
  goto ret0;

 L4036: ATTRIBUTE_UNUSED_LABEL
  if (
#line 216 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 531;  /* mips_preceq_w_phr */
    }
  goto ret0;

 L4418: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4419;
    }
  goto ret0;

 L4419: ATTRIBUTE_UNUSED_LABEL
  if (
#line 666 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 566;  /* mips_bitrev */
    }
 L5695: ATTRIBUTE_UNUSED_LABEL
  if (
#line 73 "../../gcc/config/mips/allegrex.md"
(TARGET_ALLEGREX))
    {
      return 702;  /* allegrex_bitrev */
    }
  goto ret0;

 L5699: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5700;
    }
  goto ret0;

 L5700: ATTRIBUTE_UNUSED_LABEL
  if (
#line 82 "../../gcc/config/mips/allegrex.md"
(TARGET_ALLEGREX))
    {
      return 703;  /* allegrex_wsbh */
    }
  goto ret0;

 L5709: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5710;
    }
  goto ret0;

 L5710: ATTRIBUTE_UNUSED_LABEL
  if (
#line 103 "../../gcc/config/mips/allegrex.md"
(TARGET_ALLEGREX))
    {
      return 705;  /* allegrex_clo */
    }
  goto ret0;

 L5720: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5721;
    }
  goto ret0;

 L5721: ATTRIBUTE_UNUSED_LABEL
  if (
#line 161 "../../gcc/config/mips/allegrex.md"
(TARGET_ALLEGREX))
    {
      return 708;  /* allegrex_ceil_w_s */
    }
  goto ret0;

 L5725: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5726;
    }
  goto ret0;

 L5726: ATTRIBUTE_UNUSED_LABEL
  if (
#line 170 "../../gcc/config/mips/allegrex.md"
(TARGET_ALLEGREX))
    {
      return 709;  /* allegrex_floor_w_s */
    }
  goto ret0;

 L5730: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5731;
    }
  goto ret0;

 L5731: ATTRIBUTE_UNUSED_LABEL
  if (
#line 179 "../../gcc/config/mips/allegrex.md"
(TARGET_ALLEGREX))
    {
      return 710;  /* allegrex_round_w_s */
    }
  goto ret0;

 L6703: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 23L:
      goto L3134;
    case 405L:
      goto L4721;
    case 406L:
      goto L4728;
    case 427L:
      goto L4953;
    default:
      break;
    }
  goto ret0;

 L3134: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3135;
    }
  goto ret0;

 L3135: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3136;
    }
  goto ret0;

 L3136: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 79
      && (
#line 5749 "../../gcc/config/mips/mips.md"
(TARGET_USE_GOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 424;  /* load_callsi */
    }
  goto ret0;

 L4721: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4722;
    }
  goto ret0;

 L4722: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4723;
    }
  goto ret0;

 L4723: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4724;
    }
  goto ret0;

 L4724: ATTRIBUTE_UNUSED_LABEL
  if (
#line 66 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 601;  /* mips_append */
    }
  goto ret0;

 L4728: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4729;
    }
  goto ret0;

 L4729: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4730;
    }
  goto ret0;

 L4730: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4731;
    }
  goto ret0;

 L4731: ATTRIBUTE_UNUSED_LABEL
  if (
#line 81 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 602;  /* mips_balign */
    }
  goto ret0;

 L4953: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4954;
    }
  goto ret0;

 L4954: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4955;
    }
  goto ret0;

 L4955: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4956;
    }
  goto ret0;

 L4956: ATTRIBUTE_UNUSED_LABEL
  if (
#line 319 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 619;  /* mips_prepend */
    }
  goto ret0;

 L6710: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 347)
    goto L4423;
  goto ret0;

 L4423: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4424;
    }
  goto ret0;

 L4424: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4425;
    }
  goto ret0;

 L4425: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 183)
    goto L4426;
  goto ret0;

 L4426: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 182
      && 
#line 679 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 567;  /* mips_insv */
    }
  goto ret0;

 L6714: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 367)
    goto L4636;
  goto ret0;

 L4636: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (const_uimm6_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4637;
    }
  goto ret0;

 L4637: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 182)
    goto L4638;
  goto ret0;

 L4638: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 183)
    goto L4639;
  goto ret0;

 L4639: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 184)
    goto L4640;
  goto ret0;

 L4640: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4641;
  goto ret0;

 L4641: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 5);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186)
    goto L4642;
  goto ret0;

 L4642: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 6);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 187
      && 
#line 1004 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 591;  /* mips_rddsp */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_6 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case MEM:
      goto L1899;
    case UNSPEC:
      goto L6671;
    case UNSPEC_VOLATILE:
      goto L6673;
    case ASHIFT:
      goto L2521;
    case ASHIFTRT:
      goto L2527;
    case LSHIFTRT:
      goto L2533;
    case ROTATERT:
      goto L2620;
    case EQ:
      goto L2745;
    case NE:
      goto L2765;
    case GT:
      goto L2775;
    case GE:
      goto L2799;
    case LT:
      goto L2809;
    case LE:
      goto L2833;
    case GTU:
      goto L2857;
    case GEU:
      goto L2881;
    case LTU:
      goto L2891;
    case LEU:
      goto L2915;
    case IF_THEN_ELSE:
      goto L3350;
    case ZERO_EXTEND:
      goto L4646;
    case SIGN_EXTEND:
      goto L4654;
    case PLUS:
      goto L5656;
    case MINUS:
      goto L5674;
    case SMIN:
      goto L5682;
    case SMAX:
      goto L5688;
    case BSWAP:
      goto L5704;
    default:
     break;
   }
  goto ret0;

 L1899: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1900;
  goto ret0;

 L1900: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L6699;
  goto ret0;

 L6699: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == MULT)
    goto L1901;
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4664;
    }
  goto ret0;

 L1901: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1902;
    }
  goto ret0;

 L1902: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L1903;
  goto ret0;

 L1903: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1904;
    }
  goto ret0;

 L1904: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3806 "../../gcc/config/mips/mips.md"
(ISA_HAS_LWXS))
    {
      return 234;  /* *lwxs */
    }
  goto ret0;

 L4664: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4665;
    }
  goto ret0;

 L4665: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1039 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 594;  /* mips_lwx */
    }
  goto ret0;

 L6671: ATTRIBUTE_UNUSED_LABEL
  return recog_5 (x0, insn, pnum_clobbers);

 L6673: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L6730;
    case 1:
      goto L6731;
    default:
      break;
    }
  goto ret0;

 L6730: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 22)
    goto L2099;
  goto ret0;

 L2099: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L2100;
 L2123: ATTRIBUTE_UNUSED_LABEL
  if (symbol_ref_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2124;
    }
  goto ret0;

 L2100: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2101;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L2123;

 L2101: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4338 "../../gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 273;  /* loadgp_newabi_si */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L2123;

 L2124: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (symbol_ref_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2125;
    }
  goto ret0;

 L2125: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4383 "../../gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 278;  /* loadgp_rtp_si */
    }
  goto ret0;

 L6731: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 22)
    goto L2111;
  goto ret0;

 L2111: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L2112;

 L2112: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4355 "../../gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 275;  /* loadgp_absolute_si */
    }
  goto ret0;

 L2521: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2522;
    }
  goto ret0;

 L2522: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2523;
    }
  goto ret0;

 L2523: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4748 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 326;  /* *ashlsi3 */
    }
 L2580: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4778 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 335;  /* *ashlsi3_mips16 */
    }
  goto ret0;

 L2527: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2528;
    }
  goto ret0;

 L2528: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2529;
    }
  goto ret0;

 L2529: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4748 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 327;  /* *ashrsi3 */
    }
 L2586: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4778 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 336;  /* *ashrsi3_mips16 */
    }
  goto ret0;

 L2533: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L6732;
  goto ret0;

 L6732: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2534;
    }
 L6733: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2615;
    }
  goto ret0;

 L2534: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2535;
    }
  x2 = XEXP (x1, 0);
  goto L6733;

 L2535: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4748 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 328;  /* *lshrsi3 */
    }
 L2592: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4778 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 337;  /* *lshrsi3_mips16 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L6733;

 L2615: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2616;
    }
  goto ret0;

 L2616: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4881 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 341;  /* *mips.md:4877 */
    }
  goto ret0;

 L2620: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2621;
    }
  goto ret0;

 L2621: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2622;
    }
  goto ret0;

 L2622: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4895 "../../gcc/config/mips/mips.md"
(ISA_HAS_ROR))
    {
      return 342;  /* rotrsi3 */
    }
  goto ret0;

 L2745: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2746;
    }
  goto ret0;

 L2746: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L6734;
  goto ret0;

 L6734: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 0L)
    goto L6736;
  goto ret0;

 L6736: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5125 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 356;  /* *seq_si */
    }
 L6737: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5134 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 358;  /* *seq_si_mips16 */
    }
  goto ret0;

 L2765: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2766;
    }
  goto ret0;

 L2766: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 5153 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 360;  /* *sne_si */
    }
  goto ret0;

 L2775: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2776;
    }
  goto ret0;

 L2776: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2777;
    }
 L2788: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2789;
    }
  goto ret0;

 L2777: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5169 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 362;  /* *sgt_si */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2788;

 L2789: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5178 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 364;  /* *sgt_si_mips16 */
    }
  goto ret0;

 L2799: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2800;
    }
  goto ret0;

 L2800: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 5194 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 366;  /* *sge_si */
    }
  goto ret0;

 L2809: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2810;
    }
  goto ret0;

 L2810: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2811;
    }
  goto ret0;

 L2811: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5210 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 368;  /* *slt_si */
    }
 L2823: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5219 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 370;  /* *slt_si_mips16 */
    }
  goto ret0;

 L2833: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2834;
    }
  goto ret0;

 L2834: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sle_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2835;
    }
  goto ret0;

 L2835: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5240 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 372;  /* *sle_si */
    }
 L2847: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5252 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 374;  /* *sle_si_mips16 */
    }
  goto ret0;

 L2857: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2858;
    }
  goto ret0;

 L2858: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2859;
    }
 L2870: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2871;
    }
  goto ret0;

 L2859: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5274 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 376;  /* *sgtu_si */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2870;

 L2871: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5283 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 378;  /* *sgtu_si_mips16 */
    }
  goto ret0;

 L2881: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2882;
    }
  goto ret0;

 L2882: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 5299 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 380;  /* *sge_si */
    }
  goto ret0;

 L2891: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2892;
    }
  goto ret0;

 L2892: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2893;
    }
  goto ret0;

 L2893: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5315 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 382;  /* *sltu_si */
    }
 L2905: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5324 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 384;  /* *sltu_si_mips16 */
    }
  goto ret0;

 L2915: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2916;
    }
  goto ret0;

 L2916: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sleu_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2917;
    }
  goto ret0;

 L2917: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5345 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 386;  /* *sleu_si */
    }
 L2929: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5357 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 388;  /* *sleu_si_mips16 */
    }
  goto ret0;

 L3350: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L6738;
    case DImode:
      goto L6739;
    case CCmode:
      goto L6740;
    default:
      break;
    }
  goto ret0;

 L6738: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L3351;
    }
  goto ret0;

 L3351: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3352;
    }
  goto ret0;

 L3352: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3353;
  goto ret0;

 L3353: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3354;
    }
  goto ret0;

 L3354: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3355;
    }
  goto ret0;

 L3355: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6091 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE))
    {
      return 444;  /* *movsi_on_si */
    }
  goto ret0;

 L6739: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L3369;
    }
  goto ret0;

 L3369: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3370;
    }
  goto ret0;

 L3370: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3371;
  goto ret0;

 L3371: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3372;
    }
  goto ret0;

 L3372: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3373;
    }
  goto ret0;

 L3373: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6091 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE) && 
#line 498 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 446;  /* *movsi_on_di */
    }
  goto ret0;

 L6740: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, CCmode))
    {
      operands[4] = x2;
      goto L3387;
    }
  goto ret0;

 L3387: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[1] = x3;
      goto L3388;
    }
  goto ret0;

 L3388: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3389;
  goto ret0;

 L3389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3390;
    }
  goto ret0;

 L3390: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3391;
    }
  goto ret0;

 L3391: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6091 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE) && 
#line 498 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 448;  /* *movsi_on_cc */
    }
  goto ret0;

 L4646: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == MEM)
    goto L4647;
  goto ret0;

 L4647: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L4648;
  goto ret0;

 L4648: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4649;
    }
  goto ret0;

 L4649: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4650;
    }
  goto ret0;

 L4650: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1017 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 592;  /* mips_lbux */
    }
  goto ret0;

 L4654: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MEM)
    goto L4655;
  goto ret0;

 L4655: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L4656;
  goto ret0;

 L4656: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4657;
    }
  goto ret0;

 L4657: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4658;
    }
  goto ret0;

 L4658: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1029 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 593;  /* mips_lhx */
    }
  goto ret0;

 L5656: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MULT)
    goto L5657;
  goto ret0;

 L5657: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5658;
    }
  goto ret0;

 L5658: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5659;
    }
  goto ret0;

 L5659: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 29 "../../gcc/config/mips/allegrex.md"
(TARGET_ALLEGREX)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 698;  /* allegrex_madd */
    }
  goto ret0;

 L5674: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L5675;
  goto ret0;

 L5675: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MULT)
    goto L5676;
  goto ret0;

 L5676: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5677;
    }
  goto ret0;

 L5677: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5678;
    }
  goto ret0;

 L5678: ATTRIBUTE_UNUSED_LABEL
  if (
#line 40 "../../gcc/config/mips/allegrex.md"
(TARGET_ALLEGREX)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 699;  /* allegrex_msub */
    }
  goto ret0;

 L5682: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5683;
    }
  goto ret0;

 L5683: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5684;
    }
  goto ret0;

 L5684: ATTRIBUTE_UNUSED_LABEL
  if (
#line 52 "../../gcc/config/mips/allegrex.md"
(TARGET_ALLEGREX))
    {
      return 700;  /* sminsi3 */
    }
  goto ret0;

 L5688: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5689;
    }
  goto ret0;

 L5689: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5690;
    }
  goto ret0;

 L5690: ATTRIBUTE_UNUSED_LABEL
  if (
#line 61 "../../gcc/config/mips/allegrex.md"
(TARGET_ALLEGREX))
    {
      return 701;  /* smaxsi3 */
    }
  goto ret0;

 L5704: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5705;
    }
  goto ret0;

 L5705: ATTRIBUTE_UNUSED_LABEL
  if (
#line 90 "../../gcc/config/mips/allegrex.md"
(TARGET_ALLEGREX))
    {
      return 704;  /* bswapsi2 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_7 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L40;
    case SIGN_EXTEND:
      goto L58;
    case MINUS:
      goto L95;
    case MULT:
      goto L179;
    case NEG:
      goto L547;
    case TRUNCATE:
      goto L755;
    case CLZ:
      goto L1137;
    case NOT:
      goto L1170;
    case AND:
      goto L1181;
    case IOR:
      goto L1205;
    case XOR:
      goto L1229;
    case ZERO_EXTEND:
      goto L1352;
    case FIX:
      goto L1577;
    case ZERO_EXTRACT:
      goto L1614;
    case UNSPEC:
      goto L6801;
    case HIGH:
      goto L1685;
    case LO_SUM:
      goto L1717;
    case UNSPEC_VOLATILE:
      goto L6809;
    case ASHIFT:
      goto L2539;
    case ASHIFTRT:
      goto L2545;
    case LSHIFTRT:
      goto L2551;
    case ROTATERT:
      goto L2626;
    case EQ:
      goto L2750;
    case NE:
      goto L2770;
    case GT:
      goto L2781;
    case GE:
      goto L2804;
    case LT:
      goto L2815;
    case LE:
      goto L2839;
    case GTU:
      goto L2863;
    case GEU:
      goto L2886;
    case LTU:
      goto L2897;
    case LEU:
      goto L2921;
    case IF_THEN_ELSE:
      goto L3359;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L6764;
    default:
      goto L6766;
   }
 L6764: ATTRIBUTE_UNUSED_LABEL
  if (absolute_symbolic_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L1697;
    }
 L6766: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L1727;
    }
  goto ret0;

 L40: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L6823;
  goto ret0;

 L6823: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L808;
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L41;
    }
  goto ret0;

 L808: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L6824;
  goto ret0;

 L6824: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L809;
    case ZERO_EXTEND:
      goto L819;
    default:
     break;
   }
  goto ret0;

 L809: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L810;
    }
  goto ret0;

 L810: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L811;
  goto ret0;

 L811: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L812;
    }
  goto ret0;

 L812: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L813;
    }
  goto ret0;

 L813: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1841 "../../gcc/config/mips/mips.md"
((TARGET_MAD || ISA_HAS_MACC || GENERATE_MADD_MSUB || ISA_HAS_DSPR2 || TARGET_ALLEGREX)
   && !TARGET_64BIT))
    {
      return 57;  /* maddsidi4 */
    }
  goto ret0;

 L819: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L820;
    }
  goto ret0;

 L820: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L821;
  goto ret0;

 L821: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L822;
    }
  goto ret0;

 L822: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L823;
    }
  goto ret0;

 L823: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1841 "../../gcc/config/mips/mips.md"
((TARGET_MAD || ISA_HAS_MACC || GENERATE_MADD_MSUB || ISA_HAS_DSPR2 || TARGET_ALLEGREX)
   && !TARGET_64BIT))
    {
      return 58;  /* umaddsidi4 */
    }
  goto ret0;

 L41: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L42;
    }
  goto ret0;

 L42: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 810 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 7;  /* *adddi3 */
    }
 L54: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 821 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 9;  /* *adddi3_mips16 */
    }
  goto ret0;

 L58: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L6826;
    case QImode:
      goto L6828;
    case HImode:
      goto L6829;
    default:
      break;
    }
  goto ret0;

 L6826: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L59;
    case MINUS:
      goto L102;
    case ASHIFT:
      goto L2558;
    case ASHIFTRT:
      goto L2565;
    case LSHIFTRT:
      goto L2572;
    case REG:
    case SUBREG:
    case MEM:
      goto L6830;
    default:
      goto ret0;
   }
 L6830: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1457;
    }
  goto ret0;

 L59: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L60;
    }
  goto ret0;

 L60: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L61;
    }
  goto ret0;

 L61: ATTRIBUTE_UNUSED_LABEL
  if (
#line 978 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 10;  /* *addsi3_extended */
    }
 L68: ATTRIBUTE_UNUSED_LABEL
  if (
#line 992 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16))
    {
      return 11;  /* *addsi3_extended_mips16 */
    }
  goto ret0;

 L102: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L103;
    }
  goto ret0;

 L103: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L104;
    }
  goto ret0;

 L104: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1032 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 17;  /* *subsi3_extended */
    }
  goto ret0;

 L2558: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2559;
    }
  goto ret0;

 L2559: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2560;
    }
  goto ret0;

 L2560: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4764 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 332;  /* *ashlsi3_extend */
    }
  goto ret0;

 L2565: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2566;
    }
  goto ret0;

 L2566: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2567;
    }
  goto ret0;

 L2567: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4764 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 333;  /* *ashrsi3_extend */
    }
  goto ret0;

 L2572: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2573;
    }
  goto ret0;

 L2573: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2574;
    }
  goto ret0;

 L2574: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4764 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 334;  /* *lshrsi3_extend */
    }
  goto ret0;

 L1457: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2644 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 157;  /* extendsidi2 */
    }
  goto ret0;

 L6828: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1323;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1467;
    }
  goto ret0;

 L1323: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1324;
    }
  goto ret0;

 L1324: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2437 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 132;  /* *extenddi_truncateqi */
    }
  goto ret0;

 L1467: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2665 "../../gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 159;  /* *extendqidi2_mips16e */
    }
 L1487: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2676 "../../gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 163;  /* *extendqidi2 */
    }
 L1507: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2696 "../../gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 167;  /* *extendqidi2_seb */
    }
  goto ret0;

 L6829: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1329;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1477;
    }
  goto ret0;

 L1329: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1330;
    }
  goto ret0;

 L1330: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2437 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 133;  /* *extenddi_truncatehi */
    }
  goto ret0;

 L1477: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2665 "../../gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 161;  /* *extendhidi2_mips16e */
    }
 L1497: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2676 "../../gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 165;  /* *extendhidi2 */
    }
 L1517: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2696 "../../gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 169;  /* *extendhidi2_seh */
    }
  goto ret0;

 L95: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L6836;
  goto ret0;

 L6836: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L96;
    }
 L6837: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L566;
    }
  goto ret0;

 L96: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L97;
    }
  x2 = XEXP (x1, 0);
  goto L6837;

 L97: ATTRIBUTE_UNUSED_LABEL
  if (
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 16;  /* subdi3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L6837;

 L566: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MULT)
    goto L567;
  goto ret0;

 L567: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L6838;
  goto ret0;

 L6838: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L568;
    case ZERO_EXTEND:
      goto L578;
    default:
     break;
   }
  goto ret0;

 L568: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L569;
    }
  goto ret0;

 L569: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L570;
  goto ret0;

 L570: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L571;
    }
  goto ret0;

 L571: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1722 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && (ISA_HAS_MSAC || GENERATE_MADD_MSUB || ISA_HAS_DSPR2 || TARGET_ALLEGREX)))
    {
      return 46;  /* msubsidi4 */
    }
  goto ret0;

 L578: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L579;
    }
  goto ret0;

 L579: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L580;
  goto ret0;

 L580: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L581;
    }
  goto ret0;

 L581: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1722 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && (ISA_HAS_MSAC || GENERATE_MADD_MSUB || ISA_HAS_DSPR2 || TARGET_ALLEGREX)))
    {
      return 47;  /* umsubsidi4 */
    }
  goto ret0;

 L179: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L6841;
  goto ret0;

 L6841: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L416;
    case ZERO_EXTEND:
      goto L424;
    case REG:
    case SUBREG:
      goto L6840;
    default:
      goto ret0;
   }
 L6840: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L180;
    }
  goto ret0;

 L416: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L417;
    }
  goto ret0;

 L417: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L418;
  goto ret0;

 L418: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L419;
    }
  goto ret0;

 L419: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1625 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_FIX_R4000 && !ISA_HAS_DSPR2))
    {
      return 36;  /* mulsidi3_32bit_internal */
    }
 L446: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1635 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 38;  /* mulsidi3_32bit_r4000 */
    }
 L488: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1648 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 40;  /* *mulsidi3_64bit */
    }
 L4921: ATTRIBUTE_UNUSED_LABEL
  if (
#line 258 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 614;  /* mips_mult */
    }
  goto ret0;

 L424: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L425;
    }
  goto ret0;

 L425: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L426;
  goto ret0;

 L426: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L427;
    }
  goto ret0;

 L427: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1625 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_FIX_R4000 && !ISA_HAS_DSPR2))
    {
      return 37;  /* umulsidi3_32bit_internal */
    }
 L465: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1635 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 39;  /* umulsidi3_32bit_r4000 */
    }
 L511: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1648 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 41;  /* *umulsidi3_64bit */
    }
 L4929: ATTRIBUTE_UNUSED_LABEL
  if (
#line 268 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 615;  /* mips_multu */
    }
  goto ret0;

 L180: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L181;
    }
  goto ret0;

 L181: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1206 "../../gcc/config/mips/mips.md"
(!TARGET_FIX_R4000) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 25;  /* muldi3_internal */
    }
 L215: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1217 "../../gcc/config/mips/mips.md"
(TARGET_FIX_R4000) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 27;  /* muldi3_r4000 */
    }
  goto ret0;

 L547: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L6843;
  goto ret0;

 L6843: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L548;
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1147;
    }
  goto ret0;

 L548: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L6845;
  goto ret0;

 L6845: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L549;
    case ZERO_EXTEND:
      goto L558;
    default:
     break;
   }
  goto ret0;

 L549: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L550;
    }
  goto ret0;

 L550: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L551;
  goto ret0;

 L551: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L552;
    }
  goto ret0;

 L552: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1710 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MULS))
    {
      return 44;  /* *muls_di */
    }
  goto ret0;

 L558: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L559;
    }
  goto ret0;

 L559: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L560;
  goto ret0;

 L560: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L561;
    }
  goto ret0;

 L561: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1710 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MULS))
    {
      return 45;  /* *mulsu_di */
    }
  goto ret0;

 L1147: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2178 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 102;  /* negdi2 */
    }
  goto ret0;

 L755: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L756;
  goto ret0;

 L756: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == MULT)
    goto L757;
  goto ret0;

 L757: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == TImode)
    goto L6847;
  goto ret0;

 L6847: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L758;
    case ZERO_EXTEND:
      goto L782;
    default:
     break;
   }
  goto ret0;

 L758: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[1] = x5;
      goto L759;
    }
  goto ret0;

 L759: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L760;
  goto ret0;

 L760: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[2] = x5;
      goto L761;
    }
  goto ret0;

 L761: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (64)]
      && 
#line 1815 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 54;  /* smuldi3_highpart */
    }
  goto ret0;

 L782: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[1] = x5;
      goto L783;
    }
  goto ret0;

 L783: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L784;
  goto ret0;

 L784: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[2] = x5;
      goto L785;
    }
  goto ret0;

 L785: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (64)]
      && 
#line 1815 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 55;  /* umuldi3_highpart */
    }
  goto ret0;

 L1137: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1138;
    }
  goto ret0;

 L1138: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2124 "../../gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 100;  /* clzdi2 */
    }
  goto ret0;

 L1170: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1171;
    }
  goto ret0;

 L1171: ATTRIBUTE_UNUSED_LABEL
  if (
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 107;  /* one_cmpldi2 */
    }
  goto ret0;

 L1181: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L6850;
  goto ret0;

 L6850: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L1256;
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1182;
    }
 L6851: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1382;
    }
  goto ret0;

 L1256: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1257;
    }
  goto ret0;

 L1257: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == NOT)
    goto L1258;
  goto ret0;

 L1258: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1259;
    }
  goto ret0;

 L1259: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2338 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 121;  /* *nordi3 */
    }
  goto ret0;

 L1182: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1183;
    }
 L1194: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1195;
    }
  x2 = XEXP (x1, 0);
  goto L6851;

 L1183: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2252 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 109;  /* *anddi3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1194;

 L1195: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2263 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 111;  /* *anddi3_mips16 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L6851;

 L1382: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 4294967295L
      && 
#line 2531 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 142;  /* *clear_upper32 */
    }
  goto ret0;

 L1205: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1206;
    }
  goto ret0;

 L1206: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1207;
    }
 L1218: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1219;
    }
  goto ret0;

 L1207: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2282 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 113;  /* *iordi3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1218;

 L1219: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2293 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 115;  /* *iordi3_mips16 */
    }
  goto ret0;

 L1229: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1230;
    }
  goto ret0;

 L1230: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1231;
    }
  goto ret0;

 L1231: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2309 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 117;  /* *mips.md:2305 */
    }
 L1243: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2320 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 119;  /* *mips.md:2316 */
    }
  goto ret0;

 L1352: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L6852;
    case QImode:
      goto L6853;
    case SImode:
      goto L6854;
    default:
      break;
    }
  goto ret0;

 L6852: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1353;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1402;
    }
 L6858: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1422;
    }
 L6860: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1442;
    }
  goto ret0;

 L1353: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1354;
    }
  goto ret0;

 L1354: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2475 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 137;  /* *zero_extenddi_trunchi */
    }
  goto ret0;

 L1402: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2569 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 146;  /* *zero_extendhidi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L6858;

 L1422: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2579 "../../gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 150;  /* *zero_extendhidi2_mips16e */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L6860;

 L1442: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2587 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 154;  /* *zero_extendhidi2_mips16 */
    }
  goto ret0;

 L6853: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1365;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1392;
    }
 L6857: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1412;
    }
 L6859: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1432;
    }
  goto ret0;

 L1365: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1366;
    }
  goto ret0;

 L1366: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2484 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 139;  /* *zero_extenddi_truncqi */
    }
  goto ret0;

 L1392: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2569 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 144;  /* *zero_extendqidi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L6857;

 L1412: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2579 "../../gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 148;  /* *zero_extendqidi2_mips16e */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L6859;

 L1432: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2587 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 152;  /* *zero_extendqidi2_mips16 */
    }
  goto ret0;

 L6854: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1377;
    }
  goto ret0;

 L1377: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2510 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 141;  /* zero_extendsidi2 */
    }
  goto ret0;

 L1577: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L6861;
    case SFmode:
      goto L6862;
    default:
      break;
    }
  goto ret0;

 L6861: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1578;
    }
  goto ret0;

 L1578: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2846 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 178;  /* fix_truncdfdi2 */
    }
  goto ret0;

 L6862: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1583;
    }
  goto ret0;

 L1583: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2857 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 179;  /* fix_truncsfdi2 */
    }
  goto ret0;

 L1614: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1615;
    }
  goto ret0;

 L1615: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1616;
    }
  goto ret0;

 L1616: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1617;
    }
  goto ret0;

 L1617: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3134 "../../gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),
		       INTVAL (operands[3]))) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 185;  /* extzvdi */
    }
  goto ret0;

 L6801: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L6863;
    case 3:
      goto L6864;
    case 1:
      goto L6867;
    default:
      break;
    }
  goto ret0;

 L6863: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 18L:
      goto L1641;
    case 24L:
      goto L1747;
    case 26L:
      goto L1969;
    case 1L:
      goto L2013;
    case 32L:
      goto L2061;
    case 364L:
      goto L4586;
    default:
      break;
    }
  goto ret0;

 L1641: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L1642;
    }
  goto ret0;

 L1642: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1643;
    }
  goto ret0;

 L1643: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3195 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 189;  /* mov_ldl */
    }
  goto ret0;

 L1747: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1748;
    }
  goto ret0;

 L1748: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1749;
    }
  goto ret0;

 L1749: ATTRIBUTE_UNUSED_LABEL
  if (
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    {
      return 207;  /* load_gotdi */
    }
  goto ret0;

 L1969: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1970;
    }
  goto ret0;

 L1970: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1971;
    }
  goto ret0;

 L1971: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4208 "../../gcc/config/mips/mips.md"
(!ISA_HAS_MACCHI) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 250;  /* *mfhilo_di */
    }
 L1983: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4218 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACCHI) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 252;  /* *mfhilo_di_macc */
    }
  goto ret0;

 L2013: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2014;
    }
  goto ret0;

 L2014: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2015;
    }
  goto ret0;

 L2015: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4280 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 524 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 258;  /* load_highdi */
    }
  goto ret0;

 L2061: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2062;
    }
  goto ret0;

 L2062: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2063;
    }
  goto ret0;

 L2063: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4310 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 524 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 266;  /* mthc1di */
    }
  goto ret0;

 L4586: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4587;
    }
  goto ret0;

 L4587: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4588;
    }
  goto ret0;

 L4588: ATTRIBUTE_UNUSED_LABEL
  if (
#line 942 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 588;  /* mips_shilo */
    }
  goto ret0;

 L6864: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 19L:
      goto L1654;
    case 23L:
      goto L3140;
    case 333L:
      goto L4273;
    case 334L:
      goto L4280;
    case 335L:
      goto L4287;
    case 336L:
      goto L4294;
    case 410L:
      goto L4771;
    case 411L:
      goto L4778;
    case 421L:
      goto L4910;
    case 443L:
      goto L5060;
    case 444L:
      goto L5067;
    default:
      break;
    }
  goto ret0;

 L1654: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L1655;
    }
  goto ret0;

 L1655: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1656;
    }
  goto ret0;

 L1656: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L1657;
    }
  goto ret0;

 L1657: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3206 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 191;  /* mov_ldr */
    }
  goto ret0;

 L3140: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3141;
    }
  goto ret0;

 L3141: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3142;
    }
  goto ret0;

 L3142: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 79
      && (
#line 5749 "../../gcc/config/mips/mips.md"
(TARGET_USE_GOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 425;  /* load_calldi */
    }
  goto ret0;

 L4273: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4274;
    }
  goto ret0;

 L4274: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L4275;
    }
  goto ret0;

 L4275: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V4QImode))
    {
      operands[3] = x2;
      goto L4276;
    }
  goto ret0;

 L4276: ATTRIBUTE_UNUSED_LABEL
  if (
#line 479 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 553;  /* mips_dpau_h_qbl */
    }
  goto ret0;

 L4280: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4281;
    }
  goto ret0;

 L4281: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L4282;
    }
  goto ret0;

 L4282: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V4QImode))
    {
      operands[3] = x2;
      goto L4283;
    }
  goto ret0;

 L4283: ATTRIBUTE_UNUSED_LABEL
  if (
#line 490 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 554;  /* mips_dpau_h_qbr */
    }
  goto ret0;

 L4287: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4288;
    }
  goto ret0;

 L4288: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L4289;
    }
  goto ret0;

 L4289: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V4QImode))
    {
      operands[3] = x2;
      goto L4290;
    }
  goto ret0;

 L4290: ATTRIBUTE_UNUSED_LABEL
  if (
#line 502 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 555;  /* mips_dpsu_h_qbl */
    }
  goto ret0;

 L4294: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4295;
    }
  goto ret0;

 L4295: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L4296;
    }
  goto ret0;

 L4296: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V4QImode))
    {
      operands[3] = x2;
      goto L4297;
    }
  goto ret0;

 L4297: ATTRIBUTE_UNUSED_LABEL
  if (
#line 513 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 556;  /* mips_dpsu_h_qbr */
    }
  goto ret0;

 L4771: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4772;
    }
  goto ret0;

 L4772: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L4773;
    }
  goto ret0;

 L4773: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[3] = x2;
      goto L4774;
    }
  goto ret0;

 L4774: ATTRIBUTE_UNUSED_LABEL
  if (
#line 141 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 606;  /* mips_dpa_w_ph */
    }
  goto ret0;

 L4778: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4779;
    }
  goto ret0;

 L4779: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L4780;
    }
  goto ret0;

 L4780: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[3] = x2;
      goto L4781;
    }
  goto ret0;

 L4781: ATTRIBUTE_UNUSED_LABEL
  if (
#line 152 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 607;  /* mips_dps_w_ph */
    }
  goto ret0;

 L4910: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4911;
    }
  goto ret0;

 L4911: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L4912;
    }
  goto ret0;

 L4912: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[3] = x2;
      goto L4913;
    }
  goto ret0;

 L4913: ATTRIBUTE_UNUSED_LABEL
  if (
#line 248 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 613;  /* mips_mulsa_w_ph */
    }
  goto ret0;

 L5060: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5061;
    }
  goto ret0;

 L5061: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L5062;
    }
  goto ret0;

 L5062: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[3] = x2;
      goto L5063;
    }
  goto ret0;

 L5063: ATTRIBUTE_UNUSED_LABEL
  if (
#line 515 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 635;  /* mips_dpax_w_ph */
    }
  goto ret0;

 L5067: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5068;
    }
  goto ret0;

 L5068: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L5069;
    }
  goto ret0;

 L5069: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[3] = x2;
      goto L5070;
    }
  goto ret0;

 L5070: ATTRIBUTE_UNUSED_LABEL
  if (
#line 526 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 636;  /* mips_dpsx_w_ph */
    }
  goto ret0;

 L6867: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 0L:
      goto L1992;
    case 31L:
      goto L2094;
    default:
      break;
    }
  goto ret0;

 L1992: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1993;
    }
  goto ret0;

 L1993: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4265 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 524 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 254;  /* load_lowdi */
    }
  goto ret0;

 L2094: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L2095;
    }
  goto ret0;

 L2095: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4320 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 526 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64)))
    {
      return 272;  /* mfhc1tf */
    }
  goto ret0;

 L1685: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L6882;
  goto ret0;

 L6882: ATTRIBUTE_UNUSED_LABEL
  if (absolute_symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1686;
    }
 L6883: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1707;
    }
 L6884: ATTRIBUTE_UNUSED_LABEL
  if (got_page_ofst_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1737;
    }
  goto ret0;

 L1686: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3250 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS))
    {
      return 196;  /* *lea_high64 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L6883;

 L1707: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3340 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 199;  /* *xgot_hidi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L6884;

 L1737: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3387 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 205;  /* *got_pagedi */
    }
  goto ret0;

 L1717: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1718;
    }
  goto ret0;

 L1718: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (got_disp_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1719;
    }
 L1760: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1761;
    }
  goto ret0;

 L1719: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3356 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 201;  /* *xgot_lodi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1760;

 L1761: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3422 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 209;  /* *lowdi */
    }
 L1773: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3431 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 211;  /* *lowdi_mips16 */
    }
  goto ret0;

 L6809: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L6885;
    case 1:
      goto L6886;
    default:
      break;
    }
  goto ret0;

 L6885: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 22)
    goto L2105;
  goto ret0;

 L2105: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L2106;
 L2129: ATTRIBUTE_UNUSED_LABEL
  if (symbol_ref_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2130;
    }
  goto ret0;

 L2106: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2107;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L2129;

 L2107: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4338 "../../gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 274;  /* loadgp_newabi_di */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L2129;

 L2130: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (symbol_ref_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2131;
    }
  goto ret0;

 L2131: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4383 "../../gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 279;  /* loadgp_rtp_di */
    }
  goto ret0;

 L6886: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 22)
    goto L2116;
  goto ret0;

 L2116: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L2117;

 L2117: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4355 "../../gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 276;  /* loadgp_absolute_di */
    }
  goto ret0;

 L2539: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2540;
    }
  goto ret0;

 L2540: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2541;
    }
  goto ret0;

 L2541: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4748 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 329;  /* *ashldi3 */
    }
 L2598: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4800 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16))
    {
      return 338;  /* *ashldi3_mips16 */
    }
  goto ret0;

 L2545: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2546;
    }
  goto ret0;

 L2546: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2547;
    }
  goto ret0;

 L2547: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4748 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 330;  /* *ashrdi3 */
    }
 L2604: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4820 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16))
    {
      return 339;  /* *ashrdi3_mips16 */
    }
  goto ret0;

 L2551: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2552;
    }
  goto ret0;

 L2552: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2553;
    }
  goto ret0;

 L2553: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4748 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 331;  /* *lshrdi3 */
    }
 L2610: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4839 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16))
    {
      return 340;  /* *lshrdi3_mips16 */
    }
  goto ret0;

 L2626: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2627;
    }
  goto ret0;

 L2627: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2628;
    }
  goto ret0;

 L2628: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4895 "../../gcc/config/mips/mips.md"
(ISA_HAS_ROR) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 343;  /* rotrdi3 */
    }
  goto ret0;

 L2750: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2751;
    }
  goto ret0;

 L2751: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L6887;
  goto ret0;

 L6887: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 0L)
    goto L6889;
  goto ret0;

 L6889: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5125 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 357;  /* *seq_di */
    }
 L6890: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5134 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 359;  /* *seq_di_mips16 */
    }
  goto ret0;

 L2770: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2771;
    }
  goto ret0;

 L2771: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 5153 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 361;  /* *sne_di */
    }
  goto ret0;

 L2781: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2782;
    }
  goto ret0;

 L2782: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2783;
    }
 L2794: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2795;
    }
  goto ret0;

 L2783: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5169 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 363;  /* *sgt_di */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2794;

 L2795: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5178 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 365;  /* *sgt_di_mips16 */
    }
  goto ret0;

 L2804: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2805;
    }
  goto ret0;

 L2805: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && (
#line 5194 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 367;  /* *sge_di */
    }
  goto ret0;

 L2815: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2816;
    }
  goto ret0;

 L2816: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2817;
    }
  goto ret0;

 L2817: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5210 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 369;  /* *slt_di */
    }
 L2829: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5219 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 371;  /* *slt_di_mips16 */
    }
  goto ret0;

 L2839: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2840;
    }
  goto ret0;

 L2840: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sle_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2841;
    }
  goto ret0;

 L2841: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5240 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 373;  /* *sle_di */
    }
 L2853: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5252 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 375;  /* *sle_di_mips16 */
    }
  goto ret0;

 L2863: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2864;
    }
  goto ret0;

 L2864: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2865;
    }
 L2876: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2877;
    }
  goto ret0;

 L2865: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5274 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 377;  /* *sgtu_di */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2876;

 L2877: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5283 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 379;  /* *sgtu_di_mips16 */
    }
  goto ret0;

 L2886: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2887;
    }
  goto ret0;

 L2887: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && (
#line 5299 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 381;  /* *sge_di */
    }
  goto ret0;

 L2897: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2898;
    }
  goto ret0;

 L2898: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2899;
    }
  goto ret0;

 L2899: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5315 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 383;  /* *sltu_di */
    }
 L2911: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5324 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 385;  /* *sltu_di_mips16 */
    }
  goto ret0;

 L2921: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2922;
    }
  goto ret0;

 L2922: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sleu_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2923;
    }
  goto ret0;

 L2923: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5345 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 387;  /* *sleu_di */
    }
 L2935: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5357 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 389;  /* *sleu_di_mips16 */
    }
  goto ret0;

 L3359: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L6891;
    case DImode:
      goto L6892;
    case CCmode:
      goto L6893;
    default:
      break;
    }
  goto ret0;

 L6891: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L3360;
    }
  goto ret0;

 L3360: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3361;
    }
  goto ret0;

 L3361: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3362;
  goto ret0;

 L3362: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3363;
    }
  goto ret0;

 L3363: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L3364;
    }
  goto ret0;

 L3364: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6091 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 445;  /* *movdi_on_si */
    }
  goto ret0;

 L6892: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L3378;
    }
  goto ret0;

 L3378: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3379;
    }
  goto ret0;

 L3379: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3380;
  goto ret0;

 L3380: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3381;
    }
  goto ret0;

 L3381: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L3382;
    }
  goto ret0;

 L3382: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 6091 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE) && 
#line 498 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 447;  /* *movdi_on_di */
    }
  goto ret0;

 L6893: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, CCmode))
    {
      operands[4] = x2;
      goto L3396;
    }
  goto ret0;

 L3396: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[1] = x3;
      goto L3397;
    }
  goto ret0;

 L3397: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3398;
  goto ret0;

 L3398: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3399;
    }
  goto ret0;

 L3399: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L3400;
    }
  goto ret0;

 L3400: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 6091 "../../gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE) && 
#line 498 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 449;  /* *movdi_on_cc */
    }
  goto ret0;

 L1697: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3304 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 197;  /* *lea64 */
    }
  x1 = XEXP (x0, 1);
  goto L6766;

 L1727: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3370 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 203;  /* *got_dispdi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_8 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case UNORDERED:
      goto L2939;
    case UNEQ:
      goto L2945;
    case UNLT:
      goto L2951;
    case UNLE:
      goto L2957;
    case EQ:
      goto L2963;
    case LT:
      goto L2969;
    case LE:
      goto L2975;
    case GE:
      goto L3023;
    case GT:
      goto L3029;
    case UNGE:
      goto L3035;
    case UNGT:
      goto L3041;
    case UNSPEC:
      goto L6927;
    default:
     break;
   }
  goto ret0;

 L2939: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L6928;
    case DFmode:
      goto L6929;
    default:
      break;
    }
  goto ret0;

 L6928: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2940;
    }
  goto ret0;

 L2940: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2941;
    }
  goto ret0;

 L2941: ATTRIBUTE_UNUSED_LABEL
  if (
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 390;  /* sunordered_sf */
    }
  goto ret0;

 L6929: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2982;
    }
  goto ret0;

 L2982: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2983;
    }
  goto ret0;

 L2983: ATTRIBUTE_UNUSED_LABEL
  if (
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 397;  /* sunordered_df */
    }
  goto ret0;

 L2945: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L6930;
    case DFmode:
      goto L6931;
    default:
      break;
    }
  goto ret0;

 L6930: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2946;
    }
  goto ret0;

 L2946: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2947;
    }
  goto ret0;

 L2947: ATTRIBUTE_UNUSED_LABEL
  if (
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 391;  /* suneq_sf */
    }
  goto ret0;

 L6931: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2988;
    }
  goto ret0;

 L2988: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2989;
    }
  goto ret0;

 L2989: ATTRIBUTE_UNUSED_LABEL
  if (
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 398;  /* suneq_df */
    }
  goto ret0;

 L2951: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L6932;
    case DFmode:
      goto L6933;
    default:
      break;
    }
  goto ret0;

 L6932: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2952;
    }
  goto ret0;

 L2952: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2953;
    }
  goto ret0;

 L2953: ATTRIBUTE_UNUSED_LABEL
  if (
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 392;  /* sunlt_sf */
    }
  goto ret0;

 L6933: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2994;
    }
  goto ret0;

 L2994: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2995;
    }
  goto ret0;

 L2995: ATTRIBUTE_UNUSED_LABEL
  if (
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 399;  /* sunlt_df */
    }
  goto ret0;

 L2957: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L6934;
    case DFmode:
      goto L6935;
    default:
      break;
    }
  goto ret0;

 L6934: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2958;
    }
  goto ret0;

 L2958: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2959;
    }
  goto ret0;

 L2959: ATTRIBUTE_UNUSED_LABEL
  if (
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 393;  /* sunle_sf */
    }
  goto ret0;

 L6935: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3000;
    }
  goto ret0;

 L3000: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3001;
    }
  goto ret0;

 L3001: ATTRIBUTE_UNUSED_LABEL
  if (
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 400;  /* sunle_df */
    }
  goto ret0;

 L2963: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L6936;
    case DFmode:
      goto L6937;
    default:
      break;
    }
  goto ret0;

 L6936: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2964;
    }
  goto ret0;

 L2964: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2965;
    }
  goto ret0;

 L2965: ATTRIBUTE_UNUSED_LABEL
  if (
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 394;  /* seq_sf */
    }
  goto ret0;

 L6937: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3006;
    }
  goto ret0;

 L3006: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3007;
    }
  goto ret0;

 L3007: ATTRIBUTE_UNUSED_LABEL
  if (
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 401;  /* seq_df */
    }
  goto ret0;

 L2969: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L6938;
    case DFmode:
      goto L6939;
    default:
      break;
    }
  goto ret0;

 L6938: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2970;
    }
  goto ret0;

 L2970: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2971;
    }
  goto ret0;

 L2971: ATTRIBUTE_UNUSED_LABEL
  if (
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 395;  /* slt_sf */
    }
  goto ret0;

 L6939: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3012;
    }
  goto ret0;

 L3012: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3013;
    }
  goto ret0;

 L3013: ATTRIBUTE_UNUSED_LABEL
  if (
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 402;  /* slt_df */
    }
  goto ret0;

 L2975: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L6940;
    case DFmode:
      goto L6941;
    default:
      break;
    }
  goto ret0;

 L6940: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2976;
    }
  goto ret0;

 L2976: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2977;
    }
  goto ret0;

 L2977: ATTRIBUTE_UNUSED_LABEL
  if (
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 396;  /* sle_sf */
    }
  goto ret0;

 L6941: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3018;
    }
  goto ret0;

 L3018: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3019;
    }
  goto ret0;

 L3019: ATTRIBUTE_UNUSED_LABEL
  if (
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 403;  /* sle_df */
    }
  goto ret0;

 L3023: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L6942;
    case DFmode:
      goto L6943;
    default:
      break;
    }
  goto ret0;

 L6942: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3024;
    }
  goto ret0;

 L3024: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3025;
    }
  goto ret0;

 L3025: ATTRIBUTE_UNUSED_LABEL
  if (
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 404;  /* sge_sf */
    }
  goto ret0;

 L6943: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3048;
    }
  goto ret0;

 L3048: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3049;
    }
  goto ret0;

 L3049: ATTRIBUTE_UNUSED_LABEL
  if (
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 408;  /* sge_df */
    }
  goto ret0;

 L3029: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L6944;
    case DFmode:
      goto L6945;
    default:
      break;
    }
  goto ret0;

 L6944: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3030;
    }
  goto ret0;

 L3030: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3031;
    }
  goto ret0;

 L3031: ATTRIBUTE_UNUSED_LABEL
  if (
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 405;  /* sgt_sf */
    }
  goto ret0;

 L6945: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3054;
    }
  goto ret0;

 L3054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3055;
    }
  goto ret0;

 L3055: ATTRIBUTE_UNUSED_LABEL
  if (
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 409;  /* sgt_df */
    }
  goto ret0;

 L3035: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L6946;
    case DFmode:
      goto L6947;
    default:
      break;
    }
  goto ret0;

 L6946: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3036;
    }
  goto ret0;

 L3036: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3037;
    }
  goto ret0;

 L3037: ATTRIBUTE_UNUSED_LABEL
  if (
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 406;  /* sunge_sf */
    }
  goto ret0;

 L6947: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3060;
    }
  goto ret0;

 L3060: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3061;
    }
  goto ret0;

 L3061: ATTRIBUTE_UNUSED_LABEL
  if (
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 410;  /* sunge_df */
    }
  goto ret0;

 L3041: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L6948;
    case DFmode:
      goto L6949;
    default:
      break;
    }
  goto ret0;

 L6948: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3042;
    }
  goto ret0;

 L3042: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3043;
    }
  goto ret0;

 L3043: ATTRIBUTE_UNUSED_LABEL
  if (
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 407;  /* sungt_sf */
    }
  goto ret0;

 L6949: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3066;
    }
  goto ret0;

 L3066: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3067;
    }
  goto ret0;

 L3067: ATTRIBUTE_UNUSED_LABEL
  if (
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 411;  /* sungt_df */
    }
  goto ret0;

 L6927: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 3
      && XINT (x1, 1) == 203)
    goto L3586;
  goto ret0;

 L3586: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L6950;
    case DFmode:
      goto L6951;
    default:
      break;
    }
  goto ret0;

 L6950: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3587;
    }
  goto ret0;

 L3587: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3588;
    }
  goto ret0;

 L3588: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L3589;
    }
  goto ret0;

 L3589: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 313 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 518 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 475;  /* mips_cabs_cond_s */
    }
  goto ret0;

 L6951: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3594;
    }
  goto ret0;

 L3594: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3595;
    }
  goto ret0;

 L3595: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L3596;
    }
  goto ret0;

 L3596: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 313 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 519 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 476;  /* mips_cabs_cond_d */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_9 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case NE:
      goto L3710;
    case GE:
      goto L4670;
    default:
     break;
   }
 L2632: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2633;
    }
 L2651: ATTRIBUTE_UNUSED_LABEL
  if (order_operator (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2652;
    }
  goto ret0;

 L3710: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case CCV4mode:
      goto L7117;
    case CCV2mode:
      goto L7118;
    default:
      break;
    }
  goto L2632;

 L7117: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, CCV4mode))
    {
      operands[0] = x3;
      goto L3711;
    }
  goto L2632;

 L3711: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L7119;
  goto L2632;

 L7119: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 0L:
        goto L3712;
      case -1L:
        goto L3721;
      default:
        break;
      }
  goto L2632;

 L3712: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3713;
  x2 = XEXP (x1, 0);
  goto L2632;

 L3713: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3714;

 L3714: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 446 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 492;  /* bc1any4t */
    }
  x2 = XEXP (x1, 0);
  goto L2632;

 L3721: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3722;
  x2 = XEXP (x1, 0);
  goto L2632;

 L3722: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3723;

 L3723: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 458 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 493;  /* bc1any4f */
    }
  x2 = XEXP (x1, 0);
  goto L2632;

 L7118: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, CCV2mode))
    {
      operands[0] = x3;
      goto L3729;
    }
  goto L2632;

 L3729: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L7121;
  goto L2632;

 L7121: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 0L:
        goto L3730;
      case -1L:
        goto L3739;
      default:
        break;
      }
  goto L2632;

 L3730: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3731;
  x2 = XEXP (x1, 0);
  goto L2632;

 L3731: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3732;

 L3732: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 470 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 494;  /* bc1any2t */
    }
  x2 = XEXP (x1, 0);
  goto L2632;

 L3739: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3740;
  x2 = XEXP (x1, 0);
  goto L2632;

 L3740: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3741;

 L3741: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 482 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 495;  /* bc1any2f */
    }
  x2 = XEXP (x1, 0);
  goto L2632;

 L4670: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182)
    goto L4671;
  goto L2651;

 L4671: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L4672;
    }
  goto L2651;

 L4672: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L4673;
  x2 = XEXP (x1, 0);
  goto L2651;

 L4673: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L4674;

 L4674: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 1053 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 595;  /* mips_bposge */
    }
  x2 = XEXP (x1, 0);
  goto L2651;

 L2633: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case CCmode:
      goto L7128;
    case SImode:
      goto L7124;
    case DImode:
      goto L7125;
    default:
      break;
    }
  goto ret0;

 L7128: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 2
      && XINT (x3, 1) == 213)
    goto L3747;
  if (register_operand (x3, CCmode))
    {
      operands[2] = x3;
      goto L2634;
    }
  goto ret0;

 L3747: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (register_operand (x4, CCV2mode))
    {
      operands[2] = x4;
      goto L3748;
    }
  goto ret0;

 L3748: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (const_int_operand (x4, VOIDmode))
    {
      operands[3] = x4;
      goto L3749;
    }
  goto ret0;

 L3749: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3750;
  goto ret0;

 L3750: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L3751;
    case PC:
      goto L3762;
    default:
     break;
   }
  goto ret0;

 L3751: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3752;

 L3752: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 507 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT))
    {
      return 496;  /* *branch_upper_lower */
    }
  goto ret0;

 L3762: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3763;
  goto ret0;

 L3763: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3764;

 L3764: ATTRIBUTE_UNUSED_LABEL
  if (
#line 529 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT))
    {
      return 497;  /* *branch_upper_lower_inverted */
    }
  goto ret0;

 L2634: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2635;
  goto ret0;

 L2635: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2636;
    case PC:
      goto L2645;
    default:
     break;
   }
  goto ret0;

 L2636: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2637;

 L2637: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 4967 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 344;  /* *branch_fp */
    }
  goto ret0;

 L2645: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2646;
  goto ret0;

 L2646: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2647;

 L2647: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4984 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 345;  /* *branch_fp_inverted */
    }
  goto ret0;

 L7124: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2691;
    }
 L7126: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2729;
    }
  goto ret0;

 L2691: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2692;
    }
  x3 = XEXP (x2, 0);
  goto L7126;

 L2692: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2693;
    case PC:
      goto L2711;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L7126;

 L2693: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2694;

 L2694: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 5031 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 350;  /* *branch_equalitysi */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L7126;

 L2711: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2712;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L7126;

 L2712: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2713;

 L2713: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5048 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 352;  /* *branch_equalitysi_inverted */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L7126;

 L2729: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2730;
  goto ret0;

 L2730: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2731;
    }
  goto ret0;

 L2731: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2732;
    }
  goto ret0;

 L2732: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5067 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 354;  /* *branch_equalitysi_mips16 */
    }
  goto ret0;

 L7125: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2700;
    }
 L7127: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2738;
    }
  goto ret0;

 L2700: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_0_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L2701;
    }
  x3 = XEXP (x2, 0);
  goto L7127;

 L2701: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2702;
    case PC:
      goto L2721;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L7127;

 L2702: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2703;

 L2703: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (
#line 5031 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 351;  /* *branch_equalitydi */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L7127;

 L2721: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2722;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L7127;

 L2722: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2723;

 L2723: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5048 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 353;  /* *branch_equalitydi_inverted */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L7127;

 L2738: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2739;
  goto ret0;

 L2739: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2740;
    }
  goto ret0;

 L2740: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2741;
    }
  goto ret0;

 L2741: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5067 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 355;  /* *branch_equalitydi_mips16 */
    }
  goto ret0;

 L2652: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L7129;
    case DImode:
      goto L7130;
    default:
      break;
    }
  goto ret0;

 L7129: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2653;
    }
  goto ret0;

 L2653: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2654;
  goto ret0;

 L2654: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2655;
    case PC:
      goto L2673;
    default:
     break;
   }
  goto ret0;

 L2655: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2656;

 L2656: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 5003 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 346;  /* *branch_ordersi */
    }
  goto ret0;

 L2673: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2674;
  goto ret0;

 L2674: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2675;

 L2675: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5016 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 348;  /* *branch_ordersi_inverted */
    }
  goto ret0;

 L7130: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2662;
    }
  goto ret0;

 L2662: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2663;
  goto ret0;

 L2663: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2664;
    case PC:
      goto L2683;
    default:
     break;
   }
  goto ret0;

 L2664: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2665;

 L2665: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (
#line 5003 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 347;  /* *branch_orderdi */
    }
  goto ret0;

 L2683: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2684;
  goto ret0;

 L2684: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2685;

 L2685: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5016 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 349;  /* *branch_orderdi_inverted */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_10 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SFmode:
      goto L6322;
    case DFmode:
      goto L6323;
    case V2SFmode:
      goto L6324;
    case SImode:
      goto L6314;
    case DImode:
      goto L6315;
    case HImode:
      goto L6310;
    case QImode:
      goto L6311;
    case BLKmode:
      goto L6331;
    case CCmode:
      goto L6321;
    case TFmode:
      goto L6328;
    case CCV4mode:
      goto L6337;
    case CCV2mode:
      goto L6338;
    case V4QImode:
      goto L6339;
    case V2HImode:
      goto L6340;
    case CCDSPmode:
      goto L6341;
    case QQmode:
      goto L6342;
    case HQmode:
      goto L6343;
    case SQmode:
      goto L6344;
    case DQmode:
      goto L6345;
    case UQQmode:
      goto L6346;
    case UHQmode:
      goto L6347;
    case USQmode:
      goto L6348;
    case UDQmode:
      goto L6349;
    case HAmode:
      goto L6350;
    case SAmode:
      goto L6351;
    case DAmode:
      goto L6352;
    case UHAmode:
      goto L6353;
    case USAmode:
      goto L6354;
    case UDAmode:
      goto L6355;
    default:
      break;
    }
 L2630: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PC)
    goto L3080;
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L3158;
    }
  goto ret0;

 L6322: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L1856;
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L15;
    }
 L6326: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L1923;
    }
  goto L2630;

 L1856: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L6356;
    case DImode:
      goto L6357;
    default:
      break;
    }
  goto L6326;

 L6356: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1857;
  goto L6326;

 L1857: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1858;
    }
  goto L6326;

 L1858: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1859;
    }
  goto L6326;

 L1859: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L1860;
    }
  x1 = XEXP (x0, 0);
  goto L6326;

 L1860: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3792 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 228;  /* *swxc1_si */
    }
  x1 = XEXP (x0, 0);
  goto L6326;

 L6357: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1878;
  goto L6326;

 L1878: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1879;
    }
  goto L6326;

 L1879: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1880;
    }
  goto L6326;

 L1880: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L1881;
    }
  x1 = XEXP (x0, 0);
  goto L6326;

 L1881: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3792 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 513 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 231;  /* *swxc1_di */
    }
  x1 = XEXP (x0, 0);
  goto L6326;

 L15: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L6358;
  x1 = XEXP (x0, 0);
  goto L6326;

 L6358: ATTRIBUTE_UNUSED_LABEL
  tem = recog_1 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L6326;

 L1923: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L1924;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1924: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4010 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))))
    {
      return 239;  /* *movsf_hardfloat */
    }
 L1928: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4021 "../../gcc/config/mips/mips.md"
(TARGET_SOFT_FLOAT && !TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))))
    {
      return 240;  /* *movsf_softfloat */
    }
 L1932: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4032 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode))))
    {
      return 241;  /* *movsf_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6323: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L1863;
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L21;
    }
 L6327: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L1935;
    }
  goto L2630;

 L1863: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L6404;
    case DImode:
      goto L6405;
    default:
      break;
    }
  goto L6327;

 L6404: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1864;
  goto L6327;

 L1864: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1865;
    }
  goto L6327;

 L1865: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1866;
    }
  goto L6327;

 L1866: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L1867;
    }
  x1 = XEXP (x0, 0);
  goto L6327;

 L1867: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3792 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 229;  /* *sdxc1_si */
    }
  x1 = XEXP (x0, 0);
  goto L6327;

 L6405: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1885;
  goto L6327;

 L1885: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1886;
    }
  goto L6327;

 L1886: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1887;
    }
  goto L6327;

 L1887: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L1888;
    }
  x1 = XEXP (x0, 0);
  goto L6327;

 L1888: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3792 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 514 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 232;  /* *sdxc1_di */
    }
  x1 = XEXP (x0, 0);
  goto L6327;

 L21: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L6406;
  x1 = XEXP (x0, 0);
  goto L6327;

 L6406: ATTRIBUTE_UNUSED_LABEL
  tem = recog_2 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L6327;

 L1935: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L1936;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1936: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4055 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode))))
    {
      return 242;  /* *movdf_hardfloat_64bit */
    }
 L1940: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4067 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode))))
    {
      return 243;  /* *movdf_hardfloat_32bit */
    }
 L1944: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4078 "../../gcc/config/mips/mips.md"
((TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode))))
    {
      return 244;  /* *movdf_softfloat */
    }
 L1948: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4089 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))))
    {
      return 245;  /* *movdf_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6324: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L1870;
  if (register_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L27;
    }
 L6329: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L1954;
    }
  goto L2630;

 L1870: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L6460;
    case DImode:
      goto L6461;
    default:
      break;
    }
  goto L6329;

 L6460: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1871;
  goto L6329;

 L1871: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1872;
    }
  goto L6329;

 L1872: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1873;
    }
  goto L6329;

 L1873: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L1874;
    }
  x1 = XEXP (x0, 0);
  goto L6329;

 L1874: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3792 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 230;  /* *sdxc1_si */
    }
  x1 = XEXP (x0, 0);
  goto L6329;

 L6461: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1892;
  goto L6329;

 L1892: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1893;
    }
  goto L6329;

 L1893: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1894;
    }
  goto L6329;

 L1894: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L1895;
    }
  x1 = XEXP (x0, 0);
  goto L6329;

 L1895: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3792 "../../gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 515 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 233;  /* *sdxc1_di */
    }
  x1 = XEXP (x0, 0);
  goto L6329;

 L27: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SFmode)
    goto L6462;
  x1 = XEXP (x0, 0);
  goto L6329;

 L6462: ATTRIBUTE_UNUSED_LABEL
  tem = recog_3 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L6329;

 L1954: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V2SFmode))
    {
      operands[1] = x1;
      goto L1955;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1955: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4163 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && TARGET_PAIRED_SINGLE_FLOAT
   && TARGET_64BIT
   && (register_operand (operands[0], V2SFmode)
       || reg_or_0_operand (operands[1], V2SFmode))))
    {
      return 247;  /* movv2sf_hardfloat_64bit */
    }
 L1959: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4176 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && TARGET_PAIRED_SINGLE_FLOAT
   && !TARGET_64BIT
   && (register_operand (operands[0], V2SFmode)
       || reg_or_0_operand (operands[1], V2SFmode))))
    {
      return 248;  /* movv2sf_hardfloat_32bit */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6314: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTRACT:
      goto L1620;
    case MEM:
      goto L6540;
    case REG:
      goto L6541;
    default:
     break;
   }
 L6307: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L33;
    }
 L6309: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1267;
    }
 L6325: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1898;
    }
 L6332: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2180;
    }
  goto L2630;

 L1620: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1621;
    }
  goto L2630;

 L1621: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1622;
    }
  goto L2630;

 L1622: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1623;
    }
  goto L2630;

 L1623: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (reg_or_0_operand (x1, SImode))
    {
      operands[3] = x1;
      goto L1624;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1624: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3172 "../../gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),
		       INTVAL (operands[2]))))
    {
      return 186;  /* insvsi */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6540: ATTRIBUTE_UNUSED_LABEL
  if (stack_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1776;
    }
  goto L6309;

 L1776: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == REG
      && XINT (x1, 0) == 31
      && 
#line 3484 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 212;  /* *movsi_ra */
    }
  x1 = XEXP (x0, 0);
  goto L6309;

 L6541: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 0))
    {
    case 28L:
      goto L3129;
    case 79L:
      goto L3145;
    default:
      break;
    }
  goto L6307;

 L3129: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 6)
    goto L3130;
  x1 = XEXP (x0, 0);
  goto L6307;

 L3130: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 5683 "../../gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP))
    {
      return 423;  /* restore_gp */
    }
  x1 = XEXP (x0, 0);
  goto L6307;

 L3145: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L6543;
  x1 = XEXP (x0, 0);
  goto L6307;

 L6543: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC_VOLATILE:
      goto L6545;
    case UNSPEC:
      goto L6546;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L6307;

 L6545: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 42)
    goto L3146;
  x1 = XEXP (x0, 0);
  goto L6307;

 L3146: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 5758 "../../gcc/config/mips/mips.md"
(TARGET_USE_GOT))
    {
      return 426;  /* set_got_version */
    }
  x1 = XEXP (x0, 0);
  goto L6307;

 L6546: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 43)
    goto L3150;
  x1 = XEXP (x0, 0);
  goto L6307;

 L3150: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 79
      && 
#line 5766 "../../gcc/config/mips/mips.md"
(TARGET_USE_GOT))
    {
      return 427;  /* update_got_version */
    }
  x1 = XEXP (x0, 0);
  goto L6307;

 L33: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L6547;
  x1 = XEXP (x0, 0);
  goto L6309;

 L6547: ATTRIBUTE_UNUSED_LABEL
  tem = recog_4 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L6309;

 L1267: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L6614;
 L1802: ATTRIBUTE_UNUSED_LABEL
  if (move_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L1803;
    }
  x1 = XEXP (x0, 0);
  goto L6325;

 L6614: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case TRUNCATE:
      goto L1268;
    case UNSPEC:
      goto L6616;
    default:
     break;
   }
  goto L1802;

 L1268: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1269;
    }
  goto L1802;

 L1269: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2377 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 123;  /* truncdisi2 */
    }
  x1 = XEXP (x0, 1);
  goto L1802;

 L6616: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 2)
    goto L2031;
  goto L1802;

 L2031: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L6617;
    case DImode:
      goto L6618;
    case V2SFmode:
      goto L6619;
    default:
      break;
    }
  goto L1802;

 L6617: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2032;
    }
  goto L1802;

 L2032: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2033;
    }
  goto L1802;

 L2033: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4295 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 523 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 261;  /* store_worddf */
    }
  x1 = XEXP (x0, 1);
  goto L1802;

 L6618: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2038;
    }
  goto L1802;

 L2038: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2039;
    }
  goto L1802;

 L2039: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4295 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 524 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 262;  /* store_worddi */
    }
  x1 = XEXP (x0, 1);
  goto L1802;

 L6619: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2044;
    }
  goto L1802;

 L2044: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2045;
    }
  goto L1802;

 L2045: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4295 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 525 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 263;  /* store_wordv2sf */
    }
  x1 = XEXP (x0, 1);
  goto L1802;

 L1803: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3622 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || reg_or_0_operand (operands[1], SImode))))
    {
      return 219;  /* *movsi_internal */
    }
 L1807: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3633 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    {
      return 220;  /* *movsi_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L6325;

 L1898: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L6620;
 L2143: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 34)
    goto L2144;
  x1 = XEXP (x0, 0);
  goto L6332;

 L6620: ATTRIBUTE_UNUSED_LABEL
  tem = recog_6 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L2143;

 L2144: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (const_int_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2145;
    }
  x1 = XEXP (x0, 0);
  goto L6332;

 L2145: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4452 "../../gcc/config/mips/mips.md"
(ISA_HAS_SYNCI))
    {
      return 283;  /* rdhwr */
    }
  x1 = XEXP (x0, 0);
  goto L6332;

 L2180: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 38)
    goto L2181;
  x1 = XEXP (x0, 0);
  goto L2630;

 L2181: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == SImode)
    goto L6741;
 L2457: ATTRIBUTE_UNUSED_LABEL
  if (uns_arith_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2458;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6741: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L2182;
    case MINUS:
      goto L2196;
    case IOR:
      goto L2302;
    case XOR:
      goto L2308;
    case AND:
      goto L2314;
    default:
     break;
   }
  goto L2457;

 L2182: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2183;
  goto L2457;

 L2183: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2184;
    }
  goto L2457;

 L2184: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4498 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC))
    {
      return 288;  /* sync_addsi */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L2457;

 L2196: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2197;
  goto L2457;

 L2197: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2198;
    }
  goto L2457;

 L2198: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4513 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC))
    {
      return 290;  /* sync_subsi */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L2457;

 L2302: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (uns_arith_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2303;
    }
  goto L2457;

 L2303: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 4587 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC))
    {
      return 300;  /* sync_iorsi */
    }
  goto L2457;

 L2308: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (uns_arith_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2309;
    }
  goto L2457;

 L2309: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 4587 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC))
    {
      return 301;  /* sync_xorsi */
    }
  goto L2457;

 L2314: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (uns_arith_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2315;
    }
  goto L2457;

 L2315: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 4587 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC))
    {
      return 302;  /* sync_andsi */
    }
  goto L2457;

 L2458: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4634 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC))
    {
      return 318;  /* sync_nandsi */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6315: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTRACT:
      goto L1627;
    case MEM:
      goto L6746;
    case REG:
    case SUBREG:
      goto L6308;
    default:
      goto L6319;
   }
 L6308: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L39;
    }
 L6319: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2048;
    }
 L6333: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2187;
    }
  goto L2630;

 L1627: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1628;
    }
  goto L2630;

 L1628: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1629;
    }
  goto L2630;

 L1629: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1630;
    }
  goto L2630;

 L1630: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (reg_or_0_operand (x1, DImode))
    {
      operands[3] = x1;
      goto L1631;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1631: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3172 "../../gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),
		       INTVAL (operands[2]))) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 187;  /* insvdi */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6746: ATTRIBUTE_UNUSED_LABEL
  if (stack_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L1779;
    }
  goto L6319;

 L1779: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == REG
      && XINT (x1, 0) == 31
      && (
#line 3484 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 213;  /* *movdi_ra */
    }
  x1 = XEXP (x0, 0);
  goto L6319;

 L39: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L6747;
  x1 = XEXP (x0, 0);
  goto L6319;

 L6747: ATTRIBUTE_UNUSED_LABEL
  tem = recog_7 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L6319;

 L2048: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 2)
    goto L2049;
  if (move_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L1783;
    }
  x1 = XEXP (x0, 0);
  goto L6333;

 L2049: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L2050;
    }
  x1 = XEXP (x0, 0);
  goto L6333;

 L2050: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2051;
    }
  x1 = XEXP (x0, 0);
  goto L6333;

 L2051: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4295 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 526 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64)))
    {
      return 264;  /* store_wordtf */
    }
  x1 = XEXP (x0, 0);
  goto L6333;

 L1783: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3492 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_FLOAT64 && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode))))
    {
      return 214;  /* *movdi_32bit */
    }
 L1787: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3503 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FLOAT64 && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode))))
    {
      return 215;  /* *movdi_gp32_fp64 */
    }
 L1791: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3514 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))))
    {
      return 216;  /* *movdi_32bit_mips16 */
    }
 L1795: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3525 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode))))
    {
      return 217;  /* *movdi_64bit */
    }
 L1799: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3536 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))))
    {
      return 218;  /* *movdi_64bit_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L6333;

 L2187: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 38)
    goto L2188;
  x1 = XEXP (x0, 0);
  goto L2630;

 L2188: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == DImode)
    goto L6894;
 L2462: ATTRIBUTE_UNUSED_LABEL
  if (uns_arith_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2463;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6894: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L2189;
    case MINUS:
      goto L2203;
    case IOR:
      goto L2320;
    case XOR:
      goto L2326;
    case AND:
      goto L2332;
    default:
     break;
   }
  goto L2462;

 L2189: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2190;
  goto L2462;

 L2190: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2191;
    }
  goto L2462;

 L2191: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4498 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 289;  /* sync_adddi */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L2462;

 L2203: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2204;
  goto L2462;

 L2204: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2205;
    }
  goto L2462;

 L2205: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4513 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 291;  /* sync_subdi */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L2462;

 L2320: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (uns_arith_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2321;
    }
  goto L2462;

 L2321: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && (
#line 4587 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 303;  /* sync_iordi */
    }
  goto L2462;

 L2326: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (uns_arith_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2327;
    }
  goto L2462;

 L2327: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && (
#line 4587 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 304;  /* sync_xordi */
    }
  goto L2462;

 L2332: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (uns_arith_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2333;
    }
  goto L2462;

 L2333: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && (
#line 4587 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 305;  /* sync_anddi */
    }
  goto L2462;

 L2463: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4634 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 319;  /* sync_nanddi */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6310: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1272;
    }
 L6313: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1289;
    }
  goto L2630;

 L1272: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == TRUNCATE)
    goto L1273;
  if (move_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L1908;
    }
  x1 = XEXP (x0, 0);
  goto L6313;

 L1273: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1274;
    }
  x1 = XEXP (x0, 0);
  goto L6313;

 L1274: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2388 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 124;  /* truncdihi2 */
    }
  x1 = XEXP (x0, 0);
  goto L6313;

 L1908: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3831 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || reg_or_0_operand (operands[1], HImode))))
    {
      return 235;  /* *movhi_internal */
    }
 L1912: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3847 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    {
      return 236;  /* *movhi_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L6313;

 L1289: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L6899;
  x1 = XEXP (x0, 0);
  goto L2630;

 L6899: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case TRUNCATE:
      goto L1290;
    case ZERO_EXTEND:
      goto L1370;
    case SIGN_EXTEND:
      goto L1521;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1290: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L6902;
  x1 = XEXP (x0, 0);
  goto L2630;

 L6902: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFTRT:
      goto L1291;
    case LSHIFTRT:
      goto L1311;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1291: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1292;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1292: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1293;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1293: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2414 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) >= 32))
    {
      return 127;  /* *mips.md:2409 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1311: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1312;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1312: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 2424 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 130;  /* *mips.md:2419 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1370: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode)
    goto L6904;
  x1 = XEXP (x0, 0);
  goto L2630;

 L6904: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1371;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1447;
    }
 L6906: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1452;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1371: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1372;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1372: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2493 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 140;  /* *mips.md:2489 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1447: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2608 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 155;  /* *zero_extendqihi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L6906;

 L1452: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2618 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 156;  /* *zero_extendqihi2_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1521: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1522;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1522: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2711 "../../gcc/config/mips/mips.md"
(GENERATE_MIPS16E))
    {
      return 170;  /* *extendqihi2_mips16e */
    }
 L1527: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2722 "../../gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E))
    {
      return 171;  /* *extendqihi2 */
    }
 L1532: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2743 "../../gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH))
    {
      return 172;  /* *extendqihi2_seb */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6311: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L1277;
    }
 L6312: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L1282;
    }
  goto L2630;

 L1277: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == TRUNCATE)
    goto L1278;
  if (move_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L1916;
    }
  x1 = XEXP (x0, 0);
  goto L6312;

 L1278: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1279;
    }
  x1 = XEXP (x0, 0);
  goto L6312;

 L1279: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2399 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 125;  /* truncdiqi2 */
    }
  x1 = XEXP (x0, 0);
  goto L6312;

 L1916: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3935 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || reg_or_0_operand (operands[1], QImode))))
    {
      return 237;  /* *movqi_internal */
    }
 L1920: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3951 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))))
    {
      return 238;  /* *movqi_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L6312;

 L1282: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == TRUNCATE)
    goto L1283;
  x1 = XEXP (x0, 0);
  goto L2630;

 L1283: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L6907;
  x1 = XEXP (x0, 0);
  goto L2630;

 L6907: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFTRT:
      goto L1284;
    case LSHIFTRT:
      goto L1305;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1284: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1285;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1285: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1286;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1286: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2414 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) >= 32))
    {
      return 126;  /* *mips.md:2409 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1305: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1306;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1306: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 2424 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 129;  /* *mips.md:2419 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6331: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L2155;
 L6316: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, BLKmode))
    {
      operands[0] = x1;
      goto L1660;
    }
  goto L2630;

 L2155: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == SCRATCH)
    goto L2156;
  goto L6316;

 L2156: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == BLKmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 41)
    goto L2157;
  x1 = XEXP (x0, 0);
  goto L6316;

 L2157: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 4473 "../../gcc/config/mips/mips.md"
(GENERATE_SYNC))
    {
      return 285;  /* memory_barrier */
    }
  x1 = XEXP (x0, 0);
  goto L6316;

 L1660: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == BLKmode)
    goto L6909;
  x1 = XEXP (x0, 0);
  goto L2630;

 L6909: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L6911;
  x1 = XEXP (x0, 0);
  goto L2630;

 L6911: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L6913;
    case 3:
      goto L6914;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6913: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 20)
    goto L1661;
  x1 = XEXP (x0, 0);
  goto L2630;

 L1661: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1662;
    }
 L1667: ATTRIBUTE_UNUSED_LABEL
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1668;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1662: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1663;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L1667;

 L1663: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3216 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0])))
    {
      return 192;  /* mov_swl */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L1667;

 L1668: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1669;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1669: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3216 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 193;  /* mov_sdl */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6914: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 21)
    goto L1673;
  x1 = XEXP (x0, 0);
  goto L2630;

 L1673: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1674;
    }
 L1679: ATTRIBUTE_UNUSED_LABEL
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1680;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1674: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1675;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L1679;

 L1675: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 3227 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0])))
    {
      return 194;  /* mov_swr */
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L1679;

 L1680: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1681;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L1681: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (rtx_equal_p (x2, operands[0])
      && (
#line 3227 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 195;  /* mov_sdr */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6321: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, CCmode))
    {
      operands[0] = x1;
      goto L1810;
    }
 L6334: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, CCmode))
    {
      operands[0] = x1;
      goto L2938;
    }
  goto L2630;

 L1810: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, CCmode))
    {
      operands[1] = x1;
      goto L1811;
    }
  x1 = XEXP (x0, 0);
  goto L6334;

 L1811: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3726 "../../gcc/config/mips/mips.md"
(ISA_HAS_8CC && TARGET_HARD_FLOAT))
    {
      return 221;  /* movcc */
    }
  x1 = XEXP (x0, 0);
  goto L6334;

 L2938: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCmode)
    goto L6915;
  x1 = XEXP (x0, 0);
  goto L2630;

 L6915: ATTRIBUTE_UNUSED_LABEL
  tem = recog_8 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L2630;

 L6328: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L1951;
    }
 L6330: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L2001;
    }
  goto L2630;

 L1951: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, TFmode))
    {
      operands[1] = x1;
      return 246;  /* *movtf_internal */
    }
  x1 = XEXP (x0, 0);
  goto L6330;

 L2001: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TFmode)
    goto L6952;
  x1 = XEXP (x0, 0);
  goto L2630;

 L6952: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L6955;
  x1 = XEXP (x0, 0);
  goto L2630;

 L6955: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L6958;
    case 2:
      goto L6959;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6958: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 0)
    goto L2002;
  x1 = XEXP (x0, 0);
  goto L2630;

 L2002: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2003;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L2003: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4265 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 526 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64)))
    {
      return 256;  /* load_lowtf */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6959: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 1L:
      goto L2025;
    case 32L:
      goto L2073;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L2025: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2026;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L2026: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L2027;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L2027: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4280 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 526 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64)))
    {
      return 260;  /* load_hightf */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L2073: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2074;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L2074: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L2075;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L2075: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4310 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 526 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64)))
    {
      return 268;  /* mthc1tf */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6337: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, CCV4mode))
    {
      operands[0] = x1;
      goto L3599;
    }
  goto L2630;

 L3599: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCV4mode)
    goto L6961;
  x1 = XEXP (x0, 0);
  goto L2630;

 L6961: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L6963;
  x1 = XEXP (x0, 0);
  goto L2630;

 L6963: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 5)
    goto L6965;
  x1 = XEXP (x0, 0);
  goto L2630;

 L6965: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 201L:
      goto L3600;
    case 203L:
      goto L3609;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3600: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3601;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3601: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3602;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3602: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L3603;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3603: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (register_operand (x2, V2SFmode))
    {
      operands[4] = x2;
      goto L3604;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3604: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L3605;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3605: ATTRIBUTE_UNUSED_LABEL
  if (
#line 331 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 477;  /* mips_c_cond_4s */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3609: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3610;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3610: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3611;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3611: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L3612;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3612: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (register_operand (x2, V2SFmode))
    {
      operands[4] = x2;
      goto L3613;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3613: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L3614;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3614: ATTRIBUTE_UNUSED_LABEL
  if (
#line 360 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 478;  /* mips_cabs_cond_4s */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6338: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, CCV2mode))
    {
      operands[0] = x1;
      goto L3617;
    }
  goto L2630;

 L3617: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCV2mode)
    goto L6967;
  x1 = XEXP (x0, 0);
  goto L2630;

 L6967: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L6970;
  x1 = XEXP (x0, 0);
  goto L2630;

 L6970: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 3:
      goto L6973;
    case 1:
      goto L6975;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6973: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 201L:
      goto L3618;
    case 203L:
      goto L3625;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3618: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3619;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3619: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3620;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3620: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L3621;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3621: ATTRIBUTE_UNUSED_LABEL
  if (
#line 392 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 479;  /* mips_c_cond_ps */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3625: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3626;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3626: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3627;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3627: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L3628;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3628: ATTRIBUTE_UNUSED_LABEL
  if (
#line 403 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 480;  /* mips_cabs_cond_ps */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6975: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 214)
    goto L3632;
  x1 = XEXP (x0, 0);
  goto L2630;

 L3632: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_CODE (x2))
    {
    case UNORDERED:
      goto L3633;
    case UNEQ:
      goto L3640;
    case UNLT:
      goto L3647;
    case UNLE:
      goto L3654;
    case EQ:
      goto L3661;
    case LT:
      goto L3668;
    case LE:
      goto L3675;
    case GE:
      goto L3682;
    case GT:
      goto L3689;
    case UNGE:
      goto L3696;
    case UNGT:
      goto L3703;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3633: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L3634;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3634: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L3635;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3635: ATTRIBUTE_UNUSED_LABEL
  if (
#line 419 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 481;  /* sunordered_ps */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3640: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L3641;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3641: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L3642;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3642: ATTRIBUTE_UNUSED_LABEL
  if (
#line 419 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 482;  /* suneq_ps */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3647: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L3648;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3648: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L3649;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3649: ATTRIBUTE_UNUSED_LABEL
  if (
#line 419 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 483;  /* sunlt_ps */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3654: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L3655;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3655: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L3656;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3656: ATTRIBUTE_UNUSED_LABEL
  if (
#line 419 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 484;  /* sunle_ps */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3661: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L3662;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3662: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L3663;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3663: ATTRIBUTE_UNUSED_LABEL
  if (
#line 419 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 485;  /* seq_ps */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3668: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L3669;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3669: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L3670;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3670: ATTRIBUTE_UNUSED_LABEL
  if (
#line 419 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 486;  /* slt_ps */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3675: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L3676;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3676: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L3677;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3677: ATTRIBUTE_UNUSED_LABEL
  if (
#line 419 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 487;  /* sle_ps */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3682: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L3683;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3683: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L3684;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3684: ATTRIBUTE_UNUSED_LABEL
  if (
#line 430 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 488;  /* sge_ps */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3689: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L3690;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3690: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L3691;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3691: ATTRIBUTE_UNUSED_LABEL
  if (
#line 430 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 489;  /* sgt_ps */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3696: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L3697;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3697: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L3698;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3698: ATTRIBUTE_UNUSED_LABEL
  if (
#line 430 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 490;  /* sunge_ps */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3703: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L3704;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3704: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L3705;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3705: ATTRIBUTE_UNUSED_LABEL
  if (
#line 430 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 491;  /* sungt_ps */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6339: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4QImode))
    {
      operands[0] = x1;
      goto L3995;
    }
  goto L2630;

 L3995: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4QImode)
    goto L6976;
  x1 = XEXP (x0, 0);
  goto L2630;

 L6976: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L6987;
  x1 = XEXP (x0, 0);
  goto L2630;

 L6987: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L6998;
    case 1:
      goto L7000;
    case 3:
      goto L7001;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6998: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 309L:
      goto L3996;
    case 325L:
      goto L4124;
    case 403L:
      goto L4709;
    case 404L:
      goto L4715;
    case 424L:
      goto L4933;
    case 428L:
      goto L4960;
    case 429L:
      goto L4966;
    case 433L:
      goto L5000;
    case 434L:
      goto L5006;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3996: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L3997;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3997: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L3998;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3998: ATTRIBUTE_UNUSED_LABEL
  if (
#line 158 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 526;  /* mips_precrq_qb_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4124: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L4125;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4125: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4126;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4126: ATTRIBUTE_UNUSED_LABEL
  if (
#line 347 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 544;  /* mips_shrl_qb */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4709: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L4710;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4710: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L4711;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4711: ATTRIBUTE_UNUSED_LABEL
  if (
#line 45 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 599;  /* mips_adduh_qb */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4715: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L4716;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4716: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L4717;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4717: ATTRIBUTE_UNUSED_LABEL
  if (
#line 55 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 600;  /* mips_adduh_r_qb */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4933: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L4934;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4934: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L4935;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4935: ATTRIBUTE_UNUSED_LABEL
  if (
#line 278 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 616;  /* mips_precr_qb_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4960: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L4961;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4961: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4962;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4962: ATTRIBUTE_UNUSED_LABEL
  if (
#line 333 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 620;  /* mips_shra_qb */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4966: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L4967;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4967: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4968;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4968: ATTRIBUTE_UNUSED_LABEL
  if (
#line 352 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 621;  /* mips_shra_r_qb */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5000: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L5001;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5001: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L5002;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5002: ATTRIBUTE_UNUSED_LABEL
  if (
#line 414 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 625;  /* mips_subuh_qb */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5006: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L5007;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5007: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L5008;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5008: ATTRIBUTE_UNUSED_LABEL
  if (
#line 424 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 626;  /* mips_subuh_r_qb */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L7000: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 348)
    goto L4430;
  x1 = XEXP (x0, 0);
  goto L2630;

 L4430: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (arith_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4431;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4431: ATTRIBUTE_UNUSED_LABEL
  if (
#line 689 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 568;  /* mips_repl_qb */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L7001: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 356)
    goto L4500;
  x1 = XEXP (x0, 0);
  goto L2630;

 L4500: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L4501;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4501: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L4502;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4502: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && (
#line 785 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 16 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)))
    {
      return 580;  /* mips_pick_qb */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6340: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2HImode))
    {
      operands[0] = x1;
      goto L4001;
    }
  goto L2630;

 L4001: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2HImode)
    goto L7009;
  x1 = XEXP (x0, 0);
  goto L2630;

 L7009: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L7030;
  x1 = XEXP (x0, 0);
  goto L2630;

 L7030: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L7051;
    case 1:
      goto L7052;
    case 3:
      goto L7063;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L7051: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 310L:
      goto L4002;
    case 326L:
      goto L4130;
    case 327L:
      goto L4142;
    case 357L:
      goto L4506;
    case 430L:
      goto L4972;
    case 435L:
      goto L5012;
    case 436L:
      goto L5018;
    case 439L:
      goto L5036;
    case 440L:
      goto L5042;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4002: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4003;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4003: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4004;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4004: ATTRIBUTE_UNUSED_LABEL
  if (
#line 168 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 527;  /* mips_precrq_ph_w */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4130: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L4131;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4131: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4132;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4132: ATTRIBUTE_UNUSED_LABEL
  if (
#line 366 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 545;  /* mips_shra_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4142: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L4143;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4143: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4144;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4144: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 384 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 20 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)))
    {
      return 547;  /* mips_shra_r_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4506: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L4507;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4507: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L4508;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4508: ATTRIBUTE_UNUSED_LABEL
  if (
#line 796 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 581;  /* mips_packrl_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4972: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L4973;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4973: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4974;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4974: ATTRIBUTE_UNUSED_LABEL
  if (
#line 370 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 622;  /* mips_shrl_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5012: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L5013;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5013: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L5014;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5014: ATTRIBUTE_UNUSED_LABEL
  if (
#line 434 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 627;  /* mips_addqh_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5018: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L5019;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5019: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L5020;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5020: ATTRIBUTE_UNUSED_LABEL
  if (
#line 444 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 628;  /* mips_addqh_r_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5036: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L5037;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5037: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L5038;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5038: ATTRIBUTE_UNUSED_LABEL
  if (
#line 474 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 631;  /* mips_subqh_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5042: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L5043;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5043: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L5044;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5044: ATTRIBUTE_UNUSED_LABEL
  if (
#line 484 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 632;  /* mips_subqh_r_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L7052: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 315L:
      goto L4040;
    case 316L:
      goto L4045;
    case 317L:
      goto L4050;
    case 318L:
      goto L4055;
    case 319L:
      goto L4060;
    case 320L:
      goto L4065;
    case 321L:
      goto L4070;
    case 322L:
      goto L4075;
    case 349L:
      goto L4435;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4040: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L4041;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4041: ATTRIBUTE_UNUSED_LABEL
  if (
#line 226 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 532;  /* mips_precequ_ph_qbl */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4045: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L4046;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4046: ATTRIBUTE_UNUSED_LABEL
  if (
#line 235 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 533;  /* mips_precequ_ph_qbr */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4050: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L4051;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4051: ATTRIBUTE_UNUSED_LABEL
  if (
#line 244 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 534;  /* mips_precequ_ph_qbla */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4055: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L4056;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4056: ATTRIBUTE_UNUSED_LABEL
  if (
#line 253 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 535;  /* mips_precequ_ph_qbra */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4060: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L4061;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4061: ATTRIBUTE_UNUSED_LABEL
  if (
#line 263 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 536;  /* mips_preceu_ph_qbl */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4065: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L4066;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4066: ATTRIBUTE_UNUSED_LABEL
  if (
#line 272 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 537;  /* mips_preceu_ph_qbr */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4070: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L4071;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4071: ATTRIBUTE_UNUSED_LABEL
  if (
#line 281 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 538;  /* mips_preceu_ph_qbla */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4075: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L4076;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4076: ATTRIBUTE_UNUSED_LABEL
  if (
#line 290 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 539;  /* mips_preceu_ph_qbra */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4435: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_imm10_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4436;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4436: ATTRIBUTE_UNUSED_LABEL
  if (
#line 706 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 569;  /* mips_repl_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L7063: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 356L:
      goto L4494;
    case 425L:
      goto L4939;
    case 426L:
      goto L4946;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4494: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L4495;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4495: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L4496;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4496: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && (
#line 785 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 15 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)))
    {
      return 579;  /* mips_pick_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4939: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4940;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4940: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4941;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4941: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4942;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4942: ATTRIBUTE_UNUSED_LABEL
  if (
#line 289 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 617;  /* mips_precr_sra_ph_w */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4946: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4947;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4947: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4948;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4948: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4949;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4949: ATTRIBUTE_UNUSED_LABEL
  if (
#line 304 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 618;  /* mips_precr_sra_r_ph_w */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6341: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 186)
    goto L4439;
  goto L2630;

 L4439: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCDSPmode)
    goto L7072;
  x1 = XEXP (x0, 0);
  goto L2630;

 L7072: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L7075;
  x1 = XEXP (x0, 0);
  goto L2630;

 L7075: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 3)
    goto L7078;
  x1 = XEXP (x0, 0);
  goto L2630;

 L7078: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 350L:
      goto L4440;
    case 351L:
      goto L4452;
    case 352L:
      goto L4464;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4440: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case V2HImode:
      goto L7081;
    case V4QImode:
      goto L7082;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L7081: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HImode))
    {
      operands[0] = x2;
      goto L4441;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4441: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L4442;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4442: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && (
#line 721 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 15 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)))
    {
      return 570;  /* mips_cmp_eq_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L7082: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4QImode))
    {
      operands[0] = x2;
      goto L4447;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4447: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L4448;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4448: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && (
#line 721 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 16 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)))
    {
      return 571;  /* mips_cmpu_eq_qb */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4452: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case V2HImode:
      goto L7083;
    case V4QImode:
      goto L7084;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L7083: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HImode))
    {
      operands[0] = x2;
      goto L4453;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4453: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L4454;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4454: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && (
#line 732 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 15 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)))
    {
      return 572;  /* mips_cmp_lt_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L7084: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4QImode))
    {
      operands[0] = x2;
      goto L4459;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4459: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L4460;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4460: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && (
#line 732 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 16 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)))
    {
      return 573;  /* mips_cmpu_lt_qb */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4464: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case V2HImode:
      goto L7085;
    case V4QImode:
      goto L7086;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L7085: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HImode))
    {
      operands[0] = x2;
      goto L4465;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4465: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L4466;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4466: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && (
#line 743 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 15 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)))
    {
      return 574;  /* mips_cmp_le_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L7086: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4QImode))
    {
      operands[0] = x2;
      goto L4471;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4471: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L4472;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L4472: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && (
#line 743 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 16 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)))
    {
      return 575;  /* mips_cmpu_le_qb */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6342: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QQmode))
    {
      operands[0] = x1;
      goto L5125;
    }
  goto L2630;

 L5125: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QQmode)
    goto L7087;
  x1 = XEXP (x0, 0);
  goto L2630;

 L7087: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L5126;
    case MINUS:
      goto L5332;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5126: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QQmode))
    {
      operands[1] = x2;
      goto L5127;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5127: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QQmode))
    {
      operands[2] = x2;
      return 641;  /* addqq3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5332: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QQmode))
    {
      operands[1] = x2;
      goto L5333;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5333: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QQmode))
    {
      operands[2] = x2;
      return 667;  /* subqq3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6343: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HQmode))
    {
      operands[0] = x1;
      goto L5130;
    }
  goto L2630;

 L5130: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HQmode)
    goto L7089;
  x1 = XEXP (x0, 0);
  goto L2630;

 L7089: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L5131;
    case MINUS:
      goto L5337;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5131: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HQmode))
    {
      operands[1] = x2;
      goto L5132;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HQmode))
    {
      operands[2] = x2;
      return 642;  /* addhq3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5337: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HQmode))
    {
      operands[1] = x2;
      goto L5338;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5338: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HQmode))
    {
      operands[2] = x2;
      return 668;  /* subhq3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6344: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SQmode))
    {
      operands[0] = x1;
      goto L5135;
    }
  goto L2630;

 L5135: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SQmode)
    goto L7091;
  x1 = XEXP (x0, 0);
  goto L2630;

 L7091: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L5136;
    case MINUS:
      goto L5342;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5136: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SQmode))
    {
      operands[1] = x2;
      goto L5137;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5137: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SQmode))
    {
      operands[2] = x2;
      return 643;  /* addsq3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5342: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SQmode))
    {
      operands[1] = x2;
      goto L5343;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5343: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SQmode))
    {
      operands[2] = x2;
      return 669;  /* subsq3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6345: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DQmode))
    {
      operands[0] = x1;
      goto L5140;
    }
  goto L2630;

 L5140: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DQmode)
    goto L7093;
  x1 = XEXP (x0, 0);
  goto L2630;

 L7093: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L5141;
    case MINUS:
      goto L5347;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5141: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DQmode))
    {
      operands[1] = x2;
      goto L5142;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5142: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DQmode))
    {
      operands[2] = x2;
      goto L5143;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5143: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4 "../../gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 644;  /* adddq3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5347: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DQmode))
    {
      operands[1] = x2;
      goto L5348;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5348: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DQmode))
    {
      operands[2] = x2;
      goto L5349;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5349: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4 "../../gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 670;  /* subdq3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6346: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, UQQmode))
    {
      operands[0] = x1;
      goto L5146;
    }
  goto L2630;

 L5146: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == UQQmode)
    goto L7095;
  x1 = XEXP (x0, 0);
  goto L2630;

 L7095: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L5147;
    case MINUS:
      goto L5353;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5147: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UQQmode))
    {
      operands[1] = x2;
      goto L5148;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5148: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UQQmode))
    {
      operands[2] = x2;
      return 645;  /* adduqq3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5353: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UQQmode))
    {
      operands[1] = x2;
      goto L5354;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5354: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UQQmode))
    {
      operands[2] = x2;
      return 671;  /* subuqq3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6347: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, UHQmode))
    {
      operands[0] = x1;
      goto L5151;
    }
  goto L2630;

 L5151: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == UHQmode)
    goto L7097;
  x1 = XEXP (x0, 0);
  goto L2630;

 L7097: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L5152;
    case MINUS:
      goto L5358;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5152: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UHQmode))
    {
      operands[1] = x2;
      goto L5153;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5153: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UHQmode))
    {
      operands[2] = x2;
      return 646;  /* adduhq3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5358: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UHQmode))
    {
      operands[1] = x2;
      goto L5359;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5359: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UHQmode))
    {
      operands[2] = x2;
      return 672;  /* subuhq3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6348: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, USQmode))
    {
      operands[0] = x1;
      goto L5156;
    }
  goto L2630;

 L5156: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == USQmode)
    goto L7099;
  x1 = XEXP (x0, 0);
  goto L2630;

 L7099: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L5157;
    case MINUS:
      goto L5363;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5157: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, USQmode))
    {
      operands[1] = x2;
      goto L5158;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5158: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, USQmode))
    {
      operands[2] = x2;
      return 647;  /* addusq3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5363: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, USQmode))
    {
      operands[1] = x2;
      goto L5364;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5364: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, USQmode))
    {
      operands[2] = x2;
      return 673;  /* subusq3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6349: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, UDQmode))
    {
      operands[0] = x1;
      goto L5161;
    }
  goto L2630;

 L5161: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == UDQmode)
    goto L7101;
  x1 = XEXP (x0, 0);
  goto L2630;

 L7101: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L5162;
    case MINUS:
      goto L5368;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5162: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UDQmode))
    {
      operands[1] = x2;
      goto L5163;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5163: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UDQmode))
    {
      operands[2] = x2;
      goto L5164;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5164: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5 "../../gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 648;  /* addudq3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5368: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UDQmode))
    {
      operands[1] = x2;
      goto L5369;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5369: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UDQmode))
    {
      operands[2] = x2;
      goto L5370;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5370: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5 "../../gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 674;  /* subudq3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6350: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HAmode))
    {
      operands[0] = x1;
      goto L5167;
    }
  goto L2630;

 L5167: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HAmode)
    goto L7103;
  x1 = XEXP (x0, 0);
  goto L2630;

 L7103: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L5168;
    case MINUS:
      goto L5374;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5168: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HAmode))
    {
      operands[1] = x2;
      goto L5169;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5169: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HAmode))
    {
      operands[2] = x2;
      return 649;  /* addha3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5374: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HAmode))
    {
      operands[1] = x2;
      goto L5375;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5375: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HAmode))
    {
      operands[2] = x2;
      return 675;  /* subha3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6351: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SAmode))
    {
      operands[0] = x1;
      goto L5172;
    }
  goto L2630;

 L5172: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SAmode)
    goto L7105;
  x1 = XEXP (x0, 0);
  goto L2630;

 L7105: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L5173;
    case MINUS:
      goto L5379;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SAmode))
    {
      operands[1] = x2;
      goto L5174;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5174: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SAmode))
    {
      operands[2] = x2;
      return 650;  /* addsa3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5379: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SAmode))
    {
      operands[1] = x2;
      goto L5380;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5380: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SAmode))
    {
      operands[2] = x2;
      return 676;  /* subsa3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6352: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DAmode))
    {
      operands[0] = x1;
      goto L5177;
    }
  goto L2630;

 L5177: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DAmode)
    goto L7107;
  x1 = XEXP (x0, 0);
  goto L2630;

 L7107: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L5178;
    case MINUS:
      goto L5384;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5178: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DAmode))
    {
      operands[1] = x2;
      goto L5179;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5179: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DAmode))
    {
      operands[2] = x2;
      goto L5180;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5180: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6 "../../gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 651;  /* addda3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5384: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DAmode))
    {
      operands[1] = x2;
      goto L5385;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5385: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DAmode))
    {
      operands[2] = x2;
      goto L5386;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5386: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6 "../../gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 677;  /* subda3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6353: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, UHAmode))
    {
      operands[0] = x1;
      goto L5183;
    }
  goto L2630;

 L5183: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == UHAmode)
    goto L7109;
  x1 = XEXP (x0, 0);
  goto L2630;

 L7109: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L5184;
    case MINUS:
      goto L5390;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UHAmode))
    {
      operands[1] = x2;
      goto L5185;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5185: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UHAmode))
    {
      operands[2] = x2;
      return 652;  /* adduha3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5390: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UHAmode))
    {
      operands[1] = x2;
      goto L5391;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5391: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UHAmode))
    {
      operands[2] = x2;
      return 678;  /* subuha3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6354: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, USAmode))
    {
      operands[0] = x1;
      goto L5188;
    }
  goto L2630;

 L5188: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == USAmode)
    goto L7111;
  x1 = XEXP (x0, 0);
  goto L2630;

 L7111: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L5189;
    case MINUS:
      goto L5395;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5189: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, USAmode))
    {
      operands[1] = x2;
      goto L5190;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5190: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, USAmode))
    {
      operands[2] = x2;
      return 653;  /* addusa3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5395: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, USAmode))
    {
      operands[1] = x2;
      goto L5396;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5396: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, USAmode))
    {
      operands[2] = x2;
      return 679;  /* subusa3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L6355: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, UDAmode))
    {
      operands[0] = x1;
      goto L5193;
    }
  goto L2630;

 L5193: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == UDAmode)
    goto L7113;
  x1 = XEXP (x0, 0);
  goto L2630;

 L7113: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L5194;
    case MINUS:
      goto L5400;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5194: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UDAmode))
    {
      operands[1] = x2;
      goto L5195;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5195: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UDAmode))
    {
      operands[2] = x2;
      goto L5196;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5196: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7 "../../gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 654;  /* adduda3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5400: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UDAmode))
    {
      operands[1] = x2;
      goto L5401;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5401: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UDAmode))
    {
      operands[2] = x2;
      goto L5402;
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L5402: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7 "../../gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 680;  /* subuda3 */
    }
  x1 = XEXP (x0, 0);
  goto L2630;

 L3080: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L7115;
    case DImode:
      goto L7116;
    default:
      break;
    }
 L2631: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L3709;
    case LABEL_REF:
      goto L3071;
    default:
     break;
   }
  goto ret0;

 L7115: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3081;
    }
  goto L2631;

 L3081: ATTRIBUTE_UNUSED_LABEL
  if (
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    {
      return 414;  /* indirect_jumpsi */
    }
  x1 = XEXP (x0, 1);
  goto L2631;

 L7116: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L3085;
    }
  goto L2631;

 L3085: ATTRIBUTE_UNUSED_LABEL
  if (
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    {
      return 415;  /* indirect_jumpdi */
    }
  x1 = XEXP (x0, 1);
  goto L2631;

 L3709: ATTRIBUTE_UNUSED_LABEL
  return recog_9 (x0, insn, pnum_clobbers);

 L3071: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  goto L3072;

 L3072: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5405 "../../gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 412;  /* jump */
    }
 L3077: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5439 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 413;  /* *mips.md:5436 */
    }
  goto ret0;

 L3158: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL)
    goto L3159;
  goto ret0;

 L3159: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L3160;
  goto ret0;

 L3160: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L3161;
    }
  goto ret0;

 L3161: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L3162;

 L3162: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5818 "../../gcc/config/mips/mips.md"
(TARGET_SIBCALLS && SIBLING_CALL_P (insn)))
    {
      return 429;  /* sibcall_value_internal */
    }
 L3231: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 434;  /* call_value_internal */
    }
 L3249: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5957 "../../gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 435;  /* call_value_split */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_11 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L139;
    case PLUS:
      goto L243;
    case MINUS:
      goto L264;
    case NEG:
      goto L397;
    case TRUNCATE:
      goto L634;
    case UNSPEC:
      goto L7147;
    default:
     break;
   }
  goto ret0;

 L139: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L140;
    }
  goto ret0;

 L140: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L141;
    }
  goto ret0;

 L141: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L142;
  goto ret0;

 L142: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L143;
    }
  goto ret0;

 L143: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L144;
  goto ret0;

 L144: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L145;
    }
  goto ret0;

 L145: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1164 "../../gcc/config/mips/mips.md"
(ISA_HAS_MUL3))
    {
      return 23;  /* mulsi3_mult3 */
    }
 L192: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1217 "../../gcc/config/mips/mips.md"
(TARGET_FIX_R4000))
    {
      return 26;  /* mulsi3_r4000 */
    }
  goto ret0;

 L243: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L244;
  goto ret0;

 L244: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L245;
    }
  goto ret0;

 L245: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L246;
    }
  goto ret0;

 L246: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L247;
    }
 L311: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[0]))
    goto L312;
  goto ret0;

 L247: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L248;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L311;

 L248: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L249;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L311;

 L249: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L250;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L311;

 L250: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L251;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L311;

 L251: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1336 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACC))
    {
      return 29;  /* *macc */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L311;

 L312: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L313;
  goto ret0;

 L313: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L314;
    }
  goto ret0;

 L314: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L315;
  goto ret0;

 L315: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L316;
  goto ret0;

 L316: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L317;
  goto ret0;

 L317: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    goto L318;
  goto ret0;

 L318: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0]))
    goto L319;
  goto ret0;

 L319: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L320;
  goto ret0;

 L320: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L321;
    }
  goto ret0;

 L321: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1407 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACC && reload_completed))
    {
      return 32;  /* *macc2 */
    }
  goto ret0;

 L264: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L265;
    }
 L341: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[0]))
    goto L342;
  goto ret0;

 L265: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L266;
  x3 = XEXP (x2, 0);
  goto L341;

 L266: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L267;
    }
  x3 = XEXP (x2, 0);
  goto L341;

 L267: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L268;
    }
  x3 = XEXP (x2, 0);
  goto L341;

 L268: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L269;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L341;

 L269: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L270;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L341;

 L270: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L271;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L341;

 L271: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L272;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L341;

 L272: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1358 "../../gcc/config/mips/mips.md"
(ISA_HAS_MSAC))
    {
      return 30;  /* *msac */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L341;

 L342: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L343;
  goto ret0;

 L343: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L344;
    }
  goto ret0;

 L344: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L345;
    }
  goto ret0;

 L345: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L346;
  goto ret0;

 L346: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L347;
    }
  goto ret0;

 L347: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L348;
  goto ret0;

 L348: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L349;
  goto ret0;

 L349: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L350;
  goto ret0;

 L350: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L351;
  goto ret0;

 L351: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    goto L352;
  goto ret0;

 L352: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L353;
  goto ret0;

 L353: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L354;
    }
  goto ret0;

 L354: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1422 "../../gcc/config/mips/mips.md"
(ISA_HAS_MSAC && reload_completed))
    {
      return 33;  /* *msac2 */
    }
  goto ret0;

 L397: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L398;
  goto ret0;

 L398: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L399;
    }
  goto ret0;

 L399: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L400;
    }
  goto ret0;

 L400: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L401;
  goto ret0;

 L401: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L402;
    }
  goto ret0;

 L402: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L403;
  goto ret0;

 L403: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L404;
    }
  goto ret0;

 L404: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1590 "../../gcc/config/mips/mips.md"
(ISA_HAS_MULS))
    {
      return 35;  /* *muls */
    }
  goto ret0;

 L634: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L635;
  goto ret0;

 L635: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L7152;
  goto ret0;

 L7152: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case MULT:
      goto L636;
    case NEG:
      goto L688;
    default:
     break;
   }
  goto ret0;

 L636: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L7154;
  goto ret0;

 L7154: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L637;
    case ZERO_EXTEND:
      goto L663;
    default:
     break;
   }
  goto ret0;

 L637: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L638;
    }
  goto ret0;

 L638: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L639;
  goto ret0;

 L639: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L640;
    }
  goto ret0;

 L640: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L641;
  goto ret0;

 L641: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L642;
  goto ret0;

 L642: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L643;
    }
  goto ret0;

 L643: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L644;
  goto ret0;

 L644: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L645;
    }
  goto ret0;

 L645: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1778 "../../gcc/config/mips/mips.md"
(ISA_HAS_MULHI))
    {
      return 50;  /* smulsi3_highpart_mulhi_internal */
    }
  goto ret0;

 L663: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L664;
    }
  goto ret0;

 L664: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L665;
  goto ret0;

 L665: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L666;
    }
  goto ret0;

 L666: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L667;
  goto ret0;

 L667: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L668;
  goto ret0;

 L668: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L669;
    }
  goto ret0;

 L669: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L670;
  goto ret0;

 L670: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L671;
    }
  goto ret0;

 L671: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1778 "../../gcc/config/mips/mips.md"
(ISA_HAS_MULHI))
    {
      return 51;  /* umulsi3_highpart_mulhi_internal */
    }
  goto ret0;

 L688: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == MULT)
    goto L689;
  goto ret0;

 L689: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) == DImode)
    goto L7156;
  goto ret0;

 L7156: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x6))
    {
    case SIGN_EXTEND:
      goto L690;
    case ZERO_EXTEND:
      goto L718;
    default:
     break;
   }
  goto ret0;

 L690: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[1] = x7;
      goto L691;
    }
  goto ret0;

 L691: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_MODE (x6) == DImode
      && GET_CODE (x6) == SIGN_EXTEND)
    goto L692;
  goto ret0;

 L692: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[2] = x7;
      goto L693;
    }
  goto ret0;

 L693: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L694;
  goto ret0;

 L694: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L695;
  goto ret0;

 L695: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L696;
    }
  goto ret0;

 L696: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L697;
  goto ret0;

 L697: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L698;
    }
  goto ret0;

 L698: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1796 "../../gcc/config/mips/mips.md"
(ISA_HAS_MULHI))
    {
      return 52;  /* *smulsi3_highpart_neg_mulhi_internal */
    }
  goto ret0;

 L718: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[1] = x7;
      goto L719;
    }
  goto ret0;

 L719: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_MODE (x6) == DImode
      && GET_CODE (x6) == ZERO_EXTEND)
    goto L720;
  goto ret0;

 L720: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[2] = x7;
      goto L721;
    }
  goto ret0;

 L721: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L722;
  goto ret0;

 L722: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L723;
  goto ret0;

 L723: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L724;
    }
  goto ret0;

 L724: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L725;
  goto ret0;

 L725: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L726;
    }
  goto ret0;

 L726: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1796 "../../gcc/config/mips/mips.md"
(ISA_HAS_MULHI))
    {
      return 53;  /* *umulsi3_highpart_neg_mulhi_internal */
    }
  goto ret0;

 L7147: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L7158;
    case 3:
      goto L7160;
    default:
      break;
    }
  goto ret0;

 L7158: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 331L:
      goto L4224;
    case 332L:
      goto L4249;
    case 418L:
      goto L4836;
    case 420L:
      goto L4886;
    default:
      break;
    }
  goto ret0;

 L4224: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L4225;
    }
  goto ret0;

 L4225: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4226;
    }
  goto ret0;

 L4226: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4227;
  goto ret0;

 L4227: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4228;
  goto ret0;

 L4228: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 331)
    goto L4229;
  goto ret0;

 L4229: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4230;
  goto ret0;

 L4230: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4231;
  goto ret0;

 L4231: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4232;
  goto ret0;

 L4232: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L4233;
    }
  goto ret0;

 L4233: ATTRIBUTE_UNUSED_LABEL
  if (
#line 453 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 551;  /* mips_muleq_s_w_phl */
    }
  goto ret0;

 L4249: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L4250;
    }
  goto ret0;

 L4250: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4251;
    }
  goto ret0;

 L4251: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4252;
  goto ret0;

 L4252: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4253;
  goto ret0;

 L4253: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 332)
    goto L4254;
  goto ret0;

 L4254: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4255;
  goto ret0;

 L4255: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4256;
  goto ret0;

 L4256: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4257;
  goto ret0;

 L4257: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L4258;
    }
  goto ret0;

 L4258: ATTRIBUTE_UNUSED_LABEL
  if (
#line 467 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 552;  /* mips_muleq_s_w_phr */
    }
  goto ret0;

 L4836: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4837;
    }
  goto ret0;

 L4837: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4838;
    }
  goto ret0;

 L4838: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4839;
  goto ret0;

 L4839: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4840;
  goto ret0;

 L4840: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 418)
    goto L4841;
  goto ret0;

 L4841: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4842;
  goto ret0;

 L4842: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4843;
  goto ret0;

 L4843: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4844;
  goto ret0;

 L4844: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L4845;
    }
  goto ret0;

 L4845: ATTRIBUTE_UNUSED_LABEL
  if (
#line 209 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 610;  /* mips_mulq_rs_w */
    }
  goto ret0;

 L4886: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4887;
    }
  goto ret0;

 L4887: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4888;
    }
  goto ret0;

 L4888: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4889;
  goto ret0;

 L4889: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4890;
  goto ret0;

 L4890: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 420)
    goto L4891;
  goto ret0;

 L4891: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4892;
  goto ret0;

 L4892: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4893;
  goto ret0;

 L4893: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4894;
  goto ret0;

 L4894: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L4895;
    }
  goto ret0;

 L4895: ATTRIBUTE_UNUSED_LABEL
  if (
#line 237 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 612;  /* mips_mulq_s_w */
    }
  goto ret0;

 L7160: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 363)
    goto L4569;
  goto ret0;

 L4569: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4570;
    }
  goto ret0;

 L4570: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4571;
    }
  goto ret0;

 L4571: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182)
    goto L4572;
  goto ret0;

 L4572: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4573;
  goto ret0;

 L4573: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 182)
    goto L4574;
  goto ret0;

 L4574: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 363)
    goto L4575;
  goto ret0;

 L4575: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4576;
  goto ret0;

 L4576: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4577;
  goto ret0;

 L4577: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182)
    goto L4578;
  goto ret0;

 L4578: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L4579;
  goto ret0;

 L4579: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 187)
    goto L4580;
  goto ret0;

 L4580: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 363)
    goto L4581;
  goto ret0;

 L4581: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4582;
  goto ret0;

 L4582: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 923 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 587;  /* mips_extpdp */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_12 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L7131;
    case DImode:
      goto L7132;
    case V2HImode:
      goto L7133;
    case V2HQmode:
      goto L7134;
    case HQmode:
      goto L7135;
    case SQmode:
      goto L7136;
    default:
      break;
    }
 L3234: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L3235;
    }
  goto ret0;

 L7131: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L138;
    }
  goto L3234;

 L138: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L7137;
  x2 = XEXP (x1, 0);
  goto L3234;

 L7137: ATTRIBUTE_UNUSED_LABEL
  tem = recog_11 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L3234;

 L7132: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L202;
    }
  goto L3234;

 L202: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MULT)
    goto L203;
  x2 = XEXP (x1, 0);
  goto L3234;

 L203: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L204;
    }
  x2 = XEXP (x1, 0);
  goto L3234;

 L204: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L205;
    }
  x2 = XEXP (x1, 0);
  goto L3234;

 L205: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L206;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L206: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L207;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L207: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L208;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L209;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L209: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1217 "../../gcc/config/mips/mips.md"
(TARGET_FIX_R4000) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 27;  /* muldi3_r4000 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L7133: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HImode))
    {
      operands[0] = x2;
      goto L4148;
    }
  goto L3234;

 L4148: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HImode)
    goto L7163;
  x2 = XEXP (x1, 0);
  goto L3234;

 L7163: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      goto L7169;
    case MULT:
      goto L4786;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3234;

 L7169: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 2)
    goto L7174;
  x2 = XEXP (x1, 0);
  goto L3234;

 L7174: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 328L:
      goto L4149;
    case 329L:
      goto L4174;
    case 330L:
      goto L4199;
    case 417L:
      goto L4811;
    case 419L:
      goto L4861;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L3234;

 L4149: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L4150;
    }
  x2 = XEXP (x1, 0);
  goto L3234;

 L4150: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4151;
    }
  x2 = XEXP (x1, 0);
  goto L3234;

 L4151: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4152;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4152: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4153;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4153: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 328)
    goto L4154;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4154: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4155;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4155: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4156;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4156: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4157;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4157: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L4158;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4158: ATTRIBUTE_UNUSED_LABEL
  if (
#line 409 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 548;  /* mips_muleu_s_ph_qbl */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4174: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L4175;
    }
  x2 = XEXP (x1, 0);
  goto L3234;

 L4175: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4176;
    }
  x2 = XEXP (x1, 0);
  goto L3234;

 L4176: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4177;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4177: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4178;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4178: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 329)
    goto L4179;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4179: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4180;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4180: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4181;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4181: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4182;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4182: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L4183;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4183: ATTRIBUTE_UNUSED_LABEL
  if (
#line 423 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 549;  /* mips_muleu_s_ph_qbr */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4199: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L4200;
    }
  x2 = XEXP (x1, 0);
  goto L3234;

 L4200: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4201;
    }
  x2 = XEXP (x1, 0);
  goto L3234;

 L4201: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4202;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4202: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4203;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4203: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 330)
    goto L4204;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4204: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4205;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4205: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4206;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4206: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4207;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4207: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L4208;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4208: ATTRIBUTE_UNUSED_LABEL
  if (
#line 438 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 550;  /* mips_mulq_rs_ph */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4811: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L4812;
    }
  x2 = XEXP (x1, 0);
  goto L3234;

 L4812: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4813;
    }
  x2 = XEXP (x1, 0);
  goto L3234;

 L4813: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4814;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4814: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4815;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4815: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 417)
    goto L4816;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4816: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4817;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4817: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4818;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4818: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4819;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4819: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L4820;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4820: ATTRIBUTE_UNUSED_LABEL
  if (
#line 195 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 609;  /* mips_mul_s_ph */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4861: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L4862;
    }
  x2 = XEXP (x1, 0);
  goto L3234;

 L4862: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4863;
    }
  x2 = XEXP (x1, 0);
  goto L3234;

 L4863: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4864;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4864: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4865;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4865: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 419)
    goto L4866;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4866: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4867;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4867: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4868;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4868: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4869;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4869: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L4870;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4870: ATTRIBUTE_UNUSED_LABEL
  if (
#line 223 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 611;  /* mips_mulq_s_ph */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4786: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L4787;
    }
  x2 = XEXP (x1, 0);
  goto L3234;

 L4787: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4788;
    }
  x2 = XEXP (x1, 0);
  goto L3234;

 L4788: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4789;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4789: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4790;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4790: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 416)
    goto L4791;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4791: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4792;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4792: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4793;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4793: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4794;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4794: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L4795;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L4795: ATTRIBUTE_UNUSED_LABEL
  if (
#line 181 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 608;  /* mulv2hi3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L7134: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HQmode))
    {
      operands[0] = x2;
      goto L5538;
    }
  goto L3234;

 L5538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HQmode
      && GET_CODE (x2) == SS_MULT)
    goto L5539;
  x2 = XEXP (x1, 0);
  goto L3234;

 L5539: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HQmode))
    {
      operands[1] = x3;
      goto L5540;
    }
  x2 = XEXP (x1, 0);
  goto L3234;

 L5540: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HQmode))
    {
      operands[2] = x3;
      goto L5541;
    }
  x2 = XEXP (x1, 0);
  goto L3234;

 L5541: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5542;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L5542: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5543;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L5543: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 330)
    goto L5544;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L5544: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5545;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L5545: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5546;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L5546: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5547;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L5547: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L5548;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L5548: ATTRIBUTE_UNUSED_LABEL
  if (
#line 23 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 693;  /* ssmulv2hq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L7135: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HQmode))
    {
      operands[0] = x2;
      goto L5563;
    }
  goto L3234;

 L5563: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HQmode
      && GET_CODE (x2) == SS_MULT)
    goto L5564;
  x2 = XEXP (x1, 0);
  goto L3234;

 L5564: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HQmode))
    {
      operands[1] = x3;
      goto L5565;
    }
  x2 = XEXP (x1, 0);
  goto L3234;

 L5565: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HQmode))
    {
      operands[2] = x3;
      goto L5566;
    }
  x2 = XEXP (x1, 0);
  goto L3234;

 L5566: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5567;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L5567: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5568;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L5568: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 330)
    goto L5569;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L5569: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5570;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L5570: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5571;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L5571: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5572;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L5572: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L5573;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L5573: ATTRIBUTE_UNUSED_LABEL
  if (
#line 23 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 694;  /* ssmulhq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L7136: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SQmode))
    {
      operands[0] = x2;
      goto L5588;
    }
  goto L3234;

 L5588: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SQmode
      && GET_CODE (x2) == SS_MULT)
    goto L5589;
  x2 = XEXP (x1, 0);
  goto L3234;

 L5589: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SQmode))
    {
      operands[1] = x3;
      goto L5590;
    }
  x2 = XEXP (x1, 0);
  goto L3234;

 L5590: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SQmode))
    {
      operands[2] = x3;
      goto L5591;
    }
  x2 = XEXP (x1, 0);
  goto L3234;

 L5591: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5592;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L5592: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5593;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L5593: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 330)
    goto L5594;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L5594: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5595;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L5595: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5596;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L5596: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5597;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L5597: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L5598;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L5598: ATTRIBUTE_UNUSED_LABEL
  if (
#line 24 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 695;  /* ssmulsq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3234;

 L3235: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L3236;
  goto ret0;

 L3236: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L3237;
  goto ret0;

 L3237: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3238;
    }
 L3255: ATTRIBUTE_UNUSED_LABEL
  if (const_call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3256;
    }
 L3273: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3274;
    }
  goto ret0;

 L3238: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L3239;

 L3239: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3240;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3255;

 L3240: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L3241;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3255;

 L3241: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3242;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3255;

 L3242: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && 
#line 5957 "../../gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS))
    {
      return 435;  /* call_value_split */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3255;

 L3256: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L3257;

 L3257: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L3258;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3273;

 L3258: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3259;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3273;

 L3259: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 436;  /* call_value_internal_direct */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3273;

 L3274: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L3275;

 L3275: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3276;
  goto ret0;

 L3276: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L3277;
    }
  goto ret0;

 L3277: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L3278;
  goto ret0;

 L3278: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L3279;
  goto ret0;

 L3279: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L3280;
  goto ret0;

 L3280: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L3281;
  goto ret0;

 L3281: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3282;
  goto ret0;

 L3282: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 437;  /* call_value_multiple_internal */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_13 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (XINT (x2, 1))
    {
    case 301L:
      goto L3857;
    case 303L:
      goto L3912;
    case 304L:
      goto L3945;
    case 324L:
      goto L4103;
    case 331L:
      goto L4238;
    case 332L:
      goto L4263;
    case 358L:
      goto L4513;
    case 359L:
      goto L4524;
    case 360L:
      goto L4535;
    case 361L:
      goto L4546;
    case 407L:
      goto L4736;
    case 408L:
      goto L4748;
    case 409L:
      goto L4760;
    case 418L:
      goto L4850;
    case 420L:
      goto L4900;
    default:
      break;
    }
  goto ret0;

 L3857: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3858;
    }
  goto ret0;

 L3858: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3859;
    }
  goto ret0;

 L3859: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3860;
  goto ret0;

 L3860: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3861;
  goto ret0;

 L3861: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L3862;
  goto ret0;

 L3862: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3863;
  goto ret0;

 L3863: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 10 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 512;  /* mips_addq_s_w */
    }
  goto ret0;

 L3912: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3913;
    }
  goto ret0;

 L3913: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3914;
    }
  goto ret0;

 L3914: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3915;
  goto ret0;

 L3915: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3916;
  goto ret0;

 L3916: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L3917;
  goto ret0;

 L3917: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3918;
  goto ret0;

 L3918: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 84 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 10 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)))
    {
      return 517;  /* mips_subq_s_w */
    }
  goto ret0;

 L3945: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3946;
    }
  goto ret0;

 L3946: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3947;
    }
  goto ret0;

 L3947: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3948;
  goto ret0;

 L3948: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 184)
    goto L3949;
  goto ret0;

 L3949: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 304)
    goto L3950;
  goto ret0;

 L3950: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3951;
  goto ret0;

 L3951: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 98 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 520;  /* mips_addsc */
    }
  goto ret0;

 L4103: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4104;
    }
  goto ret0;

 L4104: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4105;
    }
  goto ret0;

 L4105: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4106;
  goto ret0;

 L4106: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4107;
  goto ret0;

 L4107: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 324)
    goto L4108;
  goto ret0;

 L4108: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4109;
  goto ret0;

 L4109: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 327 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 19 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)))
    {
      return 542;  /* mips_shll_s_w */
    }
  goto ret0;

 L4238: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L4239;
    }
  goto ret0;

 L4239: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4240;
    }
  goto ret0;

 L4240: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4241;
  goto ret0;

 L4241: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4242;
  goto ret0;

 L4242: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 331)
    goto L4243;
  goto ret0;

 L4243: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4244;
  goto ret0;

 L4244: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 453 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 551;  /* mips_muleq_s_w_phl */
    }
  goto ret0;

 L4263: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L4264;
    }
  goto ret0;

 L4264: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4265;
    }
  goto ret0;

 L4265: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4266;
  goto ret0;

 L4266: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4267;
  goto ret0;

 L4267: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 332)
    goto L4268;
  goto ret0;

 L4268: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4269;
  goto ret0;

 L4269: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 467 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 552;  /* mips_muleq_s_w_phr */
    }
  goto ret0;

 L4513: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4514;
    }
  goto ret0;

 L4514: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4515;
    }
  goto ret0;

 L4515: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4516;
  goto ret0;

 L4516: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4517;
  goto ret0;

 L4517: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 358)
    goto L4518;
  goto ret0;

 L4518: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4519;
  goto ret0;

 L4519: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 811 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 582;  /* mips_extr_w */
    }
  goto ret0;

 L4524: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4525;
    }
  goto ret0;

 L4525: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4526;
    }
  goto ret0;

 L4526: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4527;
  goto ret0;

 L4527: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4528;
  goto ret0;

 L4528: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 359)
    goto L4529;
  goto ret0;

 L4529: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4530;
  goto ret0;

 L4530: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 832 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 583;  /* mips_extr_r_w */
    }
  goto ret0;

 L4535: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4536;
    }
  goto ret0;

 L4536: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4537;
    }
  goto ret0;

 L4537: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4538;
  goto ret0;

 L4538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4539;
  goto ret0;

 L4539: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 360)
    goto L4540;
  goto ret0;

 L4540: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4541;
  goto ret0;

 L4541: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 853 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 584;  /* mips_extr_rs_w */
    }
  goto ret0;

 L4546: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4547;
    }
  goto ret0;

 L4547: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4548;
    }
  goto ret0;

 L4548: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4549;
  goto ret0;

 L4549: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4550;
  goto ret0;

 L4550: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 361)
    goto L4551;
  goto ret0;

 L4551: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4552;
  goto ret0;

 L4552: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 875 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 585;  /* mips_extr_s_h */
    }
  goto ret0;

 L4736: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L4737;
    }
  goto ret0;

 L4737: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L4738;
    }
  goto ret0;

 L4738: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4739;
  goto ret0;

 L4739: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186)
    goto L4740;
  goto ret0;

 L4740: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 407)
    goto L4741;
  goto ret0;

 L4741: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4742;
  goto ret0;

 L4742: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4743;
  goto ret0;

 L4743: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 186
      && 
#line 100 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 603;  /* mips_cmpgdu_eq_qb */
    }
  goto ret0;

 L4748: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L4749;
    }
  goto ret0;

 L4749: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L4750;
    }
  goto ret0;

 L4750: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4751;
  goto ret0;

 L4751: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186)
    goto L4752;
  goto ret0;

 L4752: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 408)
    goto L4753;
  goto ret0;

 L4753: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4754;
  goto ret0;

 L4754: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4755;
  goto ret0;

 L4755: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 186
      && 
#line 115 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 604;  /* mips_cmpgdu_lt_qb */
    }
  goto ret0;

 L4760: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L4761;
    }
  goto ret0;

 L4761: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L4762;
    }
  goto ret0;

 L4762: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4763;
  goto ret0;

 L4763: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186)
    goto L4764;
  goto ret0;

 L4764: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 409)
    goto L4765;
  goto ret0;

 L4765: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4766;
  goto ret0;

 L4766: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4767;
  goto ret0;

 L4767: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 186
      && 
#line 130 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 605;  /* mips_cmpgdu_le_qb */
    }
  goto ret0;

 L4850: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4851;
    }
  goto ret0;

 L4851: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4852;
    }
  goto ret0;

 L4852: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4853;
  goto ret0;

 L4853: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4854;
  goto ret0;

 L4854: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 418)
    goto L4855;
  goto ret0;

 L4855: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4856;
  goto ret0;

 L4856: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 209 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 610;  /* mips_mulq_rs_w */
    }
  goto ret0;

 L4900: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4901;
    }
  goto ret0;

 L4901: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4902;
    }
  goto ret0;

 L4902: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4903;
  goto ret0;

 L4903: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4904;
  goto ret0;

 L4904: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 420)
    goto L4905;
  goto ret0;

 L4905: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4906;
  goto ret0;

 L4906: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 237 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 612;  /* mips_mulq_s_w */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_14 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L156;
    case PLUS:
      goto L326;
    case MINUS:
      goto L2278;
    case TRUNCATE:
      goto L586;
    case DIV:
      goto L1017;
    case UDIV:
      goto L1039;
    case FIX:
      goto L1547;
    case UNSPEC:
      goto L7224;
    case SUBREG:
    case MEM:
      goto L7205;
    default:
      goto ret0;
   }
 L7205: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2162;
    }
  goto ret0;

 L156: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L157;
    }
  goto ret0;

 L157: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L158;
    }
  goto ret0;

 L158: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L159;
  goto ret0;

 L159: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L160;
    }
  goto ret0;

 L160: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1206 "../../gcc/config/mips/mips.md"
(!TARGET_FIX_R4000))
    {
      return 24;  /* mulsi3_internal */
    }
  goto ret0;

 L326: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L7242;
  goto ret0;

 L7242: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == MULT)
    goto L327;
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2255;
    }
  goto ret0;

 L327: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L328;
    }
  goto ret0;

 L328: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L329;
    }
  goto ret0;

 L329: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0]))
    goto L330;
  goto ret0;

 L330: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L331;
    case CLOBBER:
      goto L795;
    default:
     break;
   }
  goto ret0;

 L331: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L332;
    }
  goto ret0;

 L332: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L333;
  goto ret0;

 L333: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L334;
  goto ret0;

 L334: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L335;
  goto ret0;

 L335: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    goto L336;
  goto ret0;

 L336: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 1407 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACC && reload_completed)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 32;  /* *macc2 */
    }
  goto ret0;

 L795: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L796;
    }
  goto ret0;

 L796: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1830 "../../gcc/config/mips/mips.md"
(TARGET_MAD))
    {
      return 56;  /* madsi */
    }
  goto ret0;

 L2255: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2256;
    }
  goto ret0;

 L2256: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2257;
  goto ret0;

 L2257: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L2258;
  goto ret0;

 L2258: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 39)
    goto L2259;
  goto ret0;

 L2259: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L2260;
  goto ret0;

 L2260: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2261;
  goto ret0;

 L2261: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && 
#line 4558 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC))
    {
      return 296;  /* sync_new_addsi */
    }
  goto ret0;

 L2278: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2279;
    }
 L359: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[0]))
    goto L360;
  goto ret0;

 L2279: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2280;
    }
  x3 = XEXP (x2, 0);
  goto L359;

 L2280: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2281;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L359;

 L2281: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L2282;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L359;

 L2282: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 39)
    goto L2283;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L359;

 L2283: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MINUS)
    goto L2284;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L359;

 L2284: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2285;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L359;

 L2285: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && 
#line 4575 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC))
    {
      return 298;  /* sync_new_subsi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L359;

 L360: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L361;
  goto ret0;

 L361: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L362;
    }
  goto ret0;

 L362: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L363;
    }
  goto ret0;

 L363: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L364;
  goto ret0;

 L364: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L365;
    }
  goto ret0;

 L365: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L366;
  goto ret0;

 L366: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L367;
  goto ret0;

 L367: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L368;
  goto ret0;

 L368: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L369;
  goto ret0;

 L369: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && 
#line 1422 "../../gcc/config/mips/mips.md"
(ISA_HAS_MSAC && reload_completed)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 33;  /* *msac2 */
    }
  goto ret0;

 L586: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L587;
  goto ret0;

 L587: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L588;
  goto ret0;

 L588: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L7244;
  goto ret0;

 L7244: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L589;
    case ZERO_EXTEND:
      goto L613;
    default:
     break;
   }
  goto ret0;

 L589: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L590;
    }
  goto ret0;

 L590: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L591;
  goto ret0;

 L591: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L592;
    }
  goto ret0;

 L592: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L593;
  goto ret0;

 L593: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L594;
  goto ret0;

 L594: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L595;
    }
  goto ret0;

 L595: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1763 "../../gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_FIX_R4000))
    {
      return 48;  /* smulsi3_highpart_internal */
    }
  goto ret0;

 L613: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L614;
    }
  goto ret0;

 L614: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L615;
  goto ret0;

 L615: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L616;
    }
  goto ret0;

 L616: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L617;
  goto ret0;

 L617: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L618;
  goto ret0;

 L618: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L619;
    }
  goto ret0;

 L619: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1763 "../../gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_FIX_R4000))
    {
      return 49;  /* umulsi3_highpart_internal */
    }
  goto ret0;

 L1017: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1018;
    }
  goto ret0;

 L1018: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1019;
    }
  goto ret0;

 L1019: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1020;
  goto ret0;

 L1020: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1021;
    }
  goto ret0;

 L1021: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MOD)
    goto L1022;
  goto ret0;

 L1022: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1023;
  goto ret0;

 L1023: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 2011 "../../gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120))
    {
      return 83;  /* divmodsi4 */
    }
  goto ret0;

 L1039: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1040;
    }
  goto ret0;

 L1040: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1041;
    }
  goto ret0;

 L1041: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1042;
  goto ret0;

 L1042: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1043;
    }
  goto ret0;

 L1043: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UMOD)
    goto L1044;
  goto ret0;

 L1044: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1045;
  goto ret0;

 L1045: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    {
      return 85;  /* udivmodsi4 */
    }
  goto ret0;

 L1547: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L7246;
    case SFmode:
      goto L7247;
    default:
      break;
    }
  goto ret0;

 L7246: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L1548;
    }
  goto ret0;

 L1548: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1549;
  goto ret0;

 L1549: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L1550;
    }
  goto ret0;

 L1550: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2792 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W))
    {
      return 175;  /* fix_truncdfsi2_macro */
    }
  goto ret0;

 L7247: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L1566;
    }
  goto ret0;

 L1566: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1567;
  goto ret0;

 L1567: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L1568;
    }
  goto ret0;

 L1568: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2830 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W))
    {
      return 177;  /* fix_truncsfsi2_macro */
    }
  goto ret0;

 L7224: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L7248;
    case 3:
      goto L7251;
    case 1:
      goto L7252;
    default:
      break;
    }
  goto ret0;

 L7248: ATTRIBUTE_UNUSED_LABEL
  return recog_13 (x0, insn, pnum_clobbers);

 L7251: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 305L:
      goto L3956;
    case 362L:
      goto L4557;
    default:
      break;
    }
  goto ret0;

 L3956: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3957;
    }
  goto ret0;

 L3957: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3958;
    }
  goto ret0;

 L3958: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 184)
    goto L3959;
  goto ret0;

 L3959: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3960;
  goto ret0;

 L3960: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3961;
  goto ret0;

 L3961: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 305)
    goto L3962;
  goto ret0;

 L3962: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3963;
  goto ret0;

 L3963: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 113 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 521;  /* mips_addwc */
    }
  goto ret0;

 L4557: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4558;
    }
  goto ret0;

 L4558: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4559;
    }
  goto ret0;

 L4559: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182)
    goto L4560;
  goto ret0;

 L4560: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4561;
  goto ret0;

 L4561: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 187)
    goto L4562;
  goto ret0;

 L4562: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 362)
    goto L4563;
  goto ret0;

 L4563: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4564;
  goto ret0;

 L4564: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 898 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 586;  /* mips_extp */
    }
  goto ret0;

 L7252: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 308)
    goto L3979;
  goto ret0;

 L3979: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3980;
    }
  goto ret0;

 L3980: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3981;
  goto ret0;

 L3981: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3982;
  goto ret0;

 L3982: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 308)
    goto L3983;
  goto ret0;

 L3983: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1])
      && (
#line 147 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 19 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)))
    {
      return 524;  /* mips_absq_s_w */
    }
  goto ret0;

 L2162: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2163;
  goto ret0;

 L2163: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L2164;
  goto ret0;

 L2164: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L7266;
  goto ret0;

 L7266: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC_VOLATILE)
    goto L7270;
  goto ret0;

 L7270: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L7274;
    case 1:
      goto L7275;
    default:
      break;
    }
  goto ret0;

 L7274: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 37)
    goto L2165;
  goto ret0;

 L2165: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2166;
    }
  goto ret0;

 L2166: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2167;
    }
  goto ret0;

 L2167: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4483 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC))
    {
      return 286;  /* sync_compare_and_swapsi */
    }
  goto ret0;

 L7275: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 38L:
      goto L2213;
    case 39L:
      goto L2401;
    case 40L:
      goto L2507;
    default:
      break;
    }
  goto ret0;

 L2213: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == SImode)
    goto L7278;
 L2471: ATTRIBUTE_UNUSED_LABEL
  if (uns_arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2472;
    }
  goto ret0;

 L7278: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L2214;
    case MINUS:
      goto L2236;
    case IOR:
      goto L2342;
    case XOR:
      goto L2352;
    case AND:
      goto L2362;
    default:
     break;
   }
  goto L2471;

 L2214: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2215;
  goto L2471;

 L2215: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2216;
    }
  goto L2471;

 L2216: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4527 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC))
    {
      return 292;  /* sync_old_addsi */
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  goto L2471;

 L2236: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2237;
  goto L2471;

 L2237: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2238;
    }
  goto L2471;

 L2238: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4544 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC))
    {
      return 294;  /* sync_old_subsi */
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  goto L2471;

 L2342: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2343;
    }
  goto L2471;

 L2343: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && 
#line 4604 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC))
    {
      return 306;  /* sync_old_iorsi */
    }
  goto L2471;

 L2352: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2353;
    }
  goto L2471;

 L2353: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && 
#line 4604 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC))
    {
      return 307;  /* sync_old_xorsi */
    }
  goto L2471;

 L2362: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2363;
    }
  goto L2471;

 L2363: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && 
#line 4604 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC))
    {
      return 308;  /* sync_old_andsi */
    }
  goto L2471;

 L2472: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4649 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC))
    {
      return 320;  /* sync_old_nandsi */
    }
  goto ret0;

 L2401: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == SImode)
    goto L7283;
 L2489: ATTRIBUTE_UNUSED_LABEL
  if (uns_arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2490;
    }
  goto ret0;

 L7283: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case IOR:
      goto L2402;
    case XOR:
      goto L2412;
    case AND:
      goto L2422;
    default:
     break;
   }
  goto L2489;

 L2402: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2403;
    }
  goto L2489;

 L2403: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && 
#line 4621 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC))
    {
      return 312;  /* sync_new_iorsi */
    }
  goto L2489;

 L2412: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2413;
    }
  goto L2489;

 L2413: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && 
#line 4621 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC))
    {
      return 313;  /* sync_new_xorsi */
    }
  goto L2489;

 L2422: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2423;
    }
  goto L2489;

 L2423: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && 
#line 4621 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC))
    {
      return 314;  /* sync_new_andsi */
    }
  goto L2489;

 L2490: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4664 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC))
    {
      return 322;  /* sync_new_nandsi */
    }
  goto ret0;

 L2507: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2508;
    }
  goto ret0;

 L2508: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4679 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC))
    {
      return 324;  /* sync_lock_test_and_setsi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_15 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (XINT (x2, 1))
    {
    case 337L:
      goto L4302;
    case 338L:
      goto L4315;
    case 339L:
      goto L4328;
    case 340L:
      goto L4341;
    case 341L:
      goto L4354;
    case 342L:
      goto L4367;
    case 343L:
      goto L4380;
    case 344L:
      goto L4393;
    case 345L:
      goto L4406;
    case 365L:
      goto L4593;
    case 445L:
      goto L5075;
    case 446L:
      goto L5088;
    case 447L:
      goto L5101;
    case 448L:
      goto L5114;
    default:
      break;
    }
  goto ret0;

 L4302: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4303;
    }
  goto ret0;

 L4303: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4304;
    }
  goto ret0;

 L4304: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L4305;
    }
  goto ret0;

 L4305: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4306;
  goto ret0;

 L4306: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4307;
  goto ret0;

 L4307: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 337)
    goto L4308;
  goto ret0;

 L4308: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4309;
  goto ret0;

 L4309: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4310;
  goto ret0;

 L4310: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 529 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 557;  /* mips_dpaq_s_w_ph */
    }
  goto ret0;

 L4315: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4316;
    }
  goto ret0;

 L4316: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4317;
    }
  goto ret0;

 L4317: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L4318;
    }
  goto ret0;

 L4318: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4319;
  goto ret0;

 L4319: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4320;
  goto ret0;

 L4320: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 338)
    goto L4321;
  goto ret0;

 L4321: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4322;
  goto ret0;

 L4322: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4323;
  goto ret0;

 L4323: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 545 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 558;  /* mips_dpsq_s_w_ph */
    }
  goto ret0;

 L4328: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4329;
    }
  goto ret0;

 L4329: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4330;
    }
  goto ret0;

 L4330: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L4331;
    }
  goto ret0;

 L4331: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4332;
  goto ret0;

 L4332: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4333;
  goto ret0;

 L4333: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 339)
    goto L4334;
  goto ret0;

 L4334: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4335;
  goto ret0;

 L4335: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4336;
  goto ret0;

 L4336: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 561 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 559;  /* mips_mulsaq_s_w_ph */
    }
  goto ret0;

 L4341: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4342;
    }
  goto ret0;

 L4342: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4343;
    }
  goto ret0;

 L4343: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4344;
    }
  goto ret0;

 L4344: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4345;
  goto ret0;

 L4345: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4346;
  goto ret0;

 L4346: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 340)
    goto L4347;
  goto ret0;

 L4347: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4348;
  goto ret0;

 L4348: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4349;
  goto ret0;

 L4349: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 577 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 560;  /* mips_dpaq_sa_l_w */
    }
  goto ret0;

 L4354: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4355;
    }
  goto ret0;

 L4355: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4356;
    }
  goto ret0;

 L4356: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4357;
    }
  goto ret0;

 L4357: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4358;
  goto ret0;

 L4358: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4359;
  goto ret0;

 L4359: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 341)
    goto L4360;
  goto ret0;

 L4360: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4361;
  goto ret0;

 L4361: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4362;
  goto ret0;

 L4362: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 593 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 561;  /* mips_dpsq_sa_l_w */
    }
  goto ret0;

 L4367: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4368;
    }
  goto ret0;

 L4368: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4369;
    }
  goto ret0;

 L4369: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L4370;
    }
  goto ret0;

 L4370: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4371;
  goto ret0;

 L4371: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4372;
  goto ret0;

 L4372: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 342)
    goto L4373;
  goto ret0;

 L4373: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4374;
  goto ret0;

 L4374: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4375;
  goto ret0;

 L4375: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 609 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 562;  /* mips_maq_s_w_phl */
    }
  goto ret0;

 L4380: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4381;
    }
  goto ret0;

 L4381: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4382;
    }
  goto ret0;

 L4382: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L4383;
    }
  goto ret0;

 L4383: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4384;
  goto ret0;

 L4384: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4385;
  goto ret0;

 L4385: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 343)
    goto L4386;
  goto ret0;

 L4386: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4387;
  goto ret0;

 L4387: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4388;
  goto ret0;

 L4388: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 624 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 563;  /* mips_maq_s_w_phr */
    }
  goto ret0;

 L4393: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4394;
    }
  goto ret0;

 L4394: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4395;
    }
  goto ret0;

 L4395: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L4396;
    }
  goto ret0;

 L4396: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4397;
  goto ret0;

 L4397: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4398;
  goto ret0;

 L4398: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 344)
    goto L4399;
  goto ret0;

 L4399: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4400;
  goto ret0;

 L4400: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4401;
  goto ret0;

 L4401: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 640 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 564;  /* mips_maq_sa_w_phl */
    }
  goto ret0;

 L4406: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4407;
    }
  goto ret0;

 L4407: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4408;
    }
  goto ret0;

 L4408: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L4409;
    }
  goto ret0;

 L4409: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4410;
  goto ret0;

 L4410: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4411;
  goto ret0;

 L4411: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 345)
    goto L4412;
  goto ret0;

 L4412: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4413;
  goto ret0;

 L4413: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4414;
  goto ret0;

 L4414: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 655 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 565;  /* mips_maq_sa_w_phr */
    }
  goto ret0;

 L4593: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4594;
    }
  goto ret0;

 L4594: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4595;
    }
  goto ret0;

 L4595: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182)
    goto L4596;
  goto ret0;

 L4596: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4597;
  goto ret0;

 L4597: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 182)
    goto L4598;
  goto ret0;

 L4598: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 365)
    goto L4599;
  goto ret0;

 L4599: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4600;
  goto ret0;

 L4600: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4601;
  goto ret0;

 L4601: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182
      && 
#line 966 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 589;  /* mips_mthlip */
    }
  goto ret0;

 L5075: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5076;
    }
  goto ret0;

 L5076: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5077;
    }
  goto ret0;

 L5077: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L5078;
    }
  goto ret0;

 L5078: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5079;
  goto ret0;

 L5079: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5080;
  goto ret0;

 L5080: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 445)
    goto L5081;
  goto ret0;

 L5081: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5082;
  goto ret0;

 L5082: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5083;
  goto ret0;

 L5083: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 541 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 637;  /* mips_dpaqx_s_w_ph */
    }
  goto ret0;

 L5088: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5089;
    }
  goto ret0;

 L5089: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5090;
    }
  goto ret0;

 L5090: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L5091;
    }
  goto ret0;

 L5091: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5092;
  goto ret0;

 L5092: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5093;
  goto ret0;

 L5093: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 446)
    goto L5094;
  goto ret0;

 L5094: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5095;
  goto ret0;

 L5095: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5096;
  goto ret0;

 L5096: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 556 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 638;  /* mips_dpaqx_sa_w_ph */
    }
  goto ret0;

 L5101: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5102;
    }
  goto ret0;

 L5102: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5103;
    }
  goto ret0;

 L5103: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L5104;
    }
  goto ret0;

 L5104: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5105;
  goto ret0;

 L5105: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5106;
  goto ret0;

 L5106: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 447)
    goto L5107;
  goto ret0;

 L5107: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5108;
  goto ret0;

 L5108: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5109;
  goto ret0;

 L5109: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 571 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 639;  /* mips_dpsqx_s_w_ph */
    }
  goto ret0;

 L5114: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5115;
    }
  goto ret0;

 L5115: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5116;
    }
  goto ret0;

 L5116: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L5117;
    }
  goto ret0;

 L5117: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5118;
  goto ret0;

 L5118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5119;
  goto ret0;

 L5119: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 448)
    goto L5120;
  goto ret0;

 L5120: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5121;
  goto ret0;

 L5121: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5122;
  goto ret0;

 L5122: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 586 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 640;  /* mips_dpsqx_sa_w_ph */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_16 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L171;
    case SIGN_EXTEND:
      goto L516;
    case TRUNCATE:
      goto L742;
    case DIV:
      goto L1028;
    case UDIV:
      goto L1050;
    case PLUS:
      goto L2266;
    case MINUS:
      goto L2290;
    case UNSPEC:
      goto L7309;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L7291;
    case SUBREG:
    case MEM:
      goto L7292;
    default:
      goto ret0;
   }
 L7291: ATTRIBUTE_UNUSED_LABEL
  if (absolute_symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1691;
    }
 L7292: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2172;
    }
  goto ret0;

 L171: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L7324;
  goto ret0;

 L7324: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L433;
    case ZERO_EXTEND:
      goto L452;
    case REG:
    case SUBREG:
      goto L7323;
    default:
      goto ret0;
   }
 L7323: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L172;
    }
  goto ret0;

 L433: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L434;
    }
  goto ret0;

 L434: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L435;
  goto ret0;

 L435: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L436;
    }
  goto ret0;

 L436: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L437;
  goto ret0;

 L437: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L438;
    }
  goto ret0;

 L438: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1635 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000))
    {
      return 38;  /* mulsidi3_32bit_r4000 */
    }
  goto ret0;

 L452: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L453;
    }
  goto ret0;

 L453: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L454;
  goto ret0;

 L454: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L455;
    }
  goto ret0;

 L455: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L456;
  goto ret0;

 L456: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L457;
    }
  goto ret0;

 L457: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1635 "../../gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000))
    {
      return 39;  /* umulsidi3_32bit_r4000 */
    }
  goto ret0;

 L172: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L173;
    }
  goto ret0;

 L173: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L174;
  goto ret0;

 L174: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L175;
    }
  goto ret0;

 L175: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1206 "../../gcc/config/mips/mips.md"
(!TARGET_FIX_R4000) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 25;  /* muldi3_internal */
    }
  goto ret0;

 L516: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L517;
  goto ret0;

 L517: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L518;
    }
  goto ret0;

 L518: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L519;
    }
  goto ret0;

 L519: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L520;
  goto ret0;

 L520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L521;
    }
  goto ret0;

 L521: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L522;
  goto ret0;

 L522: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L523;
  goto ret0;

 L523: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L7326;
  goto ret0;

 L7326: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L524;
    case ZERO_EXTEND:
      goto L540;
    default:
     break;
   }
  goto ret0;

 L524: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L525;
  goto ret0;

 L525: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L526;
  goto ret0;

 L526: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[3]))
    goto L527;
  goto ret0;

 L527: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 1698 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000))
    {
      return 42;  /* *mulsidi3_64bit_parts */
    }
  goto ret0;

 L540: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L541;
  goto ret0;

 L541: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L542;
  goto ret0;

 L542: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[3]))
    goto L543;
  goto ret0;

 L543: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 1698 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000))
    {
      return 43;  /* *umulsidi3_64bit_parts */
    }
  goto ret0;

 L742: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L743;
  goto ret0;

 L743: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == MULT)
    goto L744;
  goto ret0;

 L744: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == TImode)
    goto L7328;
  goto ret0;

 L7328: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L745;
    case ZERO_EXTEND:
      goto L769;
    default:
     break;
   }
  goto ret0;

 L745: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[1] = x6;
      goto L746;
    }
  goto ret0;

 L746: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == TImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L747;
  goto ret0;

 L747: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[2] = x6;
      goto L748;
    }
  goto ret0;

 L748: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (64)])
    goto L749;
  goto ret0;

 L749: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L750;
  goto ret0;

 L750: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L751;
    }
  goto ret0;

 L751: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1815 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)))
    {
      return 54;  /* smuldi3_highpart */
    }
  goto ret0;

 L769: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[1] = x6;
      goto L770;
    }
  goto ret0;

 L770: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == TImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L771;
  goto ret0;

 L771: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[2] = x6;
      goto L772;
    }
  goto ret0;

 L772: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (64)])
    goto L773;
  goto ret0;

 L773: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L774;
  goto ret0;

 L774: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L775;
    }
  goto ret0;

 L775: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1815 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)))
    {
      return 55;  /* umuldi3_highpart */
    }
  goto ret0;

 L1028: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1029;
    }
  goto ret0;

 L1029: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1030;
    }
  goto ret0;

 L1030: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1031;
  goto ret0;

 L1031: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L1032;
    }
  goto ret0;

 L1032: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MOD)
    goto L1033;
  goto ret0;

 L1033: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1034;
  goto ret0;

 L1034: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 2011 "../../gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 84;  /* divmoddi4 */
    }
  goto ret0;

 L1050: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1051;
    }
  goto ret0;

 L1051: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1052;
    }
  goto ret0;

 L1052: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1053;
  goto ret0;

 L1053: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L1054;
    }
  goto ret0;

 L1054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UMOD)
    goto L1055;
  goto ret0;

 L1055: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1056;
  goto ret0;

 L1056: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 86;  /* udivmoddi4 */
    }
  goto ret0;

 L2266: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2267;
    }
  goto ret0;

 L2267: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2268;
    }
  goto ret0;

 L2268: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2269;
  goto ret0;

 L2269: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L2270;
  goto ret0;

 L2270: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 39)
    goto L2271;
  goto ret0;

 L2271: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L2272;
  goto ret0;

 L2272: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2273;
  goto ret0;

 L2273: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && (
#line 4558 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 297;  /* sync_new_adddi */
    }
  goto ret0;

 L2290: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2291;
    }
  goto ret0;

 L2291: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2292;
    }
  goto ret0;

 L2292: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2293;
  goto ret0;

 L2293: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L2294;
  goto ret0;

 L2294: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 39)
    goto L2295;
  goto ret0;

 L2295: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MINUS)
    goto L2296;
  goto ret0;

 L2296: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2297;
  goto ret0;

 L2297: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && (
#line 4575 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 299;  /* sync_new_subdi */
    }
  goto ret0;

 L7309: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 3)
    goto L7330;
  goto ret0;

 L7330: ATTRIBUTE_UNUSED_LABEL
  return recog_15 (x0, insn, pnum_clobbers);

 L1691: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1692;
  goto ret0;

 L1692: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1693;
    }
  goto ret0;

 L1693: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3304 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected))
    {
      return 197;  /* *lea64 */
    }
  goto ret0;

 L2172: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2173;
  goto ret0;

 L2173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L2174;
  goto ret0;

 L2174: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L7344;
  goto ret0;

 L7344: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC_VOLATILE)
    goto L7348;
  goto ret0;

 L7348: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L7352;
    case 1:
      goto L7353;
    default:
      break;
    }
  goto ret0;

 L7352: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 37)
    goto L2175;
  goto ret0;

 L2175: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2176;
    }
  goto ret0;

 L2176: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L2177;
    }
  goto ret0;

 L2177: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4483 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 287;  /* sync_compare_and_swapdi */
    }
  goto ret0;

 L7353: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 38L:
      goto L2224;
    case 39L:
      goto L2431;
    case 40L:
      goto L2516;
    default:
      break;
    }
  goto ret0;

 L2224: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == DImode)
    goto L7356;
 L2480: ATTRIBUTE_UNUSED_LABEL
  if (uns_arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2481;
    }
  goto ret0;

 L7356: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L2225;
    case MINUS:
      goto L2247;
    case IOR:
      goto L2372;
    case XOR:
      goto L2382;
    case AND:
      goto L2392;
    default:
     break;
   }
  goto L2480;

 L2225: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2226;
  goto L2480;

 L2226: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L2227;
    }
  goto L2480;

 L2227: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4527 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 293;  /* sync_old_adddi */
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  goto L2480;

 L2247: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2248;
  goto L2480;

 L2248: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L2249;
    }
  goto L2480;

 L2249: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4544 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 295;  /* sync_old_subdi */
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  goto L2480;

 L2372: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L2373;
    }
  goto L2480;

 L2373: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && (
#line 4604 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 309;  /* sync_old_iordi */
    }
  goto L2480;

 L2382: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L2383;
    }
  goto L2480;

 L2383: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && (
#line 4604 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 310;  /* sync_old_xordi */
    }
  goto L2480;

 L2392: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L2393;
    }
  goto L2480;

 L2393: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && (
#line 4604 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 311;  /* sync_old_anddi */
    }
  goto L2480;

 L2481: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4649 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 321;  /* sync_old_nanddi */
    }
  goto ret0;

 L2431: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == DImode)
    goto L7361;
 L2498: ATTRIBUTE_UNUSED_LABEL
  if (uns_arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2499;
    }
  goto ret0;

 L7361: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case IOR:
      goto L2432;
    case XOR:
      goto L2442;
    case AND:
      goto L2452;
    default:
     break;
   }
  goto L2498;

 L2432: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L2433;
    }
  goto L2498;

 L2433: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && (
#line 4621 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 315;  /* sync_new_iordi */
    }
  goto L2498;

 L2442: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L2443;
    }
  goto L2498;

 L2443: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && (
#line 4621 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 316;  /* sync_new_xordi */
    }
  goto L2498;

 L2452: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L2453;
    }
  goto L2498;

 L2453: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && (
#line 4621 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 317;  /* sync_new_anddi */
    }
  goto L2498;

 L2499: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4664 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 323;  /* sync_new_nanddi */
    }
  goto ret0;

 L2516: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2517;
    }
  goto ret0;

 L2517: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4679 "../../gcc/config/mips/mips.md"
(GENERATE_LL_SC) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 325;  /* sync_lock_test_and_setdi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_17 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (XINT (x2, 1))
    {
    case 301L:
      goto L3868;
    case 303L:
      goto L3923;
    case 311L:
      goto L4009;
    case 323L:
      goto L4081;
    case 324L:
      goto L4114;
    case 328L:
      goto L4163;
    case 329L:
      goto L4188;
    case 330L:
      goto L4213;
    case 402L:
      goto L4699;
    case 417L:
      goto L4825;
    case 419L:
      goto L4875;
    case 431L:
      goto L4979;
    case 432L:
      goto L4990;
    default:
      break;
    }
  goto ret0;

 L3868: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L3869;
    }
  goto ret0;

 L3869: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3870;
    }
  goto ret0;

 L3870: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3871;
  goto ret0;

 L3871: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3872;
  goto ret0;

 L3872: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L3873;
  goto ret0;

 L3873: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3874;
  goto ret0;

 L3874: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 11 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 513;  /* mips_addq_s_ph */
    }
  goto ret0;

 L3923: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L3924;
    }
  goto ret0;

 L3924: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3925;
    }
  goto ret0;

 L3925: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3926;
  goto ret0;

 L3926: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3927;
  goto ret0;

 L3927: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L3928;
  goto ret0;

 L3928: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3929;
  goto ret0;

 L3929: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 84 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 11 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)))
    {
      return 518;  /* mips_subq_s_ph */
    }
  goto ret0;

 L4009: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4010;
    }
  goto ret0;

 L4010: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4011;
    }
  goto ret0;

 L4011: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4012;
  goto ret0;

 L4012: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4013;
  goto ret0;

 L4013: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 311)
    goto L4014;
  goto ret0;

 L4014: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4015;
  goto ret0;

 L4015: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 182 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 528;  /* mips_precrq_rs_ph_w */
    }
  goto ret0;

 L4081: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L4082;
    }
  goto ret0;

 L4082: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4083;
    }
  goto ret0;

 L4083: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4084;
  goto ret0;

 L4084: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4085;
  goto ret0;

 L4085: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 323)
    goto L4086;
  goto ret0;

 L4086: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4087;
  goto ret0;

 L4087: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 305 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 15 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)))
    {
      return 540;  /* mips_shll_ph */
    }
  goto ret0;

 L4114: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L4115;
    }
  goto ret0;

 L4115: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4116;
    }
  goto ret0;

 L4116: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4117;
  goto ret0;

 L4117: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4118;
  goto ret0;

 L4118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 324)
    goto L4119;
  goto ret0;

 L4119: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4120;
  goto ret0;

 L4120: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 327 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 20 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)))
    {
      return 543;  /* mips_shll_s_ph */
    }
  goto ret0;

 L4163: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L4164;
    }
  goto ret0;

 L4164: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4165;
    }
  goto ret0;

 L4165: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4166;
  goto ret0;

 L4166: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4167;
  goto ret0;

 L4167: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 328)
    goto L4168;
  goto ret0;

 L4168: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4169;
  goto ret0;

 L4169: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 409 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 548;  /* mips_muleu_s_ph_qbl */
    }
  goto ret0;

 L4188: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L4189;
    }
  goto ret0;

 L4189: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4190;
    }
  goto ret0;

 L4190: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4191;
  goto ret0;

 L4191: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4192;
  goto ret0;

 L4192: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 329)
    goto L4193;
  goto ret0;

 L4193: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4194;
  goto ret0;

 L4194: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 423 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 549;  /* mips_muleu_s_ph_qbr */
    }
  goto ret0;

 L4213: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L4214;
    }
  goto ret0;

 L4214: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4215;
    }
  goto ret0;

 L4215: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4216;
  goto ret0;

 L4216: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4217;
  goto ret0;

 L4217: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 330)
    goto L4218;
  goto ret0;

 L4218: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4219;
  goto ret0;

 L4219: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 438 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 550;  /* mips_mulq_rs_ph */
    }
  goto ret0;

 L4699: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L4700;
    }
  goto ret0;

 L4700: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4701;
    }
  goto ret0;

 L4701: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4702;
  goto ret0;

 L4702: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4703;
  goto ret0;

 L4703: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 402)
    goto L4704;
  goto ret0;

 L4704: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4705;
  goto ret0;

 L4705: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 35 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 598;  /* mips_addu_s_ph */
    }
  goto ret0;

 L4825: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L4826;
    }
  goto ret0;

 L4826: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4827;
    }
  goto ret0;

 L4827: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4828;
  goto ret0;

 L4828: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4829;
  goto ret0;

 L4829: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 417)
    goto L4830;
  goto ret0;

 L4830: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4831;
  goto ret0;

 L4831: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 195 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 609;  /* mips_mul_s_ph */
    }
  goto ret0;

 L4875: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L4876;
    }
  goto ret0;

 L4876: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4877;
    }
  goto ret0;

 L4877: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4878;
  goto ret0;

 L4878: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4879;
  goto ret0;

 L4879: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 419)
    goto L4880;
  goto ret0;

 L4880: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4881;
  goto ret0;

 L4881: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 223 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 611;  /* mips_mulq_s_ph */
    }
  goto ret0;

 L4979: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L4980;
    }
  goto ret0;

 L4980: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4981;
    }
  goto ret0;

 L4981: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4982;
  goto ret0;

 L4982: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4983;
  goto ret0;

 L4983: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 431)
    goto L4984;
  goto ret0;

 L4984: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4985;
  goto ret0;

 L4985: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 391 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 623;  /* mips_subu_ph */
    }
  goto ret0;

 L4990: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L4991;
    }
  goto ret0;

 L4991: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4992;
    }
  goto ret0;

 L4992: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4993;
  goto ret0;

 L4993: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4994;
  goto ret0;

 L4994: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 432)
    goto L4995;
  goto ret0;

 L4995: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4996;
  goto ret0;

 L4996: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 404 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 624;  /* mips_subu_s_ph */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_18 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L7181;
    case DImode:
      goto L7182;
    case V2HImode:
      goto L7183;
    case V4QImode:
      goto L7184;
    case UQQmode:
      goto L7185;
    case UHQmode:
      goto L7186;
    case UHAmode:
      goto L7187;
    case V4UQQmode:
      goto L7188;
    case V2UHQmode:
      goto L7189;
    case V2UHAmode:
      goto L7190;
    case HQmode:
      goto L7191;
    case SQmode:
      goto L7192;
    case HAmode:
      goto L7193;
    case SAmode:
      goto L7194;
    case V2HQmode:
      goto L7195;
    case V2HAmode:
      goto L7196;
    case DQmode:
      goto L7197;
    default:
      break;
    }
 L3088: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PC)
    goto L3089;
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L3166;
    }
  goto ret0;

 L7181: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L155;
    }
  goto L3088;

 L155: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L7198;
  x2 = XEXP (x1, 0);
  goto L3088;

 L7198: ATTRIBUTE_UNUSED_LABEL
  tem = recog_14 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L3088;

 L7182: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L170;
    }
  goto L3088;

 L170: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L7286;
  x2 = XEXP (x1, 0);
  goto L3088;

 L7286: ATTRIBUTE_UNUSED_LABEL
  tem = recog_16 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L3088;

 L7183: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HImode))
    {
      operands[0] = x2;
      goto L3834;
    }
  goto L3088;

 L3834: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HImode)
    goto L7364;
  x2 = XEXP (x1, 0);
  goto L3088;

 L7364: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L3835;
    case UNSPEC:
      goto L7381;
    case MINUS:
      goto L3890;
    case MULT:
      goto L4800;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3088;

 L3835: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L3836;
    }
 L4688: ATTRIBUTE_UNUSED_LABEL
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L4689;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L3836: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3837;
    }
  x3 = XEXP (x2, 0);
  goto L4688;

 L3837: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3838;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4688;

 L3838: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3839;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4688;

 L3839: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 300)
    goto L3840;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4688;

 L3840: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3841;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4688;

 L3841: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 15 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 510;  /* addv2hi3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4688;

 L4689: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4690;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L4690: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4691;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L4691: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4692;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L4692: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 401)
    goto L4693;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L4693: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4694;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L4694: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 22 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 597;  /* mips_addu_ph */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L7381: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L7395;
    case 1:
      goto L7397;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L7395: ATTRIBUTE_UNUSED_LABEL
  tem = recog_17 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L3088;

 L7397: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 308)
    goto L3988;
  x2 = XEXP (x1, 0);
  goto L3088;

 L3988: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L3989;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L3989: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3990;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3990: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3991;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3991: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 308)
    goto L3992;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3992: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1])
      && (
#line 147 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 20 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)))
    {
      return 525;  /* mips_absq_s_ph */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3890: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L3891;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L3891: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3892;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L3892: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3893;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3893: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3894;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3894: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 302)
    goto L3895;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3895: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3896;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3896: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 71 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 15 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)))
    {
      return 515;  /* subv2hi3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L4800: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L4801;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L4801: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4802;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L4802: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4803;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L4803: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4804;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L4804: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 416)
    goto L4805;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L4805: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4806;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L4806: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 181 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 608;  /* mulv2hi3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L7184: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4QImode))
    {
      operands[0] = x2;
      goto L3845;
    }
  goto L3088;

 L3845: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4QImode)
    goto L7409;
  x2 = XEXP (x1, 0);
  goto L3088;

 L7409: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L3846;
    case UNSPEC:
      goto L7416;
    case MINUS:
      goto L3901;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3088;

 L3846: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L3847;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L3847: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L3848;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L3848: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3849;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3849: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3850;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3850: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 300)
    goto L3851;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3851: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3852;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3852: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 16 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 511;  /* addv4qi3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L7416: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L7421;
    case 1:
      goto L7425;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L7421: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 301L:
      goto L3879;
    case 303L:
      goto L3934;
    case 312L:
      goto L4020;
    case 323L:
      goto L4092;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L3879: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L3880;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L3880: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L3881;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L3881: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3882;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3882: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3883;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3883: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L3884;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3884: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3885;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3885: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 12 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 514;  /* mips_addu_s_qb */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3934: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L3935;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L3935: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L3936;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L3936: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3937;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3937: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3938;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3938: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L3939;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3939: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3940;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3940: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 84 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 12 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)))
    {
      return 519;  /* mips_subu_s_qb */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L4020: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L4021;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L4021: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L4022;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L4022: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4023;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L4023: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4024;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L4024: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 312)
    goto L4025;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L4025: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4026;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L4026: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 197 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 529;  /* mips_precrqu_s_qb_ph */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L4092: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L4093;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L4093: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4094;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L4094: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4095;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L4095: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4096;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L4096: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 323)
    goto L4097;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L4097: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4098;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L4098: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 305 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 16 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)))
    {
      return 541;  /* mips_shll_qb */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L7425: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 400)
    goto L4679;
  x2 = XEXP (x1, 0);
  goto L3088;

 L4679: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L4680;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L4680: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4681;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L4681: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4682;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L4682: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 400)
    goto L4683;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L4683: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 10 "../../gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 596;  /* mips_absq_s_qb */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3901: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L3902;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L3902: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L3903;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L3903: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3904;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3904: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3905;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3905: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 302)
    goto L3906;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3906: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3907;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3907: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 71 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 16 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)))
    {
      return 516;  /* subv4qi3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L7185: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, UQQmode))
    {
      operands[0] = x2;
      goto L5200;
    }
  goto L3088;

 L5200: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == UQQmode)
    goto L7426;
  x2 = XEXP (x1, 0);
  goto L3088;

 L7426: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case US_PLUS:
      goto L5201;
    case US_MINUS:
      goto L5407;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5201: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, UQQmode))
    {
      operands[1] = x3;
      goto L5202;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5202: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, UQQmode))
    {
      operands[2] = x3;
      goto L5203;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5203: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5204;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5204: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5205;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5205: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L5206;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5206: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5207;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5207: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 16 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 655;  /* usadduqq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5407: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, UQQmode))
    {
      operands[1] = x3;
      goto L5408;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5408: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, UQQmode))
    {
      operands[2] = x3;
      goto L5409;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5409: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5410;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5410: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5411;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5411: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L5412;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5412: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5413;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5413: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 16 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 681;  /* ussubuqq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L7186: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, UHQmode))
    {
      operands[0] = x2;
      goto L5211;
    }
  goto L3088;

 L5211: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == UHQmode)
    goto L7428;
  x2 = XEXP (x1, 0);
  goto L3088;

 L7428: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case US_PLUS:
      goto L5212;
    case US_MINUS:
      goto L5418;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5212: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, UHQmode))
    {
      operands[1] = x3;
      goto L5213;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5213: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, UHQmode))
    {
      operands[2] = x3;
      goto L5214;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5214: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5215;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5215: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5216;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5216: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L5217;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5217: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5218;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5218: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 16 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 656;  /* usadduhq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5418: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, UHQmode))
    {
      operands[1] = x3;
      goto L5419;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5419: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, UHQmode))
    {
      operands[2] = x3;
      goto L5420;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5420: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5421;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5421: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5422;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5422: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L5423;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5423: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5424;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5424: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 16 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 682;  /* ussubuhq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L7187: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, UHAmode))
    {
      operands[0] = x2;
      goto L5222;
    }
  goto L3088;

 L5222: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == UHAmode)
    goto L7430;
  x2 = XEXP (x1, 0);
  goto L3088;

 L7430: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case US_PLUS:
      goto L5223;
    case US_MINUS:
      goto L5429;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5223: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, UHAmode))
    {
      operands[1] = x3;
      goto L5224;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5224: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, UHAmode))
    {
      operands[2] = x3;
      goto L5225;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5225: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5226;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5226: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5227;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5227: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L5228;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5228: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5229;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5229: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 17 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 657;  /* usadduha3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5429: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, UHAmode))
    {
      operands[1] = x3;
      goto L5430;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5430: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, UHAmode))
    {
      operands[2] = x3;
      goto L5431;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5431: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5432;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5432: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5433;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5433: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L5434;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5434: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5435;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5435: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 17 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 683;  /* ussubuha3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L7188: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4UQQmode))
    {
      operands[0] = x2;
      goto L5233;
    }
  goto L3088;

 L5233: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4UQQmode)
    goto L7432;
  x2 = XEXP (x1, 0);
  goto L3088;

 L7432: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case US_PLUS:
      goto L5234;
    case US_MINUS:
      goto L5440;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5234: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4UQQmode))
    {
      operands[1] = x3;
      goto L5235;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5235: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4UQQmode))
    {
      operands[2] = x3;
      goto L5236;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5236: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5237;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5237: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5238;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5238: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L5239;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5239: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5240;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5240: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 17 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 658;  /* usaddv4uqq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5440: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4UQQmode))
    {
      operands[1] = x3;
      goto L5441;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5441: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4UQQmode))
    {
      operands[2] = x3;
      goto L5442;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5442: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5443;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5443: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5444;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5444: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L5445;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5445: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5446;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5446: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 17 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 684;  /* ussubv4uqq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L7189: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2UHQmode))
    {
      operands[0] = x2;
      goto L5244;
    }
  goto L3088;

 L5244: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2UHQmode)
    goto L7434;
  x2 = XEXP (x1, 0);
  goto L3088;

 L7434: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case US_PLUS:
      goto L5245;
    case US_MINUS:
      goto L5451;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5245: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2UHQmode))
    {
      operands[1] = x3;
      goto L5246;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5246: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2UHQmode))
    {
      operands[2] = x3;
      goto L5247;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5247: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5248;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5248: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5249;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5249: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L5250;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5250: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5251;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5251: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 18 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 659;  /* usaddv2uhq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5451: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2UHQmode))
    {
      operands[1] = x3;
      goto L5452;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5452: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2UHQmode))
    {
      operands[2] = x3;
      goto L5453;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5453: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5454;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5454: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5455;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5455: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L5456;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5456: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5457;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5457: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 18 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 685;  /* ussubv2uhq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L7190: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2UHAmode))
    {
      operands[0] = x2;
      goto L5255;
    }
  goto L3088;

 L5255: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2UHAmode)
    goto L7436;
  x2 = XEXP (x1, 0);
  goto L3088;

 L7436: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case US_PLUS:
      goto L5256;
    case US_MINUS:
      goto L5462;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5256: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2UHAmode))
    {
      operands[1] = x3;
      goto L5257;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5257: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2UHAmode))
    {
      operands[2] = x3;
      goto L5258;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5258: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5259;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5259: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5260;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5260: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L5261;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5261: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5262;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5262: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 18 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 660;  /* usaddv2uha3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5462: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2UHAmode))
    {
      operands[1] = x3;
      goto L5463;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5463: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2UHAmode))
    {
      operands[2] = x3;
      goto L5464;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5464: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5465;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5465: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5466;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5466: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L5467;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5467: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5468;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5468: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 18 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 686;  /* ussubv2uha3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L7191: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HQmode))
    {
      operands[0] = x2;
      goto L5266;
    }
  goto L3088;

 L5266: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HQmode)
    goto L7438;
  x2 = XEXP (x1, 0);
  goto L3088;

 L7438: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_PLUS:
      goto L5267;
    case SS_MINUS:
      goto L5473;
    case SS_MULT:
      goto L5578;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5267: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HQmode))
    {
      operands[1] = x3;
      goto L5268;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5268: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HQmode))
    {
      operands[2] = x3;
      goto L5269;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5269: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5270;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5270: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5271;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5271: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L5272;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5272: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5273;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5273: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 55 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 661;  /* ssaddhq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5473: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HQmode))
    {
      operands[1] = x3;
      goto L5474;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5474: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HQmode))
    {
      operands[2] = x3;
      goto L5475;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5475: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5476;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5476: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5477;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5477: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L5478;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5478: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5479;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5479: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 88 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 687;  /* sssubhq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5578: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HQmode))
    {
      operands[1] = x3;
      goto L5579;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5579: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HQmode))
    {
      operands[2] = x3;
      goto L5580;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5580: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5581;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5581: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5582;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5582: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 330)
    goto L5583;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5583: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5584;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5584: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 23 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 694;  /* ssmulhq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L7192: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SQmode))
    {
      operands[0] = x2;
      goto L5277;
    }
  goto L3088;

 L5277: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SQmode)
    goto L7441;
  x2 = XEXP (x1, 0);
  goto L3088;

 L7441: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_PLUS:
      goto L5278;
    case SS_MINUS:
      goto L5484;
    case SS_MULT:
      goto L5603;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5278: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SQmode))
    {
      operands[1] = x3;
      goto L5279;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5279: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SQmode))
    {
      operands[2] = x3;
      goto L5280;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5280: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5281;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5281: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5282;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5282: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L5283;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5283: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5284;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5284: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 55 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 662;  /* ssaddsq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5484: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SQmode))
    {
      operands[1] = x3;
      goto L5485;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5485: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SQmode))
    {
      operands[2] = x3;
      goto L5486;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5486: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5487;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5487: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5488;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5488: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L5489;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5489: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5490;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5490: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 88 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 688;  /* sssubsq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5603: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SQmode))
    {
      operands[1] = x3;
      goto L5604;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5604: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SQmode))
    {
      operands[2] = x3;
      goto L5605;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5605: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5606;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5606: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5607;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5607: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 330)
    goto L5608;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5608: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5609;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5609: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 24 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 695;  /* ssmulsq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L7193: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HAmode))
    {
      operands[0] = x2;
      goto L5288;
    }
  goto L3088;

 L5288: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HAmode)
    goto L7444;
  x2 = XEXP (x1, 0);
  goto L3088;

 L7444: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_PLUS:
      goto L5289;
    case SS_MINUS:
      goto L5495;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5289: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HAmode))
    {
      operands[1] = x3;
      goto L5290;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5290: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HAmode))
    {
      operands[2] = x3;
      goto L5291;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5291: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5292;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5292: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5293;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5293: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L5294;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5294: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5295;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5295: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 55 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 663;  /* ssaddha3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5495: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HAmode))
    {
      operands[1] = x3;
      goto L5496;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5496: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HAmode))
    {
      operands[2] = x3;
      goto L5497;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5497: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5498;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5498: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5499;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5499: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L5500;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5500: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5501;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5501: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 88 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 689;  /* sssubha3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L7194: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SAmode))
    {
      operands[0] = x2;
      goto L5299;
    }
  goto L3088;

 L5299: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SAmode)
    goto L7446;
  x2 = XEXP (x1, 0);
  goto L3088;

 L7446: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_PLUS:
      goto L5300;
    case SS_MINUS:
      goto L5506;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5300: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SAmode))
    {
      operands[1] = x3;
      goto L5301;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5301: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SAmode))
    {
      operands[2] = x3;
      goto L5302;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5302: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5303;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5303: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5304;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5304: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L5305;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5305: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5306;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5306: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 55 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 664;  /* ssaddsa3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5506: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SAmode))
    {
      operands[1] = x3;
      goto L5507;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5507: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SAmode))
    {
      operands[2] = x3;
      goto L5508;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5508: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5509;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5509: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5510;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5510: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L5511;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5511: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5512;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5512: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 88 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 690;  /* sssubsa3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L7195: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HQmode))
    {
      operands[0] = x2;
      goto L5310;
    }
  goto L3088;

 L5310: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HQmode)
    goto L7448;
  x2 = XEXP (x1, 0);
  goto L3088;

 L7448: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_PLUS:
      goto L5311;
    case SS_MINUS:
      goto L5517;
    case SS_MULT:
      goto L5553;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5311: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HQmode))
    {
      operands[1] = x3;
      goto L5312;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5312: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HQmode))
    {
      operands[2] = x3;
      goto L5313;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5313: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5314;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5314: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5315;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5315: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L5316;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5316: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5317;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5317: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 55 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 665;  /* ssaddv2hq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5517: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HQmode))
    {
      operands[1] = x3;
      goto L5518;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5518: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HQmode))
    {
      operands[2] = x3;
      goto L5519;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5519: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5520;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5521;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5521: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L5522;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5522: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5523;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5523: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 88 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 691;  /* sssubv2hq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5553: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HQmode))
    {
      operands[1] = x3;
      goto L5554;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5554: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HQmode))
    {
      operands[2] = x3;
      goto L5555;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5555: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5556;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5556: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5557;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5557: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 330)
    goto L5558;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5558: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5559;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5559: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 23 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 693;  /* ssmulv2hq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L7196: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HAmode))
    {
      operands[0] = x2;
      goto L5321;
    }
  goto L3088;

 L5321: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HAmode)
    goto L7451;
  x2 = XEXP (x1, 0);
  goto L3088;

 L7451: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_PLUS:
      goto L5322;
    case SS_MINUS:
      goto L5528;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5322: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HAmode))
    {
      operands[1] = x3;
      goto L5323;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5323: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HAmode))
    {
      operands[2] = x3;
      goto L5324;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5324: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5325;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5325: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5326;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5326: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L5327;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5327: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5328;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5328: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 55 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 666;  /* ssaddv2ha3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5528: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HAmode))
    {
      operands[1] = x3;
      goto L5529;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5529: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HAmode))
    {
      operands[2] = x3;
      goto L5530;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5530: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5531;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5531: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5532;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5532: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L5533;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5533: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5534;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5534: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 88 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 692;  /* sssubv2ha3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L7197: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DQmode))
    {
      operands[0] = x2;
      goto L5613;
    }
  goto L3088;

 L5613: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DQmode)
    goto L7453;
  x2 = XEXP (x1, 0);
  goto L3088;

 L7453: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_PLUS:
      goto L5614;
    case SS_MINUS:
      goto L5630;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5614: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DQmode
      && GET_CODE (x3) == SS_MULT)
    goto L5615;
  x2 = XEXP (x1, 0);
  goto L3088;

 L5615: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DQmode
      && GET_CODE (x4) == SAT_FRACT)
    goto L5616;
  x2 = XEXP (x1, 0);
  goto L3088;

 L5616: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SQmode))
    {
      operands[1] = x5;
      goto L5617;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5617: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DQmode
      && GET_CODE (x4) == SAT_FRACT)
    goto L5618;
  x2 = XEXP (x1, 0);
  goto L3088;

 L5618: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SQmode))
    {
      operands[2] = x5;
      goto L5619;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5619: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DQmode))
    {
      operands[3] = x3;
      goto L5620;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5620: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5621;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5621: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5622;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5622: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 340)
    goto L5623;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5623: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5624;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5624: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5625;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5625: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 118 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 696;  /* ssmaddsqdq4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5630: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DQmode))
    {
      operands[3] = x3;
      goto L5631;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5631: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DQmode
      && GET_CODE (x3) == SS_MULT)
    goto L5632;
  x2 = XEXP (x1, 0);
  goto L3088;

 L5632: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DQmode
      && GET_CODE (x4) == SAT_FRACT)
    goto L5633;
  x2 = XEXP (x1, 0);
  goto L3088;

 L5633: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SQmode))
    {
      operands[1] = x5;
      goto L5634;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5634: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DQmode
      && GET_CODE (x4) == SAT_FRACT)
    goto L5635;
  x2 = XEXP (x1, 0);
  goto L3088;

 L5635: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SQmode))
    {
      operands[2] = x5;
      goto L5636;
    }
  x2 = XEXP (x1, 0);
  goto L3088;

 L5636: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5637;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5637: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5638;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5638: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 341)
    goto L5639;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5639: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5640;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5640: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5641;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L5641: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 135 "../../gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 697;  /* ssmsubsqdq4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3088;

 L3089: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L7455;
    case DImode:
      goto L7456;
    default:
      break;
    }
  goto ret0;

 L7455: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3090;
    }
  goto ret0;

 L3090: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L3091;
  goto ret0;

 L3091: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3092;
  goto ret0;

 L3092: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3093;

 L3093: ATTRIBUTE_UNUSED_LABEL
  if (
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    {
      return 416;  /* tablejumpsi */
    }
  goto ret0;

 L7456: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3098;
    }
  goto ret0;

 L3098: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L3099;
  goto ret0;

 L3099: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3100;
  goto ret0;

 L3100: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3101;

 L3101: ATTRIBUTE_UNUSED_LABEL
  if (
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    {
      return 417;  /* tablejumpdi */
    }
  goto ret0;

 L3166: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L3167;
  goto ret0;

 L3167: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L3168;
  goto ret0;

 L3168: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3169;
    }
 L3265: ATTRIBUTE_UNUSED_LABEL
  if (const_call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3266;
    }
 L3288: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3289;
    }
  goto ret0;

 L3169: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L3170;

 L3170: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3171;
    case CLOBBER:
      goto L3224;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3265;

 L3171: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L3172;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3265;

 L3172: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L3173;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3265;

 L3173: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L3174;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3265;

 L3174: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L3175;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3265;

 L3175: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 5829 "../../gcc/config/mips/mips.md"
(TARGET_SIBCALLS && SIBLING_CALL_P (insn)))
    {
      return 430;  /* sibcall_value_multiple_internal */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3265;

 L3224: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 434;  /* call_value_internal */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3265;

 L3266: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L3267;

 L3267: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 436;  /* call_value_internal_direct */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3288;

 L3289: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L3290;

 L3290: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3291;
  goto ret0;

 L3291: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L3292;
    }
  goto ret0;

 L3292: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L3293;
  goto ret0;

 L3293: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L3294;
  goto ret0;

 L3294: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L3295;
  goto ret0;

 L3295: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 437;  /* call_value_multiple_internal */
    }
 L3325: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[2])
      && 
#line 6003 "../../gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 438;  /* call_value_multiple_split */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_19 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  switch (XVECLEN (x0, 0))
    {
    case 3:
      goto L136;
    case 2:
      goto L153;
    case 4:
      goto L217;
    case 6:
      goto L4603;
    default:
      break;
    }
 L6298: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) >= 1)
    {
      operands[0] = x0;
      goto L3465;
    }
 L6300: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 2)
    goto L5643;
  goto ret0;

 L136: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L137;
    case CALL:
      goto L3190;
    default:
     break;
   }
  goto L6298;

 L137: ATTRIBUTE_UNUSED_LABEL
  tem = recog_12 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L6298;

 L3190: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L3191;
  goto L6298;

 L3191: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (const_call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L3192;
    }
 L3205: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L3206;
    }
  goto L6298;

 L3192: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L3193;

 L3193: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L3194;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3205;

 L3194: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3195;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3205;

 L3195: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 432;  /* call_internal_direct */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3205;

 L3206: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L3207;

 L3207: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3208;
  goto L6298;

 L3208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L3209;
  goto L6298;

 L3209: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3210;
  goto L6298;

 L3210: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && 
#line 5915 "../../gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS))
    {
      return 433;  /* call_split */
    }
  goto L6298;

 L153: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L154;
    case UNSPEC_VOLATILE:
      goto L7179;
    case RETURN:
      goto L3107;
    case UNSPEC:
      goto L7180;
    case CALL:
      goto L3178;
    default:
     break;
   }
  goto L6298;

 L154: ATTRIBUTE_UNUSED_LABEL
  tem = recog_18 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L6298;

 L7179: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 33)
    goto L2148;
  goto L6298;

 L2148: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2149;
  goto L6298;

 L2149: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2150;
  goto L6298;

 L2150: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && 
#line 4458 "../../gcc/config/mips/mips.md"
(ISA_HAS_SYNCI))
    {
      return 284;  /* clear_hazard */
    }
  goto L6298;

 L3107: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L3108;
  goto L6298;

 L3108: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (pmode_register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      return 420;  /* return_internal */
    }
  goto L6298;

 L7180: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 7)
    goto L3111;
  goto L6298;

 L3111: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L7457;
    case DImode:
      goto L7458;
    default:
      break;
    }
  goto L6298;

 L7457: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3112;
    }
  goto L6298;

 L3112: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3113;
  goto L6298;

 L3113: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3114;
    }
  goto L6298;

 L3114: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5637 "../../gcc/config/mips/mips.md"
(! TARGET_64BIT))
    {
      return 421;  /* eh_set_lr_si */
    }
  goto L6298;

 L7458: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3121;
    }
  goto L6298;

 L3121: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3122;
  goto L6298;

 L3122: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3123;
    }
  goto L6298;

 L3123: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5643 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 422;  /* eh_set_lr_di */
    }
  goto L6298;

 L3178: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L3179;
  goto L6298;

 L3179: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L3180;
    }
 L3199: ATTRIBUTE_UNUSED_LABEL
  if (const_call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L3200;
    }
  goto L6298;

 L3180: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L3181;

 L3181: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3182;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3199;

 L3182: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 431;  /* call_internal */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3199;

 L3200: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L3201;

 L3201: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 432;  /* call_internal_direct */
    }
  goto L6298;

 L217: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L218;
  goto L6298;

 L218: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L7459;
    case DImode:
      goto L7460;
    default:
      break;
    }
 L3298: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L3299;
    }
  goto L6298;

 L7459: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L219;
    }
  goto L3298;

 L219: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L7461;
  x2 = XEXP (x1, 0);
  goto L3298;

 L7461: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L220;
    case MINUS:
      goto L285;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3298;

 L220: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L221;
  x2 = XEXP (x1, 0);
  goto L3298;

 L221: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L222;
    }
  x2 = XEXP (x1, 0);
  goto L3298;

 L222: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L223;
    }
  x2 = XEXP (x1, 0);
  goto L3298;

 L223: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L224;
    }
  x2 = XEXP (x1, 0);
  goto L3298;

 L224: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L225;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L225: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L226;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L226: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L227;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L227: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L228;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L228: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L229;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L229: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L230;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L230: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1274 "../../gcc/config/mips/mips.md"
((TARGET_MIPS3900
   || GENERATE_MADD_MSUB)
   && !TARGET_MIPS16))
    {
      return 28;  /* *mul_acc_si */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L285: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L286;
    }
  x2 = XEXP (x1, 0);
  goto L3298;

 L286: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L287;
  x2 = XEXP (x1, 0);
  goto L3298;

 L287: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L288;
    }
  x2 = XEXP (x1, 0);
  goto L3298;

 L288: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L289;
    }
  x2 = XEXP (x1, 0);
  goto L3298;

 L289: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L290;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L290: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L291;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L291: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L292;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L292: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L293;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L293: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L294;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L294: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L295;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L295: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1379 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC))
    {
      return 31;  /* *msac_using_macc */
    }
 L384: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1535 "../../gcc/config/mips/mips.md"
(GENERATE_MADD_MSUB))
    {
      return 34;  /* *mul_sub_si */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L7460: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L469;
    }
  goto L3298;

 L469: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MULT)
    goto L470;
  x2 = XEXP (x1, 0);
  goto L3298;

 L470: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L7463;
  x2 = XEXP (x1, 0);
  goto L3298;

 L7463: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L471;
    case ZERO_EXTEND:
      goto L494;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3298;

 L471: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L472;
    }
  x2 = XEXP (x1, 0);
  goto L3298;

 L472: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L473;
  x2 = XEXP (x1, 0);
  goto L3298;

 L473: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L474;
    }
  x2 = XEXP (x1, 0);
  goto L3298;

 L474: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L475;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L475: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L476;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L476: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L477;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L477: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L478;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L478: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L479;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L479: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[5] = x2;
      goto L480;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L480: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1648 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000))
    {
      return 40;  /* *mulsidi3_64bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L494: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L495;
    }
  x2 = XEXP (x1, 0);
  goto L3298;

 L495: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L496;
  x2 = XEXP (x1, 0);
  goto L3298;

 L496: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L497;
    }
  x2 = XEXP (x1, 0);
  goto L3298;

 L497: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L498;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L498: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L499;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L499: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L500;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L500: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L501;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L501: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L502;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L502: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[5] = x2;
      goto L503;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L503: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1648 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000))
    {
      return 41;  /* *umulsidi3_64bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3298;

 L3299: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L3300;
  goto L6298;

 L3300: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L3301;
  goto L6298;

 L3301: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3302;
    }
  goto L6298;

 L3302: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L3303;

 L3303: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3304;
  goto L6298;

 L3304: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L3305;
    }
  goto L6298;

 L3305: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L3306;
  goto L6298;

 L3306: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L3307;
  goto L6298;

 L3307: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L3308;
  goto L6298;

 L3308: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L3309;
  goto L6298;

 L3309: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3310;
  goto L6298;

 L3310: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L3311;
  goto L6298;

 L3311: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L3312;
  goto L6298;

 L3312: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && 
#line 6003 "../../gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS))
    {
      return 438;  /* call_value_multiple_split */
    }
  goto L6298;

 L4603: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L4604;
  goto L6298;

 L4604: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 182)
    goto L4605;
  goto L6298;

 L4605: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 366)
    goto L4606;
  goto L6298;

 L4606: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L4607;
    }
  goto L6298;

 L4607: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (const_uimm6_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4608;
    }
  goto L6298;

 L4608: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4609;
  goto L6298;

 L4609: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 183)
    goto L4610;
  goto L6298;

 L4610: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 366)
    goto L4611;
  goto L6298;

 L4611: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4612;
  goto L6298;

 L4612: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L4613;
  goto L6298;

 L4613: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L4614;
  goto L6298;

 L4614: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 184)
    goto L4615;
  goto L6298;

 L4615: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 366)
    goto L4616;
  goto L6298;

 L4616: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4617;
  goto L6298;

 L4617: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L4618;
  goto L6298;

 L4618: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L4619;
  goto L6298;

 L4619: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L4620;
  goto L6298;

 L4620: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 366)
    goto L4621;
  goto L6298;

 L4621: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4622;
  goto L6298;

 L4622: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L4623;
  goto L6298;

 L4623: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == SET)
    goto L4624;
  goto L6298;

 L4624: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186)
    goto L4625;
  goto L6298;

 L4625: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 366)
    goto L4626;
  goto L6298;

 L4626: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4627;
  goto L6298;

 L4627: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L4628;
  goto L6298;

 L4628: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == SET)
    goto L4629;
  goto L6298;

 L4629: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 187)
    goto L4630;
  goto L6298;

 L4630: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 366)
    goto L4631;
  goto L6298;

 L4631: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4632;
  goto L6298;

 L4632: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 988 "../../gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 590;  /* mips_wrdsp */
    }
  goto L6298;

 L3465: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L3466;
  goto L6300;

 L3466: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3467;
    }
  goto L6300;

 L3467: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L3468;
  goto L6300;

 L3468: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3469;
  goto L6300;

 L3469: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3470;
    }
  goto L6300;

 L3470: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6204 "../../gcc/config/mips/mips.md"
(operands[1] == stack_pointer_rtx
   && mips16e_save_restore_pattern_p (operands[0], INTVAL (operands[2]), NULL)))
    {
      return 459;  /* *mips16e_save_restore */
    }
  goto L6300;

 L5643: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L5644;
  goto ret0;

 L5644: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5645;
    }
  goto ret0;

 L5645: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L7465;
  goto ret0;

 L7465: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L5646;
    case MINUS:
      goto L5664;
    default:
     break;
   }
  goto ret0;

 L5646: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L5647;
  goto ret0;

 L5647: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5648;
    }
  goto ret0;

 L5648: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5649;
    }
  goto ret0;

 L5649: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0]))
    goto L5650;
  goto ret0;

 L5650: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5651;
  goto ret0;

 L5651: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L5652;
    }
  goto ret0;

 L5652: ATTRIBUTE_UNUSED_LABEL
  if (
#line 29 "../../gcc/config/mips/allegrex.md"
(TARGET_ALLEGREX))
    {
      return 698;  /* allegrex_madd */
    }
  goto ret0;

 L5664: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L5665;
  goto ret0;

 L5665: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L5666;
  goto ret0;

 L5666: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5667;
    }
  goto ret0;

 L5667: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5668;
    }
  goto ret0;

 L5668: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5669;
  goto ret0;

 L5669: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L5670;
    }
  goto ret0;

 L5670: ATTRIBUTE_UNUSED_LABEL
  if (
#line 40 "../../gcc/config/mips/allegrex.md"
(TARGET_ALLEGREX))
    {
      return 699;  /* allegrex_msub */
    }
  goto ret0;
 ret0:
  return -1;
}

int
recog (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case TRAP_IF:
      goto L4;
    case SET:
      goto L14;
    case PARALLEL:
      goto L6283;
    case UNSPEC_VOLATILE:
      goto L6286;
    case RETURN:
      goto L6291;
    case UNSPEC:
      goto L6292;
    case CALL:
      goto L3152;
    case PREFETCH:
      goto L3327;
    case CONST_INT:
      goto L6293;
    default:
     break;
   }
  goto ret0;

 L4: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L6302;
    case DImode:
      goto L6303;
    default:
      break;
    }
 L1: ATTRIBUTE_UNUSED_LABEL
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2;
  goto ret0;

 L6302: ATTRIBUTE_UNUSED_LABEL
  if (trap_comparison_operator (x1, SImode))
    {
      operands[0] = x1;
      goto L5;
    }
  goto L1;

 L5: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6;
    }
  goto L1;

 L6: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7;
    }
  goto L1;

 L7: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 779 "../../gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP))
    {
      return 1;  /* *conditional_trapsi */
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L6303: ATTRIBUTE_UNUSED_LABEL
  if (trap_comparison_operator (x1, DImode))
    {
      operands[0] = x1;
      goto L10;
    }
  goto L1;

 L10: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L11;
    }
  goto L1;

 L11: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L12;
    }
  goto L1;

 L12: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 779 "../../gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 2;  /* *conditional_trapdi */
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L2: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 0;  /* trap */
    }
  goto ret0;

 L14: ATTRIBUTE_UNUSED_LABEL
  return recog_10 (x0, insn, pnum_clobbers);

 L6283: ATTRIBUTE_UNUSED_LABEL
  return recog_19 (x0, insn, pnum_clobbers);

 L6286: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x0, 0))
    {
    case 1:
      goto L7467;
    case 2:
      goto L7468;
    default:
      break;
    }
  goto ret0;

 L7467: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x0, 1))
    {
    case 4L:
      goto L2119;
    case 36L:
      goto L2137;
    case 35L:
      goto L2139;
    case 33L:
      goto L2152;
    case 9L:
      goto L3460;
    case 14L:
      goto L3463;
    default:
      break;
    }
  goto ret0;

 L2119: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == REG
      && XINT (x1, 0) == 28)
    {
      return 277;  /* loadgp_blockage */
    }
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 418;  /* blockage */
    }
  goto ret0;

 L2137: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT)
    goto L7476;
  goto ret0;

 L7476: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x1, 0) == 0L)
    goto L7478;
  goto ret0;

 L7478: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4439 "../../gcc/config/mips/mips.md"
(GENERATE_SYNC))
    {
      return 281;  /* sync */
    }
 L7479: ATTRIBUTE_UNUSED_LABEL
  if (
#line 140 "../../gcc/config/mips/allegrex.md"
(TARGET_ALLEGREX))
    {
      return 706;  /* allegrex_sync */
    }
  goto ret0;

 L2139: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (pmode_register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L2140;
    }
  goto ret0;

 L2140: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4445 "../../gcc/config/mips/mips.md"
(ISA_HAS_SYNCI))
    {
      return 282;  /* synci */
    }
  goto ret0;

 L2152: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 4458 "../../gcc/config/mips/mips.md"
(ISA_HAS_SYNCI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 284;  /* clear_hazard */
    }
  goto ret0;

 L3460: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (consttable_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L3461;
    }
  goto ret0;

 L3461: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6166 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 457;  /* consttable_float */
    }
  goto ret0;

 L3463: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      return 458;  /* align */
    }
  goto ret0;

 L7468: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x0, 1))
    {
    case 5L:
      goto L2133;
    case 8L:
      goto L3456;
    case 453L:
      goto L5714;
    default:
      break;
    }
  goto ret0;

 L2133: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L2134;
    }
  goto ret0;

 L2134: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2135;
  goto ret0;

 L2135: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28)
    {
      return 280;  /* cprestore */
    }
  goto ret0;

 L3456: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (consttable_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L3457;
    }
  goto ret0;

 L3457: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L3458;
    }
  goto ret0;

 L3458: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6155 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 456;  /* consttable_int */
    }
  goto ret0;

 L5714: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (const_int_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L5715;
    }
  goto ret0;

 L5715: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L5716;
    }
  goto ret0;

 L5716: ATTRIBUTE_UNUSED_LABEL
  if (
#line 149 "../../gcc/config/mips/allegrex.md"
(TARGET_ALLEGREX))
    {
      return 707;  /* allegrex_cache */
    }
  goto ret0;

 L6291: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5602 "../../gcc/config/mips/mips.md"
(mips_can_use_return_insn ()))
    {
      return 419;  /* return */
    }
  goto ret0;

 L6292: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 1
      && XINT (x0, 1) == 7)
    goto L3116;
  goto ret0;

 L3116: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L7480;
    case DImode:
      goto L7481;
    default:
      break;
    }
  goto ret0;

 L7480: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3117;
    }
  goto ret0;

 L3117: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5637 "../../gcc/config/mips/mips.md"
(! TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 421;  /* eh_set_lr_si */
    }
  goto ret0;

 L7481: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L3126;
    }
  goto ret0;

 L3126: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5643 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 422;  /* eh_set_lr_di */
    }
  goto ret0;

 L3152: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == MEM)
    goto L3153;
  goto ret0;

 L3153: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (call_insn_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L3154;
    }
  goto ret0;

 L3154: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  operands[1] = x1;
  goto L3155;

 L3155: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5798 "../../gcc/config/mips/mips.md"
(TARGET_SIBCALLS && SIBLING_CALL_P (insn)))
    {
      return 428;  /* sibcall_internal */
    }
 L3187: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 431;  /* call_internal */
    }
 L3215: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5915 "../../gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 433;  /* call_split */
    }
  goto ret0;

 L3327: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (address_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L3328;
    }
 L3332: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L7482;
    case DImode:
      goto L7483;
    default:
      break;
    }
  goto ret0;

 L3328: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L3329;
    }
  x1 = XEXP (x0, 0);
  goto L3332;

 L3329: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L3330;
    }
  x1 = XEXP (x0, 0);
  goto L3332;

 L3330: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6043 "../../gcc/config/mips/mips.md"
(ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS))
    {
      return 439;  /* prefetch */
    }
  x1 = XEXP (x0, 0);
  goto L3332;

 L7482: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PLUS)
    goto L3333;
  goto ret0;

 L3333: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3334;
    }
  goto ret0;

 L3334: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3335;
    }
  goto ret0;

 L3335: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L3336;
    }
  goto ret0;

 L3336: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[3] = x1;
      goto L3337;
    }
  goto ret0;

 L3337: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6055 "../../gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 440;  /* *prefetch_indexed_si */
    }
  goto ret0;

 L7483: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PLUS)
    goto L3340;
  goto ret0;

 L3340: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3341;
    }
  goto ret0;

 L3341: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3342;
    }
  goto ret0;

 L3342: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L3343;
    }
  goto ret0;

 L3343: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[3] = x1;
      goto L3344;
    }
  goto ret0;

 L3344: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6055 "../../gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 441;  /* *prefetch_indexed_di */
    }
  goto ret0;

 L6293: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x0, 0) == XWINT (x0, 0))
    switch ((int) XWINT (x0, 0))
      {
      case 0L:
        goto L7484;
      case 1L:
        goto L7485;
      default:
        break;
      }
  goto ret0;

 L7484: ATTRIBUTE_UNUSED_LABEL
  return 442;  /* nop */

 L7485: ATTRIBUTE_UNUSED_LABEL
  return 443;  /* hazard_nop */
 ret0:
  return -1;
}

static rtx
split_1 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L7497;
    case DImode:
      goto L7490;
    case HImode:
      goto L7491;
    case QImode:
      goto L7492;
    case TFmode:
      goto L7493;
    case DFmode:
      goto L7495;
    case V2SFmode:
      goto L7496;
    default:
      break;
    }
 L6144: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L6145;
    }
  goto ret0;

 L7497: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 28)
    goto L6230;
 L7489: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L5734;
    }
  goto L6144;

 L6230: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 6)
    goto L6231;
  x1 = XEXP (x0, 0);
  goto L7489;

 L6231: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 5683 "../../gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP) && 
#line 5685 "../../gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_892 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7489;

 L5734: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L7498;
 L6111: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L6112;
    }
  x1 = XEXP (x0, 0);
  goto L6144;

 L7498: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L5735;
    case SIGN_EXTEND:
      goto L5956;
    case HIGH:
      goto L6026;
    case LO_SUM:
      goto L6041;
    case MEM:
      goto L6105;
    case UNSPEC_VOLATILE:
      goto L7509;
    case ASHIFT:
      goto L6184;
    case ASHIFTRT:
      goto L6190;
    case LSHIFTRT:
      goto L6196;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L7502;
    default:
      goto L6111;
   }
 L7502: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L6053;
    }
  goto L6111;

 L5735: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L5736;
 L5741: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5742;
    }
  goto L6111;

 L5736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5737;
    }
  x2 = XEXP (x1, 0);
  goto L5741;

 L5737: ATTRIBUTE_UNUSED_LABEL
  if (
#line 855 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0x7f
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)
       || (INTVAL (operands[1]) < - 0x80
	   && INTVAL (operands[1]) >= - 0x80 - 0x80))))
    {
      return gen_split_714 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L5741;

 L5742: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5743;
    }
  goto L6111;

 L5743: ATTRIBUTE_UNUSED_LABEL
  if (
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
	   && INTVAL (operands[2]) >= - 0x8 - 0x80))))
    {
      return gen_split_715 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L6111;

 L5956: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L7511;
    case HImode:
      goto L7512;
    default:
      break;
    }
  goto L6111;

 L7511: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L5957;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L5984;
    }
  goto L6111;

 L5957: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5958;
    }
  goto L6111;

 L5958: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2455 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 2457 "../../gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_754 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L6111;

 L5984: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2676 "../../gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 2680 "../../gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_768 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L6111;

 L7512: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L5963;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L5994;
    }
  goto L6111;

 L5963: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5964;
    }
  goto L6111;

 L5964: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2455 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 2457 "../../gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_755 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L6111;

 L5994: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2676 "../../gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 2680 "../../gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_770 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L6111;

 L6026: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L7515;
  goto L6111;

 L7515: ATTRIBUTE_UNUSED_LABEL
  if (absolute_symbolic_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6027;
    }
 L7516: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6032;
    }
 L7517: ATTRIBUTE_UNUSED_LABEL
  if (got_page_ofst_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6062;
    }
  goto L6111;

 L6027: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3328 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed))
    {
      return gen_split_786 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L7516;

 L6032: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3340 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3342 "../../gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_787 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L7517;

 L6062: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3387 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3389 "../../gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_793 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L6111;

 L6041: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6042;
    }
  goto L6111;

 L6042: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (got_disp_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6043;
    }
  goto L6111;

 L6043: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3356 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3358 "../../gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_789 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L6111;

 L6105: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L6106;
  goto L6111;

 L6106: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L6107;
  goto L6111;

 L6107: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6108;
    }
  goto L6111;

 L6108: ATTRIBUTE_UNUSED_LABEL
  if (
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
	   && (INTVAL (operands[1]) & 3) != 0))))
    {
      return gen_split_802 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L6111;

 L7509: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L7518;
    case 1:
      goto L7519;
    default:
      break;
    }
  goto L6111;

 L7518: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 22)
    goto L6150;
  goto L6111;

 L6150: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L6151;
 L6172: ATTRIBUTE_UNUSED_LABEL
  if (symbol_ref_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6173;
    }
  goto L6111;

 L6151: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6152;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L6172;

 L6152: ATTRIBUTE_UNUSED_LABEL
  if (
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    {
      return gen_split_827 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L6172;

 L6173: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (symbol_ref_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6174;
    }
  goto L6111;

 L6174: ATTRIBUTE_UNUSED_LABEL
  if (
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    {
      return gen_split_831 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L6111;

 L7519: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 22)
    goto L6162;
  goto L6111;

 L6162: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L6163;

 L6163: ATTRIBUTE_UNUSED_LABEL
  if (
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode))
    {
      return gen_split_829 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L6111;

 L6184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6185;
    }
  goto L6111;

 L6185: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6186;
    }
  goto L6111;

 L6186: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4860 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16))
    {
      return gen_split_841 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L6111;

 L6190: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6191;
    }
  goto L6111;

 L6191: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6192;
    }
  goto L6111;

 L6192: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4860 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16))
    {
      return gen_split_842 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L6111;

 L6196: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L7520;
  goto L6111;

 L7520: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6197;
    }
 L7521: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6221;
    }
  goto L6111;

 L6197: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6198;
    }
  x2 = XEXP (x1, 0);
  goto L7521;

 L6198: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4860 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16))
    {
      return gen_split_843 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L7521;

 L6221: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      return gen_split_847 (insn, operands);
    }
  goto L6111;

 L6053: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3370 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3372 "../../gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_791 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L6111;

 L6112: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3703 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && INTVAL (operands[1]) >= 0x100
   && INTVAL (operands[1]) <= 0xff + 0x7f))
    {
      return gen_split_803 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L6144;

 L7490: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L5746;
    }
 L7494: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L6133;
    }
  goto L6144;

 L5746: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L7522;
  x1 = XEXP (x0, 0);
  goto L7494;

 L7522: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L5747;
    case SIGN_EXTEND:
      goto L5759;
    case ZERO_EXTEND:
      goto L5968;
    case AND:
      goto L5973;
    case HIGH:
      goto L6008;
    case LO_SUM:
      goto L6047;
    case MEM:
      goto L6098;
    case UNSPEC_VOLATILE:
      goto L7535;
    case ASHIFT:
      goto L6202;
    case ASHIFTRT:
      goto L6208;
    case LSHIFTRT:
      goto L6214;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L7528;
    default:
      x1 = XEXP (x0, 0);
      goto L7494;
   }
 L7528: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L6057;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L5747: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L5748;
 L5753: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5754;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L5748: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5749;
    }
  x2 = XEXP (x1, 0);
  goto L5753;

 L5749: ATTRIBUTE_UNUSED_LABEL
  if (
#line 916 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0xf
	&& INTVAL (operands[1]) <= 0xf + 0xf)
       || (INTVAL (operands[1]) < - 0x10
	   && INTVAL (operands[1]) >= - 0x10 - 0x10))))
    {
      return gen_split_716 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L5753;

 L5754: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L5755;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L5755: ATTRIBUTE_UNUSED_LABEL
  if (
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
	   && INTVAL (operands[2]) >= - 0x8 - 0x10))))
    {
      return gen_split_717 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L5759: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L7537;
    case QImode:
      goto L7538;
    case HImode:
      goto L7539;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L7537: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L5760;
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5979;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L5760: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5761;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L5761: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5762;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L5762: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 992 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16) && 
#line 994 "../../gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_718 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L5979: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2644 "../../gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2648 "../../gcc/config/mips/mips.md"
( reload_completed && register_operand (operands[1], VOIDmode))))
    {
      return gen_split_763 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L7538: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L5945;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L5989;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L5945: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5946;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L5946: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2437 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 2439 "../../gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_752 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L5989: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 2676 "../../gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 2680 "../../gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_769 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L7539: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L5951;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L5999;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L5951: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5952;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L5952: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2437 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 2439 "../../gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_753 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L5999: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 2676 "../../gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 2680 "../../gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_771 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L5968: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5969;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L5969: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2510 "../../gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2514 "../../gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_756 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L5973: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5974;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L5974: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 4294967295L
      && (
#line 2531 "../../gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2539 "../../gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_757 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L6008: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L7543;
  x1 = XEXP (x0, 0);
  goto L7494;

 L7543: ATTRIBUTE_UNUSED_LABEL
  if (absolute_symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6009;
    }
 L7544: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6037;
    }
 L7545: ATTRIBUTE_UNUSED_LABEL
  if (got_page_ofst_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6067;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L6009: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3250 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS) && 
#line 3252 "../../gcc/config/mips/mips.md"
( epilogue_completed)))
    {
      return gen_split_783 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L7544;

 L6037: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3340 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3342 "../../gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_788 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L7545;

 L6067: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3387 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3389 "../../gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_794 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L6047: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6048;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L6048: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (got_disp_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L6049;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L6049: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3356 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3358 "../../gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_790 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L6098: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L6099;
  x1 = XEXP (x0, 0);
  goto L7494;

 L6099: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L6100;
  x1 = XEXP (x0, 0);
  goto L7494;

 L6100: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6101;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L6101: ATTRIBUTE_UNUSED_LABEL
  if (
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
	   && (INTVAL (operands[1]) & 7) != 0))))
    {
      return gen_split_800 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L7535: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L7546;
    case 1:
      goto L7547;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L7546: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 22)
    goto L6156;
  x1 = XEXP (x0, 0);
  goto L7494;

 L6156: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L6157;
 L6178: ATTRIBUTE_UNUSED_LABEL
  if (symbol_ref_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6179;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L6157: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L6158;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L6178;

 L6158: ATTRIBUTE_UNUSED_LABEL
  if (
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    {
      return gen_split_828 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L6178;

 L6179: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (symbol_ref_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L6180;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L6180: ATTRIBUTE_UNUSED_LABEL
  if (
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    {
      return gen_split_832 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L7547: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 22)
    goto L6167;
  x1 = XEXP (x0, 0);
  goto L7494;

 L6167: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L6168;

 L6168: ATTRIBUTE_UNUSED_LABEL
  if (
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode))
    {
      return gen_split_830 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L6202: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6203;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L6203: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L6204;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L6204: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4860 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return gen_split_844 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L6208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6209;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L6209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L6210;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L6210: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4860 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return gen_split_845 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L6214: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6215;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L6215: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L6216;
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L6216: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4860 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && 
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return gen_split_846 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L6057: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3370 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3372 "../../gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_792 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7494;

 L6133: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L6134;
    }
  x1 = XEXP (x0, 0);
  goto L6144;

 L6134: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4126 "../../gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])))
    {
      return gen_split_814 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L6144;

 L7491: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L6002;
    }
  goto L6144;

 L6002: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L7548;
  x1 = XEXP (x0, 0);
  goto L6144;

 L7548: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SIGN_EXTEND:
      goto L6003;
    case MEM:
      goto L6116;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L6144;

 L6003: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L6004;
    }
  x1 = XEXP (x0, 0);
  goto L6144;

 L6004: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2722 "../../gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 2726 "../../gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_773 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L6144;

 L6116: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L6117;
  x1 = XEXP (x0, 0);
  goto L6144;

 L6117: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L6118;
  x1 = XEXP (x0, 0);
  goto L6144;

 L6118: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6119;
    }
  x1 = XEXP (x0, 0);
  goto L6144;

 L6119: ATTRIBUTE_UNUSED_LABEL
  if (
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
	   && (INTVAL (operands[1]) & 1) != 0))))
    {
      return gen_split_807 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L6144;

 L7492: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L6122;
    }
  goto L6144;

 L6122: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == MEM)
    goto L6123;
  x1 = XEXP (x0, 0);
  goto L6144;

 L6123: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L6124;
  x1 = XEXP (x0, 0);
  goto L6144;

 L6124: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L6125;
  x1 = XEXP (x0, 0);
  goto L6144;

 L6125: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6126;
    }
  x1 = XEXP (x0, 0);
  goto L6144;

 L6126: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3974 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32
	   && INTVAL (operands[1]) <= 31 + 0x7f))))
    {
      return gen_split_809 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L6144;

 L7493: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L6129;
    }
  goto L6144;

 L6129: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, TFmode))
    {
      operands[1] = x1;
      goto L6130;
    }
  x1 = XEXP (x0, 0);
  goto L6144;

 L6130: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4114 "../../gcc/config/mips/mips.md"
( reload_completed))
    {
      return gen_split_813 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L6144;

 L7495: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L6137;
    }
  goto L6144;

 L6137: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L6138;
    }
  x1 = XEXP (x0, 0);
  goto L6144;

 L6138: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4126 "../../gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])))
    {
      return gen_split_815 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L6144;

 L7496: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L6141;
    }
  goto L6144;

 L6141: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V2SFmode))
    {
      operands[1] = x1;
      goto L6142;
    }
  x1 = XEXP (x0, 0);
  goto L6144;

 L6142: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4126 "../../gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])) && 
#line 502 "../../gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return gen_split_816 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L6144;

 L6145: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L6146;
    }
  goto ret0;

 L6146: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4139 "../../gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && INTVAL (operands[1]) < 0))
    {
      return gen_split_817 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

static rtx
split_2 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  switch (XVECLEN (x0, 0))
    {
    case 4:
      goto L5794;
    case 2:
      goto L6017;
    case 3:
      goto L6249;
    default:
      break;
    }
  goto ret0;

 L5794: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L5795;
  goto ret0;

 L5795: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L7550;
    case DImode:
      goto L7551;
    default:
      break;
    }
  goto ret0;

 L7550: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5796;
    }
  goto ret0;

 L5796: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L7552;
  goto ret0;

 L7552: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L5797;
    case MINUS:
      goto L5827;
    default:
     break;
   }
  goto ret0;

 L5797: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L5798;
  goto ret0;

 L5798: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5799;
    }
  goto ret0;

 L5799: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5800;
    }
  goto ret0;

 L5800: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5801;
    }
  goto ret0;

 L5801: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5802;
  goto ret0;

 L5802: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L5803;
    }
  goto ret0;

 L5803: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5804;
  goto ret0;

 L5804: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L5805;
    }
  goto ret0;

 L5805: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L5806;
  goto ret0;

 L5806: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L5807;
    }
  goto ret0;

 L5807: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1298 "../../gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[3]))))
    {
      return gen_split_725 (insn, operands);
    }
 L5822: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1317 "../../gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[3]) == LO_REGNUM))
    {
      return gen_split_726 (insn, operands);
    }
  goto ret0;

 L5827: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5828;
    }
  goto ret0;

 L5828: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L5829;
  goto ret0;

 L5829: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5830;
    }
  goto ret0;

 L5830: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L5831;
    }
  goto ret0;

 L5831: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5832;
  goto ret0;

 L5832: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L5833;
    }
  goto ret0;

 L5833: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5834;
  goto ret0;

 L5834: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L5835;
    }
  goto ret0;

 L5835: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L5836;
  goto ret0;

 L5836: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L5837;
    }
  goto ret0;

 L5837: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1379 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC) && 
#line 1381 "../../gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_727 (insn, operands);
    }
 L5895: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1553 "../../gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[1]))))
    {
      return gen_split_731 (insn, operands);
    }
 L5910: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1572 "../../gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[1]) == LO_REGNUM))
    {
      return gen_split_732 (insn, operands);
    }
  goto ret0;

 L7551: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L5914;
    }
  goto ret0;

 L5914: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MULT)
    goto L5915;
  goto ret0;

 L5915: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L7554;
  goto ret0;

 L7554: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L5916;
    case ZERO_EXTEND:
      goto L5931;
    default:
     break;
   }
  goto ret0;

 L5916: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5917;
    }
  goto ret0;

 L5917: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L5918;
  goto ret0;

 L5918: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5919;
    }
  goto ret0;

 L5919: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5920;
  goto ret0;

 L5920: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L5921;
    }
  goto ret0;

 L5921: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5922;
  goto ret0;

 L5922: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L5923;
    }
  goto ret0;

 L5923: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L5924;
  goto ret0;

 L5924: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[5] = x2;
      goto L5925;
    }
  goto ret0;

 L5925: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1648 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000) && 
#line 1650 "../../gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_735 (insn, operands);
    }
  goto ret0;

 L5931: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5932;
    }
  goto ret0;

 L5932: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L5933;
  goto ret0;

 L5933: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5934;
    }
  goto ret0;

 L5934: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5935;
  goto ret0;

 L5935: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L5936;
    }
  goto ret0;

 L5936: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5937;
  goto ret0;

 L5937: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L5938;
    }
  goto ret0;

 L5938: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L5939;
  goto ret0;

 L5939: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[5] = x2;
      goto L5940;
    }
  goto ret0;

 L5940: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1648 "../../gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000) && 
#line 1650 "../../gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_736 (insn, operands);
    }
  goto ret0;

 L6017: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L6018;
    case UNSPEC:
      goto L7556;
    case CALL:
      goto L6234;
    default:
     break;
   }
  goto ret0;

 L6018: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L7557;
    case SImode:
      goto L7558;
    default:
      break;
    }
 L6241: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L6242;
    }
  goto ret0;

 L7557: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L6019;
    }
  goto L6241;

 L6019: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (absolute_symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6020;
    }
  if (splittable_const_int_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6078;
    }
 L6091: ATTRIBUTE_UNUSED_LABEL
  operands[1] = x2;
  goto L6092;

 L6020: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6021;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L6091;

 L6021: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L6022;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L6091;

 L6022: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3304 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected) && 
#line 3306 "../../gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_785 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L6091;

 L6078: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6079;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L6091;

 L6079: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L6080;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L6091;

 L6080: ATTRIBUTE_UNUSED_LABEL
  if (
#line 490 "../../gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return gen_split_796 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L6091;

 L6092: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6093;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6241;

 L6093: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L6094;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6241;

 L6094: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3455 "../../gcc/config/mips/mips.md"
(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return gen_split_798 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6241;

 L7558: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6071;
    }
  goto L6241;

 L6071: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (splittable_const_int_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6072;
    }
 L6084: ATTRIBUTE_UNUSED_LABEL
  operands[1] = x2;
  goto L6085;

 L6072: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6073;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L6084;

 L6073: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return gen_split_795 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L6084;

 L6085: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6086;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6241;

 L6086: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6087;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6241;

 L6087: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3455 "../../gcc/config/mips/mips.md"
(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && 
#line 494 "../../gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return gen_split_797 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6241;

 L6242: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L6243;
  goto ret0;

 L6243: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6244;
  goto ret0;

 L6244: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L6245;
    }
  goto ret0;

 L6245: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L6246;

 L6246: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6247;
  goto ret0;

 L6247: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && 
#line 5939 "../../gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[3] = insn)))
    {
      return gen_split_898 (insn, operands);
    }
  goto ret0;

 L7556: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 7)
    goto L6224;
  goto ret0;

 L6224: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L6225;
    }
  goto ret0;

 L6225: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6226;
  goto ret0;

 L6226: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L6227;
    }
  goto ret0;

 L6227: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5649 "../../gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE))
    {
      return gen_split_889 (insn, operands);
    }
  goto ret0;

 L6234: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L6235;
  goto ret0;

 L6235: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L6236;
    }
  goto ret0;

 L6236: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L6237;

 L6237: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6238;
  goto ret0;

 L6238: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && 
#line 5887 "../../gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[2] = insn)))
    {
      return gen_split_896 (insn, operands);
    }
  goto ret0;

 L6249: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L6250;
  goto ret0;

 L6250: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L6251;
    }
  goto ret0;

 L6251: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L6252;
  goto ret0;

 L6252: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6253;
  goto ret0;

 L6253: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L6254;
    }
  goto ret0;

 L6254: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L6255;

 L6255: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6256;
  goto ret0;

 L6256: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L6257;
    }
  goto ret0;

 L6257: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L6258;
  goto ret0;

 L6258: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6259;
  goto ret0;

 L6259: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L6260;
  goto ret0;

 L6260: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6261;
  goto ret0;

 L6261: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6262;
  goto ret0;

 L6262: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && 
#line 5982 "../../gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[4] = insn)))
    {
      return gen_split_899 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

rtx
split_insns (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case SET:
      goto L5733;
    case PARALLEL:
      goto L7486;
    default:
     break;
   }
 L6263: ATTRIBUTE_UNUSED_LABEL
  if (small_data_pattern (x0, VOIDmode))
    {
      operands[0] = x0;
      goto L6264;
    }
 L6265: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x0) == SET)
    goto L6266;
  goto ret0;

 L5733: ATTRIBUTE_UNUSED_LABEL
  tem = split_1 (x0, insn);
  if (tem != 0)
    return tem;
  goto L6263;

 L7486: ATTRIBUTE_UNUSED_LABEL
  tem = split_2 (x0, insn);
  if (tem != 0)
    return tem;
  goto L6263;

 L6264: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6187 "../../gcc/config/mips/mips.md"
(reload_completed))
    {
      return gen_split_905 (insn, operands);
    }
  goto L6265;

 L6266: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (register_operand (x1, CCV4mode))
    {
      operands[0] = x1;
      goto L6267;
    }
  goto ret0;

 L6267: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCV4mode)
    goto L7559;
  goto ret0;

 L7559: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L7561;
  goto ret0;

 L7561: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 5)
    goto L7563;
  goto ret0;

 L7563: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 201L:
      goto L6268;
    case 203L:
      goto L6277;
    default:
      break;
    }
  goto ret0;

 L6268: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L6269;
    }
  goto ret0;

 L6269: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L6270;
    }
  goto ret0;

 L6270: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L6271;
    }
  goto ret0;

 L6271: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (register_operand (x2, V2SFmode))
    {
      operands[4] = x2;
      goto L6272;
    }
  goto ret0;

 L6272: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L6273;
    }
  goto ret0;

 L6273: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 331 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 333 "../../gcc/config/mips/mips-ps-3d.md"
( reload_completed)))
    {
      return gen_split_913 (insn, operands);
    }
  goto ret0;

 L6277: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L6278;
    }
  goto ret0;

 L6278: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L6279;
    }
  goto ret0;

 L6279: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L6280;
    }
  goto ret0;

 L6280: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (register_operand (x2, V2SFmode))
    {
      operands[4] = x2;
      goto L6281;
    }
  goto ret0;

 L6281: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L6282;
    }
  goto ret0;

 L6282: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 360 "../../gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 362 "../../gcc/config/mips/mips-ps-3d.md"
( reload_completed)))
    {
      return gen_split_914 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

rtx
peephole2_insns (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *_pmatch_len ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  if (peep2_current_count >= 2)
    goto L5764;
 L5864: ATTRIBUTE_UNUSED_LABEL
  if (peep2_current_count >= 3)
    goto L5865;
 L6011: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x0) == SET)
    goto L6012;
  goto ret0;

 L5764: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x0))
    {
    case PARALLEL:
      goto L7565;
    case SET:
      goto L5854;
    default:
     break;
   }
  goto L5864;

 L7565: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x0, 0))
    {
    case 3:
      goto L5765;
    case 2:
      goto L5781;
    default:
      break;
    }
  goto L5864;

 L5765: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L5766;
  goto L5864;

 L5766: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5767;
    }
  goto L5864;

 L5767: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L7567;
  goto L5864;

 L7567: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L5768;
  if (macc_msac_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5843;
    }
  goto L5864;

 L5768: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5769;
    }
  goto L5864;

 L5769: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5770;
    }
  goto L5864;

 L5770: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5771;
  goto L5864;

 L5771: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L5772;
    }
  goto L5864;

 L5772: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5773;
  goto L5864;

 L5773: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SCRATCH)
    goto L5774;
  goto L5864;

 L5774: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L5775;
  goto L5864;

 L5775: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L5776;
    }
  goto L5864;

 L5776: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 26)
    goto L5777;
  goto L5864;

 L5777: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L5778;
  goto L5864;

 L5778: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 1193 "../../gcc/config/mips/mips.md"
(ISA_HAS_MUL3 && peep2_reg_dead_p (2, operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_723 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L5864;

 L5843: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5844;
  goto L5864;

 L5844: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5845;
    }
  goto L5864;

 L5845: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5846;
  goto L5864;

 L5846: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SCRATCH)
    goto L5847;
  goto L5864;

 L5847: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L5848;
  goto L5864;

 L5848: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L5849;
    }
  goto L5864;

 L5849: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 26)
    goto L5850;
  goto L5864;

 L5850: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L5851;
  goto L5864;

 L5851: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_728 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L5864;

 L5781: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L5782;
  goto L5864;

 L5782: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5783;
    }
  goto L5864;

 L5783: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MULT)
    goto L5784;
  goto L5864;

 L5784: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5785;
    }
  goto L5864;

 L5785: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5786;
    }
  goto L5864;

 L5786: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5787;
  goto L5864;

 L5787: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L5788;
    }
  goto L5864;

 L5788: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L5789;
  goto L5864;

 L5789: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L5790;
    }
  goto L5864;

 L5790: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 26)
    goto L5791;
  goto L5864;

 L5791: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L5792;
  goto L5864;

 L5792: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 1240 "../../gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MUL3))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_724 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L5864;

 L5854: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L5855;
    }
  goto L5864;

 L5855: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SImode))
    {
      operands[2] = x1;
      goto L5856;
    }
  goto L5864;

 L5856: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 3)
    goto L5857;
  goto L5864;

 L5857: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L5858;
  goto L5864;

 L5858: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5859;
    }
  goto L5864;

 L5859: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (macc_msac_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L5860;
    }
  goto L5864;

 L5860: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5861;
  goto L5864;

 L5861: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L5862;
    }
  goto L5864;

 L5862: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == CLOBBER)
    goto L5863;
  goto L5864;

 L5863: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 1475 "../../gcc/config/mips/mips.md"
(ISA_HAS_MUL3
   && true_regnum (operands[1]) == LO_REGNUM
   && peep2_reg_dead_p (2, operands[1])
   && GP_REG_P (true_regnum (operands[3]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_729 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L5864;

 L5865: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x0) == SET)
    goto L5866;
  goto L6011;

 L5866: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L5867;
    }
  goto L6011;

 L5867: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SImode))
    {
      operands[2] = x1;
      goto L5868;
    }
  goto L6011;

 L5868: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 3)
    goto L5869;
  goto L6011;

 L5869: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L5870;
  goto L6011;

 L5870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5871;
  goto L6011;

 L5871: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (macc_msac_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5872;
    }
  goto L6011;

 L5872: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5873;
  goto L6011;

 L5873: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L5874;
    }
  goto L6011;

 L5874: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == CLOBBER)
    goto L5875;
  goto L6011;

 L5875: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SCRATCH)
    goto L5876;
  goto L6011;

 L5876: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L5877;
  goto L6011;

 L5877: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L5878;
    }
  goto L6011;

 L5878: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 26)
    goto L5879;
  goto L6011;

 L5879: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5880;
  goto L6011;

 L5880: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[4])
      && 
#line 1514 "../../gcc/config/mips/mips.md"
(ISA_HAS_MUL3 && peep2_reg_dead_p (3, operands[1])))
    {
      *_pmatch_len = 2;
      tem = gen_peephole2_730 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L6011;

 L6012: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (register_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L6013;
    }
  goto ret0;

 L6013: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == HIGH)
    goto L6014;
  goto ret0;

 L6014: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (absolute_symbolic_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L6015;
    }
  goto ret0;

 L6015: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (0);
  x1 = PATTERN (tem);
  if (
#line 3276 "../../gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS))
    {
      *_pmatch_len = 0;
      tem = gen_peephole2_784 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;
 ret0:
  return 0;
}

