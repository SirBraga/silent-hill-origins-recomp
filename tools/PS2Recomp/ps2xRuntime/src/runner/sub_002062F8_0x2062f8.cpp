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

// Function: sub_002062F8
// Address: 0x2062f8 - 0x206358
void sub_002062F8_0x2062f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002062F8_0x2062f8");
#endif

    switch (ctx->pc) {
        case 0x206338u: goto label_206338;
        case 0x206344u: goto label_206344;
        default: break;
    }

    ctx->pc = 0x2062f8u;

    // 0x2062f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2062f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2062fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2062fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x206300: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x206300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x206304: 0x24423f00  addiu       $v0, $v0, 0x3F00
    ctx->pc = 0x206304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16128));
    // 0x206308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x206308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20630c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20630cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206310: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206314: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x206314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x206318: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x206318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x20631c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20631Cu;
    {
        const bool branch_taken_0x20631c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x206320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20631Cu;
        // 0x206320: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20631c) {
            ctx->pc = 0x206338u;
            goto label_206338;
        }
    }
    ctx->pc = 0x206324u;
    // 0x206324: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x206324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x206328: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x206328u;
    {
        const bool branch_taken_0x206328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x206328) {
            ctx->pc = 0x20632Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206328u;
            // 0x20632c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20633Cu;
            goto label_20633c;
        }
    }
    ctx->pc = 0x206330u;
    // 0x206330: 0xc0808d4  jal         func_202350
    ctx->pc = 0x206330u;
    SET_GPR_U32(ctx, 31, 0x206338u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x206330u, 0x206338u)) {
        return;
    }
    ctx->pc = 0x206338u;
label_206338:
    // 0x206338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20633c:
    // 0x20633c: 0xc0815d0  jal         func_205740
    ctx->pc = 0x20633Cu;
    SET_GPR_U32(ctx, 31, 0x206344u);
    ctx->pc = 0x206340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20633Cu;
    // 0x206340: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205740u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205740u, 0x20633Cu, 0x206344u)) {
        return;
    }
    ctx->pc = 0x206344u;
label_206344:
    // 0x206344: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x206344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206348: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x206348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20634c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20634cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206350: 0x3e00008  jr          $ra
    ctx->pc = 0x206350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206350u;
        // 0x206354: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206358u;
}
