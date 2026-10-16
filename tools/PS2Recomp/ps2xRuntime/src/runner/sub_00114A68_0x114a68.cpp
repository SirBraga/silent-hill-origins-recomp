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

// Function: sub_00114A68
// Address: 0x114a68 - 0x114ab8
void sub_00114A68_0x114a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114A68_0x114a68");
#endif

    switch (ctx->pc) {
        case 0x114a84u: goto label_114a84;
        case 0x114a90u: goto label_114a90;
        default: break;
    }

    ctx->pc = 0x114a68u;

    // 0x114a68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x114a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x114a6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x114a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x114a70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x114a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x114a74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x114a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114a7c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x114A7Cu;
    SET_GPR_U32(ctx, 31, 0x114A84u);
    ctx->pc = 0x114A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A7Cu;
    // 0x114a80: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x114A7Cu, 0x114A84u)) {
        return;
    }
    ctx->pc = 0x114A84u;
label_114a84:
    // 0x114a84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x114a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a88: 0xc0452ae  jal         func_114AB8
    ctx->pc = 0x114A88u;
    SET_GPR_U32(ctx, 31, 0x114A90u);
    ctx->pc = 0x114A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A88u;
    // 0x114a8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114AB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x114AB8u, 0x114A88u, 0x114A90u)) {
        return;
    }
    ctx->pc = 0x114A90u;
label_114a90:
    // 0x114a90: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x114a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x114a94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x114a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114a98: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x114a98u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x114a9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114aa0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x114aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x114AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AA4u;
        // 0x114aa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114AACu;
    // 0x114aac: 0x0  nop
    ctx->pc = 0x114aacu;
    // NOP
    // 0x114ab0: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x114ab0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x114ab4: 0x0  nop
    ctx->pc = 0x114ab4u;
    // NOP
    ctx->pc = 0x114ab8u;
}
