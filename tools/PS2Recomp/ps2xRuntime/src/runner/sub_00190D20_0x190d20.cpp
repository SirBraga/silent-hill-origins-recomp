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

// Function: sub_00190D20
// Address: 0x190d20 - 0x190df0
void sub_00190D20_0x190d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190D20_0x190d20");
#endif

    switch (ctx->pc) {
        case 0x190d50u: goto label_190d50;
        case 0x190dacu: goto label_190dac;
        case 0x190dccu: goto label_190dcc;
        case 0x190dd8u: goto label_190dd8;
        default: break;
    }

    ctx->pc = 0x190d20u;

    // 0x190d20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x190d24: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x190d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x190d28: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x190d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x190d2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x190d2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190d30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x190d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x190d34: 0x2650005c  addiu       $s0, $s2, 0x5C
    ctx->pc = 0x190d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
    // 0x190d38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190d3c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x190d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x190d40: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x190D40u;
    {
        const bool branch_taken_0x190d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x190D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D40u;
        // 0x190d44: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d40) {
            ctx->pc = 0x190D68u;
            goto label_190d68;
        }
    }
    ctx->pc = 0x190D48u;
    // 0x190d48: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x190d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x190d4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x190d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_190d50:
    // 0x190d50: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x190D50u;
    {
        const bool branch_taken_0x190d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x190d50) {
            ctx->pc = 0x190D6Cu;
            goto label_190d6c;
        }
    }
    ctx->pc = 0x190D58u;
    // 0x190d58: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x190d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x190d5c: 0x0  nop
    ctx->pc = 0x190d5cu;
    // NOP
    // 0x190d60: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x190D60u;
    {
        const bool branch_taken_0x190d60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x190d60) {
            ctx->pc = 0x190D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190D60u;
            // 0x190d64: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190d50;
        }
    }
    ctx->pc = 0x190D68u;
label_190d68:
    // 0x190d68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x190d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190d6c:
    // 0x190d6c: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x190D6Cu;
    {
        const bool branch_taken_0x190d6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190d6c) {
            ctx->pc = 0x190D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190D6Cu;
            // 0x190d70: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190DBCu;
            goto label_190dbc;
        }
    }
    ctx->pc = 0x190D74u;
    // 0x190d74: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x190d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x190d78: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190D78u;
    {
        const bool branch_taken_0x190d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D78u;
        // 0x190d7c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d78) {
            ctx->pc = 0x190D88u;
            goto label_190d88;
        }
    }
    ctx->pc = 0x190D80u;
    // 0x190d80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190D80u;
    {
        const bool branch_taken_0x190d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D80u;
        // 0x190d84: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d80) {
            ctx->pc = 0x190D8Cu;
            goto label_190d8c;
        }
    }
    ctx->pc = 0x190D88u;
label_190d88:
    // 0x190d88: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x190d88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_190d8c:
    // 0x190d8c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x190d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x190d90: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190D90u;
    {
        const bool branch_taken_0x190d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D90u;
        // 0x190d94: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d90) {
            ctx->pc = 0x190DA0u;
            goto label_190da0;
        }
    }
    ctx->pc = 0x190D98u;
    // 0x190d98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190D98u;
    {
        const bool branch_taken_0x190d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D98u;
        // 0x190d9c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d98) {
            ctx->pc = 0x190DA4u;
            goto label_190da4;
        }
    }
    ctx->pc = 0x190DA0u;
label_190da0:
    // 0x190da0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x190da0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_190da4:
    // 0x190da4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x190DA4u;
    SET_GPR_U32(ctx, 31, 0x190DACu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x190DA4u, 0x190DACu)) {
        return;
    }
    ctx->pc = 0x190DACu;
label_190dac:
    // 0x190dac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x190dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x190db0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x190db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x190db4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x190db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x190db8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x190db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_190dbc:
    // 0x190dbc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x190DBCu;
    {
        const bool branch_taken_0x190dbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190dbc) {
            ctx->pc = 0x190DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190DBCu;
            // 0x190dc0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190DD0u;
            goto label_190dd0;
        }
    }
    ctx->pc = 0x190DC4u;
    // 0x190dc4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x190DC4u;
    SET_GPR_U32(ctx, 31, 0x190DCCu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x190DC4u, 0x190DCCu)) {
        return;
    }
    ctx->pc = 0x190DCCu;
label_190dcc:
    // 0x190dcc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x190dccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_190dd0:
    // 0x190dd0: 0xc0644f4  jal         func_1913D0
    ctx->pc = 0x190DD0u;
    SET_GPR_U32(ctx, 31, 0x190DD8u);
    ctx->pc = 0x190DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190DD0u;
    // 0x190dd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1913D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1913D0u, 0x190DD0u, 0x190DD8u)) {
        return;
    }
    ctx->pc = 0x190DD8u;
label_190dd8:
    // 0x190dd8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x190dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190ddc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x190ddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190de0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x190de0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190de8: 0x3e00008  jr          $ra
    ctx->pc = 0x190DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DE8u;
        // 0x190dec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190DF0u;
}
