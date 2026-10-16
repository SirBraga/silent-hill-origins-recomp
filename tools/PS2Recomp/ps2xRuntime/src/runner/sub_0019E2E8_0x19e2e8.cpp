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

// Function: sub_0019E2E8
// Address: 0x19e2e8 - 0x19e350
void sub_0019E2E8_0x19e2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E2E8_0x19e2e8");
#endif

    switch (ctx->pc) {
        case 0x19e308u: goto label_19e308;
        case 0x19e314u: goto label_19e314;
        case 0x19e328u: goto label_19e328;
        default: break;
    }

    ctx->pc = 0x19e2e8u;

    // 0x19e2e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19e2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e2ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19e2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e2f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e2f4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x19e2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19e2f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19e2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19e2fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e300: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19E300u;
    SET_GPR_U32(ctx, 31, 0x19E308u);
    ctx->pc = 0x19E304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E300u;
    // 0x19e304: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19E300u, 0x19E308u)) {
        return;
    }
    ctx->pc = 0x19E308u;
label_19e308:
    // 0x19e308: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e30c: 0xc080572  jal         func_2015C8
    ctx->pc = 0x19E30Cu;
    SET_GPR_U32(ctx, 31, 0x19E314u);
    ctx->pc = 0x19E310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E30Cu;
    // 0x19e310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x19E30Cu, 0x19E314u)) {
        return;
    }
    ctx->pc = 0x19E314u;
label_19e314:
    // 0x19e314: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19e314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19e318: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e31c: 0x2463aa18  addiu       $v1, $v1, -0x55E8
    ctx->pc = 0x19e31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945304));
    // 0x19e320: 0xc0b5c3a  jal         func_2D70E8
    ctx->pc = 0x19E320u;
    SET_GPR_U32(ctx, 31, 0x19E328u);
    ctx->pc = 0x19E324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E320u;
    // 0x19e324: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D70E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D70E8u, 0x19E320u, 0x19E328u)) {
        return;
    }
    ctx->pc = 0x19E328u;
label_19e328:
    // 0x19e328: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x19e328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x19e32c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19e32cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e330: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e334: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19e334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e33c: 0x3e00008  jr          $ra
    ctx->pc = 0x19E33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E33Cu;
        // 0x19e340: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E344u;
    // 0x19e344: 0x0  nop
    ctx->pc = 0x19e344u;
    // NOP
    // 0x19e348: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19e348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19e34c: 0x0  nop
    ctx->pc = 0x19e34cu;
    // NOP
    ctx->pc = 0x19e350u;
}
