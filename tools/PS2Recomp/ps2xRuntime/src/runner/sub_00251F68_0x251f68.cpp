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

// Function: sub_00251F68
// Address: 0x251f68 - 0x252028
void sub_00251F68_0x251f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251F68_0x251f68");
#endif

    switch (ctx->pc) {
        case 0x251fa8u: goto label_251fa8;
        case 0x251fb8u: goto label_251fb8;
        case 0x251fd8u: goto label_251fd8;
        default: break;
    }

    ctx->pc = 0x251f68u;

    // 0x251f68: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x251f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x251f6c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x251f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x251f70: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x251f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x251f74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x251f74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251f78: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x251f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x251f7c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x251f7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251f80: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x251f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x251f84: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x251f84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251f88: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x251f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x251f8c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x251f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x251f90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x251f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x251f94: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x251f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x251f98: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x251F98u;
    {
        const bool branch_taken_0x251f98 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x251F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F98u;
        // 0x251f9c: 0x8eb30010  lw          $s3, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f98) {
            ctx->pc = 0x251FFCu;
            goto label_251ffc;
        }
    }
    ctx->pc = 0x251FA0u;
    // 0x251fa0: 0x26710004  addiu       $s1, $s3, 0x4
    ctx->pc = 0x251fa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x251fa4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x251fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_251fa8:
    // 0x251fa8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x251fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251fac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x251facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251fb0: 0xc09275c  jal         func_249D70
    ctx->pc = 0x251FB0u;
    SET_GPR_U32(ctx, 31, 0x251FB8u);
    ctx->pc = 0x251FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251FB0u;
    // 0x251fb4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x251FB0u, 0x251FB8u)) {
        return;
    }
    ctx->pc = 0x251FB8u;
label_251fb8:
    // 0x251fb8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x251FB8u;
    {
        const bool branch_taken_0x251fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FB8u;
        // 0x251fbc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251fb8) {
            ctx->pc = 0x251FE0u;
            goto label_251fe0;
        }
    }
    ctx->pc = 0x251FC0u;
    // 0x251fc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x251fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x251fc4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x251fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251fc8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x251fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x251fcc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x251fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x251fd0: 0xc092782  jal         func_249E08
    ctx->pc = 0x251FD0u;
    SET_GPR_U32(ctx, 31, 0x251FD8u);
    ctx->pc = 0x251FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251FD0u;
    // 0x251fd4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x251FD0u, 0x251FD8u)) {
        return;
    }
    ctx->pc = 0x251FD8u;
label_251fd8:
    // 0x251fd8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x251FD8u;
    {
        const bool branch_taken_0x251fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251fd8) {
            ctx->pc = 0x251FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251FD8u;
            // 0x251fdc: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251FE8u;
            goto label_251fe8;
        }
    }
    ctx->pc = 0x251FE0u;
label_251fe0:
    // 0x251fe0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x251FE0u;
    {
        const bool branch_taken_0x251fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FE0u;
        // 0x251fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251fe0) {
            ctx->pc = 0x252000u;
            goto label_252000;
        }
    }
    ctx->pc = 0x251FE8u;
label_251fe8:
    // 0x251fe8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x251fe8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x251fec: 0x26310024  addiu       $s1, $s1, 0x24
    ctx->pc = 0x251fecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x251ff0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x251ff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x251ff4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x251FF4u;
    {
        const bool branch_taken_0x251ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FF4u;
        // 0x251ff8: 0x26100024  addiu       $s0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ff4) {
            ctx->pc = 0x251FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251fa8;
        }
    }
    ctx->pc = 0x251FFCu;
label_251ffc:
    // 0x251ffc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_252000:
    // 0x252000: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x252000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x252004: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x252004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x252008: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x252008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25200c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x25200cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252010: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x252010u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252014: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x252014u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252018: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x252018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25201c: 0x3e00008  jr          $ra
    ctx->pc = 0x25201Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25201Cu;
        // 0x252020: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25201Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252024u;
    // 0x252024: 0x0  nop
    ctx->pc = 0x252024u;
    // NOP
    ctx->pc = 0x252028u;
}
