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

// Function: sub_002D8D40
// Address: 0x2d8d40 - 0x2d8e20
void sub_002D8D40_0x2d8d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8D40_0x2d8d40");
#endif

    switch (ctx->pc) {
        case 0x2d8d88u: goto label_2d8d88;
        case 0x2d8da4u: goto label_2d8da4;
        case 0x2d8dd8u: goto label_2d8dd8;
        default: break;
    }

    ctx->pc = 0x2d8d40u;

    // 0x2d8d40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d8d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d8d44: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2d8d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2d8d48: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2d8d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2d8d4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d8d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8d50: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2d8d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2d8d54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d8d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8d58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d8d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d8d5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d8d5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8d60: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2d8d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2d8d64: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2d8d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2d8d68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d8d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d8d6c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2d8d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2d8d70: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x2d8d70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d8d74: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D8D74u;
    {
        const bool branch_taken_0x2d8d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8D74u;
        // 0x2d8d78: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8d74) {
            ctx->pc = 0x2D8DF0u;
            goto label_2d8df0;
        }
    }
    ctx->pc = 0x2D8D7Cu;
    // 0x2d8d7c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2d8d7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8d80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d8d80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8d84: 0x0  nop
    ctx->pc = 0x2d8d84u;
    // NOP
label_2d8d88:
    // 0x2d8d88: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2d8d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2d8d8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d8d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8d90: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2d8d90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8d94: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2d8d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2d8d98: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2d8d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d8d9c: 0xc0aa730  jal         func_2A9CC0
    ctx->pc = 0x2D8D9Cu;
    SET_GPR_U32(ctx, 31, 0x2D8DA4u);
    ctx->pc = 0x2D8DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8D9Cu;
    // 0x2d8da0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9CC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9CC0u, 0x2D8D9Cu, 0x2D8DA4u)) {
        return;
    }
    ctx->pc = 0x2D8DA4u;
label_2d8da4:
    // 0x2d8da4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2D8DA4u;
    {
        const bool branch_taken_0x2d8da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8da4) {
            ctx->pc = 0x2D8DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8DA4u;
            // 0x2d8da8: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8DDCu;
            goto label_2d8ddc;
        }
    }
    ctx->pc = 0x2D8DACu;
    // 0x2d8dac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d8dacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d8db0: 0x16350006  bne         $s1, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8DB0u;
    {
        const bool branch_taken_0x2d8db0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x2D8DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8DB0u;
        // 0x2d8db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8db0) {
            ctx->pc = 0x2D8DCCu;
            goto label_2d8dcc;
        }
    }
    ctx->pc = 0x2D8DB8u;
    // 0x2d8db8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2d8db8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8dbc: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2d8dbcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8dc0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2d8dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2d8dc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8DC4u;
    {
        const bool branch_taken_0x2d8dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8DC4u;
        // 0x2d8dc8: 0x7e030010  sq          $v1, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8dc4) {
            ctx->pc = 0x2D8DD8u;
            goto label_2d8dd8;
        }
    }
    ctx->pc = 0x2D8DCCu;
label_2d8dcc:
    // 0x2d8dcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d8dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8dd0: 0xc0ad05a  jal         func_2B4168
    ctx->pc = 0x2D8DD0u;
    SET_GPR_U32(ctx, 31, 0x2D8DD8u);
    ctx->pc = 0x2D8DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8DD0u;
    // 0x2d8dd4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4168u, 0x2D8DD0u, 0x2D8DD8u)) {
        return;
    }
    ctx->pc = 0x2D8DD8u;
label_2d8dd8:
    // 0x2d8dd8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2d8dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2d8ddc:
    // 0x2d8ddc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d8ddcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2d8de0: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x2d8de0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d8de4: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2d8de4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d8de8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2D8DE8u;
    {
        const bool branch_taken_0x2d8de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8DE8u;
        // 0x2d8dec: 0x2673000c  addiu       $s3, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8de8) {
            ctx->pc = 0x2D8D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8d88;
        }
    }
    ctx->pc = 0x2D8DF0u;
label_2d8df0:
    // 0x2d8df0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d8df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8df4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2d8df4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d8df8: 0x211100b  movn        $v0, $s0, $s1
    ctx->pc = 0x2d8df8u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16));
    // 0x2d8dfc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2d8dfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d8e00: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2d8e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d8e04: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2d8e04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d8e08: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d8e08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d8e0c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2d8e0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8e10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d8e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8e14: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E14u;
        // 0x2d8e18: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8E1Cu;
    // 0x2d8e1c: 0x0  nop
    ctx->pc = 0x2d8e1cu;
    // NOP
    ctx->pc = 0x2d8e20u;
}
