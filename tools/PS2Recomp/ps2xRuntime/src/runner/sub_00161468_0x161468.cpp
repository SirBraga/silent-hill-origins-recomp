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

// Function: sub_00161468
// Address: 0x161468 - 0x1614c0
void sub_00161468_0x161468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161468_0x161468");
#endif

    switch (ctx->pc) {
        case 0x161484u: goto label_161484;
        case 0x161490u: goto label_161490;
        default: break;
    }

    ctx->pc = 0x161468u;

    // 0x161468: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16146c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16146cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161470: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x161470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x161474: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x161474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16147c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x16147Cu;
    SET_GPR_U32(ctx, 31, 0x161484u);
    ctx->pc = 0x161480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16147Cu;
    // 0x161480: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x16147Cu, 0x161484u)) {
        return;
    }
    ctx->pc = 0x161484u;
label_161484:
    // 0x161484: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x161484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161488: 0xc0585c0  jal         func_161700
    ctx->pc = 0x161488u;
    SET_GPR_U32(ctx, 31, 0x161490u);
    ctx->pc = 0x16148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161488u;
    // 0x16148c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x161700u, 0x161488u, 0x161490u)) {
        return;
    }
    ctx->pc = 0x161490u;
label_161490:
    // 0x161490: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x161490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x161494: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x161494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161498: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x161498u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x16149c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16149cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1614a0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1614a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1614a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1614A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1614A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1614A4u;
        // 0x1614a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1614A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1614ACu;
    // 0x1614ac: 0x0  nop
    ctx->pc = 0x1614acu;
    // NOP
    // 0x1614b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1614b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1614b4: 0x0  nop
    ctx->pc = 0x1614b4u;
    // NOP
    // 0x1614b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1614b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1614bc: 0x0  nop
    ctx->pc = 0x1614bcu;
    // NOP
    ctx->pc = 0x1614c0u;
}
