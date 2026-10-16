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

// Function: sub_001FBCC0
// Address: 0x1fbcc0 - 0x1fbd10
void sub_001FBCC0_0x1fbcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBCC0_0x1fbcc0");
#endif

    switch (ctx->pc) {
        case 0x1fbce4u: goto label_1fbce4;
        case 0x1fbcfcu: goto label_1fbcfc;
        default: break;
    }

    ctx->pc = 0x1fbcc0u;

    // 0x1fbcc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fbcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fbcc4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1fbcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1fbcc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fbcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fbccc: 0x8c625500  lw          $v0, 0x5500($v1)
    ctx->pc = 0x1fbcccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x735500u));
    // 0x1fbcd0: 0x24705500  addiu       $s0, $v1, 0x5500
    ctx->pc = 0x1fbcd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21760));
    // 0x1fbcd4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FBCD4u;
    {
        const bool branch_taken_0x1fbcd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBCD4u;
        // 0x1fbcd8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbcd4) {
            ctx->pc = 0x1FBCFCu;
            goto label_1fbcfc;
        }
    }
    ctx->pc = 0x1FBCDCu;
    // 0x1fbcdc: 0xc07ec84  jal         func_1FB210
    ctx->pc = 0x1FBCDCu;
    SET_GPR_U32(ctx, 31, 0x1FBCE4u);
    ctx->pc = 0x1FB210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB210u, 0x1FBCDCu, 0x1FBCE4u)) {
        return;
    }
    ctx->pc = 0x1FBCE4u;
label_1fbce4:
    // 0x1fbce4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1fbce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1fbce8: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x1fbce8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x1fbcec: 0x24a53058  addiu       $a1, $a1, 0x3058
    ctx->pc = 0x1fbcecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12376));
    // 0x1fbcf0: 0x24c64150  addiu       $a2, $a2, 0x4150
    ctx->pc = 0x1fbcf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16720));
    // 0x1fbcf4: 0xc07eb06  jal         func_1FAC18
    ctx->pc = 0x1FBCF4u;
    SET_GPR_U32(ctx, 31, 0x1FBCFCu);
    ctx->pc = 0x1FBCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBCF4u;
    // 0x1fbcf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAC18u, 0x1FBCF4u, 0x1FBCFCu)) {
        return;
    }
    ctx->pc = 0x1FBCFCu;
label_1fbcfc:
    // 0x1fbcfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fbcfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbd00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fbd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbd04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fbd04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbd08: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD08u;
        // 0x1fbd0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBD10u;
}
