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

// Function: sub_001A9A18
// Address: 0x1a9a18 - 0x1a9ac8
void sub_001A9A18_0x1a9a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9A18_0x1a9a18");
#endif

    switch (ctx->pc) {
        case 0x1a9a58u: goto label_1a9a58;
        case 0x1a9a8cu: goto label_1a9a8c;
        default: break;
    }

    ctx->pc = 0x1a9a18u;

    // 0x1a9a18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a9a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a9a1c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1a9a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1a9a20: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1a9a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1a9a24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a9a24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9a28: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a9a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1a9a2c: 0x26670004  addiu       $a3, $s3, 0x4
    ctx->pc = 0x1a9a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1a9a30: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a9a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1a9a34: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a9a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a9a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9a3c: 0x8ce20200  lw          $v0, 0x200($a3)
    ctx->pc = 0x1a9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 512)));
    // 0x1a9a40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a9a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9a44: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1a9a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a9a48: 0x10e20016  beq         $a3, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A9A48u;
    {
        const bool branch_taken_0x1a9a48 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A48u;
        // 0x1a9a4c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a48) {
            ctx->pc = 0x1A9AA4u;
            goto label_1a9aa4;
        }
    }
    ctx->pc = 0x1A9A50u;
    // 0x1a9a50: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1a9a50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9a54: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1a9a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1a9a58:
    // 0x1a9a58: 0x26710004  addiu       $s1, $s3, 0x4
    ctx->pc = 0x1a9a58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1a9a5c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1a9a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a9a60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a9a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a9a64: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9A64u;
    {
        const bool branch_taken_0x1a9a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A9A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A64u;
        // 0x1a9a68: 0x24f00004  addiu       $s0, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a64) {
            ctx->pc = 0x1A9A8Cu;
            goto label_1a9a8c;
        }
    }
    ctx->pc = 0x1A9A6Cu;
    // 0x1a9a6c: 0x2122823  subu        $a1, $s0, $s2
    ctx->pc = 0x1a9a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1a9a70: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1a9a70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9a74: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x1a9a74u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x1a9a78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9a7c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1a9a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1a9a80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a9a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9a84: 0xc06a6e8  jal         func_1A9BA0
    ctx->pc = 0x1A9A84u;
    SET_GPR_U32(ctx, 31, 0x1A9A8Cu);
    ctx->pc = 0x1A9A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9A84u;
    // 0x1a9a88: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9BA0u, 0x1A9A84u, 0x1A9A8Cu)) {
        return;
    }
    ctx->pc = 0x1A9A8Cu;
label_1a9a8c:
    // 0x1a9a8c: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x1a9a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x1a9a90: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a9a90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9a94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a9a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9a98: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a9a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a9a9c: 0x54e2ffee  bnel        $a3, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1A9A9Cu;
    {
        const bool branch_taken_0x1a9a9c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9a9c) {
            ctx->pc = 0x1A9AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9A9Cu;
            // 0x1a9aa0: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9a58;
        }
    }
    ctx->pc = 0x1A9AA4u;
label_1a9aa4:
    // 0x1a9aa4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a9aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a9aa8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a9aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a9aac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a9aacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a9ab0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1a9ab0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9ab4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1a9ab4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9ab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9abc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9ABCu;
        // 0x1a9ac0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9AC4u;
    // 0x1a9ac4: 0x0  nop
    ctx->pc = 0x1a9ac4u;
    // NOP
    ctx->pc = 0x1a9ac8u;
}
