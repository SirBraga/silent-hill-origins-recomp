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

// Function: sub_002EF3F0
// Address: 0x2ef3f0 - 0x2ef478
void sub_002EF3F0_0x2ef3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF3F0_0x2ef3f0");
#endif

    switch (ctx->pc) {
        case 0x2ef3f0u: goto label_2ef3f0;
        case 0x2ef3f4u: goto label_2ef3f4;
        case 0x2ef3f8u: goto label_2ef3f8;
        case 0x2ef3fcu: goto label_2ef3fc;
        case 0x2ef400u: goto label_2ef400;
        case 0x2ef404u: goto label_2ef404;
        case 0x2ef408u: goto label_2ef408;
        case 0x2ef40cu: goto label_2ef40c;
        case 0x2ef410u: goto label_2ef410;
        case 0x2ef414u: goto label_2ef414;
        case 0x2ef418u: goto label_2ef418;
        case 0x2ef41cu: goto label_2ef41c;
        case 0x2ef420u: goto label_2ef420;
        case 0x2ef424u: goto label_2ef424;
        case 0x2ef428u: goto label_2ef428;
        case 0x2ef42cu: goto label_2ef42c;
        case 0x2ef430u: goto label_2ef430;
        case 0x2ef434u: goto label_2ef434;
        case 0x2ef438u: goto label_2ef438;
        case 0x2ef43cu: goto label_2ef43c;
        case 0x2ef440u: goto label_2ef440;
        case 0x2ef444u: goto label_2ef444;
        case 0x2ef448u: goto label_2ef448;
        case 0x2ef44cu: goto label_2ef44c;
        case 0x2ef450u: goto label_2ef450;
        case 0x2ef454u: goto label_2ef454;
        case 0x2ef458u: goto label_2ef458;
        case 0x2ef45cu: goto label_2ef45c;
        case 0x2ef460u: goto label_2ef460;
        case 0x2ef464u: goto label_2ef464;
        case 0x2ef468u: goto label_2ef468;
        case 0x2ef46cu: goto label_2ef46c;
        case 0x2ef470u: goto label_2ef470;
        case 0x2ef474u: goto label_2ef474;
        default: break;
    }

    ctx->pc = 0x2ef3f0u;

label_2ef3f0:
    // 0x2ef3f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ef3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ef3f4:
    // 0x2ef3f4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2ef3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2ef3f8:
    // 0x2ef3f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ef3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ef3fc:
    // 0x2ef3fc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2ef3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2ef400:
    // 0x2ef400: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ef400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ef404:
    // 0x2ef404: 0x8c6210e0  lw          $v0, 0x10E0($v1)
    ctx->pc = 0x2ef404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4320)));
label_2ef408:
    // 0x2ef408: 0x8f8490ac  lw          $a0, -0x6F54($gp)
    ctx->pc = 0x2ef408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938796)));
label_2ef40c:
    // 0x2ef40c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ef40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2ef410:
    // 0x2ef410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ef410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ef414:
    // 0x2ef414: 0x40f809  jalr        $v0
label_2ef418:
    if (ctx->pc == 0x2EF418u) {
        ctx->pc = 0x2EF418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF414u;
        // 0x2ef418: 0x34a50135  ori         $a1, $a1, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)309);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF41Cu;
        goto label_2ef41c;
    }
    ctx->pc = 0x2EF414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EF41Cu);
        ctx->pc = 0x2EF418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF414u;
        // 0x2ef418: 0x34a50135  ori         $a1, $a1, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)309);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF414u, 0x2EF41Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF41Cu;
label_2ef41c:
    // 0x2ef41c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ef41cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ef420:
    // 0x2ef420: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_2ef424:
    if (ctx->pc == 0x2EF424u) {
        ctx->pc = 0x2EF424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF420u;
        // 0x2ef424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF428u;
        goto label_2ef428;
    }
    ctx->pc = 0x2EF420u;
    {
        const bool branch_taken_0x2ef420 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF420u;
        // 0x2ef424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef420) {
            ctx->pc = 0x2EF45Cu;
            goto label_2ef45c;
        }
    }
    ctx->pc = 0x2EF428u;
