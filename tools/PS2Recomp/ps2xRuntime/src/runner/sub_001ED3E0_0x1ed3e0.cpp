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

// Function: sub_001ED3E0
// Address: 0x1ed3e0 - 0x1ed478
void sub_001ED3E0_0x1ed3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED3E0_0x1ed3e0");
#endif

    switch (ctx->pc) {
        case 0x1ed43cu: goto label_1ed43c;
        case 0x1ed450u: goto label_1ed450;
        case 0x1ed464u: goto label_1ed464;
        default: break;
    }

    ctx->pc = 0x1ed3e0u;

label_1ed3e0:
    // 0x1ed3e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ed3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ed3e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ed3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ed3e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed3ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ed3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed3f0: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x1ed3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x1ed3f4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1ed3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed3f8: 0x50c00011  beql        $a2, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1ED3F8u;
    {
        const bool branch_taken_0x1ed3f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed3f8) {
            ctx->pc = 0x1ED3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED3F8u;
            // 0x1ed3fc: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED440u;
            goto label_1ed440;
        }
    }
    ctx->pc = 0x1ED400u;
    // 0x1ed400: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1ed400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ed404: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ed404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ed408: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1ed408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ed40c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1ed40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ed410: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ed410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ed414: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ed414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ed418: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ed418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ed41c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ed41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed420: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ed420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ed424: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ED424u;
    {
        const bool branch_taken_0x1ed424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED424u;
        // 0x1ed428: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed424) {
            ctx->pc = 0x1ED43Cu;
            goto label_1ed43c;
        }
    }
    ctx->pc = 0x1ED42Cu;
    // 0x1ed42c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED42Cu;
    {
        const bool branch_taken_0x1ed42c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed42c) {
            ctx->pc = 0x1ED430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED42Cu;
            // 0x1ed430: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED440u;
            goto label_1ed440;
        }
    }
    ctx->pc = 0x1ED434u;
    // 0x1ed434: 0xc079fb2  jal         func_1E7EC8
    ctx->pc = 0x1ED434u;
    SET_GPR_U32(ctx, 31, 0x1ED43Cu);
    ctx->pc = 0x1ED438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED434u;
    // 0x1ed438: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7EC8u, 0x1ED434u, 0x1ED43Cu)) {
        return;
    }
    ctx->pc = 0x1ED43Cu;
label_1ed43c:
    // 0x1ed43c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1ed43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1ed440:
    // 0x1ed440: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED440u;
    {
        const bool branch_taken_0x1ed440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed440) {
            ctx->pc = 0x1ED444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED440u;
            // 0x1ed444: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED454u;
            goto label_1ed454;
        }
    }
    ctx->pc = 0x1ED448u;
    // 0x1ed448: 0xc07b4f8  jal         func_1ED3E0
    ctx->pc = 0x1ED448u;
    SET_GPR_U32(ctx, 31, 0x1ED450u);
    ctx->pc = 0x1ED3E0u;
    goto label_1ed3e0;
    ctx->pc = 0x1ED450u;
label_1ed450:
    // 0x1ed450: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1ed450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ed454:
    // 0x1ed454: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED454u;
    {
        const bool branch_taken_0x1ed454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED454u;
        // 0x1ed458: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed454) {
            ctx->pc = 0x1ED468u;
            goto label_1ed468;
        }
    }
    ctx->pc = 0x1ED45Cu;
    // 0x1ed45c: 0xc07b4f8  jal         func_1ED3E0
    ctx->pc = 0x1ED45Cu;
    SET_GPR_U32(ctx, 31, 0x1ED464u);
    ctx->pc = 0x1ED3E0u;
    goto label_1ed3e0;
    ctx->pc = 0x1ED464u;
label_1ed464:
    // 0x1ed464: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ed464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ed468:
    // 0x1ed468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed46c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED46Cu;
        // 0x1ed470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED474u;
    // 0x1ed474: 0x0  nop
    ctx->pc = 0x1ed474u;
    // NOP
    ctx->pc = 0x1ed478u;
}
