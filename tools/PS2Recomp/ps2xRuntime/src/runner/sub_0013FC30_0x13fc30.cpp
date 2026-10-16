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

// Function: sub_0013FC30
// Address: 0x13fc30 - 0x13fc80
void sub_0013FC30_0x13fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FC30_0x13fc30");
#endif

    switch (ctx->pc) {
        case 0x13fc70u: goto label_13fc70;
        default: break;
    }

    ctx->pc = 0x13fc30u;

    // 0x13fc30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13fc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13fc34: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x13fc38: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x13fc38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x13fc3c: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x13fc3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x13fc40: 0x3c080069  lui         $t0, 0x69
    ctx->pc = 0x13fc40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)105 << 16));
    // 0x13fc44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13fc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13fc48: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x13fc48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc4c: 0x24630908  addiu       $v1, $v1, 0x908
    ctx->pc = 0x13fc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2312));
    // 0x13fc50: 0x24c607e8  addiu       $a2, $a2, 0x7E8
    ctx->pc = 0x13fc50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2024));
    // 0x13fc54: 0x24e707a8  addiu       $a3, $a3, 0x7A8
    ctx->pc = 0x13fc54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1960));
    // 0x13fc58: 0x25080928  addiu       $t0, $t0, 0x928
    ctx->pc = 0x13fc58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2344));
    // 0x13fc5c: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x13fc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x13fc60: 0xac460048  sw          $a2, 0x48($v0)
    ctx->pc = 0x13fc60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 6));
    // 0x13fc64: 0xac470084  sw          $a3, 0x84($v0)
    ctx->pc = 0x13fc64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 7));
    // 0x13fc68: 0xc04ee16  jal         func_13B858
    ctx->pc = 0x13FC68u;
    SET_GPR_U32(ctx, 31, 0x13FC70u);
    ctx->pc = 0x13FC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FC68u;
    // 0x13fc6c: 0xac480034  sw          $t0, 0x34($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B858u, 0x13FC68u, 0x13FC70u)) {
        return;
    }
    ctx->pc = 0x13FC70u;
label_13fc70:
    // 0x13fc70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13fc70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13fc74: 0x3e00008  jr          $ra
    ctx->pc = 0x13FC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FC74u;
        // 0x13fc78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FC7Cu;
    // 0x13fc7c: 0x0  nop
    ctx->pc = 0x13fc7cu;
    // NOP
    ctx->pc = 0x13fc80u;
}
