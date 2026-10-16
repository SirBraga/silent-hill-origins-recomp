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

// Function: sub_001FBDA0
// Address: 0x1fbda0 - 0x1fbdf0
void sub_001FBDA0_0x1fbda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBDA0_0x1fbda0");
#endif

    switch (ctx->pc) {
        case 0x1fbdc4u: goto label_1fbdc4;
        case 0x1fbddcu: goto label_1fbddc;
        default: break;
    }

    ctx->pc = 0x1fbda0u;

    // 0x1fbda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fbda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fbda4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1fbda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1fbda8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fbda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fbdac: 0x8c625520  lw          $v0, 0x5520($v1)
    ctx->pc = 0x1fbdacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x735520u));
    // 0x1fbdb0: 0x24705520  addiu       $s0, $v1, 0x5520
    ctx->pc = 0x1fbdb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21792));
    // 0x1fbdb4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FBDB4u;
    {
        const bool branch_taken_0x1fbdb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDB4u;
        // 0x1fbdb8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbdb4) {
            ctx->pc = 0x1FBDDCu;
            goto label_1fbddc;
        }
    }
    ctx->pc = 0x1FBDBCu;
    // 0x1fbdbc: 0xc07ec84  jal         func_1FB210
    ctx->pc = 0x1FBDBCu;
    SET_GPR_U32(ctx, 31, 0x1FBDC4u);
    ctx->pc = 0x1FB210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB210u, 0x1FBDBCu, 0x1FBDC4u)) {
        return;
    }
    ctx->pc = 0x1FBDC4u;
label_1fbdc4:
    // 0x1fbdc4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1fbdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1fbdc8: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x1fbdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x1fbdcc: 0x24a53088  addiu       $a1, $a1, 0x3088
    ctx->pc = 0x1fbdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12424));
    // 0x1fbdd0: 0x24c64150  addiu       $a2, $a2, 0x4150
    ctx->pc = 0x1fbdd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16720));
    // 0x1fbdd4: 0xc07eb06  jal         func_1FAC18
    ctx->pc = 0x1FBDD4u;
    SET_GPR_U32(ctx, 31, 0x1FBDDCu);
    ctx->pc = 0x1FBDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBDD4u;
    // 0x1fbdd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAC18u, 0x1FBDD4u, 0x1FBDDCu)) {
        return;
    }
    ctx->pc = 0x1FBDDCu;
label_1fbddc:
    // 0x1fbddc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fbddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbde0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fbde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbde4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fbde4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbde8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDE8u;
        // 0x1fbdec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBDF0u;
}
