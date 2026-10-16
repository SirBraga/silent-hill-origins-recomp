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

// Function: sub_001AAEA8
// Address: 0x1aaea8 - 0x1aaf10
void sub_001AAEA8_0x1aaea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAEA8_0x1aaea8");
#endif

    switch (ctx->pc) {
        case 0x1aaebcu: goto label_1aaebc;
        case 0x1aaeecu: goto label_1aaeec;
        default: break;
    }

    ctx->pc = 0x1aaea8u;

    // 0x1aaea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aaea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aaeac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1aaeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1aaeb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aaeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aaeb4: 0xc06adc6  jal         func_1AB718
    ctx->pc = 0x1AAEB4u;
    SET_GPR_U32(ctx, 31, 0x1AAEBCu);
    ctx->pc = 0x1AAEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAEB4u;
    // 0x1aaeb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AB718u, 0x1AAEB4u, 0x1AAEBCu)) {
        return;
    }
    ctx->pc = 0x1AAEBCu;
label_1aaebc:
    // 0x1aaebc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1aaebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1aaec0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1aaec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1aaec4: 0x2463b648  addiu       $v1, $v1, -0x49B8
    ctx->pc = 0x1aaec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948424));
    // 0x1aaec8: 0x260200d0  addiu       $v0, $s0, 0xD0
    ctx->pc = 0x1aaec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x1aaecc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1aaeccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1aaed0: 0x2484b328  addiu       $a0, $a0, -0x4CD8
    ctx->pc = 0x1aaed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947624));
    // 0x1aaed4: 0xac440050  sw          $a0, 0x50($v0)
    ctx->pc = 0x1aaed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 4));
    // 0x1aaed8: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x1aaed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x1aaedc: 0xa4400080  sh          $zero, 0x80($v0)
    ctx->pc = 0x1aaedcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x1aaee0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1aaee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1aaee4: 0xc06affa  jal         func_1ABFE8
    ctx->pc = 0x1AAEE4u;
    SET_GPR_U32(ctx, 31, 0x1AAEECu);
    ctx->pc = 0x1AAEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAEE4u;
    // 0x1aaee8: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABFE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ABFE8u, 0x1AAEE4u, 0x1AAEECu)) {
        return;
    }
    ctx->pc = 0x1AAEECu;
label_1aaeec:
    // 0x1aaeec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1aaeecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaef0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1aaef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1aaef4: 0xae001200  sw          $zero, 0x1200($s0)
    ctx->pc = 0x1aaef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4608), GPR_U32(ctx, 0));
    // 0x1aaef8: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x1aaef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
    // 0x1aaefc: 0xae001204  sw          $zero, 0x1204($s0)
    ctx->pc = 0x1aaefcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4612), GPR_U32(ctx, 0));
    // 0x1aaf00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1aaf00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aaf04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aaf04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aaf08: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF08u;
        // 0x1aaf0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAF10u;
}
