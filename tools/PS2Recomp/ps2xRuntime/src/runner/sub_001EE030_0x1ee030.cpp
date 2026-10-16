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

// Function: sub_001EE030
// Address: 0x1ee030 - 0x1ee0a0
void sub_001EE030_0x1ee030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE030_0x1ee030");
#endif

    switch (ctx->pc) {
        case 0x1ee054u: goto label_1ee054;
        case 0x1ee07cu: goto label_1ee07c;
        default: break;
    }

    ctx->pc = 0x1ee030u;

    // 0x1ee030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ee030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ee034: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ee034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ee038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ee038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ee03c: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x1ee03cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x1ee040: 0x2610e7d0  addiu       $s0, $s0, -0x1830
    ctx->pc = 0x1ee040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961104));
    // 0x1ee044: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ee044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ee04c: 0xc0bba02  jal         func_2EE808
    ctx->pc = 0x1EE04Cu;
    SET_GPR_U32(ctx, 31, 0x1EE054u);
    ctx->pc = 0x1EE050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE04Cu;
    // 0x1ee050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EE808u, 0x1EE04Cu, 0x1EE054u)) {
        return;
    }
    ctx->pc = 0x1EE054u;
label_1ee054:
    // 0x1ee054: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1ee054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1ee058: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1ee058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1ee05c: 0x8c87e7c0  lw          $a3, -0x1840($a0)
    ctx->pc = 0x1ee05cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x33E7C0u));
    // 0x1ee060: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x1ee060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x1ee064: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1ee064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ee068: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1ee068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ee06c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1ee06cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1ee070: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1ee070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ee074: 0xc0928de  jal         func_24A378
    ctx->pc = 0x1EE074u;
    SET_GPR_U32(ctx, 31, 0x1EE07Cu);
    ctx->pc = 0x1EE078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE074u;
    // 0x1ee078: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A378u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A378u, 0x1EE074u, 0x1EE07Cu)) {
        return;
    }
    ctx->pc = 0x1EE07Cu;
label_1ee07c:
    // 0x1ee07c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1ee07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ee080: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ee080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee084: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ee084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee088: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ee088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee08c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee090: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ee090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ee094: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE094u;
        // 0x1ee098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE09Cu;
    // 0x1ee09c: 0x0  nop
    ctx->pc = 0x1ee09cu;
    // NOP
    ctx->pc = 0x1ee0a0u;
}
