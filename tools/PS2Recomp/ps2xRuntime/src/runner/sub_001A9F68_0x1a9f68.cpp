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

// Function: sub_001A9F68
// Address: 0x1a9f68 - 0x1a9fa8
void sub_001A9F68_0x1a9f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9F68_0x1a9f68");
#endif

    switch (ctx->pc) {
        case 0x1a9f88u: goto label_1a9f88;
        case 0x1a9f90u: goto label_1a9f90;
        default: break;
    }

    ctx->pc = 0x1a9f68u;

    // 0x1a9f68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a9f6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1a9f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1a9f70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a9f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a9f74: 0x2442b5d0  addiu       $v0, $v0, -0x4A30
    ctx->pc = 0x1a9f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948304));
    // 0x1a9f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9f7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a9f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f80: 0xc06a8e0  jal         func_1AA380
    ctx->pc = 0x1A9F80u;
    SET_GPR_U32(ctx, 31, 0x1A9F88u);
    ctx->pc = 0x1A9F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F80u;
    // 0x1a9f84: 0xae0200ec  sw          $v0, 0xEC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA380u, 0x1A9F80u, 0x1A9F88u)) {
        return;
    }
    ctx->pc = 0x1A9F88u;
label_1a9f88:
    // 0x1a9f88: 0xc06a572  jal         func_1A95C8
    ctx->pc = 0x1A9F88u;
    SET_GPR_U32(ctx, 31, 0x1A9F90u);
    ctx->pc = 0x1A9F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F88u;
    // 0x1a9f8c: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A95C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A95C8u, 0x1A9F88u, 0x1A9F90u)) {
        return;
    }
    ctx->pc = 0x1A9F90u;
label_1a9f90:
    // 0x1a9f90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a9f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9f98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a9f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F9Cu;
        // 0x1a9fa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9FA4u;
    // 0x1a9fa4: 0x0  nop
    ctx->pc = 0x1a9fa4u;
    // NOP
    ctx->pc = 0x1a9fa8u;
}
