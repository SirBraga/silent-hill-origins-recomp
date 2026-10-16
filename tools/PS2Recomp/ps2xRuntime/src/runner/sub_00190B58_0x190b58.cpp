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

// Function: sub_00190B58
// Address: 0x190b58 - 0x190c50
void sub_00190B58_0x190b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190B58_0x190b58");
#endif

    switch (ctx->pc) {
        case 0x190bb0u: goto label_190bb0;
        case 0x190c0cu: goto label_190c0c;
        case 0x190c2cu: goto label_190c2c;
        case 0x190c38u: goto label_190c38;
        default: break;
    }

    ctx->pc = 0x190b58u;

    // 0x190b58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x190b5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x190b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x190b60: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x190b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x190b64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x190b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190b68: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x190b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x190b6c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x190b6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190b70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190b74: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x190b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x190b78: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x190b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x190b7c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x190B7Cu;
    {
        const bool branch_taken_0x190b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x190b7c) {
            ctx->pc = 0x190B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190B7Cu;
            // 0x190b80: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190B84u;
            goto label_190b84;
        }
    }
    ctx->pc = 0x190B84u;
label_190b84:
    // 0x190b84: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x190b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x190b88: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x190b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x190b8c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x190B8Cu;
    {
        const bool branch_taken_0x190b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x190b8c) {
            ctx->pc = 0x190B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190B8Cu;
            // 0x190b90: 0xae200070  sw          $zero, 0x70($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190B94u;
            goto label_190b94;
        }
    }
    ctx->pc = 0x190B94u;
label_190b94:
    // 0x190b94: 0x2630003c  addiu       $s0, $s1, 0x3C
    ctx->pc = 0x190b94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x190b98: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x190b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x190b9c: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x190B9Cu;
    {
        const bool branch_taken_0x190b9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190b9c) {
            ctx->pc = 0x190BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190B9Cu;
            // 0x190ba0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190BCCu;
            goto label_190bcc;
        }
    }
    ctx->pc = 0x190BA4u;
    // 0x190ba4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x190ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x190ba8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x190ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x190bac: 0x0  nop
    ctx->pc = 0x190bacu;
    // NOP
label_190bb0:
    // 0x190bb0: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x190BB0u;
    {
        const bool branch_taken_0x190bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x190bb0) {
            ctx->pc = 0x190BCCu;
            goto label_190bcc;
        }
    }
    ctx->pc = 0x190BB8u;
    // 0x190bb8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x190bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x190bbc: 0x0  nop
    ctx->pc = 0x190bbcu;
    // NOP
    // 0x190bc0: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x190BC0u;
    {
        const bool branch_taken_0x190bc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x190bc0) {
            ctx->pc = 0x190BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190BC0u;
            // 0x190bc4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190bb0;
        }
    }
    ctx->pc = 0x190BC8u;
    // 0x190bc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x190bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190bcc:
    // 0x190bcc: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x190BCCu;
    {
        const bool branch_taken_0x190bcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190bcc) {
            ctx->pc = 0x190BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190BCCu;
            // 0x190bd0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190C1Cu;
            goto label_190c1c;
        }
    }
    ctx->pc = 0x190BD4u;
    // 0x190bd4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x190bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x190bd8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190BD8u;
    {
        const bool branch_taken_0x190bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BD8u;
        // 0x190bdc: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190bd8) {
            ctx->pc = 0x190BE8u;
            goto label_190be8;
        }
    }
    ctx->pc = 0x190BE0u;
    // 0x190be0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190BE0u;
    {
        const bool branch_taken_0x190be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BE0u;
        // 0x190be4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190be0) {
            ctx->pc = 0x190BECu;
            goto label_190bec;
        }
    }
    ctx->pc = 0x190BE8u;
label_190be8:
    // 0x190be8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x190be8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_190bec:
    // 0x190bec: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x190becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x190bf0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190BF0u;
    {
        const bool branch_taken_0x190bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BF0u;
        // 0x190bf4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190bf0) {
            ctx->pc = 0x190C00u;
            goto label_190c00;
        }
    }
    ctx->pc = 0x190BF8u;
    // 0x190bf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190BF8u;
    {
        const bool branch_taken_0x190bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BF8u;
        // 0x190bfc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190bf8) {
            ctx->pc = 0x190C04u;
            goto label_190c04;
        }
    }
    ctx->pc = 0x190C00u;
label_190c00:
    // 0x190c00: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x190c00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_190c04:
    // 0x190c04: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x190C04u;
    SET_GPR_U32(ctx, 31, 0x190C0Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x190C04u, 0x190C0Cu)) {
        return;
    }
    ctx->pc = 0x190C0Cu;
label_190c0c:
    // 0x190c0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x190c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x190c10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x190c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x190c14: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x190c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x190c18: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x190c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_190c1c:
    // 0x190c1c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x190C1Cu;
    {
        const bool branch_taken_0x190c1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190c1c) {
            ctx->pc = 0x190C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190C1Cu;
            // 0x190c20: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190C30u;
            goto label_190c30;
        }
    }
    ctx->pc = 0x190C24u;
    // 0x190c24: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x190C24u;
    SET_GPR_U32(ctx, 31, 0x190C2Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x190C24u, 0x190C2Cu)) {
        return;
    }
    ctx->pc = 0x190C2Cu;
label_190c2c:
    // 0x190c2c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x190c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_190c30:
    // 0x190c30: 0xc0644f4  jal         func_1913D0
    ctx->pc = 0x190C30u;
    SET_GPR_U32(ctx, 31, 0x190C38u);
    ctx->pc = 0x190C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190C30u;
    // 0x190c34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1913D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1913D0u, 0x190C30u, 0x190C38u)) {
        return;
    }
    ctx->pc = 0x190C38u;
label_190c38:
    // 0x190c38: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x190c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190c3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x190c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190c40: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x190c40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190c44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190c48: 0x3e00008  jr          $ra
    ctx->pc = 0x190C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C48u;
        // 0x190c4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190C50u;
}
