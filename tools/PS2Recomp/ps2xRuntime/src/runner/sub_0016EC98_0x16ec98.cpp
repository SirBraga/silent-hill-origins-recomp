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

// Function: sub_0016EC98
// Address: 0x16ec98 - 0x16ecf0
void sub_0016EC98_0x16ec98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EC98_0x16ec98");
#endif

    switch (ctx->pc) {
        case 0x16ecacu: goto label_16ecac;
        case 0x16ecccu: goto label_16eccc;
        default: break;
    }

    ctx->pc = 0x16ec98u;

    // 0x16ec98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ec98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ec9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16ec9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16eca0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16eca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16eca4: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x16ECA4u;
    SET_GPR_U32(ctx, 31, 0x16ECACu);
    ctx->pc = 0x16ECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ECA4u;
    // 0x16eca8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x16ECA4u, 0x16ECACu)) {
        return;
    }
    ctx->pc = 0x16ECACu;
label_16ecac:
    // 0x16ecac: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16ecacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16ecb0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16ecb4: 0x24634fc0  addiu       $v1, $v1, 0x4FC0
    ctx->pc = 0x16ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20416));
    // 0x16ecb8: 0x24424f78  addiu       $v0, $v0, 0x4F78
    ctx->pc = 0x16ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20344));
    // 0x16ecbc: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x16ecbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x16ecc0: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x16ecc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x16ecc4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16ECC4u;
    SET_GPR_U32(ctx, 31, 0x16ECCCu);
    ctx->pc = 0x16ECC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ECC4u;
    // 0x16ecc8: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16ECC4u, 0x16ECCCu)) {
        return;
    }
    ctx->pc = 0x16ECCCu;
label_16eccc:
    // 0x16eccc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16ecccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ecd0: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x16ecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x16ecd4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x16ecd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x16ecd8: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x16ecd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x16ecdc: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x16ecdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x16ece0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16ece0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ece4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ece4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ece8: 0x3e00008  jr          $ra
    ctx->pc = 0x16ECE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ECE8u;
        // 0x16ecec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16ECE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16ECF0u;
}
