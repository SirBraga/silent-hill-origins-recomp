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

// Function: sub_002284F8
// Address: 0x2284f8 - 0x228568
void sub_002284F8_0x2284f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002284F8_0x2284f8");
#endif

    switch (ctx->pc) {
        case 0x2284f8u: goto label_2284f8;
        case 0x2284fcu: goto label_2284fc;
        case 0x228500u: goto label_228500;
        case 0x228504u: goto label_228504;
        case 0x228508u: goto label_228508;
        case 0x22850cu: goto label_22850c;
        case 0x228510u: goto label_228510;
        case 0x228514u: goto label_228514;
        case 0x228518u: goto label_228518;
        case 0x22851cu: goto label_22851c;
        case 0x228520u: goto label_228520;
        case 0x228524u: goto label_228524;
        case 0x228528u: goto label_228528;
        case 0x22852cu: goto label_22852c;
        case 0x228530u: goto label_228530;
        case 0x228534u: goto label_228534;
        case 0x228538u: goto label_228538;
        case 0x22853cu: goto label_22853c;
        case 0x228540u: goto label_228540;
        case 0x228544u: goto label_228544;
        case 0x228548u: goto label_228548;
        case 0x22854cu: goto label_22854c;
        case 0x228550u: goto label_228550;
        case 0x228554u: goto label_228554;
        case 0x228558u: goto label_228558;
        case 0x22855cu: goto label_22855c;
        case 0x228560u: goto label_228560;
        case 0x228564u: goto label_228564;
        default: break;
    }

    ctx->pc = 0x2284f8u;

label_2284f8:
    // 0x2284f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2284f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2284fc:
    // 0x2284fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2284fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_228500:
    // 0x228500: 0x8c633e98  lw          $v1, 0x3E98($v1)
    ctx->pc = 0x228500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16024)));
label_228504:
    // 0x228504: 0x3c080073  lui         $t0, 0x73
    ctx->pc = 0x228504u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
label_228508:
    // 0x228508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22850c:
    // 0x22850c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22850cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_228510:
    // 0x228510: 0x25080fc8  addiu       $t0, $t0, 0xFC8
    ctx->pc = 0x228510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4040));
label_228514:
    // 0x228514: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x228514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_228518:
    // 0x228518: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x228518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22851c:
    // 0x22851c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x22851cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_228520:
    // 0x228520: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x228520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228524:
    // 0x228524: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x228524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_228528:
    // 0x228528: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x228528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22852c:
    // 0x22852c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x22852cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_228530:
    // 0x228530: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x228530u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_228534:
    // 0x228534: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x228534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_228538:
    // 0x228538: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x228538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_22853c:
    // 0x22853c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22853cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_228540:
    // 0x228540: 0x8d020074  lw          $v0, 0x74($t0)
    ctx->pc = 0x228540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
label_228544:
    // 0x228544: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x228544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_228548:
    // 0x228548: 0x40f809  jalr        $v0
label_22854c:
    if (ctx->pc == 0x22854Cu) {
        ctx->pc = 0x22854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228548u;
        // 0x22854c: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228550u;
        goto label_228550;
    }
    ctx->pc = 0x228548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228550u);
        ctx->pc = 0x22854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228548u;
        // 0x22854c: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228548u, 0x228550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228550u;
label_228550:
    // 0x228550: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x228550u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_228554:
    // 0x228554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_228558:
    // 0x228558: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x228558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22855c:
    // 0x22855c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22855cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_228560:
    // 0x228560: 0x3e00008  jr          $ra
label_228564:
    if (ctx->pc == 0x228564u) {
        ctx->pc = 0x228564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228560u;
        // 0x228564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228568u;
        goto label_fallthrough_0x228560;
    }
    ctx->pc = 0x228560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228560u;
        // 0x228564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x228560:
    ctx->pc = 0x228568u;
}
