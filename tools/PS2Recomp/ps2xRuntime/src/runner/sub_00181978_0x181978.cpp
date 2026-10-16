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

// Function: sub_00181978
// Address: 0x181978 - 0x1819f8
void sub_00181978_0x181978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181978_0x181978");
#endif

    switch (ctx->pc) {
        case 0x1819b4u: goto label_1819b4;
        case 0x1819c0u: goto label_1819c0;
        case 0x1819c8u: goto label_1819c8;
        case 0x1819d0u: goto label_1819d0;
        default: break;
    }

    ctx->pc = 0x181978u;

    // 0x181978: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x181978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18197c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x18197cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181980: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x181980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x181984: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x181984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x181988: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x181988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18198c: 0x1e200003  bgtz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18198Cu;
    {
        const bool branch_taken_0x18198c = (GPR_S64(ctx, 17) > 0);
        ctx->pc = 0x181990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18198Cu;
        // 0x181990: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18198c) {
            ctx->pc = 0x18199Cu;
            goto label_18199c;
        }
    }
    ctx->pc = 0x181994u;
    // 0x181994: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x181994u;
    {
        const bool branch_taken_0x181994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181994u;
        // 0x181998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181994) {
            ctx->pc = 0x1819E0u;
            goto label_1819e0;
        }
    }
    ctx->pc = 0x18199Cu;
label_18199c:
    // 0x18199c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x18199cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1819a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1819a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1819a4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1819a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1819a8: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x1819a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x1819ac: 0xc0c8568  jal         func_3215A0
    ctx->pc = 0x1819ACu;
    SET_GPR_U32(ctx, 31, 0x1819B4u);
    ctx->pc = 0x1819B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1819ACu;
    // 0x1819b0: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3215A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3215A0u, 0x1819ACu, 0x1819B4u)) {
        return;
    }
    ctx->pc = 0x1819B4u;
label_1819b4:
    // 0x1819b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1819b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1819b8: 0xc0c85b8  jal         func_3216E0
    ctx->pc = 0x1819B8u;
    SET_GPR_U32(ctx, 31, 0x1819C0u);
    ctx->pc = 0x1819BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1819B8u;
    // 0x1819bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3216E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3216E0u, 0x1819B8u, 0x1819C0u)) {
        return;
    }
    ctx->pc = 0x1819C0u;
label_1819c0:
    // 0x1819c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1819c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1819c4: 0x0  nop
    ctx->pc = 0x1819c4u;
    // NOP
label_1819c8:
    // 0x1819c8: 0xc0c85b0  jal         func_3216C0
    ctx->pc = 0x1819C8u;
    SET_GPR_U32(ctx, 31, 0x1819D0u);
    ctx->pc = 0x1819CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1819C8u;
    // 0x1819cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3216C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3216C0u, 0x1819C8u, 0x1819D0u)) {
        return;
    }
    ctx->pc = 0x1819D0u;
label_1819d0:
    // 0x1819d0: 0x0  nop
    ctx->pc = 0x1819d0u;
    // NOP
    // 0x1819d4: 0x0  nop
    ctx->pc = 0x1819d4u;
    // NOP
    // 0x1819d8: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1819D8u;
    {
        const bool branch_taken_0x1819d8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1819DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819D8u;
        // 0x1819dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1819d8) {
            ctx->pc = 0x1819C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1819c8;
        }
    }
    ctx->pc = 0x1819E0u;
label_1819e0:
    // 0x1819e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1819e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1819e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1819e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1819e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1819e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1819ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1819ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1819F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819ECu;
        // 0x1819f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1819ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1819F4u;
    // 0x1819f4: 0x0  nop
    ctx->pc = 0x1819f4u;
    // NOP
    ctx->pc = 0x1819f8u;
}
