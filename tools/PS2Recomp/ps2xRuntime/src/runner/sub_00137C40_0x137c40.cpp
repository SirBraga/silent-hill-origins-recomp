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

// Function: sub_00137C40
// Address: 0x137c40 - 0x137cc8
void sub_00137C40_0x137c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137C40_0x137c40");
#endif

    switch (ctx->pc) {
        case 0x137cacu: goto label_137cac;
        case 0x137cb4u: goto label_137cb4;
        default: break;
    }

    ctx->pc = 0x137c40u;

    // 0x137c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x137c44: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x137c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x137c48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x137c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x137c4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x137c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x137c50: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x137c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137c54: 0x24634238  addiu       $v1, $v1, 0x4238
    ctx->pc = 0x137c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16952));
    // 0x137c58: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x137c58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4254u));
    // 0x137c5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x137C5Cu;
    {
        const bool branch_taken_0x137c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C5Cu;
        // 0x137c60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c5c) {
            ctx->pc = 0x137C78u;
            goto label_137c78;
        }
    }
    ctx->pc = 0x137C64u;
    // 0x137c64: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x137c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x137c68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137C68u;
    {
        const bool branch_taken_0x137c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137c68) {
            ctx->pc = 0x137C78u;
            goto label_137c78;
        }
    }
    ctx->pc = 0x137C70u;
    // 0x137c70: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x137c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x137c74: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x137c74u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_137c78:
    // 0x137c78: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x137C78u;
    {
        const bool branch_taken_0x137c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C78u;
        // 0x137c7c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c78) {
            ctx->pc = 0x137CB4u;
            goto label_137cb4;
        }
    }
    ctx->pc = 0x137C80u;
    // 0x137c80: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x137c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x137c84: 0x8c454608  lw          $a1, 0x4608($v0)
    ctx->pc = 0x137c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17928)));
    // 0x137c88: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x137c88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x137c8c: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x137C8Cu;
    {
        const bool branch_taken_0x137c8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x137c8c) {
            ctx->pc = 0x137CACu;
            goto label_137cac;
        }
    }
    ctx->pc = 0x137C94u;
    // 0x137c94: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x137c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x137c98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x137C98u;
    {
        const bool branch_taken_0x137c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C98u;
        // 0x137c9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c98) {
            ctx->pc = 0x137CACu;
            goto label_137cac;
        }
    }
    ctx->pc = 0x137CA0u;
    // 0x137ca0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x137ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x137ca4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x137CA4u;
    SET_GPR_U32(ctx, 31, 0x137CACu);
    ctx->pc = 0x137CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137CA4u;
    // 0x137ca8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x137CA4u, 0x137CACu)) {
        return;
    }
    ctx->pc = 0x137CACu;
label_137cac:
    // 0x137cac: 0xc04226e  jal         func_1089B8
    ctx->pc = 0x137CACu;
    SET_GPR_U32(ctx, 31, 0x137CB4u);
    ctx->pc = 0x137CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137CACu;
    // 0x137cb0: 0x26044238  addiu       $a0, $s0, 0x4238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1089B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1089B8u, 0x137CACu, 0x137CB4u)) {
        return;
    }
    ctx->pc = 0x137CB4u;
label_137cb4:
    // 0x137cb4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x137cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137cb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x137cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x137CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137CBCu;
        // 0x137cc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137CC4u;
    // 0x137cc4: 0x0  nop
    ctx->pc = 0x137cc4u;
    // NOP
    ctx->pc = 0x137cc8u;
}
