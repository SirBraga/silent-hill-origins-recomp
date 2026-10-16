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

// Function: sub_0016B310
// Address: 0x16b310 - 0x16b358
void sub_0016B310_0x16b310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B310_0x16b310");
#endif

    switch (ctx->pc) {
        case 0x16b32cu: goto label_16b32c;
        case 0x16b338u: goto label_16b338;
        default: break;
    }

    ctx->pc = 0x16b310u;

    // 0x16b310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b314: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16b314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b318: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16b318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16b31c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16b31cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b324: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x16B324u;
    SET_GPR_U32(ctx, 31, 0x16B32Cu);
    ctx->pc = 0x16B328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B324u;
    // 0x16b328: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x16B324u, 0x16B32Cu)) {
        return;
    }
    ctx->pc = 0x16B32Cu;
label_16b32c:
    // 0x16b32c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b330: 0xc05acd6  jal         func_16B358
    ctx->pc = 0x16B330u;
    SET_GPR_U32(ctx, 31, 0x16B338u);
    ctx->pc = 0x16B334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B330u;
    // 0x16b334: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16B358u, 0x16B330u, 0x16B338u)) {
        return;
    }
    ctx->pc = 0x16B338u;
label_16b338:
    // 0x16b338: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x16b338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16b33c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16b33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b340: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x16b340u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x16b344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b348: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16b348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b34c: 0x3e00008  jr          $ra
    ctx->pc = 0x16B34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B34Cu;
        // 0x16b350: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B354u;
    // 0x16b354: 0x0  nop
    ctx->pc = 0x16b354u;
    // NOP
    ctx->pc = 0x16b358u;
}
