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

// Function: sub_0013F8D0
// Address: 0x13f8d0 - 0x13f920
void sub_0013F8D0_0x13f8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F8D0_0x13f8d0");
#endif

    switch (ctx->pc) {
        case 0x13f910u: goto label_13f910;
        default: break;
    }

    ctx->pc = 0x13f8d0u;

    // 0x13f8d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13f8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f8d4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13f8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x13f8d8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x13f8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x13f8dc: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x13f8dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x13f8e0: 0x3c080069  lui         $t0, 0x69
    ctx->pc = 0x13f8e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)105 << 16));
    // 0x13f8e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f8e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x13f8e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f8ec: 0x24630460  addiu       $v1, $v1, 0x460
    ctx->pc = 0x13f8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1120));
    // 0x13f8f0: 0x24c60340  addiu       $a2, $a2, 0x340
    ctx->pc = 0x13f8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 832));
    // 0x13f8f4: 0x24e70480  addiu       $a3, $a3, 0x480
    ctx->pc = 0x13f8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1152));
    // 0x13f8f8: 0x250804c0  addiu       $t0, $t0, 0x4C0
    ctx->pc = 0x13f8f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1216));
    // 0x13f8fc: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x13f8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x13f900: 0xac460048  sw          $a2, 0x48($v0)
    ctx->pc = 0x13f900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 6));
    // 0x13f904: 0xac470084  sw          $a3, 0x84($v0)
    ctx->pc = 0x13f904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 7));
    // 0x13f908: 0xc0400d0  jal         func_100340
    ctx->pc = 0x13F908u;
    SET_GPR_U32(ctx, 31, 0x13F910u);
    ctx->pc = 0x13F90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F908u;
    // 0x13f90c: 0xac480034  sw          $t0, 0x34($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x100340u, 0x13F908u, 0x13F910u)) {
        return;
    }
    ctx->pc = 0x13F910u;
label_13f910:
    // 0x13f910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f914: 0x3e00008  jr          $ra
    ctx->pc = 0x13F914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F914u;
        // 0x13f918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F91Cu;
    // 0x13f91c: 0x0  nop
    ctx->pc = 0x13f91cu;
    // NOP
    ctx->pc = 0x13f920u;
}
