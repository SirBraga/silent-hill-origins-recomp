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

// Function: sub_001DFBB8
// Address: 0x1dfbb8 - 0x1dfc80
void sub_001DFBB8_0x1dfbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFBB8_0x1dfbb8");
#endif

    switch (ctx->pc) {
        case 0x1dfc00u: goto label_1dfc00;
        case 0x1dfc1cu: goto label_1dfc1c;
        case 0x1dfc58u: goto label_1dfc58;
        default: break;
    }

    ctx->pc = 0x1dfbb8u;

    // 0x1dfbb8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1dfbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1dfbbc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1dfbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1dfbc0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1dfbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1dfbc4: 0x8c43e6d0  lw          $v1, -0x1930($v0)
    ctx->pc = 0x1dfbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E6D0u));
    // 0x1dfbc8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1dfbc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfbcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dfbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dfbd0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1dfbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1dfbd4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1dfbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1dfbd8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1dfbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1dfbdc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1dfbdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfbe0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1dfbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1dfbe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dfbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dfbe8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1dfbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1dfbec: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1dfbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1dfbf0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DFBF0u;
    {
        const bool branch_taken_0x1dfbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBF0u;
        // 0x1dfbf4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbf0) {
            ctx->pc = 0x1DFC38u;
            goto label_1dfc38;
        }
    }
    ctx->pc = 0x1DFBF8u;
    // 0x1dfbf8: 0x8e320024  lw          $s2, 0x24($s1)
    ctx->pc = 0x1dfbf8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1dfbfc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dfbfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfc00:
    // 0x1dfc00: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1dfc00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1dfc04: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DFC04u;
    {
        const bool branch_taken_0x1dfc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC04u;
        // 0x1dfc08: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc04) {
            ctx->pc = 0x1DFC24u;
            goto label_1dfc24;
        }
    }
    ctx->pc = 0x1DFC0Cu;
    // 0x1dfc0c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1dfc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1dfc10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dfc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dfc14: 0xc07811a  jal         func_1E0468
    ctx->pc = 0x1DFC14u;
    SET_GPR_U32(ctx, 31, 0x1DFC1Cu);
    ctx->pc = 0x1DFC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC14u;
    // 0x1dfc18: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E0468u, 0x1DFC14u, 0x1DFC1Cu)) {
        return;
    }
    ctx->pc = 0x1DFC1Cu;
label_1dfc1c:
    // 0x1dfc1c: 0x442fff8  bltzl       $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DFC1Cu;
    {
        const bool branch_taken_0x1dfc1c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1dfc1c) {
            ctx->pc = 0x1DFC20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFC1Cu;
            // 0x1dfc20: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfc00;
        }
    }
    ctx->pc = 0x1DFC24u;
label_1dfc24:
    // 0x1dfc24: 0x12120004  beq         $s0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DFC24u;
    {
        const bool branch_taken_0x1dfc24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x1DFC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC24u;
        // 0x1dfc28: 0x8e82e6d0  lw          $v0, -0x1930($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc24) {
            ctx->pc = 0x1DFC38u;
            goto label_1dfc38;
        }
    }
    ctx->pc = 0x1DFC2Cu;
    // 0x1dfc2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dfc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfc30: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1dfc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1dfc34: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dfc34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dfc38:
    // 0x1dfc38: 0x8e83e6d0  lw          $v1, -0x1930($s4)
    ctx->pc = 0x1dfc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960848)));
    // 0x1dfc3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dfc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dfc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc44: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1dfc44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dfc48: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1dfc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1dfc4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dfc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dfc50: 0xc092782  jal         func_249E08
    ctx->pc = 0x1DFC50u;
    SET_GPR_U32(ctx, 31, 0x1DFC58u);
    ctx->pc = 0x1DFC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC50u;
    // 0x1dfc54: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x1DFC50u, 0x1DFC58u)) {
        return;
    }
    ctx->pc = 0x1DFC58u;
label_1dfc58:
    // 0x1dfc58: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x1dfc58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0));
    // 0x1dfc5c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1dfc5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dfc60: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1dfc60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc64: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1dfc64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dfc68: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1dfc68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dfc6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dfc6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dfc70: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1dfc70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfc74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dfc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfc78: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC78u;
        // 0x1dfc7c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFC80u;
}
