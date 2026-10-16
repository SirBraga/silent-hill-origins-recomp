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

// Function: sub_002533D8
// Address: 0x2533d8 - 0x253450
void sub_002533D8_0x2533d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002533D8_0x2533d8");
#endif

    switch (ctx->pc) {
        case 0x253400u: goto label_253400;
        case 0x25342cu: goto label_25342c;
        default: break;
    }

    ctx->pc = 0x2533d8u;

    // 0x2533d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2533d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2533dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2533dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2533e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2533e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2533e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2533e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2533e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2533e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2533ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2533ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2533f0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2533f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2533f4: 0x24a53fa0  addiu       $a1, $a1, 0x3FA0
    ctx->pc = 0x2533f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16288));
    // 0x2533f8: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x2533F8u;
    SET_GPR_U32(ctx, 31, 0x253400u);
    ctx->pc = 0x2533FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2533F8u;
    // 0x2533fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x2533F8u, 0x253400u)) {
        return;
    }
    ctx->pc = 0x253400u;
label_253400:
    // 0x253400: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x253400u;
    {
        const bool branch_taken_0x253400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253400u;
        // 0x253404: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253400) {
            ctx->pc = 0x253410u;
            goto label_253410;
        }
    }
    ctx->pc = 0x253408u;
    // 0x253408: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x253408u;
    {
        const bool branch_taken_0x253408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253408u;
        // 0x25340c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253408) {
            ctx->pc = 0x25343Cu;
            goto label_25343c;
        }
    }
    ctx->pc = 0x253410u;
label_253410:
    // 0x253410: 0x5622000a  bnel        $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x253410u;
    {
        const bool branch_taken_0x253410 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x253410) {
            ctx->pc = 0x253414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253410u;
            // 0x253414: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25343Cu;
            goto label_25343c;
        }
    }
    ctx->pc = 0x253418u;
    // 0x253418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25341c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x25341cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x253420: 0x24a53fa4  addiu       $a1, $a1, 0x3FA4
    ctx->pc = 0x253420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16292));
    // 0x253424: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x253424u;
    SET_GPR_U32(ctx, 31, 0x25342Cu);
    ctx->pc = 0x253428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253424u;
    // 0x253428: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x253424u, 0x25342Cu)) {
        return;
    }
    ctx->pc = 0x25342Cu;
label_25342c:
    // 0x25342c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x25342cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253430: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x253430u;
    {
        const bool branch_taken_0x253430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253430u;
        // 0x253434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253430) {
            ctx->pc = 0x25343Cu;
            goto label_25343c;
        }
    }
    ctx->pc = 0x253438u;
    // 0x253438: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x253438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25343c:
    // 0x25343c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25343cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253440: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x253440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253448: 0x3e00008  jr          $ra
    ctx->pc = 0x253448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253448u;
        // 0x25344c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253450u;
}
