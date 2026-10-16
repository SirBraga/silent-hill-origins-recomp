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

// Function: sub_00206408
// Address: 0x206408 - 0x2064b8
void sub_00206408_0x206408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206408_0x206408");
#endif

    switch (ctx->pc) {
        case 0x206438u: goto label_206438;
        case 0x206478u: goto label_206478;
        case 0x2064a4u: goto label_2064a4;
        default: break;
    }

    ctx->pc = 0x206408u;

    // 0x206408: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x206408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20640c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20640cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x206410: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x206410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x206414: 0x24423ed0  addiu       $v0, $v0, 0x3ED0
    ctx->pc = 0x206414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16080));
    // 0x206418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x206418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20641c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20641cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206420: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206424: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x206424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x206428: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x206428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20642c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x20642Cu;
    {
        const bool branch_taken_0x20642c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x206430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20642Cu;
        // 0x206430: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20642c) {
            ctx->pc = 0x206490u;
            goto label_206490;
        }
    }
    ctx->pc = 0x206434u;
    // 0x206434: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x206434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_206438:
    // 0x206438: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x206438u;
    {
        const bool branch_taken_0x206438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x206438) {
            ctx->pc = 0x20643Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206438u;
            // 0x20643c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206488u;
            goto label_206488;
        }
    }
    ctx->pc = 0x206440u;
    // 0x206440: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x206440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x206444: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x206444u;
    {
        const bool branch_taken_0x206444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x206448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206444u;
        // 0x206448: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206444) {
            ctx->pc = 0x206454u;
            goto label_206454;
        }
    }
    ctx->pc = 0x20644Cu;
    // 0x20644c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20644Cu;
    {
        const bool branch_taken_0x20644c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20644Cu;
        // 0x206450: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20644c) {
            ctx->pc = 0x206458u;
            goto label_206458;
        }
    }
    ctx->pc = 0x206454u;
label_206454:
    // 0x206454: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x206454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_206458:
    // 0x206458: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x206458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20645c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20645Cu;
    {
        const bool branch_taken_0x20645c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x206460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20645Cu;
        // 0x206460: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20645c) {
            ctx->pc = 0x20646Cu;
            goto label_20646c;
        }
    }
    ctx->pc = 0x206464u;
    // 0x206464: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x206464u;
    {
        const bool branch_taken_0x206464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206464u;
        // 0x206468: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206464) {
            ctx->pc = 0x206470u;
            goto label_206470;
        }
    }
    ctx->pc = 0x20646Cu;
label_20646c:
    // 0x20646c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x20646cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_206470:
    // 0x206470: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x206470u;
    SET_GPR_U32(ctx, 31, 0x206478u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x206470u, 0x206478u)) {
        return;
    }
    ctx->pc = 0x206478u;
label_206478:
    // 0x206478: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x206478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20647c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20647cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x206480: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x206480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x206484: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x206484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_206488:
    // 0x206488: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x206488u;
    {
        const bool branch_taken_0x206488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206488) {
            ctx->pc = 0x20648Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206488u;
            // 0x20648c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206438;
        }
    }
    ctx->pc = 0x206490u;
label_206490:
    // 0x206490: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x206490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x206494: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x206494u;
    {
        const bool branch_taken_0x206494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206494) {
            ctx->pc = 0x206498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206494u;
            // 0x206498: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2064A8u;
            goto label_2064a8;
        }
    }
    ctx->pc = 0x20649Cu;
    // 0x20649c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x20649Cu;
    SET_GPR_U32(ctx, 31, 0x2064A4u);
    ctx->pc = 0x2064A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20649Cu;
    // 0x2064a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x20649Cu, 0x2064A4u)) {
        return;
    }
    ctx->pc = 0x2064A4u;
label_2064a4:
    // 0x2064a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2064a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2064a8:
    // 0x2064a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2064a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2064ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2064acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2064b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2064B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2064B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064B0u;
        // 0x2064b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2064B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2064B8u;
}
