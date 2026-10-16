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

// Function: sub_0013B140
// Address: 0x13b140 - 0x13b1f0
void sub_0013B140_0x13b140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B140_0x13b140");
#endif

    switch (ctx->pc) {
        case 0x13b1b0u: goto label_13b1b0;
        case 0x13b1c8u: goto label_13b1c8;
        case 0x13b1d8u: goto label_13b1d8;
        default: break;
    }

    ctx->pc = 0x13b140u;

    // 0x13b140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13b140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13b144: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x13b144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x13b148: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13b148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13b14c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x13b150: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13b154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13b158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13b15c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x13b15cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x13b160: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x13b160u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x13b164: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x13b164u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x13b168: 0x3c080069  lui         $t0, 0x69
    ctx->pc = 0x13b168u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)105 << 16));
    // 0x13b16c: 0x2442f048  addiu       $v0, $v0, -0xFB8
    ctx->pc = 0x13b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963272));
    // 0x13b170: 0x2463ef28  addiu       $v1, $v1, -0x10D8
    ctx->pc = 0x13b170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962984));
    // 0x13b174: 0x2484eee8  addiu       $a0, $a0, -0x1118
    ctx->pc = 0x13b174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962920));
    // 0x13b178: 0x24c6eed0  addiu       $a2, $a2, -0x1130
    ctx->pc = 0x13b178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962896));
    // 0x13b17c: 0x24e7f068  addiu       $a3, $a3, -0xF98
    ctx->pc = 0x13b17cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963304));
    // 0x13b180: 0x2508f328  addiu       $t0, $t0, -0xCD8
    ctx->pc = 0x13b180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964008));
    // 0x13b184: 0x8e092d9c  lw          $t1, 0x2D9C($s0)
    ctx->pc = 0x13b184u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11676)));
    // 0x13b188: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13b188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b18c: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x13b18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x13b190: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x13b190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
    // 0x13b194: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x13b194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x13b198: 0xae060354  sw          $a2, 0x354($s0)
    ctx->pc = 0x13b198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 6));
    // 0x13b19c: 0xae070074  sw          $a3, 0x74($s0)
    ctx->pc = 0x13b19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 7));
    // 0x13b1a0: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B1A0u;
    {
        const bool branch_taken_0x13b1a0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B1A0u;
        // 0x13b1a4: 0xae080030  sw          $t0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b1a0) {
            ctx->pc = 0x13B1B4u;
            goto label_13b1b4;
        }
    }
    ctx->pc = 0x13B1A8u;
    // 0x13b1a8: 0xc09d90a  jal         func_276428
    ctx->pc = 0x13B1A8u;
    SET_GPR_U32(ctx, 31, 0x13B1B0u);
    ctx->pc = 0x13B1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B1A8u;
    // 0x13b1ac: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x13B1A8u, 0x13B1B0u)) {
        return;
    }
    ctx->pc = 0x13B1B0u;
label_13b1b0:
    // 0x13b1b0: 0xae002d9c  sw          $zero, 0x2D9C($s0)
    ctx->pc = 0x13b1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11676), GPR_U32(ctx, 0));
label_13b1b4:
    // 0x13b1b4: 0x8e042d98  lw          $a0, 0x2D98($s0)
    ctx->pc = 0x13b1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11672)));
    // 0x13b1b8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B1B8u;
    {
        const bool branch_taken_0x13b1b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b1b8) {
            ctx->pc = 0x13B1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B1B8u;
            // 0x13b1bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B1D0u;
            goto label_13b1d0;
        }
    }
    ctx->pc = 0x13B1C0u;
    // 0x13b1c0: 0xc09d90a  jal         func_276428
    ctx->pc = 0x13B1C0u;
    SET_GPR_U32(ctx, 31, 0x13B1C8u);
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x13B1C0u, 0x13B1C8u)) {
        return;
    }
    ctx->pc = 0x13B1C8u;
label_13b1c8:
    // 0x13b1c8: 0xae002d98  sw          $zero, 0x2D98($s0)
    ctx->pc = 0x13b1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11672), GPR_U32(ctx, 0));
    // 0x13b1cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13b1d0:
    // 0x13b1d0: 0xc049f60  jal         func_127D80
    ctx->pc = 0x13B1D0u;
    SET_GPR_U32(ctx, 31, 0x13B1D8u);
    ctx->pc = 0x13B1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B1D0u;
    // 0x13b1d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x127D80u, 0x13B1D0u, 0x13B1D8u)) {
        return;
    }
    ctx->pc = 0x13B1D8u;
label_13b1d8:
    // 0x13b1d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13b1d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b1dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b1dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b1e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x13B1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B1E4u;
        // 0x13b1e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B1ECu;
    // 0x13b1ec: 0x0  nop
    ctx->pc = 0x13b1ecu;
    // NOP
    ctx->pc = 0x13b1f0u;
}
