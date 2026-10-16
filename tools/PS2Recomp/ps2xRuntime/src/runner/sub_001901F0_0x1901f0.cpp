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

// Function: sub_001901F0
// Address: 0x1901f0 - 0x190230
void sub_001901F0_0x1901f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001901F0_0x1901f0");
#endif

    switch (ctx->pc) {
        case 0x19020cu: goto label_19020c;
        case 0x190214u: goto label_190214;
        default: break;
    }

    ctx->pc = 0x1901f0u;

    // 0x1901f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1901f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1901f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1901f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1901f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1901f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1901fc: 0x240400e8  addiu       $a0, $zero, 0xE8
    ctx->pc = 0x1901fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x190200: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190204: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x190204u;
    SET_GPR_U32(ctx, 31, 0x19020Cu);
    ctx->pc = 0x190208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190204u;
    // 0x190208: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x190204u, 0x19020Cu)) {
        return;
    }
    ctx->pc = 0x19020Cu;
label_19020c:
    // 0x19020c: 0xc063286  jal         func_18CA18
    ctx->pc = 0x19020Cu;
    SET_GPR_U32(ctx, 31, 0x190214u);
    ctx->pc = 0x190210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19020Cu;
    // 0x190210: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CA18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18CA18u, 0x19020Cu, 0x190214u)) {
        return;
    }
    ctx->pc = 0x190214u;
label_190214:
    // 0x190214: 0xae028b2c  sw          $v0, -0x74D4($s0)
    ctx->pc = 0x190214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937388), GPR_U32(ctx, 2));
    // 0x190218: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x190218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19021c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19021cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190220: 0x3e00008  jr          $ra
    ctx->pc = 0x190220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190220u;
        // 0x190224: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190228u;
    // 0x190228: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x190228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19022c: 0x0  nop
    ctx->pc = 0x19022cu;
    // NOP
    ctx->pc = 0x190230u;
}