label_2ef428:
    // 0x2ef428: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ef428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ef42c:
    // 0x2ef42c: 0xc093546  jal         func_24D518
label_2ef430:
    if (ctx->pc == 0x2EF430u) {
        ctx->pc = 0x2EF430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF42Cu;
        // 0x2ef430: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF434u;
        goto label_2ef434;
    }
    ctx->pc = 0x2EF42Cu;
    SET_GPR_U32(ctx, 31, 0x2EF434u);
    ctx->pc = 0x2EF430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF42Cu;
    // 0x2ef430: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x2EF42Cu, 0x2EF434u)) {
        return;
    }
    ctx->pc = 0x2EF434u;
label_2ef434:
    // 0x2ef434: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2ef438:
    if (ctx->pc == 0x2EF438u) {
        ctx->pc = 0x2EF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF434u;
        // 0x2ef438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF43Cu;
        goto label_2ef43c;
    }
    ctx->pc = 0x2EF434u;
    {
        const bool branch_taken_0x2ef434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF434u;
        // 0x2ef438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef434) {
            ctx->pc = 0x2EF45Cu;
            goto label_2ef45c;
        }
    }
    ctx->pc = 0x2EF43Cu;
label_2ef43c:
    // 0x2ef43c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2ef43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2ef440:
    // 0x2ef440: 0xc0927be  jal         func_249EF8
label_2ef444:
    if (ctx->pc == 0x2EF444u) {
        ctx->pc = 0x2EF444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF440u;
        // 0x2ef444: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF448u;
        goto label_2ef448;
    }
    ctx->pc = 0x2EF440u;
    SET_GPR_U32(ctx, 31, 0x2EF448u);
    ctx->pc = 0x2EF444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF440u;
    // 0x2ef444: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x2EF440u, 0x2EF448u)) {
        return;
    }
    ctx->pc = 0x2EF448u;
label_2ef448:
    // 0x2ef448: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2ef44c:
    if (ctx->pc == 0x2EF44Cu) {
        ctx->pc = 0x2EF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF448u;
        // 0x2ef44c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF450u;
        goto label_2ef450;
    }
    ctx->pc = 0x2EF448u;
    {
        const bool branch_taken_0x2ef448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF448u;
        // 0x2ef44c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef448) {
            ctx->pc = 0x2EF45Cu;
            goto label_2ef45c;
        }
    }
    ctx->pc = 0x2EF450u;
label_2ef450:
    // 0x2ef450: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ef450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ef454:
    // 0x2ef454: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ef458:
    if (ctx->pc == 0x2EF458u) {
        ctx->pc = 0x2EF458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF454u;
        // 0x2ef458: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF45Cu;
        goto label_2ef45c;
    }
    ctx->pc = 0x2EF454u;
    {
        const bool branch_taken_0x2ef454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF454u;
        // 0x2ef458: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef454) {
            ctx->pc = 0x2EF460u;
            goto label_2ef460;
        }
    }
    ctx->pc = 0x2EF45Cu;
label_2ef45c:
    // 0x2ef45c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ef45cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef460:
    // 0x2ef460: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ef460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ef464:
    // 0x2ef464: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ef464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ef468:
    // 0x2ef468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ef468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef46c:
    // 0x2ef46c: 0x3e00008  jr          $ra
label_2ef470:
    if (ctx->pc == 0x2EF470u) {
        ctx->pc = 0x2EF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF46Cu;
        // 0x2ef470: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF474u;
        goto label_2ef474;
    }
    ctx->pc = 0x2EF46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF46Cu;
        // 0x2ef470: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF474u;
label_2ef474:
    // 0x2ef474: 0x0  nop
    ctx->pc = 0x2ef474u;
    // NOP
    ctx->pc = 0x2ef478u;
}
