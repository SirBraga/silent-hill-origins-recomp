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

// Function: sub_0024F038
// Address: 0x24f038 - 0x24f0b0
void sub_0024F038_0x24f038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F038_0x24f038");
#endif

    switch (ctx->pc) {
        case 0x24f070u: goto label_24f070;
        default: break;
    }

    ctx->pc = 0x24f038u;

    // 0x24f038: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24f038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24f03c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x24f040: 0x8c633f88  lw          $v1, 0x3F88($v1)
    ctx->pc = 0x24f040u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F88u));
    // 0x24f044: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24f044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x24f048: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24f048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24f04c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24f04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24f050: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x24f050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x24f054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24f054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f058: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24f058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f05c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24f05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f060: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F060u;
    {
        const bool branch_taken_0x24f060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f060) {
            ctx->pc = 0x24F070u;
            goto label_24f070;
        }
    }
    ctx->pc = 0x24F068u;
    // 0x24f068: 0xc093106  jal         func_24C418
    ctx->pc = 0x24F068u;
    SET_GPR_U32(ctx, 31, 0x24F070u);
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x24F068u, 0x24F070u)) {
        return;
    }
    ctx->pc = 0x24F070u;
label_24f070:
    // 0x24f070: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24f070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x24f074: 0x8c633f8c  lw          $v1, 0x3F8C($v1)
    ctx->pc = 0x24f074u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F8Cu));
    // 0x24f078: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24f078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f07c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24f07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f080: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x24f080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x24f084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24f084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f088: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24f088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24f08c: 0xac233f8c  sw          $v1, 0x3F8C($at)
    ctx->pc = 0x24f08cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3F8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F8Cu, _value); } while (0);
    // 0x24f090: 0x3e00008  jr          $ra
    ctx->pc = 0x24F090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F090u;
        // 0x24f094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F098u;
    // 0x24f098: 0xaf85c000  sw          $a1, -0x4000($gp)
    ctx->pc = 0x24f098u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950912), GPR_U32(ctx, 5));
    // 0x24f09c: 0x0  nop
    ctx->pc = 0x24f09cu;
    // NOP
    // 0x24f0a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x24f0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24f0a4: 0x0  nop
    ctx->pc = 0x24f0a4u;
    // NOP
    // 0x24f0a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24f0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24f0ac: 0x0  nop
    ctx->pc = 0x24f0acu;
    // NOP
    ctx->pc = 0x24f0b0u;
}
