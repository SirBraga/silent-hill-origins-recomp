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

// Function: sub_001B9308
// Address: 0x1b9308 - 0x1b9368
void sub_001B9308_0x1b9308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9308_0x1b9308");
#endif

    switch (ctx->pc) {
        case 0x1b9308u: goto label_1b9308;
        case 0x1b930cu: goto label_1b930c;
        case 0x1b9310u: goto label_1b9310;
        case 0x1b9314u: goto label_1b9314;
        case 0x1b9318u: goto label_1b9318;
        case 0x1b931cu: goto label_1b931c;
        case 0x1b9320u: goto label_1b9320;
        case 0x1b9324u: goto label_1b9324;
        case 0x1b9328u: goto label_1b9328;
        case 0x1b932cu: goto label_1b932c;
        case 0x1b9330u: goto label_1b9330;
        case 0x1b9334u: goto label_1b9334;
        case 0x1b9338u: goto label_1b9338;
        case 0x1b933cu: goto label_1b933c;
        case 0x1b9340u: goto label_1b9340;
        case 0x1b9344u: goto label_1b9344;
        case 0x1b9348u: goto label_1b9348;
        case 0x1b934cu: goto label_1b934c;
        case 0x1b9350u: goto label_1b9350;
        case 0x1b9354u: goto label_1b9354;
        case 0x1b9358u: goto label_1b9358;
        case 0x1b935cu: goto label_1b935c;
        case 0x1b9360u: goto label_1b9360;
        case 0x1b9364u: goto label_1b9364;
        default: break;
    }

    ctx->pc = 0x1b9308u;

label_1b9308:
    // 0x1b9308: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b930c:
    // 0x1b930c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b930cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1b9310:
    // 0x1b9310: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b9310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b9314:
    // 0x1b9314: 0x24a5ce50  addiu       $a1, $a1, -0x31B0
    ctx->pc = 0x1b9314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954576));
label_1b9318:
    // 0x1b9318: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b9318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b931c:
    // 0x1b931c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b931cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b9320:
    // 0x1b9320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b9324:
    // 0x1b9324: 0x261102b0  addiu       $s1, $s0, 0x2B0
    ctx->pc = 0x1b9324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
label_1b9328:
    // 0x1b9328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b9328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b932c:
    // 0x1b932c: 0x8e060264  lw          $a2, 0x264($s0)
    ctx->pc = 0x1b932cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1b9330:
    // 0x1b9330: 0xc0c5380  jal         func_314E00
label_1b9334:
    if (ctx->pc == 0x1B9334u) {
        ctx->pc = 0x1B9334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9330u;
        // 0x1b9334: 0x8e070260  lw          $a3, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9338u;
        goto label_1b9338;
    }
    ctx->pc = 0x1B9330u;
    SET_GPR_U32(ctx, 31, 0x1B9338u);
    ctx->pc = 0x1B9334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9330u;
    // 0x1b9334: 0x8e070260  lw          $a3, 0x260($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314E00u, 0x1B9330u, 0x1B9338u)) {
        return;
    }
    ctx->pc = 0x1B9338u;
label_1b9338:
    // 0x1b9338: 0x8e06029c  lw          $a2, 0x29C($s0)
    ctx->pc = 0x1b9338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
label_1b933c:
    // 0x1b933c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b933cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b9340:
    // 0x1b9340: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b9340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b9344:
    // 0x1b9344: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1b9344u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1b9348:
    // 0x1b9348: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1b9348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1b934c:
    // 0x1b934c: 0x60f809  jalr        $v1
label_1b9350:
    if (ctx->pc == 0x1B9350u) {
        ctx->pc = 0x1B9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B934Cu;
        // 0x1b9350: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9354u;
        goto label_1b9354;
    }
    ctx->pc = 0x1B934Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B9354u);
        ctx->pc = 0x1B9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B934Cu;
        // 0x1b9350: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B934Cu, 0x1B9354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9354u;
label_1b9354:
    // 0x1b9354: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b9354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b9358:
    // 0x1b9358: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b9358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b935c:
    // 0x1b935c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b935cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b9360:
    // 0x1b9360: 0x3e00008  jr          $ra
label_1b9364:
    if (ctx->pc == 0x1B9364u) {
        ctx->pc = 0x1B9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9360u;
        // 0x1b9364: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9368u;
        goto label_fallthrough_0x1b9360;
    }
    ctx->pc = 0x1B9360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9360u;
        // 0x1b9364: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b9360:
    ctx->pc = 0x1B9368u;
}
