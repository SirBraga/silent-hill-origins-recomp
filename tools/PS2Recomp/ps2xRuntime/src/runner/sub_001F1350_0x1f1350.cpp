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

// Function: sub_001F1350
// Address: 0x1f1350 - 0x1f1478
void sub_001F1350_0x1f1350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1350_0x1f1350");
#endif

    switch (ctx->pc) {
        case 0x1f1388u: goto label_1f1388;
        case 0x1f13e8u: goto label_1f13e8;
        case 0x1f1434u: goto label_1f1434;
        default: break;
    }

    ctx->pc = 0x1f1350u;

    // 0x1f1350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f1350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f1354: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f1354u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1358: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f1358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f135c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1f135cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1f1360: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f1360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1364: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f1364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f1368: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f1368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f136c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f136cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f1370: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1f1370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f1374: 0x18c00038  blez        $a2, . + 4 + (0x38 << 2)
    ctx->pc = 0x1F1374u;
    {
        const bool branch_taken_0x1f1374 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x1F1378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1374u;
        // 0x1f1378: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1374) {
            ctx->pc = 0x1F1458u;
            goto label_1f1458;
        }
    }
    ctx->pc = 0x1F137Cu;
    // 0x1f137c: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x1f137cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1f1380: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1f1380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f1384: 0x0  nop
    ctx->pc = 0x1f1384u;
    // NOP
label_1f1388:
    // 0x1f1388: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1f1388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1f138c: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x1f138cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f1390: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x1f1390u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1394: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F1394u;
    {
        const bool branch_taken_0x1f1394 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1394) {
            ctx->pc = 0x1F1398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1394u;
            // 0x1f1398: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F139Cu;
            goto label_1f139c;
        }
    }
    ctx->pc = 0x1F139Cu;
label_1f139c:
    // 0x1f139c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1f139cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1f13a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f13a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f13a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f13a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f13a8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1f13a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f13ac: 0x4810  mfhi        $t1
    ctx->pc = 0x1f13acu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x1f13b0: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x1f13b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f13b4: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1f13b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1f13b8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f13b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f13bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f13bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f13c0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1f13c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f13c4: 0x10a4001f  beq         $a1, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F13C4u;
    {
        const bool branch_taken_0x1f13c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1F13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13C4u;
        // 0x1f13c8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13c4) {
            ctx->pc = 0x1F1444u;
            goto label_1f1444;
        }
    }
    ctx->pc = 0x1F13CCu;
    // 0x1f13cc: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x1f13ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f13d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f13d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1f13d4: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x1f13d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1f13d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F13D8u;
    {
        const bool branch_taken_0x1f13d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F13DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13D8u;
        // 0x1f13dc: 0x107382a  slt         $a3, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13d8) {
            ctx->pc = 0x1F1400u;
            goto label_1f1400;
        }
    }
    ctx->pc = 0x1F13E0u;
    // 0x1f13e0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1f13e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1f13e4: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1f13e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1f13e8:
    // 0x1f13e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f13e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f13ec: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1f13ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1f13f0: 0x106182a  slt         $v1, $t0, $a2
    ctx->pc = 0x1f13f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1f13f4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1f13f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1f13f8: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F13F8u;
    {
        const bool branch_taken_0x1f13f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F13FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13F8u;
        // 0x1f13fc: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13f8) {
            ctx->pc = 0x1F13E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f13e8;
        }
    }
    ctx->pc = 0x1F1400u;
label_1f1400:
    // 0x1f1400: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1f1400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f1404: 0x127280a  movz        $a1, $t1, $a3
    ctx->pc = 0x1f1404u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9));
    // 0x1f1408: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1f1408u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f140c: 0x20a3021  addu        $a2, $s0, $t2
    ctx->pc = 0x1f140cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1f1410: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1414: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x1f1414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1f1418: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1f1418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1f141c: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x1f141cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1f1420: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f1420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f1424: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f1424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f1428: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1f1428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f142c: 0xc07c956  jal         func_1F2558
    ctx->pc = 0x1F142Cu;
    SET_GPR_U32(ctx, 31, 0x1F1434u);
    ctx->pc = 0x1F1430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F142Cu;
    // 0x1f1430: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F2558u, 0x1F142Cu, 0x1F1434u)) {
        return;
    }
    ctx->pc = 0x1F1434u;
label_1f1434:
    // 0x1f1434: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1f1434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1f1438: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1f1438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1f143c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f143cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1f1440: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1f1440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1f1444:
    // 0x1f1444: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1f1444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f1448: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1f1448u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f144c: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x1f144cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1f1450: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1F1450u;
    {
        const bool branch_taken_0x1f1450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1450u;
        // 0x1f1454: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1450) {
            ctx->pc = 0x1F1388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1388;
        }
    }
    ctx->pc = 0x1F1458u;
label_1f1458:
    // 0x1f1458: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1f1458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f145c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f145cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f1460: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f1460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f1464: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f1464u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1468: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1f1468u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f146c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f146cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1470: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1470u;
        // 0x1f1474: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1478u;
}
