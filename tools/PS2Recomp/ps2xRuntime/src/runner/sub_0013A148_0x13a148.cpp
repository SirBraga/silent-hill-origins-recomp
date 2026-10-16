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

// Function: sub_0013A148
// Address: 0x13a148 - 0x13a190
void sub_0013A148_0x13a148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A148_0x13a148");
#endif

    switch (ctx->pc) {
        case 0x13a164u: goto label_13a164;
        case 0x13a170u: goto label_13a170;
        default: break;
    }

    ctx->pc = 0x13a148u;

    // 0x13a148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13a148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13a14c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13a14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13a150: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13a150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13a154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13a154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13a158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13a15c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x13A15Cu;
    SET_GPR_U32(ctx, 31, 0x13A164u);
    ctx->pc = 0x13A160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A15Cu;
    // 0x13a160: 0x240401d4  addiu       $a0, $zero, 0x1D4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 468));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x13A15Cu, 0x13A164u)) {
        return;
    }
    ctx->pc = 0x13A164u;
label_13a164:
    // 0x13a164: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13a164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a168: 0xc04e4d4  jal         func_139350
    ctx->pc = 0x13A168u;
    SET_GPR_U32(ctx, 31, 0x13A170u);
    ctx->pc = 0x13A16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A168u;
    // 0x13a16c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139350u, 0x13A168u, 0x13A170u)) {
        return;
    }
    ctx->pc = 0x13A170u;
label_13a170:
    // 0x13a170: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x13a170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13a174: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13a174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a178: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x13a178u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x13a17c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13a17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a180: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13a180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a184: 0x3e00008  jr          $ra
    ctx->pc = 0x13A184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A184u;
        // 0x13a188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A18Cu;
    // 0x13a18c: 0x0  nop
    ctx->pc = 0x13a18cu;
    // NOP
    ctx->pc = 0x13a190u;
}
