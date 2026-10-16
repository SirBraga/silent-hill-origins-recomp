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

// Function: sub_002E12F0
// Address: 0x2e12f0 - 0x2e13c0
void sub_002E12F0_0x2e12f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E12F0_0x2e12f0");
#endif

    switch (ctx->pc) {
        case 0x2e1320u: goto label_2e1320;
        case 0x2e1338u: goto label_2e1338;
        case 0x2e1354u: goto label_2e1354;
        case 0x2e1398u: goto label_2e1398;
        default: break;
    }

    ctx->pc = 0x2e12f0u;

    // 0x2e12f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e12f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e12f4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2e12f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2e12f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e12f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e12fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e12fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1300: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2e1300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2e1304: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e1304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1308: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2e1308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2e130c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e130cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1310: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2e1310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2e1314: 0x2634000c  addiu       $s4, $s1, 0xC
    ctx->pc = 0x2e1314u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2e1318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e131c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2e131cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2e1320:
    // 0x2e1320: 0x10940008  beq         $a0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E1320u;
    {
        const bool branch_taken_0x2e1320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        if (branch_taken_0x2e1320) {
            ctx->pc = 0x2E1344u;
            goto label_2e1344;
        }
    }
    ctx->pc = 0x2E1328u;
    // 0x2e1328: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e1328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e132c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x2e132cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2e1330: 0xc0b852c  jal         func_2E14B0
    ctx->pc = 0x2E1330u;
    SET_GPR_U32(ctx, 31, 0x2E1338u);
    ctx->pc = 0x2E1334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1330u;
    // 0x2e1334: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E14B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E14B0u, 0x2E1330u, 0x2E1338u)) {
        return;
    }
    ctx->pc = 0x2E1338u;
label_2e1338:
    // 0x2e1338: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e1338u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e133c: 0x1240fff8  beqz        $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2E133Cu;
    {
        const bool branch_taken_0x2e133c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E133Cu;
        // 0x2e1340: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e133c) {
            ctx->pc = 0x2E1320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1320;
        }
    }
    ctx->pc = 0x2E1344u;
label_2e1344:
    // 0x2e1344: 0x16400016  bnez        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E1344u;
    {
        const bool branch_taken_0x2e1344 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1344u;
        // 0x2e1348: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1344) {
            ctx->pc = 0x2E13A0u;
            goto label_2e13a0;
        }
    }
    ctx->pc = 0x2E134Cu;
    // 0x2e134c: 0xc0b8574  jal         func_2E15D0
    ctx->pc = 0x2E134Cu;
    SET_GPR_U32(ctx, 31, 0x2E1354u);
    ctx->pc = 0x2E1350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E134Cu;
    // 0x2e1350: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E15D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E15D0u, 0x2E134Cu, 0x2E1354u)) {
        return;
    }
    ctx->pc = 0x2E1354u;
label_2e1354:
    // 0x2e1354: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e1354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1358: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1358u;
    {
        const bool branch_taken_0x2e1358 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1358) {
            ctx->pc = 0x2E135Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1358u;
            // 0x2e135c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1368u;
            goto label_2e1368;
        }
    }
    ctx->pc = 0x2E1360u;
    // 0x2e1360: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E1360u;
    {
        const bool branch_taken_0x2e1360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1360u;
        // 0x2e1364: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1360) {
            ctx->pc = 0x2E1384u;
            goto label_2e1384;
        }
    }
    ctx->pc = 0x2E1368u;
label_2e1368:
    // 0x2e1368: 0x2623000c  addiu       $v1, $s1, 0xC
    ctx->pc = 0x2e1368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2e136c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2e136cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2e1370: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e1370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1374: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2e1374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2e1378: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2e1378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e137c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2e137cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2e1380: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x2e1380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
label_2e1384:
    // 0x2e1384: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1384u;
    {
        const bool branch_taken_0x2e1384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1384u;
        // 0x2e1388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1384) {
            ctx->pc = 0x2E139Cu;
            goto label_2e139c;
        }
    }
    ctx->pc = 0x2E138Cu;
    // 0x2e138c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x2e138cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2e1390: 0xc0b852c  jal         func_2E14B0
    ctx->pc = 0x2E1390u;
    SET_GPR_U32(ctx, 31, 0x2E1398u);
    ctx->pc = 0x2E1394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1390u;
    // 0x2e1394: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E14B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E14B0u, 0x2E1390u, 0x2E1398u)) {
        return;
    }
    ctx->pc = 0x2E1398u;
label_2e1398:
    // 0x2e1398: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e1398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e139c:
    // 0x2e139c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2e139cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e13a0:
    // 0x2e13a0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2e13a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e13a4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2e13a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e13a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e13a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e13ac: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2e13acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e13b0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2e13b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e13b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e13b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e13b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E13B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E13BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E13B8u;
        // 0x2e13bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E13B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E13C0u;
}
