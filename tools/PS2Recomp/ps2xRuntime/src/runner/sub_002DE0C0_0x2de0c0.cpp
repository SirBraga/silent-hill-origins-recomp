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

// Function: sub_002DE0C0
// Address: 0x2de0c0 - 0x2de140
void sub_002DE0C0_0x2de0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE0C0_0x2de0c0");
#endif

    switch (ctx->pc) {
        case 0x2de100u: goto label_2de100;
        default: break;
    }

    ctx->pc = 0x2de0c0u;

    // 0x2de0c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2de0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2de0c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2de0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2de0c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2de0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2de0cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2de0ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de0d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2de0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2de0d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2de0d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de0d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de0dc: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2de0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2de0e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2de0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2de0e4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DE0E4u;
    {
        const bool branch_taken_0x2de0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0E4u;
        // 0x2de0e8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de0e4) {
            ctx->pc = 0x2DE114u;
            goto label_2de114;
        }
    }
    ctx->pc = 0x2DE0ECu;
    // 0x2de0ec: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2de0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2de0f0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DE0F0u;
    {
        const bool branch_taken_0x2de0f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de0f0) {
            ctx->pc = 0x2DE0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE0F0u;
            // 0x2de0f4: 0x8e030048  lw          $v1, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE104u;
            goto label_2de104;
        }
    }
    ctx->pc = 0x2DE0F8u;
    // 0x2de0f8: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2DE0F8u;
    SET_GPR_U32(ctx, 31, 0x2DE100u);
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2DE0F8u, 0x2DE100u)) {
        return;
    }
    ctx->pc = 0x2DE100u;
label_2de100:
    // 0x2de100: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2de100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2de104:
    // 0x2de104: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2de104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2de108: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2de108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2de10c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2de10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2de110: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x2de110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_2de114:
    // 0x2de114: 0xae120028  sw          $s2, 0x28($s0)
    ctx->pc = 0x2de114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
    // 0x2de118: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x2de118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
    // 0x2de11c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2de11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2de120: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2de120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de124: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2de124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de128: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2de128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de12c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de130: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE130u;
        // 0x2de134: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE138u;
    // 0x2de138: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2de138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2de13c: 0x0  nop
    ctx->pc = 0x2de13cu;
    // NOP
    ctx->pc = 0x2de140u;
}
