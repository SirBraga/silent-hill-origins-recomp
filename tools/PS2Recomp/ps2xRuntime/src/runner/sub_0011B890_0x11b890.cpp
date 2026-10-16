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

// Function: sub_0011B890
// Address: 0x11b890 - 0x11b8d8
void sub_0011B890_0x11b890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B890_0x11b890");
#endif

    switch (ctx->pc) {
        case 0x11b8acu: goto label_11b8ac;
        case 0x11b8b8u: goto label_11b8b8;
        default: break;
    }

    ctx->pc = 0x11b890u;

    // 0x11b890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11b890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11b894: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11b894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b898: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11b898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11b89c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b8a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b8a4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x11B8A4u;
    SET_GPR_U32(ctx, 31, 0x11B8ACu);
    ctx->pc = 0x11B8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B8A4u;
    // 0x11b8a8: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x11B8A4u, 0x11B8ACu)) {
        return;
    }
    ctx->pc = 0x11B8ACu;
label_11b8ac:
    // 0x11b8ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b8b0: 0xc046eac  jal         func_11BAB0
    ctx->pc = 0x11B8B0u;
    SET_GPR_U32(ctx, 31, 0x11B8B8u);
    ctx->pc = 0x11B8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B8B0u;
    // 0x11b8b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BAB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11BAB0u, 0x11B8B0u, 0x11B8B8u)) {
        return;
    }
    ctx->pc = 0x11B8B8u;
label_11b8b8:
    // 0x11b8b8: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x11b8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x11b8bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11b8bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b8c0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x11b8c0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x11b8c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b8c8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11b8c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x11B8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8CCu;
        // 0x11b8d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B8D4u;
    // 0x11b8d4: 0x0  nop
    ctx->pc = 0x11b8d4u;
    // NOP
    ctx->pc = 0x11b8d8u;
}
