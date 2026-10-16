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

// Function: sub_00147960
// Address: 0x147960 - 0x1479c0
void sub_00147960_0x147960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147960_0x147960");
#endif

    switch (ctx->pc) {
        case 0x147974u: goto label_147974;
        default: break;
    }

    ctx->pc = 0x147960u;

    // 0x147960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x147960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x147964: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x147964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x147968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x147968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14796c: 0xc04edaa  jal         func_13B6A8
    ctx->pc = 0x14796Cu;
    SET_GPR_U32(ctx, 31, 0x147974u);
    ctx->pc = 0x147970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14796Cu;
    // 0x147970: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B6A8u, 0x14796Cu, 0x147974u)) {
        return;
    }
    ctx->pc = 0x147974u;
label_147974:
    // 0x147974: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x147974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x147978: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x147978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x14797c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x14797cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x147980: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x147980u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x147984: 0x246312a0  addiu       $v1, $v1, 0x12A0
    ctx->pc = 0x147984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x147988: 0x24841180  addiu       $a0, $a0, 0x1180
    ctx->pc = 0x147988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
    // 0x14798c: 0x24a51140  addiu       $a1, $a1, 0x1140
    ctx->pc = 0x14798cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4416));
    // 0x147990: 0x24c612c0  addiu       $a2, $a2, 0x12C0
    ctx->pc = 0x147990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4800));
    // 0x147994: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x147994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x147998: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x147998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14799c: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x14799cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
    // 0x1479a0: 0xae050084  sw          $a1, 0x84($s0)
    ctx->pc = 0x1479a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 5));
    // 0x1479a4: 0xae060034  sw          $a2, 0x34($s0)
    ctx->pc = 0x1479a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
    // 0x1479a8: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1479a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1479ac: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x1479acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x1479b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1479b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1479b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1479b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1479b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1479B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1479BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479B8u;
        // 0x1479bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1479B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1479C0u;
}
