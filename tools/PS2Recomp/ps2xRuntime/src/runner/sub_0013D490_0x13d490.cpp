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

// Function: sub_0013D490
// Address: 0x13d490 - 0x13d4d8
void sub_0013D490_0x13d490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D490_0x13d490");
#endif

    switch (ctx->pc) {
        case 0x13d4acu: goto label_13d4ac;
        case 0x13d4b8u: goto label_13d4b8;
        default: break;
    }

    ctx->pc = 0x13d490u;

    // 0x13d490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d494: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13d494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13d498: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13d498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13d49c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13d49cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d4a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d4a4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x13D4A4u;
    SET_GPR_U32(ctx, 31, 0x13D4ACu);
    ctx->pc = 0x13D4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D4A4u;
    // 0x13d4a8: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x13D4A4u, 0x13D4ACu)) {
        return;
    }
    ctx->pc = 0x13D4ACu;
label_13d4ac:
    // 0x13d4ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d4b0: 0xc04f184  jal         func_13C610
    ctx->pc = 0x13D4B0u;
    SET_GPR_U32(ctx, 31, 0x13D4B8u);
    ctx->pc = 0x13D4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D4B0u;
    // 0x13d4b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C610u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C610u, 0x13D4B0u, 0x13D4B8u)) {
        return;
    }
    ctx->pc = 0x13D4B8u;
label_13d4b8:
    // 0x13d4b8: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x13d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13d4bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13d4bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d4c0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x13d4c0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x13d4c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d4c8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13d4c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x13D4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4CCu;
        // 0x13d4d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D4D4u;
    // 0x13d4d4: 0x0  nop
    ctx->pc = 0x13d4d4u;
    // NOP
    ctx->pc = 0x13d4d8u;
}
