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

// Function: sub_00190E98
// Address: 0x190e98 - 0x190f28
void sub_00190E98_0x190e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190E98_0x190e98");
#endif

    switch (ctx->pc) {
        case 0x190ec4u: goto label_190ec4;
        case 0x190ee0u: goto label_190ee0;
        case 0x190ef8u: goto label_190ef8;
        default: break;
    }

    ctx->pc = 0x190e98u;

    // 0x190e98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x190e9c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x190e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x190ea0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x190ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x190ea4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x190ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190ea8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x190ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x190eac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x190eacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190eb0: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x190EB0u;
    {
        const bool branch_taken_0x190eb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x190EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EB0u;
        // 0x190eb4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190eb0) {
            ctx->pc = 0x190ECCu;
            goto label_190ecc;
        }
    }
    ctx->pc = 0x190EB8u;
    // 0x190eb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x190eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190ebc: 0xc065c40  jal         func_197100
    ctx->pc = 0x190EBCu;
    SET_GPR_U32(ctx, 31, 0x190EC4u);
    ctx->pc = 0x190EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190EBCu;
    // 0x190ec0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x190EBCu, 0x190EC4u)) {
        return;
    }
    ctx->pc = 0x190EC4u;
label_190ec4:
    // 0x190ec4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190EC4u;
    {
        const bool branch_taken_0x190ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EC4u;
        // 0x190ec8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ec4) {
            ctx->pc = 0x190ED0u;
            goto label_190ed0;
        }
    }
    ctx->pc = 0x190ECCu;
label_190ecc:
    // 0x190ecc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x190eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190ed0:
    // 0x190ed0: 0x8e100020  lw          $s0, 0x20($s0)
    ctx->pc = 0x190ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x190ed4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x190ED4u;
    {
        const bool branch_taken_0x190ed4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x190ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190ED4u;
        // 0x190ed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ed4) {
            ctx->pc = 0x190F10u;
            goto label_190f10;
        }
    }
    ctx->pc = 0x190EDCu;
    // 0x190edc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x190edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_190ee0:
    // 0x190ee0: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x190ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x190ee4: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x190EE4u;
    {
        const bool branch_taken_0x190ee4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x190ee4) {
            ctx->pc = 0x190EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190EE4u;
            // 0x190ee8: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190F04u;
            goto label_190f04;
        }
    }
    ctx->pc = 0x190EECu;
    // 0x190eec: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x190eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x190ef0: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x190EF0u;
    SET_GPR_U32(ctx, 31, 0x190EF8u);
    ctx->pc = 0x190EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190EF0u;
    // 0x190ef4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x190EF0u, 0x190EF8u)) {
        return;
    }
    ctx->pc = 0x190EF8u;
label_190ef8:
    // 0x190ef8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x190EF8u;
    {
        const bool branch_taken_0x190ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EF8u;
        // 0x190efc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ef8) {
            ctx->pc = 0x190F10u;
            goto label_190f10;
        }
    }
    ctx->pc = 0x190F00u;
    // 0x190f00: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x190f00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_190f04:
    // 0x190f04: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x190F04u;
    {
        const bool branch_taken_0x190f04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x190f04) {
            ctx->pc = 0x190F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190F04u;
            // 0x190f08: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190ee0;
        }
    }
    ctx->pc = 0x190F0Cu;
    // 0x190f0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x190f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190f10:
    // 0x190f10: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x190f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190f14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x190f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190f18: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x190f18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190f1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190f20: 0x3e00008  jr          $ra
    ctx->pc = 0x190F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F20u;
        // 0x190f24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190F28u;
}
