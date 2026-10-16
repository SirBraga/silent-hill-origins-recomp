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

// Function: sub_0013F7C0
// Address: 0x13f7c0 - 0x13f810
void sub_0013F7C0_0x13f7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F7C0_0x13f7c0");
#endif

    switch (ctx->pc) {
        case 0x13f800u: goto label_13f800;
        default: break;
    }

    ctx->pc = 0x13f7c0u;

    // 0x13f7c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13f7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f7c4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x13f7c8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x13f7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x13f7cc: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x13f7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x13f7d0: 0x3c080069  lui         $t0, 0x69
    ctx->pc = 0x13f7d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)105 << 16));
    // 0x13f7d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f7d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x13f7d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f7dc: 0x24630698  addiu       $v1, $v1, 0x698
    ctx->pc = 0x13f7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1688));
    // 0x13f7e0: 0x24c60578  addiu       $a2, $a2, 0x578
    ctx->pc = 0x13f7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1400));
    // 0x13f7e4: 0x24e706b8  addiu       $a3, $a3, 0x6B8
    ctx->pc = 0x13f7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1720));
    // 0x13f7e8: 0x250806f8  addiu       $t0, $t0, 0x6F8
    ctx->pc = 0x13f7e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1784));
    // 0x13f7ec: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x13f7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x13f7f0: 0xac460048  sw          $a2, 0x48($v0)
    ctx->pc = 0x13f7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 6));
    // 0x13f7f4: 0xac470084  sw          $a3, 0x84($v0)
    ctx->pc = 0x13f7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 7));
    // 0x13f7f8: 0xc04ee16  jal         func_13B858
    ctx->pc = 0x13F7F8u;
    SET_GPR_U32(ctx, 31, 0x13F800u);
    ctx->pc = 0x13F7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F7F8u;
    // 0x13f7fc: 0xac480034  sw          $t0, 0x34($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B858u, 0x13F7F8u, 0x13F800u)) {
        return;
    }
    ctx->pc = 0x13F800u;
label_13f800:
    // 0x13f800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f804: 0x3e00008  jr          $ra
    ctx->pc = 0x13F804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F804u;
        // 0x13f808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F80Cu;
    // 0x13f80c: 0x0  nop
    ctx->pc = 0x13f80cu;
    // NOP
    ctx->pc = 0x13f810u;
}
