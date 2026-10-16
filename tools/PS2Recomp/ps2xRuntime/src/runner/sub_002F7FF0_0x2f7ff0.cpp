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

// Function: sub_002F7FF0
// Address: 0x2f7ff0 - 0x2f8048
void sub_002F7FF0_0x2f7ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7FF0_0x2f7ff0");
#endif

    switch (ctx->pc) {
        case 0x2f8030u: goto label_2f8030;
        default: break;
    }

    ctx->pc = 0x2f7ff0u;

    // 0x2f7ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f7ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f7ff4: 0x3c040072  lui         $a0, 0x72
    ctx->pc = 0x2f7ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)114 << 16));
    // 0x2f7ff8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f7ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f7ffc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f7ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f8000: 0x3c100072  lui         $s0, 0x72
    ctx->pc = 0x2f8000u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)114 << 16));
    // 0x2f8004: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f8004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f8008: 0x260757c0  addiu       $a3, $s0, 0x57C0
    ctx->pc = 0x2f8008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 22464));
    // 0x2f800c: 0x248456c0  addiu       $a0, $a0, 0x56C0
    ctx->pc = 0x2f800cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22208));
    // 0x2f8010: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f8010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f8014: 0x34a51363  ori         $a1, $a1, 0x1363
    ctx->pc = 0x2f8014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4963);
    // 0x2f8018: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f8018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f801c: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2f801cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f8020: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2f8020u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8024: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x2f8024u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f8028: 0xc0c92ee  jal         func_324BB8
    ctx->pc = 0x2F8028u;
    SET_GPR_U32(ctx, 31, 0x2F8030u);
    ctx->pc = 0x2F802Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8028u;
    // 0x2f802c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324BB8u, 0x2F8028u, 0x2F8030u)) {
        return;
    }
    ctx->pc = 0x2F8030u;
label_2f8030:
    // 0x2f8030: 0x8e0257c0  lw          $v0, 0x57C0($s0)
    ctx->pc = 0x2f8030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22464)));
    // 0x2f8034: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f8034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8038: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f8038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f803c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F803Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F803Cu;
        // 0x2f8040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F803Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8044u;
    // 0x2f8044: 0x0  nop
    ctx->pc = 0x2f8044u;
    // NOP
    ctx->pc = 0x2f8048u;
}
