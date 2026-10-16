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

// Function: sub_0016C008
// Address: 0x16c008 - 0x16c050
void sub_0016C008_0x16c008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C008_0x16c008");
#endif

    switch (ctx->pc) {
        case 0x16c024u: goto label_16c024;
        case 0x16c030u: goto label_16c030;
        default: break;
    }

    ctx->pc = 0x16c008u;

    // 0x16c008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c00c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16c00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c010: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16c010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16c014: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16c014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c018: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c01c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x16C01Cu;
    SET_GPR_U32(ctx, 31, 0x16C024u);
    ctx->pc = 0x16C020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C01Cu;
    // 0x16c020: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x16C01Cu, 0x16C024u)) {
        return;
    }
    ctx->pc = 0x16C024u;
label_16c024:
    // 0x16c024: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16c024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c028: 0xc05b014  jal         func_16C050
    ctx->pc = 0x16C028u;
    SET_GPR_U32(ctx, 31, 0x16C030u);
    ctx->pc = 0x16C02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C028u;
    // 0x16c02c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C050u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16C050u, 0x16C028u, 0x16C030u)) {
        return;
    }
    ctx->pc = 0x16C030u;
label_16c030:
    // 0x16c030: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x16c030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16c034: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16c034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c038: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x16c038u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x16c03c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c040: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16c040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c044: 0x3e00008  jr          $ra
    ctx->pc = 0x16C044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C044u;
        // 0x16c048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C04Cu;
    // 0x16c04c: 0x0  nop
    ctx->pc = 0x16c04cu;
    // NOP
    ctx->pc = 0x16c050u;
}
