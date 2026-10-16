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

// Function: sub_001EFB90
// Address: 0x1efb90 - 0x1efc08
void sub_001EFB90_0x1efb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFB90_0x1efb90");
#endif

    switch (ctx->pc) {
        case 0x1efbd8u: goto label_1efbd8;
        default: break;
    }

    ctx->pc = 0x1efb90u;

    // 0x1efb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1efb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1efb94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1efb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1efb98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1efb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1efb9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1efb9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efba0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1efba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1efba4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EFBA4u;
    {
        const bool branch_taken_0x1efba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBA4u;
        // 0x1efba8: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efba4) {
            ctx->pc = 0x1EFBDCu;
            goto label_1efbdc;
        }
    }
    ctx->pc = 0x1EFBACu;
    // 0x1efbac: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1efbacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1efbb0: 0x8c45f8c0  lw          $a1, -0x740($v0)
    ctx->pc = 0x1efbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965440)));
    // 0x1efbb4: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1efbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1efbb8: 0x50a30008  beql        $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFBB8u;
    {
        const bool branch_taken_0x1efbb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1efbb8) {
            ctx->pc = 0x1EFBBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFBB8u;
            // 0x1efbbc: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFBDCu;
            goto label_1efbdc;
        }
    }
    ctx->pc = 0x1EFBC0u;
    // 0x1efbc0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1efbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1efbc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EFBC4u;
    {
        const bool branch_taken_0x1efbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBC4u;
        // 0x1efbc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efbc4) {
            ctx->pc = 0x1EFBD8u;
            goto label_1efbd8;
        }
    }
    ctx->pc = 0x1EFBCCu;
    // 0x1efbcc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1efbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1efbd0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1EFBD0u;
    SET_GPR_U32(ctx, 31, 0x1EFBD8u);
    ctx->pc = 0x1EFBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFBD0u;
    // 0x1efbd4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1EFBD0u, 0x1EFBD8u)) {
        return;
    }
    ctx->pc = 0x1EFBD8u;
label_1efbd8:
    // 0x1efbd8: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1efbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_1efbdc:
    // 0x1efbdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1efbdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1efbe0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1efbe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efbe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1efbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efbe8: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1efbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x1efbec: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1efbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1efbf0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1efbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1efbf4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1efbf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1efbf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1efbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efbfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBFCu;
        // 0x1efc00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFC04u;
    // 0x1efc04: 0x0  nop
    ctx->pc = 0x1efc04u;
    // NOP
    ctx->pc = 0x1efc08u;
}
