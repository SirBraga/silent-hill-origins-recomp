#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ABC88
// Address: 0x2abc88 - 0x2abdf0
void sub_002ABC88_0x2abc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABC88_0x2abc88");
#endif

    ctx->pc = 0x2abc88u;

    // 0x2abc88: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x2abc88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2abc8c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2abc8cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2abc90: 0x3529fff0  ori         $t1, $t1, 0xFFF0
    ctx->pc = 0x2abc90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65520);
    // 0x2abc94: 0x53980  sll         $a3, $a1, 6
    ctx->pc = 0x2abc94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2abc98: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x2abc98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x2abc9c: 0x55140  sll         $t2, $a1, 5
    ctx->pc = 0x2abc9cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2abca0: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x2abca0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x2abca4: 0x240d0030  addiu       $t5, $zero, 0x30
    ctx->pc = 0x2abca4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2abca8: 0x24c80073  addiu       $t0, $a2, 0x73
    ctx->pc = 0x2abca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 115));
    // 0x2abcac: 0xad6818  mult        $t5, $a1, $t5
    ctx->pc = 0x2abcacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x2abcb0: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x2abcb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x2abcb4: 0x57080  sll         $t6, $a1, 2
    ctx->pc = 0x2abcb4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2abcb8: 0x2508000f  addiu       $t0, $t0, 0xF
    ctx->pc = 0x2abcb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x2abcbc: 0x56100  sll         $t4, $a1, 4
    ctx->pc = 0x2abcbcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2abcc0: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x2abcc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x2abcc4: 0xacc50060  sw          $a1, 0x60($a2)
    ctx->pc = 0x2abcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 96), GPR_U32(ctx, 5));
    // 0x2abcc8: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x2abcc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2abccc: 0xacc50038  sw          $a1, 0x38($a2)
    ctx->pc = 0x2abcccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 5));
    // 0x2abcd0: 0x24e7000f  addiu       $a3, $a3, 0xF
    ctx->pc = 0x2abcd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x2abcd4: 0xacc5003c  sw          $a1, 0x3C($a2)
    ctx->pc = 0x2abcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 5));
    // 0x2abcd8: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x2abcd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x2abcdc: 0x24cb0058  addiu       $t3, $a2, 0x58
    ctx->pc = 0x2abcdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 88));
    // 0x2abce0: 0x24e7000f  addiu       $a3, $a3, 0xF
    ctx->pc = 0x2abce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x2abce4: 0xaccb001c  sw          $t3, 0x1C($a2)
    ctx->pc = 0x2abce4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 11));
    // 0x2abce8: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x2abce8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x2abcec: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2abcecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abcf0: 0xea1821  addu        $v1, $a3, $t2
    ctx->pc = 0x2abcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x2abcf4: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x2abcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x2abcf8: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2abcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2abcfc: 0xaccb0004  sw          $t3, 0x4($a2)
    ctx->pc = 0x2abcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 11));
    // 0x2abd00: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x2abd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x2abd04: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x2abd04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x2abd08: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2abd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2abd0c: 0xaccb000c  sw          $t3, 0xC($a2)
    ctx->pc = 0x2abd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 11));
    // 0x2abd10: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x2abd10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x2abd14: 0xaccb0014  sw          $t3, 0x14($a2)
    ctx->pc = 0x2abd14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 11));
    // 0x2abd18: 0x6c2821  addu        $a1, $v1, $t4
    ctx->pc = 0x2abd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2abd1c: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x2abd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x2abd20: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x2abd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x2abd24: 0xaccb0044  sw          $t3, 0x44($a2)
    ctx->pc = 0x2abd24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 11));
    // 0x2abd28: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x2abd28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x2abd2c: 0xaccb0054  sw          $t3, 0x54($a2)
    ctx->pc = 0x2abd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 11));
    // 0x2abd30: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x2abd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x2abd34: 0xaccb0034  sw          $t3, 0x34($a2)
    ctx->pc = 0x2abd34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 11));
    // 0x2abd38: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x2abd38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x2abd3c: 0xaccb004c  sw          $t3, 0x4C($a2)
    ctx->pc = 0x2abd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 11));
    // 0x2abd40: 0xaa1821  addu        $v1, $a1, $t2
    ctx->pc = 0x2abd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2abd44: 0xacc50040  sw          $a1, 0x40($a2)
    ctx->pc = 0x2abd44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 5));
    // 0x2abd48: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2abd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2abd4c: 0xaccb0024  sw          $t3, 0x24($a2)
    ctx->pc = 0x2abd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 11));
    // 0x2abd50: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x2abd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x2abd54: 0xaccb002c  sw          $t3, 0x2C($a2)
    ctx->pc = 0x2abd54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 11));
    // 0x2abd58: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2abd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2abd5c: 0xacc0005c  sw          $zero, 0x5C($a2)
    ctx->pc = 0x2abd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 92), GPR_U32(ctx, 0));
    // 0x2abd60: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x2abd60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x2abd64: 0x6c6021  addu        $t4, $v1, $t4
    ctx->pc = 0x2abd64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2abd68: 0xacc30050  sw          $v1, 0x50($a2)
    ctx->pc = 0x2abd68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 3));
    // 0x2abd6c: 0x258c000f  addiu       $t4, $t4, 0xF
    ctx->pc = 0x2abd6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 15));
    // 0x2abd70: 0x1896024  and         $t4, $t4, $t1
    ctx->pc = 0x2abd70u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 9));
    // 0x2abd74: 0x258c000f  addiu       $t4, $t4, 0xF
    ctx->pc = 0x2abd74u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 15));
    // 0x2abd78: 0x1896024  and         $t4, $t4, $t1
    ctx->pc = 0x2abd78u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 9));
    // 0x2abd7c: 0x18a1821  addu        $v1, $t4, $t2
    ctx->pc = 0x2abd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x2abd80: 0xaccc0030  sw          $t4, 0x30($a2)
    ctx->pc = 0x2abd80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 12));
    // 0x2abd84: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2abd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2abd88: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x2abd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x2abd8c: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2abd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2abd90: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x2abd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x2abd94: 0x6a5021  addu        $t2, $v1, $t2
    ctx->pc = 0x2abd94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2abd98: 0xacc30048  sw          $v1, 0x48($a2)
    ctx->pc = 0x2abd98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 3));
    // 0x2abd9c: 0x254a000f  addiu       $t2, $t2, 0xF
    ctx->pc = 0x2abd9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 15));
    // 0x2abda0: 0x1495024  and         $t2, $t2, $t1
    ctx->pc = 0x2abda0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x2abda4: 0x254a000f  addiu       $t2, $t2, 0xF
    ctx->pc = 0x2abda4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 15));
    // 0x2abda8: 0x1495024  and         $t2, $t2, $t1
    ctx->pc = 0x2abda8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x2abdac: 0x14d1821  addu        $v1, $t2, $t5
    ctx->pc = 0x2abdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x2abdb0: 0xacca0020  sw          $t2, 0x20($a2)
    ctx->pc = 0x2abdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 10));
    // 0x2abdb4: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2abdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2abdb8: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x2abdb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x2abdbc: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2abdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2abdc0: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x2abdc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x2abdc4: 0x6d6821  addu        $t5, $v1, $t5
    ctx->pc = 0x2abdc4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x2abdc8: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x2abdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x2abdcc: 0x25ad000f  addiu       $t5, $t5, 0xF
    ctx->pc = 0x2abdccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 15));
    // 0x2abdd0: 0x1a96824  and         $t5, $t5, $t1
    ctx->pc = 0x2abdd0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 9));
    // 0x2abdd4: 0x1ae1821  addu        $v1, $t5, $t6
    ctx->pc = 0x2abdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x2abdd8: 0xaccd0018  sw          $t5, 0x18($a2)
    ctx->pc = 0x2abdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 13));
    // 0x2abddc: 0x6e7021  addu        $t6, $v1, $t6
    ctx->pc = 0x2abddcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x2abde0: 0xacc30058  sw          $v1, 0x58($a2)
    ctx->pc = 0x2abde0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 3));
    // 0x2abde4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABDE4u;
        // 0x2abde8: 0xac8e0008  sw          $t6, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABDECu;
    // 0x2abdec: 0x0  nop
    ctx->pc = 0x2abdecu;
    // NOP
    ctx->pc = 0x2abdf0u;
}
