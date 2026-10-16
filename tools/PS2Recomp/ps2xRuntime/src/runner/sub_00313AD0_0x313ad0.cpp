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

// Function: sub_00313AD0
// Address: 0x313ad0 - 0x313b58
void sub_00313AD0_0x313ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313AD0_0x313ad0");
#endif

    switch (ctx->pc) {
        case 0x313b18u: goto label_313b18;
        default: break;
    }

    ctx->pc = 0x313ad0u;

    // 0x313ad0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x313ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x313ad4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x313ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313ad8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x313ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x313adc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x313adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x313ae0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x313ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x313ae4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x313ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313ae8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x313ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x313aec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x313aecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313af0: 0x2508818  mult        $s1, $s2, $s0
    ctx->pc = 0x313af0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x313af4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x313af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x313af8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x313af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x313afc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x313afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313b00: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x313b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x313b04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x313b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313b08: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x313b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x313b0c: 0xafb10014  sw          $s1, 0x14($sp)
    ctx->pc = 0x313b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
    // 0x313b10: 0xc0c7de6  jal         func_31F798
    ctx->pc = 0x313B10u;
    SET_GPR_U32(ctx, 31, 0x313B18u);
    ctx->pc = 0x313B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313B10u;
    // 0x313b14: 0xafb10008  sw          $s1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31F798u, 0x313B10u, 0x313B18u)) {
        return;
    }
    ctx->pc = 0x313B18u;
label_313b18:
    // 0x313b18: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313B18u;
    {
        const bool branch_taken_0x313b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B18u;
        // 0x313b1c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b18) {
            ctx->pc = 0x313B3Cu;
            goto label_313b3c;
        }
    }
    ctx->pc = 0x313B20u;
    // 0x313b20: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x313B20u;
    {
        const bool branch_taken_0x313b20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x313b20) {
            ctx->pc = 0x313B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313B20u;
            // 0x313b24: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x313B28u;
            goto label_313b28;
        }
    }
    ctx->pc = 0x313B28u;
label_313b28:
    // 0x313b28: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x313b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x313b2c: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x313b2cu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x313b30: 0x1012  mflo        $v0
    ctx->pc = 0x313b30u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x313b34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313B34u;
    {
        const bool branch_taken_0x313b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B34u;
        // 0x313b38: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b34) {
            ctx->pc = 0x313B44u;
            goto label_313b44;
        }
    }
    ctx->pc = 0x313B3Cu;
label_313b3c:
    // 0x313b3c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x313b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313b40: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x313b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_313b44:
    // 0x313b44: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x313b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x313b48: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x313b48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x313b4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x313b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313b50: 0x3e00008  jr          $ra
    ctx->pc = 0x313B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B50u;
        // 0x313b54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313B58u;
}
