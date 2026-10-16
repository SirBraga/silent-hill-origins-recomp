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

// Function: sub_001ACCA8
// Address: 0x1acca8 - 0x1acce8
void sub_001ACCA8_0x1acca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ACCA8_0x1acca8");
#endif

    switch (ctx->pc) {
        case 0x1accbcu: goto label_1accbc;
        default: break;
    }

    ctx->pc = 0x1acca8u;

    // 0x1acca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1acca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1accac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1accacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1accb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1accb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1accb4: 0xc06b2a2  jal         func_1ACA88
    ctx->pc = 0x1ACCB4u;
    SET_GPR_U32(ctx, 31, 0x1ACCBCu);
    ctx->pc = 0x1ACCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACCB4u;
    // 0x1accb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACA88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ACA88u, 0x1ACCB4u, 0x1ACCBCu)) {
        return;
    }
    ctx->pc = 0x1ACCBCu;
label_1accbc:
    // 0x1accbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1accbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1accc0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1accc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1accc4: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x1accc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1accc8: 0x2463b848  addiu       $v1, $v1, -0x47B8
    ctx->pc = 0x1accc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948936));
    // 0x1acccc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1accccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1accd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1accd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1accd4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1accd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1accd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1accd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1accdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCDCu;
        // 0x1acce0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACCE4u;
    // 0x1acce4: 0x0  nop
    ctx->pc = 0x1acce4u;
    // NOP
    ctx->pc = 0x1acce8u;
}
