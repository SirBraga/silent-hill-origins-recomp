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

// Function: sub_0014B4F8
// Address: 0x14b4f8 - 0x14b548
void sub_0014B4F8_0x14b4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B4F8_0x14b4f8");
#endif

    switch (ctx->pc) {
        case 0x14b514u: goto label_14b514;
        case 0x14b520u: goto label_14b520;
        default: break;
    }

    ctx->pc = 0x14b4f8u;

    // 0x14b4f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14b4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14b4fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14b4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14b500: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14b500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14b504: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14b504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b50c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x14B50Cu;
    SET_GPR_U32(ctx, 31, 0x14B514u);
    ctx->pc = 0x14B510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B50Cu;
    // 0x14b510: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x14B50Cu, 0x14B514u)) {
        return;
    }
    ctx->pc = 0x14B514u;
label_14b514:
    // 0x14b514: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14b514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b518: 0xc052c1a  jal         func_14B068
    ctx->pc = 0x14B518u;
    SET_GPR_U32(ctx, 31, 0x14B520u);
    ctx->pc = 0x14B51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B518u;
    // 0x14b51c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14B068u, 0x14B518u, 0x14B520u)) {
        return;
    }
    ctx->pc = 0x14B520u;
label_14b520:
    // 0x14b520: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x14b520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14b524: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14b524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b528: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x14b528u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x14b52c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b530: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14b530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b534: 0x3e00008  jr          $ra
    ctx->pc = 0x14B534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B534u;
        // 0x14b538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B53Cu;
    // 0x14b53c: 0x0  nop
    ctx->pc = 0x14b53cu;
    // NOP
    // 0x14b540: 0xac850058  sw          $a1, 0x58($a0)
    ctx->pc = 0x14b540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
    // 0x14b544: 0x0  nop
    ctx->pc = 0x14b544u;
    // NOP
    ctx->pc = 0x14b548u;
}
