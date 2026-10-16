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

// Function: sub_00171978
// Address: 0x171978 - 0x1719c8
void sub_00171978_0x171978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171978_0x171978");
#endif

    switch (ctx->pc) {
        case 0x171994u: goto label_171994;
        case 0x1719a0u: goto label_1719a0;
        default: break;
    }

    ctx->pc = 0x171978u;

    // 0x171978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17197c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17197cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x171980: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x171980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x171984: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x171984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171988: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17198c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x17198Cu;
    SET_GPR_U32(ctx, 31, 0x171994u);
    ctx->pc = 0x171990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17198Cu;
    // 0x171990: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x17198Cu, 0x171994u)) {
        return;
    }
    ctx->pc = 0x171994u;
label_171994:
    // 0x171994: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x171994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171998: 0xc05c672  jal         func_1719C8
    ctx->pc = 0x171998u;
    SET_GPR_U32(ctx, 31, 0x1719A0u);
    ctx->pc = 0x17199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171998u;
    // 0x17199c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1719C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1719C8u, 0x171998u, 0x1719A0u)) {
        return;
    }
    ctx->pc = 0x1719A0u;
label_1719a0:
    // 0x1719a0: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1719a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1719a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1719a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1719a8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1719a8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x1719ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1719acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1719b0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1719b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1719b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1719B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1719B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1719B4u;
        // 0x1719b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1719B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1719BCu;
    // 0x1719bc: 0x0  nop
    ctx->pc = 0x1719bcu;
    // NOP
    // 0x1719c0: 0x0  nop
    ctx->pc = 0x1719c0u;
    // NOP
    // 0x1719c4: 0x0  nop
    ctx->pc = 0x1719c4u;
    // NOP
    ctx->pc = 0x1719c8u;
}
