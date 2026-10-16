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

// Function: sub_00169228
// Address: 0x169228 - 0x169270
void sub_00169228_0x169228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169228_0x169228");
#endif

    switch (ctx->pc) {
        case 0x169244u: goto label_169244;
        case 0x169250u: goto label_169250;
        default: break;
    }

    ctx->pc = 0x169228u;

    // 0x169228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16922c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16922cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169230: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x169230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x169234: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16923c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x16923Cu;
    SET_GPR_U32(ctx, 31, 0x169244u);
    ctx->pc = 0x169240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16923Cu;
    // 0x169240: 0x24040110  addiu       $a0, $zero, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x16923Cu, 0x169244u)) {
        return;
    }
    ctx->pc = 0x169244u;
label_169244:
    // 0x169244: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x169244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169248: 0xc05a49e  jal         func_169278
    ctx->pc = 0x169248u;
    SET_GPR_U32(ctx, 31, 0x169250u);
    ctx->pc = 0x16924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169248u;
    // 0x16924c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x169278u, 0x169248u, 0x169250u)) {
        return;
    }
    ctx->pc = 0x169250u;
label_169250:
    // 0x169250: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x169250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x169254: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x169254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169258: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x169258u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x16925c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16925cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169260: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x169260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169264: 0x3e00008  jr          $ra
    ctx->pc = 0x169264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169264u;
        // 0x169268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16926Cu;
    // 0x16926c: 0x0  nop
    ctx->pc = 0x16926cu;
    // NOP
    ctx->pc = 0x169270u;
}
