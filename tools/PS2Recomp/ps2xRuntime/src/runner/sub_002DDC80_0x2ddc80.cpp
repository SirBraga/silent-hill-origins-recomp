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

// Function: sub_002DDC80
// Address: 0x2ddc80 - 0x2ddd08
void sub_002DDC80_0x2ddc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDC80_0x2ddc80");
#endif

    ctx->pc = 0x2ddc80u;

    // 0x2ddc80: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2DDC80u;
    {
        const bool branch_taken_0x2ddc80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDC80u;
        // 0x2ddc84: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddc80) {
            ctx->pc = 0x2DDCB0u;
            goto label_2ddcb0;
        }
    }
    ctx->pc = 0x2DDC88u;
    // 0x2ddc88: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ddc88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ddc8c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ddc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2ddc90: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2ddc90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2ddc94: 0xa0a0000c  sb          $zero, 0xC($a1)
    ctx->pc = 0x2ddc94u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ddc98: 0xa0a0000d  sb          $zero, 0xD($a1)
    ctx->pc = 0x2ddc98u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ddc9c: 0xa0a00018  sb          $zero, 0x18($a1)
    ctx->pc = 0x2ddc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ddca0: 0xa0a00019  sb          $zero, 0x19($a1)
    ctx->pc = 0x2ddca0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ddca4: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x2ddca4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x2ddca8: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x2ddca8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x2ddcac: 0x0  nop
    ctx->pc = 0x2ddcacu;
    // NOP
label_2ddcb0:
    // 0x2ddcb0: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x2ddcb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2ddcb4: 0xa0a2000c  sb          $v0, 0xC($a1)
    ctx->pc = 0x2ddcb4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ddcb8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2ddcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ddcbc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2ddcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2ddcc0: 0x90e40005  lbu         $a0, 0x5($a3)
    ctx->pc = 0x2ddcc0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2ddcc4: 0xa0a00018  sb          $zero, 0x18($a1)
    ctx->pc = 0x2ddcc4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ddcc8: 0xa0a4000d  sb          $a0, 0xD($a1)
    ctx->pc = 0x2ddcc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 13), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ddccc: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x2ddcccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2ddcd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ddcd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ddcd4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DDCD4u;
    {
        const bool branch_taken_0x2ddcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDCD4u;
        // 0x2ddcd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddcd4) {
            ctx->pc = 0x2DDCE0u;
            goto label_2ddce0;
        }
    }
    ctx->pc = 0x2DDCDCu;
    // 0x2ddcdc: 0xa0a20018  sb          $v0, 0x18($a1)
    ctx->pc = 0x2ddcdcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 24), (uint8_t)GPR_U32(ctx, 2));
label_2ddce0:
    // 0x2ddce0: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x2ddce0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2ddce4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2ddce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2ddce8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DDCE8u;
    {
        const bool branch_taken_0x2ddce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddce8) {
            ctx->pc = 0x2DDCFCu;
            goto label_2ddcfc;
        }
    }
    ctx->pc = 0x2DDCF0u;
    // 0x2ddcf0: 0x90a20018  lbu         $v0, 0x18($a1)
    ctx->pc = 0x2ddcf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2ddcf4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2ddcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2ddcf8: 0xa0a20018  sb          $v0, 0x18($a1)
    ctx->pc = 0x2ddcf8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 24), (uint8_t)GPR_U32(ctx, 2));
label_2ddcfc:
    // 0x2ddcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDD04u;
    // 0x2ddd04: 0x0  nop
    ctx->pc = 0x2ddd04u;
    // NOP
    ctx->pc = 0x2ddd08u;
}
