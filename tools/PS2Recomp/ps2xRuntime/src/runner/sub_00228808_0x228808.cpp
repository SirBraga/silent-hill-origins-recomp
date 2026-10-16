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

// Function: sub_00228808
// Address: 0x228808 - 0x228888
void sub_00228808_0x228808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228808_0x228808");
#endif

    switch (ctx->pc) {
        case 0x228844u: goto label_228844;
        default: break;
    }

    ctx->pc = 0x228808u;

    // 0x228808: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x228808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22880c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22880cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x228810: 0x8c633e98  lw          $v1, 0x3E98($v1)
    ctx->pc = 0x228810u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3E98u));
    // 0x228814: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x228814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x228818: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x228818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x22881c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22881cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x228820: 0x24510fc8  addiu       $s1, $v0, 0xFC8
    ctx->pc = 0x228820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x228824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228828: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x228828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22882c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x22882cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x228830: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x228830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x228834: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x228834u;
    {
        const bool branch_taken_0x228834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x228834) {
            ctx->pc = 0x228854u;
            goto label_228854;
        }
    }
    ctx->pc = 0x22883Cu;
    // 0x22883c: 0xc093106  jal         func_24C418
    ctx->pc = 0x22883Cu;
    SET_GPR_U32(ctx, 31, 0x228844u);
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x22883Cu, 0x228844u)) {
        return;
    }
    ctx->pc = 0x228844u;
label_228844:
    // 0x228844: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x228844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x228848: 0x8c633e98  lw          $v1, 0x3E98($v1)
    ctx->pc = 0x228848u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3E98u));
    // 0x22884c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x22884cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x228850: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x228850u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
label_228854:
    // 0x228854: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x228854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x228858: 0x8c633e9c  lw          $v1, 0x3E9C($v1)
    ctx->pc = 0x228858u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3E9Cu));
    // 0x22885c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22885cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228860: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x228860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228864: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x228864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x228868: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x228868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22886c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22886cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228870: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x228870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x228874: 0xac233e9c  sw          $v1, 0x3E9C($at)
    ctx->pc = 0x228874u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3E9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3E9Cu, _value); } while (0);
    // 0x228878: 0x3e00008  jr          $ra
    ctx->pc = 0x228878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228878u;
        // 0x22887c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228880u;
    // 0x228880: 0xaf85c000  sw          $a1, -0x4000($gp)
    ctx->pc = 0x228880u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950912), GPR_U32(ctx, 5));
    // 0x228884: 0x0  nop
    ctx->pc = 0x228884u;
    // NOP
    ctx->pc = 0x228888u;
}
