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

// Function: sub_00151EC0
// Address: 0x151ec0 - 0x151f50
void sub_00151EC0_0x151ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151EC0_0x151ec0");
#endif

    switch (ctx->pc) {
        case 0x151f38u: goto label_151f38;
        default: break;
    }

    ctx->pc = 0x151ec0u;

    // 0x151ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x151ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x151ec4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x151ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x151ec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151ecc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x151eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151ed0: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x151ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x151ed4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151ED4u;
    {
        const bool branch_taken_0x151ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151ED4u;
        // 0x151ed8: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ed4) {
            ctx->pc = 0x151EE4u;
            goto label_151ee4;
        }
    }
    ctx->pc = 0x151EDCu;
    // 0x151edc: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x151edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x151ee0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x151ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_151ee4:
    // 0x151ee4: 0x32020008  andi        $v0, $s0, 0x8
    ctx->pc = 0x151ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
    // 0x151ee8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151EE8u;
    {
        const bool branch_taken_0x151ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151EE8u;
        // 0x151eec: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ee8) {
            ctx->pc = 0x151EFCu;
            goto label_151efc;
        }
    }
    ctx->pc = 0x151EF0u;
    // 0x151ef0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x151ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151ef4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x151ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x151ef8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x151ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_151efc:
    // 0x151efc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x151efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x151f00: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x151F00u;
    {
        const bool branch_taken_0x151f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151f00) {
            ctx->pc = 0x151F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151F00u;
            // 0x151f04: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x151F08u;
            goto label_151f08;
        }
    }
    ctx->pc = 0x151F08u;
label_151f08:
    // 0x151f08: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x151f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x151f0c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x151f0cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x151f10: 0x2810  mfhi        $a1
    ctx->pc = 0x151f10u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x151f14: 0x10c50008  beq         $a2, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x151F14u;
    {
        const bool branch_taken_0x151f14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x151F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F14u;
        // 0x151f18: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f14) {
            ctx->pc = 0x151F38u;
            goto label_151f38;
        }
    }
    ctx->pc = 0x151F1Cu;
    // 0x151f1c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x151f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x151f20: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x151f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x151f24: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x151f24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x151f28: 0x24428558  addiu       $v0, $v0, -0x7AA8
    ctx->pc = 0x151f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935896));
    // 0x151f2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x151f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151f30: 0xc07cd58  jal         func_1F3560
    ctx->pc = 0x151F30u;
    SET_GPR_U32(ctx, 31, 0x151F38u);
    ctx->pc = 0x151F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151F30u;
    // 0x151f34: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3560u, 0x151F30u, 0x151F38u)) {
        return;
    }
    ctx->pc = 0x151F38u;
label_151f38:
    // 0x151f38: 0x32020020  andi        $v0, $s0, 0x20
    ctx->pc = 0x151f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    // 0x151f3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151f40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x151f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151f44: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x151f44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x151f48: 0x3e00008  jr          $ra
    ctx->pc = 0x151F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F48u;
        // 0x151f4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151F50u;
}
