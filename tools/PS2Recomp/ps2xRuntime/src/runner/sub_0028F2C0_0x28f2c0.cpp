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

// Function: sub_0028F2C0
// Address: 0x28f2c0 - 0x28f338
void sub_0028F2C0_0x28f2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F2C0_0x28f2c0");
#endif

    switch (ctx->pc) {
        case 0x28f31cu: goto label_28f31c;
        default: break;
    }

    ctx->pc = 0x28f2c0u;

    // 0x28f2c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28f2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28f2c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28f2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28f2c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28f2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28f2cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28f2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f2d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28f2d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f2d4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F2D4u;
    {
        const bool branch_taken_0x28f2d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F2D4u;
        // 0x28f2d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f2d4) {
            ctx->pc = 0x28F2F8u;
            goto label_28f2f8;
        }
    }
    ctx->pc = 0x28F2DCu;
    // 0x28f2dc: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x28f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x28f2e0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x28f2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x28f2e4: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x28f2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x28f2e8: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x28f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x28f2ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28f2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28f2f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28F2F0u;
    {
        const bool branch_taken_0x28f2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F2F0u;
        // 0x28f2f4: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f2f0) {
            ctx->pc = 0x28F308u;
            goto label_28f308;
        }
    }
    ctx->pc = 0x28F2F8u;
label_28f2f8:
    // 0x28f2f8: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x28f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x28f2fc: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x28f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x28f300: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28f300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28f304: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x28f304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_28f308:
    // 0x28f308: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x28f308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x28f30c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F30Cu;
    {
        const bool branch_taken_0x28f30c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f30c) {
            ctx->pc = 0x28F310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F30Cu;
            // 0x28f310: 0xae110068  sw          $s1, 0x68($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F320u;
            goto label_28f320;
        }
    }
    ctx->pc = 0x28F314u;
    // 0x28f314: 0xc08ab74  jal         func_22ADD0
    ctx->pc = 0x28F314u;
    SET_GPR_U32(ctx, 31, 0x28F31Cu);
    ctx->pc = 0x22ADD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ADD0u, 0x28F314u, 0x28F31Cu)) {
        return;
    }
    ctx->pc = 0x28F31Cu;
label_28f31c:
    // 0x28f31c: 0xae110068  sw          $s1, 0x68($s0)
    ctx->pc = 0x28f31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 17));
label_28f320:
    // 0x28f320: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28f320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f324: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28f324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f328: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28f328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f32c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f330: 0x3e00008  jr          $ra
    ctx->pc = 0x28F330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F330u;
        // 0x28f334: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F338u;
}
