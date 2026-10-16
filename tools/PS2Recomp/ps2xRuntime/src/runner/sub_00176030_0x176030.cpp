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

// Function: sub_00176030
// Address: 0x176030 - 0x176088
void sub_00176030_0x176030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176030_0x176030");
#endif

    switch (ctx->pc) {
        case 0x176044u: goto label_176044;
        case 0x176064u: goto label_176064;
        case 0x17606cu: goto label_17606c;
        case 0x176074u: goto label_176074;
        default: break;
    }

    ctx->pc = 0x176030u;

    // 0x176030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176034: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x176034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x176038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x176038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17603c: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x17603Cu;
    SET_GPR_U32(ctx, 31, 0x176044u);
    ctx->pc = 0x176040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17603Cu;
    // 0x176040: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x17603Cu, 0x176044u)) {
        return;
    }
    ctx->pc = 0x176044u;
label_176044:
    // 0x176044: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x176044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x176048: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x176048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17604c: 0x246362b0  addiu       $v1, $v1, 0x62B0
    ctx->pc = 0x17604cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25264));
    // 0x176050: 0x244262d0  addiu       $v0, $v0, 0x62D0
    ctx->pc = 0x176050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25296));
    // 0x176054: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x176054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x176058: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x176058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x17605c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17605Cu;
    SET_GPR_U32(ctx, 31, 0x176064u);
    ctx->pc = 0x176060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17605Cu;
    // 0x176060: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17605Cu, 0x176064u)) {
        return;
    }
    ctx->pc = 0x176064u;
label_176064:
    // 0x176064: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x176064u;
    SET_GPR_U32(ctx, 31, 0x17606Cu);
    ctx->pc = 0x176068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176064u;
    // 0x176068: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x176064u, 0x17606Cu)) {
        return;
    }
    ctx->pc = 0x17606Cu;
label_17606c:
    // 0x17606c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17606Cu;
    SET_GPR_U32(ctx, 31, 0x176074u);
    ctx->pc = 0x176070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17606Cu;
    // 0x176070: 0x26040054  addiu       $a0, $s0, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17606Cu, 0x176074u)) {
        return;
    }
    ctx->pc = 0x176074u;
label_176074:
    // 0x176074: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x176074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17607c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17607cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176080: 0x3e00008  jr          $ra
    ctx->pc = 0x176080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176080u;
        // 0x176084: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176088u;
}
