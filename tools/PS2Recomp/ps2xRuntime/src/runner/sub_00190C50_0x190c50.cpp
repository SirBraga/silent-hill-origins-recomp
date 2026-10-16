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

// Function: sub_00190C50
// Address: 0x190c50 - 0x190d20
void sub_00190C50_0x190c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190C50_0x190c50");
#endif

    switch (ctx->pc) {
        case 0x190c80u: goto label_190c80;
        case 0x190cdcu: goto label_190cdc;
        case 0x190cfcu: goto label_190cfc;
        case 0x190d08u: goto label_190d08;
        default: break;
    }

    ctx->pc = 0x190c50u;

    // 0x190c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x190c54: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x190c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x190c58: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x190c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x190c5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x190c5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x190c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x190c64: 0x2650004c  addiu       $s0, $s2, 0x4C
    ctx->pc = 0x190c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x190c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190c6c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x190c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x190c70: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x190C70u;
    {
        const bool branch_taken_0x190c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x190C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C70u;
        // 0x190c74: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190c70) {
            ctx->pc = 0x190C98u;
            goto label_190c98;
        }
    }
    ctx->pc = 0x190C78u;
    // 0x190c78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x190c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x190c7c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x190c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_190c80:
    // 0x190c80: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x190C80u;
    {
        const bool branch_taken_0x190c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x190c80) {
            ctx->pc = 0x190C9Cu;
            goto label_190c9c;
        }
    }
    ctx->pc = 0x190C88u;
    // 0x190c88: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x190c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x190c8c: 0x0  nop
    ctx->pc = 0x190c8cu;
    // NOP
    // 0x190c90: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x190C90u;
    {
        const bool branch_taken_0x190c90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x190c90) {
            ctx->pc = 0x190C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190C90u;
            // 0x190c94: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190c80;
        }
    }
    ctx->pc = 0x190C98u;
label_190c98:
    // 0x190c98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x190c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190c9c:
    // 0x190c9c: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x190C9Cu;
    {
        const bool branch_taken_0x190c9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190c9c) {
            ctx->pc = 0x190CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190C9Cu;
            // 0x190ca0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190CECu;
            goto label_190cec;
        }
    }
    ctx->pc = 0x190CA4u;
    // 0x190ca4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x190ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x190ca8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190CA8u;
    {
        const bool branch_taken_0x190ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CA8u;
        // 0x190cac: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ca8) {
            ctx->pc = 0x190CB8u;
            goto label_190cb8;
        }
    }
    ctx->pc = 0x190CB0u;
    // 0x190cb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190CB0u;
    {
        const bool branch_taken_0x190cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CB0u;
        // 0x190cb4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190cb0) {
            ctx->pc = 0x190CBCu;
            goto label_190cbc;
        }
    }
    ctx->pc = 0x190CB8u;
label_190cb8:
    // 0x190cb8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x190cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_190cbc:
    // 0x190cbc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x190cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x190cc0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190CC0u;
    {
        const bool branch_taken_0x190cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CC0u;
        // 0x190cc4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190cc0) {
            ctx->pc = 0x190CD0u;
            goto label_190cd0;
        }
    }
    ctx->pc = 0x190CC8u;
    // 0x190cc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190CC8u;
    {
        const bool branch_taken_0x190cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CC8u;
        // 0x190ccc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190cc8) {
            ctx->pc = 0x190CD4u;
            goto label_190cd4;
        }
    }
    ctx->pc = 0x190CD0u;
label_190cd0:
    // 0x190cd0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x190cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_190cd4:
    // 0x190cd4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x190CD4u;
    SET_GPR_U32(ctx, 31, 0x190CDCu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x190CD4u, 0x190CDCu)) {
        return;
    }
    ctx->pc = 0x190CDCu;
label_190cdc:
    // 0x190cdc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x190cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x190ce0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x190ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x190ce4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x190ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x190ce8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x190ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_190cec:
    // 0x190cec: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x190CECu;
    {
        const bool branch_taken_0x190cec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190cec) {
            ctx->pc = 0x190CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190CECu;
            // 0x190cf0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190D00u;
            goto label_190d00;
        }
    }
    ctx->pc = 0x190CF4u;
    // 0x190cf4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x190CF4u;
    SET_GPR_U32(ctx, 31, 0x190CFCu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x190CF4u, 0x190CFCu)) {
        return;
    }
    ctx->pc = 0x190CFCu;
label_190cfc:
    // 0x190cfc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x190cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_190d00:
    // 0x190d00: 0xc0644f4  jal         func_1913D0
    ctx->pc = 0x190D00u;
    SET_GPR_U32(ctx, 31, 0x190D08u);
    ctx->pc = 0x190D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190D00u;
    // 0x190d04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1913D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1913D0u, 0x190D00u, 0x190D08u)) {
        return;
    }
    ctx->pc = 0x190D08u;
label_190d08:
    // 0x190d08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x190d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190d0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x190d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190d10: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x190d10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190d18: 0x3e00008  jr          $ra
    ctx->pc = 0x190D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D18u;
        // 0x190d1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190D20u;
}
