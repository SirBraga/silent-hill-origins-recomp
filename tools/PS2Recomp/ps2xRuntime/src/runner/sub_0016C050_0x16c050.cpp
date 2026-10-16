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

// Function: sub_0016C050
// Address: 0x16c050 - 0x16c0a8
void sub_0016C050_0x16c050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C050_0x16c050");
#endif

    switch (ctx->pc) {
        case 0x16c064u: goto label_16c064;
        case 0x16c084u: goto label_16c084;
        default: break;
    }

    ctx->pc = 0x16c050u;

    // 0x16c050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c054: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16c054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16c058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c05c: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x16C05Cu;
    SET_GPR_U32(ctx, 31, 0x16C064u);
    ctx->pc = 0x16C060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C05Cu;
    // 0x16c060: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x16C05Cu, 0x16C064u)) {
        return;
    }
    ctx->pc = 0x16C064u;
label_16c064:
    // 0x16c064: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16c064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16c068: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16c068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16c06c: 0x246348d8  addiu       $v1, $v1, 0x48D8
    ctx->pc = 0x16c06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18648));
    // 0x16c070: 0x244248f8  addiu       $v0, $v0, 0x48F8
    ctx->pc = 0x16c070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18680));
    // 0x16c074: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x16c074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x16c078: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x16c078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x16c07c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16C07Cu;
    SET_GPR_U32(ctx, 31, 0x16C084u);
    ctx->pc = 0x16C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C07Cu;
    // 0x16c080: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16C07Cu, 0x16C084u)) {
        return;
    }
    ctx->pc = 0x16C084u;
label_16c084:
    // 0x16c084: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c088: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16c088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c08c: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x16c08cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x16c090: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x16c090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x16c094: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16c094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c09c: 0x3e00008  jr          $ra
    ctx->pc = 0x16C09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C09Cu;
        // 0x16c0a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C0A4u;
    // 0x16c0a4: 0x0  nop
    ctx->pc = 0x16c0a4u;
    // NOP
    ctx->pc = 0x16c0a8u;
}
