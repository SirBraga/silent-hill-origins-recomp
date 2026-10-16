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

// Function: sub_001AA2B8
// Address: 0x1aa2b8 - 0x1aa358
void sub_001AA2B8_0x1aa2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA2B8_0x1aa2b8");
#endif

    switch (ctx->pc) {
        case 0x1aa2b8u: goto label_1aa2b8;
        case 0x1aa2bcu: goto label_1aa2bc;
        case 0x1aa2c0u: goto label_1aa2c0;
        case 0x1aa2c4u: goto label_1aa2c4;
        case 0x1aa2c8u: goto label_1aa2c8;
        case 0x1aa2ccu: goto label_1aa2cc;
        case 0x1aa2d0u: goto label_1aa2d0;
        case 0x1aa2d4u: goto label_1aa2d4;
        case 0x1aa2d8u: goto label_1aa2d8;
        case 0x1aa2dcu: goto label_1aa2dc;
        case 0x1aa2e0u: goto label_1aa2e0;
        case 0x1aa2e4u: goto label_1aa2e4;
        case 0x1aa2e8u: goto label_1aa2e8;
        case 0x1aa2ecu: goto label_1aa2ec;
        case 0x1aa2f0u: goto label_1aa2f0;
        case 0x1aa2f4u: goto label_1aa2f4;
        case 0x1aa2f8u: goto label_1aa2f8;
        case 0x1aa2fcu: goto label_1aa2fc;
        case 0x1aa300u: goto label_1aa300;
        case 0x1aa304u: goto label_1aa304;
        case 0x1aa308u: goto label_1aa308;
        case 0x1aa30cu: goto label_1aa30c;
        case 0x1aa310u: goto label_1aa310;
        case 0x1aa314u: goto label_1aa314;
        case 0x1aa318u: goto label_1aa318;
        case 0x1aa31cu: goto label_1aa31c;
        case 0x1aa320u: goto label_1aa320;
        case 0x1aa324u: goto label_1aa324;
        case 0x1aa328u: goto label_1aa328;
        case 0x1aa32cu: goto label_1aa32c;
        case 0x1aa330u: goto label_1aa330;
        case 0x1aa334u: goto label_1aa334;
        case 0x1aa338u: goto label_1aa338;
        case 0x1aa33cu: goto label_1aa33c;
        case 0x1aa340u: goto label_1aa340;
        case 0x1aa344u: goto label_1aa344;
        case 0x1aa348u: goto label_1aa348;
        case 0x1aa34cu: goto label_1aa34c;
        case 0x1aa350u: goto label_1aa350;
        case 0x1aa354u: goto label_1aa354;
        default: break;
    }

    ctx->pc = 0x1aa2b8u;

label_1aa2b8:
    // 0x1aa2b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1aa2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1aa2bc:
    // 0x1aa2bc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1aa2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1aa2c0:
    // 0x1aa2c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1aa2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1aa2c4:
    // 0x1aa2c4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1aa2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1aa2c8:
    // 0x1aa2c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aa2cc:
    // 0x1aa2cc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1aa2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1aa2d0:
    // 0x1aa2d0: 0x8c9000c8  lw          $s0, 0xC8($a0)
    ctx->pc = 0x1aa2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_1aa2d4:
    // 0x1aa2d4: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_1aa2d8:
    if (ctx->pc == 0x1AA2D8u) {
        ctx->pc = 0x1AA2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2D4u;
        // 0x1aa2d8: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA2DCu;
        goto label_1aa2dc;
    }
    ctx->pc = 0x1AA2D4u;
    {
        const bool branch_taken_0x1aa2d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2D4u;
        // 0x1aa2d8: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa2d4) {
            ctx->pc = 0x1AA33Cu;
            goto label_1aa33c;
        }
    }
    ctx->pc = 0x1AA2DCu;
label_1aa2dc:
    // 0x1aa2dc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1aa2dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa2e0:
    // 0x1aa2e0: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x1aa2e0u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1aa2e4:
    // 0x1aa2e4: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_1aa2e8:
    if (ctx->pc == 0x1AA2E8u) {
        ctx->pc = 0x1AA2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2E4u;
        // 0x1aa2e8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA2ECu;
        goto label_1aa2ec;
    }
    ctx->pc = 0x1AA2E4u;
    {
        const bool branch_taken_0x1aa2e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa2e4) {
            ctx->pc = 0x1AA2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA2E4u;
            // 0x1aa2e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA2ECu;
            goto label_1aa2ec;
        }
    }
    ctx->pc = 0x1AA2ECu;
