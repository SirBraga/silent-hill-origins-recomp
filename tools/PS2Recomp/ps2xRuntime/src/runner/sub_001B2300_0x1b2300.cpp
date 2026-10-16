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

// Function: sub_001B2300
// Address: 0x1b2300 - 0x1b2350
void sub_001B2300_0x1b2300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2300_0x1b2300");
#endif

    switch (ctx->pc) {
        case 0x1b2328u: goto label_1b2328;
        default: break;
    }

    ctx->pc = 0x1b2300u;

    // 0x1b2300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b2304: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b2304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b2308: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x1b2308u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x1b230c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b230cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b2310: 0x8e22916c  lw          $v0, -0x6E94($s1)
    ctx->pc = 0x1b2310u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33916Cu));
    // 0x1b2314: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2318: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2318u;
    {
        const bool branch_taken_0x1b2318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2318u;
        // 0x1b231c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2318) {
            ctx->pc = 0x1B2328u;
            goto label_1b2328;
        }
    }
    ctx->pc = 0x1B2320u;
    // 0x1b2320: 0xc06bd58  jal         func_1AF560
    ctx->pc = 0x1B2320u;
    SET_GPR_U32(ctx, 31, 0x1B2328u);
    ctx->pc = 0x1B2324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2320u;
    // 0x1b2324: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF560u, 0x1B2320u, 0x1B2328u)) {
        return;
    }
    ctx->pc = 0x1B2328u;
label_1b2328:
    // 0x1b2328: 0x8e22916c  lw          $v0, -0x6E94($s1)
    ctx->pc = 0x1b2328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294938988)));
    // 0x1b232c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1b232cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b2330: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b2330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2334: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b2334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b2338: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b2338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b233c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b233cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b2340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2344: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2344u;
        // 0x1b2348: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B234Cu;
    // 0x1b234c: 0x0  nop
    ctx->pc = 0x1b234cu;
    // NOP
    ctx->pc = 0x1b2350u;
}
