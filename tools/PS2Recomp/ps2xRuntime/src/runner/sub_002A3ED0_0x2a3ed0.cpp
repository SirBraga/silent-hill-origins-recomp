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

// Function: sub_002A3ED0
// Address: 0x2a3ed0 - 0x2a3f28
void sub_002A3ED0_0x2a3ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3ED0_0x2a3ed0");
#endif

    switch (ctx->pc) {
        case 0x2a3ef4u: goto label_2a3ef4;
        case 0x2a3f10u: goto label_2a3f10;
        default: break;
    }

    ctx->pc = 0x2a3ed0u;

    // 0x2a3ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a3ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a3ed4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2a3ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x2a3ed8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a3ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a3edc: 0x8c625ee0  lw          $v0, 0x5EE0($v1)
    ctx->pc = 0x2a3edcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x735EE0u));
    // 0x2a3ee0: 0x24705ee0  addiu       $s0, $v1, 0x5EE0
    ctx->pc = 0x2a3ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24288));
    // 0x2a3ee4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A3EE4u;
    {
        const bool branch_taken_0x2a3ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3EE4u;
        // 0x2a3ee8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3ee4) {
            ctx->pc = 0x2A3F10u;
            goto label_2a3f10;
        }
    }
    ctx->pc = 0x2A3EECu;
    // 0x2a3eec: 0xc0a6afe  jal         func_29ABF8
    ctx->pc = 0x2A3EECu;
    SET_GPR_U32(ctx, 31, 0x2A3EF4u);
    ctx->pc = 0x29ABF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29ABF8u, 0x2A3EECu, 0x2A3EF4u)) {
        return;
    }
    ctx->pc = 0x2A3EF4u;
label_2a3ef4:
    // 0x2a3ef4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2a3ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2a3ef8: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x2a3ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x2a3efc: 0x24a5e278  addiu       $a1, $a1, -0x1D88
    ctx->pc = 0x2a3efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959736));
    // 0x2a3f00: 0x24c6e288  addiu       $a2, $a2, -0x1D78
    ctx->pc = 0x2a3f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959752));
    // 0x2a3f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f08: 0xc07eafc  jal         func_1FABF0
    ctx->pc = 0x2A3F08u;
    SET_GPR_U32(ctx, 31, 0x2A3F10u);
    ctx->pc = 0x2A3F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3F08u;
    // 0x2a3f0c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FABF0u, 0x2A3F08u, 0x2A3F10u)) {
        return;
    }
    ctx->pc = 0x2A3F10u;
label_2a3f10:
    // 0x2a3f10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a3f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a3f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3f18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3f18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3F1Cu;
        // 0x2a3f20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3F24u;
    // 0x2a3f24: 0x0  nop
    ctx->pc = 0x2a3f24u;
    // NOP
    ctx->pc = 0x2a3f28u;
}
