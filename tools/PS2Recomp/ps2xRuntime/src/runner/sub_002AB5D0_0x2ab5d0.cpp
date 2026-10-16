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

// Function: sub_002AB5D0
// Address: 0x2ab5d0 - 0x2ab630
void sub_002AB5D0_0x2ab5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB5D0_0x2ab5d0");
#endif

    switch (ctx->pc) {
        case 0x2ab5fcu: goto label_2ab5fc;
        default: break;
    }

    ctx->pc = 0x2ab5d0u;

    // 0x2ab5d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ab5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ab5d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ab5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ab5d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ab5d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab5dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ab5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2ab5e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ab5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab5e4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ab5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2ab5e8: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2ab5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2ab5ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ab5ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab5f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ab5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ab5f4: 0xc0aa872  jal         func_2AA1C8
    ctx->pc = 0x2AB5F4u;
    SET_GPR_U32(ctx, 31, 0x2AB5FCu);
    ctx->pc = 0x2AB5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB5F4u;
    // 0x2ab5f8: 0x24a5e578  addiu       $a1, $a1, -0x1A88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA1C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA1C8u, 0x2AB5F4u, 0x2AB5FCu)) {
        return;
    }
    ctx->pc = 0x2AB5FCu;
label_2ab5fc:
    // 0x2ab5fc: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x2ab5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x2ab600: 0xae110040  sw          $s1, 0x40($s0)
    ctx->pc = 0x2ab600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 17));
    // 0x2ab604: 0x2442b2a0  addiu       $v0, $v0, -0x4D60
    ctx->pc = 0x2ab604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947488));
    // 0x2ab608: 0xae120044  sw          $s2, 0x44($s0)
    ctx->pc = 0x2ab608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 18));
    // 0x2ab60c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2ab60cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2ab610: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ab610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab614: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ab614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab618: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ab618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ab61c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ab61cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ab620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab624: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB624u;
        // 0x2ab628: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB62Cu;
    // 0x2ab62c: 0x0  nop
    ctx->pc = 0x2ab62cu;
    // NOP
    ctx->pc = 0x2ab630u;
}
