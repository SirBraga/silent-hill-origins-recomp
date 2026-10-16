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

// Function: sub_00228400
// Address: 0x228400 - 0x228478
void sub_00228400_0x228400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228400_0x228400");
#endif

    switch (ctx->pc) {
        case 0x228400u: goto label_228400;
        case 0x228404u: goto label_228404;
        case 0x228408u: goto label_228408;
        case 0x22840cu: goto label_22840c;
        case 0x228410u: goto label_228410;
        case 0x228414u: goto label_228414;
        case 0x228418u: goto label_228418;
        case 0x22841cu: goto label_22841c;
        case 0x228420u: goto label_228420;
        case 0x228424u: goto label_228424;
        case 0x228428u: goto label_228428;
        case 0x22842cu: goto label_22842c;
        case 0x228430u: goto label_228430;
        case 0x228434u: goto label_228434;
        case 0x228438u: goto label_228438;
        case 0x22843cu: goto label_22843c;
        case 0x228440u: goto label_228440;
        case 0x228444u: goto label_228444;
        case 0x228448u: goto label_228448;
        case 0x22844cu: goto label_22844c;
        case 0x228450u: goto label_228450;
        case 0x228454u: goto label_228454;
        case 0x228458u: goto label_228458;
        case 0x22845cu: goto label_22845c;
        case 0x228460u: goto label_228460;
        case 0x228464u: goto label_228464;
        case 0x228468u: goto label_228468;
        case 0x22846cu: goto label_22846c;
        case 0x228470u: goto label_228470;
        case 0x228474u: goto label_228474;
        default: break;
    }

    ctx->pc = 0x228400u;

label_228400:
    // 0x228400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x228400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_228404:
    // 0x228404: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x228404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_228408:
    // 0x228408: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x228408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_22840c:
    // 0x22840c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22840cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228410:
    // 0x228410: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x228410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_228414:
    // 0x228414: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x228414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_228418:
    // 0x228418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22841c:
    // 0x22841c: 0x24510fc8  addiu       $s1, $v0, 0xFC8
    ctx->pc = 0x22841cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_228420:
    // 0x228420: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x228420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228424:
    // 0x228424: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x228424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_228428:
    // 0x228428: 0x40f809  jalr        $v0
label_22842c:
    if (ctx->pc == 0x22842Cu) {
        ctx->pc = 0x22842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228428u;
        // 0x22842c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228430u;
        goto label_228430;
    }
    ctx->pc = 0x228428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228430u);
        ctx->pc = 0x22842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228428u;
        // 0x22842c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228428u, 0x228430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228430u;
label_228430:
    // 0x228430: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_228434:
    if (ctx->pc == 0x228434u) {
        ctx->pc = 0x228434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228430u;
        // 0x228434: 0x8f838e28  lw          $v1, -0x71D8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228438u;
        goto label_228438;
    }
    ctx->pc = 0x228430u;
    {
        const bool branch_taken_0x228430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228430u;
        // 0x228434: 0x8f838e28  lw          $v1, -0x71D8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228430) {
            ctx->pc = 0x228440u;
            goto label_228440;
        }
    }
    ctx->pc = 0x228438u;
label_228438:
    // 0x228438: 0x10000009  b           . + 4 + (0x9 << 2)
label_22843c:
    if (ctx->pc == 0x22843Cu) {
        ctx->pc = 0x22843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228438u;
        // 0x22843c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228440u;
        goto label_228440;
    }
    ctx->pc = 0x228438u;
    {
        const bool branch_taken_0x228438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228438u;
        // 0x22843c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228438) {
            ctx->pc = 0x228460u;
            goto label_228460;
        }
    }
    ctx->pc = 0x228440u;
label_228440:
    // 0x228440: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x228440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_228444:
    // 0x228444: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x228444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_228448:
    // 0x228448: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x228448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_22844c:
    // 0x22844c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22844cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_228450:
    // 0x228450: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x228450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
label_228454:
    // 0x228454: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x228454u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_228458:
    // 0x228458: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x228458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_22845c:
    // 0x22845c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x22845cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_228460:
    // 0x228460: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x228460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_228464:
    // 0x228464: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x228464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_228468:
    // 0x228468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22846c:
    // 0x22846c: 0x3e00008  jr          $ra
label_228470:
    if (ctx->pc == 0x228470u) {
        ctx->pc = 0x228470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22846Cu;
        // 0x228470: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228474u;
        goto label_228474;
    }
    ctx->pc = 0x22846Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22846Cu;
        // 0x228470: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22846Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228474u;
label_228474:
    // 0x228474: 0x0  nop
    ctx->pc = 0x228474u;
    // NOP
    ctx->pc = 0x228478u;
}
