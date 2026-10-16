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

// Function: sub_0030D3F8
// Address: 0x30d3f8 - 0x30d458
void sub_0030D3F8_0x30d3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D3F8_0x30d3f8");
#endif

    switch (ctx->pc) {
        case 0x30d424u: goto label_30d424;
        default: break;
    }

    ctx->pc = 0x30d3f8u;

    // 0x30d3f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30d3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30d3fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30d3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30d400: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30d400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d404: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30d404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30d408: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x30d408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30d40c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30d40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d410: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D410u;
    {
        const bool branch_taken_0x30d410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D410u;
        // 0x30d414: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d410) {
            ctx->pc = 0x30D430u;
            goto label_30d430;
        }
    }
    ctx->pc = 0x30D418u;
    // 0x30d418: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30d418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d41c: 0xc092782  jal         func_249E08
    ctx->pc = 0x30D41Cu;
    SET_GPR_U32(ctx, 31, 0x30D424u);
    ctx->pc = 0x30D420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D41Cu;
    // 0x30d420: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30D41Cu, 0x30D424u)) {
        return;
    }
    ctx->pc = 0x30D424u;
label_30d424:
    // 0x30d424: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30D424u;
    {
        const bool branch_taken_0x30d424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D424u;
        // 0x30d428: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d424) {
            ctx->pc = 0x30D448u;
            goto label_30d448;
        }
    }
    ctx->pc = 0x30D42Cu;
    // 0x30d42c: 0x0  nop
    ctx->pc = 0x30d42cu;
    // NOP
label_30d430:
    // 0x30d430: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D430u;
    {
        const bool branch_taken_0x30d430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D430u;
        // 0x30d434: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d430) {
            ctx->pc = 0x30D448u;
            goto label_30d448;
        }
    }
    ctx->pc = 0x30D438u;
    // 0x30d438: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30d438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30d43c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30d440: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30d440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30d444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d448:
    // 0x30d448: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30d448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d44c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30d44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d450: 0x3e00008  jr          $ra
    ctx->pc = 0x30D450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D450u;
        // 0x30d454: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D458u;
}
