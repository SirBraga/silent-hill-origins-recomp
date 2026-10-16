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

// Function: sub_002544B8
// Address: 0x2544b8 - 0x254520
void sub_002544B8_0x2544b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002544B8_0x2544b8");
#endif

    switch (ctx->pc) {
        case 0x2544fcu: goto label_2544fc;
        default: break;
    }

    ctx->pc = 0x2544b8u;

    // 0x2544b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2544b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2544bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2544bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2544c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2544c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2544c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2544c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2544c8: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x2544c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2544cc: 0x54800008  bnel        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2544CCu;
    {
        const bool branch_taken_0x2544cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2544cc) {
            ctx->pc = 0x2544D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2544CCu;
            // 0x2544d0: 0xaf9085c0  sw          $s0, -0x7A40($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294936000), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2544F0u;
            goto label_2544f0;
        }
    }
    ctx->pc = 0x2544D4u;
    // 0x2544d4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2544d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2544d8: 0x8c634190  lw          $v1, 0x4190($v1)
    ctx->pc = 0x2544d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4190u));
    // 0x2544dc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2544dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x2544e0: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x2544e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x2544e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2544e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2544e8: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x2544e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2544ec: 0xaf9085c0  sw          $s0, -0x7A40($gp)
    ctx->pc = 0x2544ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936000), GPR_U32(ctx, 16));
label_2544f0:
    // 0x2544f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2544f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2544f4: 0xc09240e  jal         func_249038
    ctx->pc = 0x2544F4u;
    SET_GPR_U32(ctx, 31, 0x2544FCu);
    ctx->pc = 0x2544F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2544F4u;
    // 0x2544f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249038u, 0x2544F4u, 0x2544FCu)) {
        return;
    }
    ctx->pc = 0x2544FCu;
label_2544fc:
    // 0x2544fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2544FCu;
    {
        const bool branch_taken_0x2544fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2544FCu;
        // 0x254500: 0xaf8085c0  sw          $zero, -0x7A40($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936000), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2544fc) {
            ctx->pc = 0x25450Cu;
            goto label_25450c;
        }
    }
    ctx->pc = 0x254504u;
    // 0x254504: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x254504u;
    {
        const bool branch_taken_0x254504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254504u;
        // 0x254508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254504) {
            ctx->pc = 0x254510u;
            goto label_254510;
        }
    }
    ctx->pc = 0x25450Cu;
label_25450c:
    // 0x25450c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25450cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_254510:
    // 0x254510: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x254510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254518: 0x3e00008  jr          $ra
    ctx->pc = 0x254518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254518u;
        // 0x25451c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254520u;
}