label_1aa2ec:
    // 0x1aa2ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1aa2ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa2f0:
    // 0x1aa2f0: 0x1012  mflo        $v0
    ctx->pc = 0x1aa2f0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1aa2f4:
    // 0x1aa2f4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_1aa2f8:
    if (ctx->pc == 0x1AA2F8u) {
        ctx->pc = 0x1AA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2F4u;
        // 0x1aa2f8: 0x42980b  movn        $s3, $v0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA2FCu;
        goto label_1aa2fc;
    }
    ctx->pc = 0x1AA2F4u;
    {
        const bool branch_taken_0x1aa2f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2F4u;
        // 0x1aa2f8: 0x42980b  movn        $s3, $v0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa2f4) {
            ctx->pc = 0x1AA33Cu;
            goto label_1aa33c;
        }
    }
    ctx->pc = 0x1AA2FCu;
label_1aa2fc:
    // 0x1aa2fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aa2fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aa300:
    // 0x1aa300: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1aa300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1aa304:
    // 0x1aa304: 0x50c0000a  beql        $a2, $zero, . + 4 + (0xA << 2)
label_1aa308:
    if (ctx->pc == 0x1AA308u) {
        ctx->pc = 0x1AA308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA304u;
        // 0x1aa308: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA30Cu;
        goto label_1aa30c;
    }
    ctx->pc = 0x1AA304u;
    {
        const bool branch_taken_0x1aa304 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa304) {
            ctx->pc = 0x1AA308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA304u;
            // 0x1aa308: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA330u;
            goto label_1aa330;
        }
    }
    ctx->pc = 0x1AA30Cu;
label_1aa30c:
    // 0x1aa30c: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x1aa30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_1aa310:
    // 0x1aa310: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1aa314:
    if (ctx->pc == 0x1AA314u) {
        ctx->pc = 0x1AA314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA310u;
        // 0x1aa314: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA318u;
        goto label_1aa318;
    }
    ctx->pc = 0x1AA310u;
    {
        const bool branch_taken_0x1aa310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA310u;
        // 0x1aa314: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa310) {
            ctx->pc = 0x1AA32Cu;
            goto label_1aa32c;
        }
    }
    ctx->pc = 0x1AA318u;
label_1aa318:
    // 0x1aa318: 0x8cc20050  lw          $v0, 0x50($a2)
    ctx->pc = 0x1aa318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
label_1aa31c:
    // 0x1aa31c: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1aa31cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_1aa320:
    // 0x1aa320: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1aa320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1aa324:
    // 0x1aa324: 0x60f809  jalr        $v1
label_1aa328:
    if (ctx->pc == 0x1AA328u) {
        ctx->pc = 0x1AA328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA324u;
        // 0x1aa328: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA32Cu;
        goto label_1aa32c;
    }
    ctx->pc = 0x1AA324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AA32Cu);
        ctx->pc = 0x1AA328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA324u;
        // 0x1aa328: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA324u, 0x1AA32Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA32Cu;
label_1aa32c:
    // 0x1aa32c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1aa32cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1aa330:
    // 0x1aa330: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x1aa330u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1aa334:
    // 0x1aa334: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1aa338:
    if (ctx->pc == 0x1AA338u) {
        ctx->pc = 0x1AA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA334u;
        // 0x1aa338: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA33Cu;
        goto label_1aa33c;
    }
    ctx->pc = 0x1AA334u;
    {
        const bool branch_taken_0x1aa334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA334u;
        // 0x1aa338: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa334) {
            ctx->pc = 0x1AA300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa300;
        }
    }
    ctx->pc = 0x1AA33Cu;
label_1aa33c:
    // 0x1aa33c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1aa33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1aa340:
    // 0x1aa340: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1aa340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa344:
    // 0x1aa344: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1aa344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1aa348:
    // 0x1aa348: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1aa348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1aa34c:
    // 0x1aa34c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa350:
    // 0x1aa350: 0x3e00008  jr          $ra
label_1aa354:
    if (ctx->pc == 0x1AA354u) {
        ctx->pc = 0x1AA354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA350u;
        // 0x1aa354: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA358u;
        goto label_fallthrough_0x1aa350;
    }
    ctx->pc = 0x1AA350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA350u;
        // 0x1aa354: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1aa350:
    ctx->pc = 0x1AA358u;
}
