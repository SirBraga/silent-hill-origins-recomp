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

// Function: sub_0022D2A8
// Address: 0x22d2a8 - 0x22d348
void sub_0022D2A8_0x22d2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D2A8_0x22d2a8");
#endif

    switch (ctx->pc) {
        case 0x22d2a8u: goto label_22d2a8;
        case 0x22d2acu: goto label_22d2ac;
        case 0x22d2b0u: goto label_22d2b0;
        case 0x22d2b4u: goto label_22d2b4;
        case 0x22d2b8u: goto label_22d2b8;
        case 0x22d2bcu: goto label_22d2bc;
        case 0x22d2c0u: goto label_22d2c0;
        case 0x22d2c4u: goto label_22d2c4;
        case 0x22d2c8u: goto label_22d2c8;
        case 0x22d2ccu: goto label_22d2cc;
        case 0x22d2d0u: goto label_22d2d0;
        case 0x22d2d4u: goto label_22d2d4;
        case 0x22d2d8u: goto label_22d2d8;
        case 0x22d2dcu: goto label_22d2dc;
        case 0x22d2e0u: goto label_22d2e0;
        case 0x22d2e4u: goto label_22d2e4;
        case 0x22d2e8u: goto label_22d2e8;
        case 0x22d2ecu: goto label_22d2ec;
        case 0x22d2f0u: goto label_22d2f0;
        case 0x22d2f4u: goto label_22d2f4;
        case 0x22d2f8u: goto label_22d2f8;
        case 0x22d2fcu: goto label_22d2fc;
        case 0x22d300u: goto label_22d300;
        case 0x22d304u: goto label_22d304;
        case 0x22d308u: goto label_22d308;
        case 0x22d30cu: goto label_22d30c;
        case 0x22d310u: goto label_22d310;
        case 0x22d314u: goto label_22d314;
        case 0x22d318u: goto label_22d318;
        case 0x22d31cu: goto label_22d31c;
        case 0x22d320u: goto label_22d320;
        case 0x22d324u: goto label_22d324;
        case 0x22d328u: goto label_22d328;
        case 0x22d32cu: goto label_22d32c;
        case 0x22d330u: goto label_22d330;
        case 0x22d334u: goto label_22d334;
        case 0x22d338u: goto label_22d338;
        case 0x22d33cu: goto label_22d33c;
        case 0x22d340u: goto label_22d340;
        case 0x22d344u: goto label_22d344;
        default: break;
    }

    ctx->pc = 0x22d2a8u;

label_22d2a8:
    // 0x22d2a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22d2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_22d2ac:
    // 0x22d2ac: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x22d2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_22d2b0:
    // 0x22d2b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22d2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22d2b4:
    // 0x22d2b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22d2b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22d2b8:
    // 0x22d2b8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x22d2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_22d2bc:
    // 0x22d2bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22d2bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22d2c0:
    // 0x22d2c0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x22d2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_22d2c4:
    // 0x22d2c4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x22d2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_22d2c8:
    // 0x22d2c8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x22d2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_22d2cc:
    // 0x22d2cc: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
label_22d2d0:
    if (ctx->pc == 0x22D2D0u) {
        ctx->pc = 0x22D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2CCu;
        // 0x22d2d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D2D4u;
        goto label_22d2d4;
    }
    ctx->pc = 0x22D2CCu;
    {
        const bool branch_taken_0x22d2cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2CCu;
        // 0x22d2d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d2cc) {
            ctx->pc = 0x22D320u;
            goto label_22d320;
        }
    }
    ctx->pc = 0x22D2D4u;
label_22d2d4:
    // 0x22d2d4: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
