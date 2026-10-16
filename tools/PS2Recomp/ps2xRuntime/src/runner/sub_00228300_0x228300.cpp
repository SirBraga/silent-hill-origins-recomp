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

// Function: sub_00228300
// Address: 0x228300 - 0x228340
void sub_00228300_0x228300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228300_0x228300");
#endif

    switch (ctx->pc) {
        case 0x228300u: goto label_228300;
        case 0x228304u: goto label_228304;
        case 0x228308u: goto label_228308;
        case 0x22830cu: goto label_22830c;
        case 0x228310u: goto label_228310;
        case 0x228314u: goto label_228314;
        case 0x228318u: goto label_228318;
        case 0x22831cu: goto label_22831c;
        case 0x228320u: goto label_228320;
        case 0x228324u: goto label_228324;
        case 0x228328u: goto label_228328;
        case 0x22832cu: goto label_22832c;
        case 0x228330u: goto label_228330;
        case 0x228334u: goto label_228334;
        case 0x228338u: goto label_228338;
        case 0x22833cu: goto label_22833c;
        default: break;
    }

    ctx->pc = 0x228300u;

label_228300:
    // 0x228300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x228300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_228304:
    // 0x228304: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x228304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_228308:
    // 0x228308: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x228308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_22830c:
    // 0x22830c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22830cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_228310:
    // 0x228310: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x228310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_228314:
    // 0x228314: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x228314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
label_228318:
    // 0x228318: 0x8c62105c  lw          $v0, 0x105C($v1)
    ctx->pc = 0x228318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4188)));
label_22831c:
    // 0x22831c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x22831cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_228320:
    // 0x228320: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x228320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_228324:
    // 0x228324: 0x40f809  jalr        $v0
label_228328:
    if (ctx->pc == 0x228328u) {
        ctx->pc = 0x228328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228324u;
        // 0x228328: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22832Cu;
        goto label_22832c;
    }
    ctx->pc = 0x228324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22832Cu);
        ctx->pc = 0x228328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228324u;
        // 0x228328: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228324u, 0x22832Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22832Cu;
label_22832c:
    // 0x22832c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22832cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_228330:
    // 0x228330: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x228330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_228334:
    // 0x228334: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x228334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_228338:
    // 0x228338: 0x3e00008  jr          $ra
label_22833c:
    if (ctx->pc == 0x22833Cu) {
        ctx->pc = 0x22833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228338u;
        // 0x22833c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228340u;
        goto label_fallthrough_0x228338;
    }
    ctx->pc = 0x228338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228338u;
        // 0x22833c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x228338:
    ctx->pc = 0x228340u;
}
