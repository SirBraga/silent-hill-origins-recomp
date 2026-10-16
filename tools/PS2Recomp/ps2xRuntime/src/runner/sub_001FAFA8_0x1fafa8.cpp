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

// Function: sub_001FAFA8
// Address: 0x1fafa8 - 0x1faff8
void sub_001FAFA8_0x1fafa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAFA8_0x1fafa8");
#endif

    switch (ctx->pc) {
        case 0x1fafccu: goto label_1fafcc;
        case 0x1fafe4u: goto label_1fafe4;
        default: break;
    }

    ctx->pc = 0x1fafa8u;

    // 0x1fafa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fafa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fafac: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1fafacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1fafb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fafb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fafb4: 0x8c6254d0  lw          $v0, 0x54D0($v1)
    ctx->pc = 0x1fafb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7354D0u));
    // 0x1fafb8: 0x247054d0  addiu       $s0, $v1, 0x54D0
    ctx->pc = 0x1fafb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21712));
    // 0x1fafbc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FAFBCu;
    {
        const bool branch_taken_0x1fafbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFBCu;
        // 0x1fafc0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fafbc) {
            ctx->pc = 0x1FAFE4u;
            goto label_1fafe4;
        }
    }
    ctx->pc = 0x1FAFC4u;
    // 0x1fafc4: 0xc07ec0c  jal         func_1FB030
    ctx->pc = 0x1FAFC4u;
    SET_GPR_U32(ctx, 31, 0x1FAFCCu);
    ctx->pc = 0x1FB030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB030u, 0x1FAFC4u, 0x1FAFCCu)) {
        return;
    }
    ctx->pc = 0x1FAFCCu;
label_1fafcc:
    // 0x1fafcc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1fafccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1fafd0: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x1fafd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x1fafd4: 0x24a52ef0  addiu       $a1, $a1, 0x2EF0
    ctx->pc = 0x1fafd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12016));
    // 0x1fafd8: 0x24c654c0  addiu       $a2, $a2, 0x54C0
    ctx->pc = 0x1fafd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21696));
    // 0x1fafdc: 0xc07eb06  jal         func_1FAC18
    ctx->pc = 0x1FAFDCu;
    SET_GPR_U32(ctx, 31, 0x1FAFE4u);
    ctx->pc = 0x1FAFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAFDCu;
    // 0x1fafe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAC18u, 0x1FAFDCu, 0x1FAFE4u)) {
        return;
    }
    ctx->pc = 0x1FAFE4u;
label_1fafe4:
    // 0x1fafe4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fafe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fafe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fafe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fafec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fafecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1faff0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFF0u;
        // 0x1faff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAFF8u;
}