label_22d2d8:
    if (ctx->pc == 0x22D2D8u) {
        ctx->pc = 0x22D2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2D4u;
        // 0x22d2d8: 0x3c150073  lui         $s5, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D2DCu;
        goto label_22d2dc;
    }
    ctx->pc = 0x22D2D4u;
    {
        const bool branch_taken_0x22d2d4 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x22D2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2D4u;
        // 0x22d2d8: 0x3c150073  lui         $s5, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d2d4) {
            ctx->pc = 0x22D30Cu;
            goto label_22d30c;
        }
    }
    ctx->pc = 0x22D2DCu;
label_22d2dc:
    // 0x22d2dc: 0x24d4ffff  addiu       $s4, $a2, -0x1
    ctx->pc = 0x22d2dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_22d2e0:
    // 0x22d2e0: 0x2670001c  addiu       $s0, $s3, 0x1C
    ctx->pc = 0x22d2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
label_22d2e4:
    // 0x22d2e4: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x22d2e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_22d2e8:
    // 0x22d2e8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22d2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22d2ec:
    // 0x22d2ec: 0x0  nop
    ctx->pc = 0x22d2ecu;
    // NOP
label_22d2f0:
    // 0x22d2f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22d2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22d2f4:
    // 0x22d2f4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x22d2f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22d2f8:
    // 0x22d2f8: 0xc08b4aa  jal         func_22D2A8
label_22d2fc:
    if (ctx->pc == 0x22D2FCu) {
        ctx->pc = 0x22D2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2F8u;
        // 0x22d2fc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D300u;
        goto label_22d300;
    }
    ctx->pc = 0x22D2F8u;
    SET_GPR_U32(ctx, 31, 0x22D300u);
    ctx->pc = 0x22D2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D2F8u;
    // 0x22d2fc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D2A8u;
    goto label_22d2a8;
    ctx->pc = 0x22D300u;
label_22d300:
    // 0x22d300: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22d300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_22d304:
    // 0x22d304: 0x623fffa  bgezl       $s1, . + 4 + (-0x6 << 2)
label_22d308:
    if (ctx->pc == 0x22D308u) {
        ctx->pc = 0x22D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D304u;
        // 0x22d308: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D30Cu;
        goto label_22d30c;
    }
    ctx->pc = 0x22D304u;
    {
        const bool branch_taken_0x22d304 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x22d304) {
            ctx->pc = 0x22D308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D304u;
            // 0x22d308: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d2f0;
        }
    }
    ctx->pc = 0x22D30Cu;
label_22d30c:
    // 0x22d30c: 0x26a30fc8  addiu       $v1, $s5, 0xFC8
    ctx->pc = 0x22d30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4040));
label_22d310:
    // 0x22d310: 0x8e444004  lw          $a0, 0x4004($s2)
    ctx->pc = 0x22d310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16388)));
label_22d314:
    // 0x22d314: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x22d314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_22d318:
    // 0x22d318: 0x40f809  jalr        $v0
label_22d31c:
    if (ctx->pc == 0x22D31Cu) {
        ctx->pc = 0x22D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D318u;
        // 0x22d31c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D320u;
        goto label_22d320;
    }
    ctx->pc = 0x22D318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22D320u);
        ctx->pc = 0x22D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D318u;
        // 0x22d31c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D318u, 0x22D320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D320u;
label_22d320:
    // 0x22d320: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x22d320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_22d324:
    // 0x22d324: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x22d324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22d328:
    // 0x22d328: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x22d328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22d32c:
    // 0x22d32c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22d32cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22d330:
    // 0x22d330: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x22d330u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22d334:
    // 0x22d334: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x22d334u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22d338:
    // 0x22d338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22d33c:
    // 0x22d33c: 0x3e00008  jr          $ra
label_22d340:
    if (ctx->pc == 0x22D340u) {
        ctx->pc = 0x22D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D33Cu;
        // 0x22d340: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D344u;
        goto label_22d344;
    }
    ctx->pc = 0x22D33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D33Cu;
        // 0x22d340: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D344u;
label_22d344:
    // 0x22d344: 0x0  nop
    ctx->pc = 0x22d344u;
    // NOP
    ctx->pc = 0x22d348u;
}
