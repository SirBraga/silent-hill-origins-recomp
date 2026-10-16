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

// Function: sub_003291D0
// Address: 0x3291d0 - 0x329230
void sub_003291D0_0x3291d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003291D0_0x3291d0");
#endif

    switch (ctx->pc) {
        case 0x3291f0u: goto label_3291f0;
        case 0x329200u: goto label_329200;
        case 0x329208u: goto label_329208;
        case 0x329218u: goto label_329218;
        default: break;
    }

    ctx->pc = 0x3291d0u;

    // 0x3291d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3291d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3291d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3291d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3291d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3291d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3291dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3291dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3291e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3291e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3291e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3291e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3291e8: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x3291E8u;
    SET_GPR_U32(ctx, 31, 0x3291F0u);
    ctx->pc = 0x3291ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3291E8u;
    // 0x3291ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x3291E8u, 0x3291F0u)) {
        return;
    }
    ctx->pc = 0x3291F0u;
label_3291f0:
    // 0x3291f0: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3291F0u;
    {
        const bool branch_taken_0x3291f0 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3291F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291F0u;
        // 0x3291f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3291f0) {
            ctx->pc = 0x329210u;
            goto label_329210;
        }
    }
    ctx->pc = 0x3291F8u;
    // 0x3291f8: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x3291F8u;
    SET_GPR_U32(ctx, 31, 0x329200u);
    ctx->pc = 0x3291FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3291F8u;
    // 0x3291fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x3291F8u, 0x329200u)) {
        return;
    }
    ctx->pc = 0x329200u;
label_329200:
    // 0x329200: 0xc0ca49c  jal         func_329270
    ctx->pc = 0x329200u;
    SET_GPR_U32(ctx, 31, 0x329208u);
    ctx->pc = 0x329204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329200u;
    // 0x329204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x329270u, 0x329200u, 0x329208u)) {
        return;
    }
    ctx->pc = 0x329208u;
label_329208:
    // 0x329208: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x329208u;
    {
        const bool branch_taken_0x329208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329208u;
        // 0x32920c: 0x2102f  dsubu       $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329208) {
            ctx->pc = 0x329218u;
            goto label_329218;
        }
    }
    ctx->pc = 0x329210u;
label_329210:
    // 0x329210: 0xc0ca49c  jal         func_329270
    ctx->pc = 0x329210u;
    SET_GPR_U32(ctx, 31, 0x329218u);
    ctx->pc = 0x329214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329210u;
    // 0x329214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x329270u, 0x329210u, 0x329218u)) {
        return;
    }
    ctx->pc = 0x329218u;
label_329218:
    // 0x329218: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x329218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32921c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x32921cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329220: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329224: 0x3e00008  jr          $ra
    ctx->pc = 0x329224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329224u;
        // 0x329228: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32922Cu;
    // 0x32922c: 0x0  nop
    ctx->pc = 0x32922cu;
    // NOP
    ctx->pc = 0x329230u;
}
