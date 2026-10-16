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

// Function: sub_00313A38
// Address: 0x313a38 - 0x313ad0
void sub_00313A38_0x313a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313A38_0x313a38");
#endif

    switch (ctx->pc) {
        case 0x313a38u: goto label_313a38;
        case 0x313a3cu: goto label_313a3c;
        case 0x313a40u: goto label_313a40;
        case 0x313a44u: goto label_313a44;
        case 0x313a48u: goto label_313a48;
        case 0x313a4cu: goto label_313a4c;
        case 0x313a50u: goto label_313a50;
        case 0x313a54u: goto label_313a54;
        case 0x313a58u: goto label_313a58;
        case 0x313a5cu: goto label_313a5c;
        case 0x313a60u: goto label_313a60;
        case 0x313a64u: goto label_313a64;
        case 0x313a68u: goto label_313a68;
        case 0x313a6cu: goto label_313a6c;
        case 0x313a70u: goto label_313a70;
        case 0x313a74u: goto label_313a74;
        case 0x313a78u: goto label_313a78;
        case 0x313a7cu: goto label_313a7c;
        case 0x313a80u: goto label_313a80;
        case 0x313a84u: goto label_313a84;
        case 0x313a88u: goto label_313a88;
        case 0x313a8cu: goto label_313a8c;
        case 0x313a90u: goto label_313a90;
        case 0x313a94u: goto label_313a94;
        case 0x313a98u: goto label_313a98;
        case 0x313a9cu: goto label_313a9c;
        case 0x313aa0u: goto label_313aa0;
        case 0x313aa4u: goto label_313aa4;
        case 0x313aa8u: goto label_313aa8;
        case 0x313aacu: goto label_313aac;
        case 0x313ab0u: goto label_313ab0;
        case 0x313ab4u: goto label_313ab4;
        case 0x313ab8u: goto label_313ab8;
        case 0x313abcu: goto label_313abc;
        case 0x313ac0u: goto label_313ac0;
        case 0x313ac4u: goto label_313ac4;
        case 0x313ac8u: goto label_313ac8;
        case 0x313accu: goto label_313acc;
        default: break;
    }

    ctx->pc = 0x313a38u;

label_313a38:
    // 0x313a38: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x313a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_313a3c:
    // 0x313a3c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x313a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_313a40:
    // 0x313a40: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x313a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_313a44:
    // 0x313a44: 0x249201d8  addiu       $s2, $a0, 0x1D8
    ctx->pc = 0x313a44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
label_313a48:
    // 0x313a48: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x313a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_313a4c:
    // 0x313a4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x313a4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313a50:
    // 0x313a50: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x313a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_313a54:
    // 0x313a54: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x313a54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_313a58:
    // 0x313a58: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x313a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_313a5c:
    // 0x313a5c: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_313a60:
    if (ctx->pc == 0x313A60u) {
        ctx->pc = 0x313A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A5Cu;
        // 0x313a60: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313A64u;
        goto label_313a64;
    }
    ctx->pc = 0x313A5Cu;
    {
        const bool branch_taken_0x313a5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x313A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A5Cu;
        // 0x313a60: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313a5c) {
            ctx->pc = 0x313AA8u;
            goto label_313aa8;
        }
    }
    ctx->pc = 0x313A64u;
label_313a64:
    // 0x313a64: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x313a64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_313a68:
    // 0x313a68: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x313a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_313a6c:
    // 0x313a6c: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
label_313a70:
    if (ctx->pc == 0x313A70u) {
        ctx->pc = 0x313A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A6Cu;
        // 0x313a70: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313A74u;
        goto label_313a74;
    }
    ctx->pc = 0x313A6Cu;
    {
        const bool branch_taken_0x313a6c = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x313A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A6Cu;
        // 0x313a70: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313a6c) {
            ctx->pc = 0x313A9Cu;
            goto label_313a9c;
        }
    }
    ctx->pc = 0x313A74u;
label_313a74:
    // 0x313a74: 0x0  nop
    ctx->pc = 0x313a74u;
    // NOP
label_313a78:
    // 0x313a78: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x313a78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_313a7c:
    // 0x313a7c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_313a80:
    if (ctx->pc == 0x313A80u) {
        ctx->pc = 0x313A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A7Cu;
        // 0x313a80: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313A84u;
        goto label_313a84;
    }
    ctx->pc = 0x313A7Cu;
    {
        const bool branch_taken_0x313a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313a7c) {
            ctx->pc = 0x313A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313A7Cu;
            // 0x313a80: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313A94u;
            goto label_313a94;
        }
    }
    ctx->pc = 0x313A84u;
label_313a84:
    // 0x313a84: 0x280f809  jalr        $s4
label_313a88:
    if (ctx->pc == 0x313A88u) {
        ctx->pc = 0x313A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A84u;
        // 0x313a88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313A8Cu;
        goto label_313a8c;
    }
    ctx->pc = 0x313A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x313A8Cu);
        ctx->pc = 0x313A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A84u;
        // 0x313a88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313A84u, 0x313A8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x313A8Cu;
label_313a8c:
    // 0x313a8c: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x313a8cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_313a90:
    // 0x313a90: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x313a90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_313a94:
    // 0x313a94: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
label_313a98:
    if (ctx->pc == 0x313A98u) {
        ctx->pc = 0x313A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A94u;
        // 0x313a98: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313A9Cu;
        goto label_313a9c;
    }
    ctx->pc = 0x313A94u;
    {
        const bool branch_taken_0x313a94 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x313A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A94u;
        // 0x313a98: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313a94) {
            ctx->pc = 0x313A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313a78;
        }
    }
    ctx->pc = 0x313A9Cu;
label_313a9c:
    // 0x313a9c: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x313a9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_313aa0:
    // 0x313aa0: 0x5640fff1  bnel        $s2, $zero, . + 4 + (-0xF << 2)
label_313aa4:
    if (ctx->pc == 0x313AA4u) {
        ctx->pc = 0x313AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313AA0u;
        // 0x313aa4: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313AA8u;
        goto label_313aa8;
    }
    ctx->pc = 0x313AA0u;
    {
        const bool branch_taken_0x313aa0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x313aa0) {
            ctx->pc = 0x313AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313AA0u;
            // 0x313aa4: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313a68;
        }
    }
    ctx->pc = 0x313AA8u;
label_313aa8:
    // 0x313aa8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x313aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_313aac:
    // 0x313aac: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x313aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_313ab0:
    // 0x313ab0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x313ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_313ab4:
    // 0x313ab4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x313ab4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_313ab8:
    // 0x313ab8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x313ab8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_313abc:
    // 0x313abc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x313abcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313ac0:
    // 0x313ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_313ac4:
    // 0x313ac4: 0x3e00008  jr          $ra
label_313ac8:
    if (ctx->pc == 0x313AC8u) {
        ctx->pc = 0x313AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313AC4u;
        // 0x313ac8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313ACCu;
        goto label_313acc;
    }
    ctx->pc = 0x313AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313AC4u;
        // 0x313ac8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313ACCu;
label_313acc:
    // 0x313acc: 0x0  nop
    ctx->pc = 0x313accu;
    // NOP
    ctx->pc = 0x313ad0u;
}
