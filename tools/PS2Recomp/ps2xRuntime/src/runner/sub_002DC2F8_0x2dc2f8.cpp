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

// Function: sub_002DC2F8
// Address: 0x2dc2f8 - 0x2dc348
void sub_002DC2F8_0x2dc2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC2F8_0x2dc2f8");
#endif

    switch (ctx->pc) {
        case 0x2dc314u: goto label_2dc314;
        case 0x2dc32cu: goto label_2dc32c;
        default: break;
    }

    ctx->pc = 0x2dc2f8u;

    // 0x2dc2f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dc2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dc2fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dc2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dc300: 0x858818  mult        $s1, $a0, $a1
    ctx->pc = 0x2dc300u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x2dc304: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dc304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2dc308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc30c: 0xc0c5472  jal         func_3151C8
    ctx->pc = 0x2DC30Cu;
    SET_GPR_U32(ctx, 31, 0x2DC314u);
    ctx->pc = 0x2DC310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC30Cu;
    // 0x2dc310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x2DC30Cu, 0x2DC314u)) {
        return;
    }
    ctx->pc = 0x2DC314u;
label_2dc314:
    // 0x2dc314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dc314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc318: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC318u;
    {
        const bool branch_taken_0x2dc318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC318u;
        // 0x2dc31c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc318) {
            ctx->pc = 0x2DC32Cu;
            goto label_2dc32c;
        }
    }
    ctx->pc = 0x2DC320u;
    // 0x2dc320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc324: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2DC324u;
    SET_GPR_U32(ctx, 31, 0x2DC32Cu);
    ctx->pc = 0x2DC328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC324u;
    // 0x2dc328: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2DC324u, 0x2DC32Cu)) {
        return;
    }
    ctx->pc = 0x2DC32Cu;
label_2dc32c:
    // 0x2dc32c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dc32cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc330: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dc330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc334: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dc334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc33c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC33Cu;
        // 0x2dc340: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC344u;
    // 0x2dc344: 0x0  nop
    ctx->pc = 0x2dc344u;
    // NOP
    ctx->pc = 0x2dc348u;
}
