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

// Function: sub_001D0B40
// Address: 0x1d0b40 - 0x1d0b98
void sub_001D0B40_0x1d0b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0B40_0x1d0b40");
#endif

    switch (ctx->pc) {
        case 0x1d0b74u: goto label_1d0b74;
        case 0x1d0b88u: goto label_1d0b88;
        default: break;
    }

    ctx->pc = 0x1d0b40u;

    // 0x1d0b40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1d0b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1d0b44: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d0b44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d0b48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0b4c: 0x8c4543b8  lw          $a1, 0x43B8($v0)
    ctx->pc = 0x1d0b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B43B8u));
    // 0x1d0b50: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1d0b50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1d0b54: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0B54u;
    {
        const bool branch_taken_0x1d0b54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D0B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B54u;
        // 0x1d0b58: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b54) {
            ctx->pc = 0x1D0B74u;
            goto label_1d0b74;
        }
    }
    ctx->pc = 0x1D0B5Cu;
    // 0x1d0b5c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d0b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d0b60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0B60u;
    {
        const bool branch_taken_0x1d0b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B60u;
        // 0x1d0b64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b60) {
            ctx->pc = 0x1D0B74u;
            goto label_1d0b74;
        }
    }
    ctx->pc = 0x1D0B68u;
    // 0x1d0b68: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1d0b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1d0b6c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D0B6Cu;
    SET_GPR_U32(ctx, 31, 0x1D0B74u);
    ctx->pc = 0x1D0B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0B6Cu;
    // 0x1d0b70: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D0B6Cu, 0x1D0B74u)) {
        return;
    }
    ctx->pc = 0x1D0B74u;
label_1d0b74:
    // 0x1d0b74: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d0b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d0b78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d0b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0b7c: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x1d0b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339168u));
    // 0x1d0b80: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x1D0B80u;
    SET_GPR_U32(ctx, 31, 0x1D0B88u);
    ctx->pc = 0x1D0B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0B80u;
    // 0x1d0b84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1D0B80u, 0x1D0B88u)) {
        return;
    }
    ctx->pc = 0x1D0B88u;
label_1d0b88:
    // 0x1d0b88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0b8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d0b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b90: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B90u;
        // 0x1d0b94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0B98u;
}
