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

// Function: sub_00205CE0
// Address: 0x205ce0 - 0x205d50
void sub_00205CE0_0x205ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205CE0_0x205ce0");
#endif

    switch (ctx->pc) {
        case 0x205d0cu: goto label_205d0c;
        case 0x205d14u: goto label_205d14;
        case 0x205d20u: goto label_205d20;
        case 0x205d30u: goto label_205d30;
        default: break;
    }

    ctx->pc = 0x205ce0u;

    // 0x205ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x205ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x205ce4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x205ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x205ce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x205ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x205cec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x205cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205cf0: 0x3c11005c  lui         $s1, 0x5C
    ctx->pc = 0x205cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)92 << 16));
    // 0x205cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x205cf8: 0x8e24028c  lw          $a0, 0x28C($s1)
    ctx->pc = 0x205cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5C028Cu));
    // 0x205cfc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205CFCu;
    {
        const bool branch_taken_0x205cfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x205cfc) {
            ctx->pc = 0x205D0Cu;
            goto label_205d0c;
        }
    }
    ctx->pc = 0x205D04u;
    // 0x205d04: 0xc0808d4  jal         func_202350
    ctx->pc = 0x205D04u;
    SET_GPR_U32(ctx, 31, 0x205D0Cu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x205D04u, 0x205D0Cu)) {
        return;
    }
    ctx->pc = 0x205D0Cu;
label_205d0c:
    // 0x205d0c: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x205D0Cu;
    SET_GPR_U32(ctx, 31, 0x205D14u);
    ctx->pc = 0x205D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205D0Cu;
    // 0x205d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x205D0Cu, 0x205D14u)) {
        return;
    }
    ctx->pc = 0x205D14u;
label_205d14:
    // 0x205d14: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x205d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x205d18: 0xc080924  jal         func_202490
    ctx->pc = 0x205D18u;
    SET_GPR_U32(ctx, 31, 0x205D20u);
    ctx->pc = 0x205D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205D18u;
    // 0x205d1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x205D18u, 0x205D20u)) {
        return;
    }
    ctx->pc = 0x205D20u;
label_205d20:
    // 0x205d20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x205d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205d24: 0xae22028c  sw          $v0, 0x28C($s1)
    ctx->pc = 0x205d24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 652), GPR_U32(ctx, 2));
    // 0x205d28: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x205D28u;
    SET_GPR_U32(ctx, 31, 0x205D30u);
    ctx->pc = 0x205D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205D28u;
    // 0x205d2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x205D28u, 0x205D30u)) {
        return;
    }
    ctx->pc = 0x205D30u;
label_205d30:
    // 0x205d30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x205d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205d34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x205d34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x205D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D3Cu;
        // 0x205d40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205D44u;
    // 0x205d44: 0x0  nop
    ctx->pc = 0x205d44u;
    // NOP
    // 0x205d48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x205d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x205d4c: 0x0  nop
    ctx->pc = 0x205d4cu;
    // NOP
    ctx->pc = 0x205d50u;
}
