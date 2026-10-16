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

// Function: sub_001F1478
// Address: 0x1f1478 - 0x1f1768
void sub_001F1478_0x1f1478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1478_0x1f1478");
#endif

    switch (ctx->pc) {
        case 0x1f14a0u: goto label_1f14a0;
        case 0x1f1510u: goto label_1f1510;
        case 0x1f1568u: goto label_1f1568;
        case 0x1f15b0u: goto label_1f15b0;
        case 0x1f1630u: goto label_1f1630;
        case 0x1f16b0u: goto label_1f16b0;
        case 0x1f1718u: goto label_1f1718;
        case 0x1f1754u: goto label_1f1754;
        default: break;
    }

    ctx->pc = 0x1f1478u;

    // 0x1f1478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f1478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f147c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1f147cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1480: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f1484: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1f1484u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1488: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1f1488u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f148c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1f148cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1f1490: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F1490u;
    {
        const bool branch_taken_0x1f1490 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1F1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1490u;
        // 0x1f1494: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1490) {
            ctx->pc = 0x1F14DCu;
            goto label_1f14dc;
        }
    }
    ctx->pc = 0x1F1498u;
    // 0x1f1498: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1f1498u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f149c: 0x2509000c  addiu       $t1, $t0, 0xC
    ctx->pc = 0x1f149cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_1f14a0:
    // 0x1f14a0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1f14a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1f14a4: 0x25650001  addiu       $a1, $t3, 0x1
    ctx->pc = 0x1f14a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1f14a8: 0x25860001  addiu       $a2, $t4, 0x1
    ctx->pc = 0x1f14a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1f14ac: 0x25a70001  addiu       $a3, $t5, 0x1
    ctx->pc = 0x1f14acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1f14b0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1f14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1f14b4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1f14b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1f14b8: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x1f14b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1f14bc: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x1f14bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1f14c0: 0x38430002  xori        $v1, $v0, 0x2
    ctx->pc = 0x1f14c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1f14c4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1f14c4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1f14c8: 0xa3580a  movz        $t3, $a1, $v1
    ctx->pc = 0x1f14c8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5));
    // 0x1f14cc: 0xc2600a  movz        $t4, $a2, $v0
    ctx->pc = 0x1f14ccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6));
    // 0x1f14d0: 0x1540fff3  bnez        $t2, . + 4 + (-0xD << 2)
    ctx->pc = 0x1F14D0u;
    {
        const bool branch_taken_0x1f14d0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F14D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F14D0u;
        // 0x1f14d4: 0xe4680a  movz        $t5, $a3, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 13, GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f14d0) {
            ctx->pc = 0x1F14A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f14a0;
        }
    }
    ctx->pc = 0x1F14D8u;
    // 0x1f14d8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1f14d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1f14dc:
    // 0x1f14dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f14dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f14e0: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1f14e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f14e4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F14E4u;
    {
        const bool branch_taken_0x1f14e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f14e4) {
            ctx->pc = 0x1F1530u;
            goto label_1f1530;
        }
    }
    ctx->pc = 0x1F14ECu;
    // 0x1f14ec: 0x8d03004c  lw          $v1, 0x4C($t0)
    ctx->pc = 0x1f14ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x1f14f0: 0x8c622718  lw          $v0, 0x2718($v1)
    ctx->pc = 0x1f14f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10008)));
    // 0x1f14f4: 0x50480081  beql        $v0, $t0, . + 4 + (0x81 << 2)
    ctx->pc = 0x1F14F4u;
    {
        const bool branch_taken_0x1f14f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x1f14f4) {
            ctx->pc = 0x1F14F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F14F4u;
            // 0x1f14f8: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F16FCu;
            goto label_1f16fc;
        }
    }
    ctx->pc = 0x1F14FCu;
    // 0x1f14fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f14fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1500: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f1500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1504: 0x1048008a  beq         $v0, $t0, . + 4 + (0x8A << 2)
    ctx->pc = 0x1F1504u;
    {
        const bool branch_taken_0x1f1504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x1F1508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1504u;
        // 0x1f1508: 0x8d040000  lw          $a0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1504) {
            ctx->pc = 0x1F1730u;
            goto label_1f1730;
        }
    }
    ctx->pc = 0x1F150Cu;
    // 0x1f150c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f150cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f1510:
    // 0x1f1510: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f1510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1514: 0x0  nop
    ctx->pc = 0x1f1514u;
    // NOP
    // 0x1f1518: 0x0  nop
    ctx->pc = 0x1f1518u;
    // NOP
    // 0x1f151c: 0x0  nop
    ctx->pc = 0x1f151cu;
    // NOP
    // 0x1f1520: 0x5448fffb  bnel        $v0, $t0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F1520u;
    {
        const bool branch_taken_0x1f1520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x1f1520) {
            ctx->pc = 0x1F1524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1520u;
            // 0x1f1524: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1510;
        }
    }
    ctx->pc = 0x1F1528u;
    // 0x1f1528: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x1F1528u;
    {
        const bool branch_taken_0x1f1528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1528u;
        // 0x1f152c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1528) {
            ctx->pc = 0x1F1734u;
            goto label_1f1734;
        }
    }
    ctx->pc = 0x1F1530u;
label_1f1530:
    // 0x1f1530: 0x15a00015  bnez        $t5, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F1530u;
    {
        const bool branch_taken_0x1f1530 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1530) {
            ctx->pc = 0x1F1588u;
            goto label_1f1588;
        }
    }
    ctx->pc = 0x1F1538u;
    // 0x1f1538: 0x15600017  bnez        $t3, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F1538u;
    {
        const bool branch_taken_0x1f1538 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1538u;
        // 0x1f153c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1538) {
            ctx->pc = 0x1F1598u;
            goto label_1f1598;
        }
    }
    ctx->pc = 0x1F1540u;
    // 0x1f1540: 0x8d03004c  lw          $v1, 0x4C($t0)
    ctx->pc = 0x1f1540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x1f1544: 0x8c622718  lw          $v0, 0x2718($v1)
    ctx->pc = 0x1f1544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10008)));
    // 0x1f1548: 0x5048006c  beql        $v0, $t0, . + 4 + (0x6C << 2)
    ctx->pc = 0x1F1548u;
    {
        const bool branch_taken_0x1f1548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x1f1548) {
            ctx->pc = 0x1F154Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1548u;
            // 0x1f154c: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F16FCu;
            goto label_1f16fc;
        }
    }
    ctx->pc = 0x1F1550u;
    // 0x1f1550: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f1550u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1554: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f1554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1558: 0x10480075  beq         $v0, $t0, . + 4 + (0x75 << 2)
    ctx->pc = 0x1F1558u;
    {
        const bool branch_taken_0x1f1558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x1F155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1558u;
        // 0x1f155c: 0x8d040000  lw          $a0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1558) {
            ctx->pc = 0x1F1730u;
            goto label_1f1730;
        }
    }
    ctx->pc = 0x1F1560u;
    // 0x1f1560: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f1560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1564: 0x0  nop
    ctx->pc = 0x1f1564u;
    // NOP
label_1f1568:
    // 0x1f1568: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f1568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f156c: 0x0  nop
    ctx->pc = 0x1f156cu;
    // NOP
    // 0x1f1570: 0x0  nop
    ctx->pc = 0x1f1570u;
    // NOP
    // 0x1f1574: 0x0  nop
    ctx->pc = 0x1f1574u;
    // NOP
    // 0x1f1578: 0x5448fffb  bnel        $v0, $t0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F1578u;
    {
        const bool branch_taken_0x1f1578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x1f1578) {
            ctx->pc = 0x1F157Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1578u;
            // 0x1f157c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1568;
        }
    }
    ctx->pc = 0x1F1580u;
    // 0x1f1580: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1F1580u;
    {
        const bool branch_taken_0x1f1580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1580u;
        // 0x1f1584: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1580) {
            ctx->pc = 0x1F1734u;
            goto label_1f1734;
        }
    }
    ctx->pc = 0x1F1588u;
label_1f1588:
    // 0x1f1588: 0x15800003  bnez        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1588u;
    {
        const bool branch_taken_0x1f1588 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1588u;
        // 0x1f158c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1588) {
            ctx->pc = 0x1F1598u;
            goto label_1f1598;
        }
    }
    ctx->pc = 0x1F1590u;
    // 0x1f1590: 0x51600071  beql        $t3, $zero, . + 4 + (0x71 << 2)
    ctx->pc = 0x1F1590u;
    {
        const bool branch_taken_0x1f1590 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1590) {
            ctx->pc = 0x1F1594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1590u;
            // 0x1f1594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1758u;
            goto label_1f1758;
        }
    }
    ctx->pc = 0x1F1598u;
label_1f1598:
    // 0x1f1598: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1F1598u;
    {
        const bool branch_taken_0x1f1598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1598u;
        // 0x1f159c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1598) {
            ctx->pc = 0x1F1620u;
            goto label_1f1620;
        }
    }
    ctx->pc = 0x1F15A0u;
    // 0x1f15a0: 0x1860001f  blez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F15A0u;
    {
        const bool branch_taken_0x1f15a0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1F15A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F15A0u;
        // 0x1f15a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f15a0) {
            ctx->pc = 0x1F1620u;
            goto label_1f1620;
        }
    }
    ctx->pc = 0x1F15A8u;
    // 0x1f15a8: 0x2509000c  addiu       $t1, $t0, 0xC
    ctx->pc = 0x1f15a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x1f15ac: 0x0  nop
    ctx->pc = 0x1f15acu;
    // NOP
label_1f15b0:
    // 0x1f15b0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1f15b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f15b4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F15B4u;
    {
        const bool branch_taken_0x1f15b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f15b4) {
            ctx->pc = 0x1F15B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F15B4u;
            // 0x1f15b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F15BCu;
            goto label_1f15bc;
        }
    }
    ctx->pc = 0x1F15BCu;
label_1f15bc:
    // 0x1f15bc: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x1f15bcu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f15c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f15c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f15c4: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x1f15c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1f15c8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f15c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f15cc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1f15ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f15d0: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x1f15d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f15d4: 0x1810  mfhi        $v1
    ctx->pc = 0x1f15d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1f15d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f15d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f15dc: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x1f15dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1f15e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f15e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f15e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f15e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f15e8: 0x50c20009  beql        $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F15E8u;
    {
        const bool branch_taken_0x1f15e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f15e8) {
            ctx->pc = 0x1F15ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F15E8u;
            // 0x1f15ec: 0x8d050004  lw          $a1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1610u;
            goto label_1f1610;
        }
    }
    ctx->pc = 0x1F15F0u;
    // 0x1f15f0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f15f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f15f4: 0x50c20006  beql        $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F15F4u;
    {
        const bool branch_taken_0x1f15f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f15f4) {
            ctx->pc = 0x1F15F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F15F4u;
            // 0x1f15f8: 0x8d050004  lw          $a1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1610u;
            goto label_1f1610;
        }
    }
    ctx->pc = 0x1F15FCu;
    // 0x1f15fc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1f15fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f1600: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1f1600u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1f1604: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f1604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f1608: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x1f1608u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x1f160c: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x1f160cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1f1610:
    // 0x1f1610: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1f1610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1614: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1f1614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1f1618: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1F1618u;
    {
        const bool branch_taken_0x1f1618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1618u;
        // 0x1f161c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1618) {
            ctx->pc = 0x1F15B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f15b0;
        }
    }
    ctx->pc = 0x1F1620u;
label_1f1620:
    // 0x1f1620: 0x1860001d  blez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F1620u;
    {
        const bool branch_taken_0x1f1620 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1F1624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1620u;
        // 0x1f1624: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1620) {
            ctx->pc = 0x1F1698u;
            goto label_1f1698;
        }
    }
    ctx->pc = 0x1F1628u;
    // 0x1f1628: 0x2507000c  addiu       $a3, $t0, 0xC
    ctx->pc = 0x1f1628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x1f162c: 0x0  nop
    ctx->pc = 0x1f162cu;
    // NOP
label_1f1630:
    // 0x1f1630: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1f1630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f1634: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1f1634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1f1638: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F1638u;
    {
        const bool branch_taken_0x1f1638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1638u;
        // 0x1f163c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1638) {
            ctx->pc = 0x1F1680u;
            goto label_1f1680;
        }
    }
    ctx->pc = 0x1F1640u;
    // 0x1f1640: 0x54640003  bnel        $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1640u;
    {
        const bool branch_taken_0x1f1640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1f1640) {
            ctx->pc = 0x1F1644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1640u;
            // 0x1f1644: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1650u;
            goto label_1f1650;
        }
    }
    ctx->pc = 0x1F1648u;
    // 0x1f1648: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F1648u;
    {
        const bool branch_taken_0x1f1648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1648u;
        // 0x1f164c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1648) {
            ctx->pc = 0x1F1680u;
            goto label_1f1680;
        }
    }
    ctx->pc = 0x1F1650u;
label_1f1650:
    // 0x1f1650: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1f1650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f1654: 0x1046000a  beq         $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1F1654u;
    {
        const bool branch_taken_0x1f1654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1F1658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1654u;
        // 0x1f1658: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1654) {
            ctx->pc = 0x1F1680u;
            goto label_1f1680;
        }
    }
    ctx->pc = 0x1F165Cu;
    // 0x1f165c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1f165cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f1660: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1f1660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f1664: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1664u;
    {
        const bool branch_taken_0x1f1664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1f1664) {
            ctx->pc = 0x1F1668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1664u;
            // 0x1f1668: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1674u;
            goto label_1f1674;
        }
    }
    ctx->pc = 0x1F166Cu;
    // 0x1f166c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F166Cu;
    {
        const bool branch_taken_0x1f166c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F166Cu;
        // 0x1f1670: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f166c) {
            ctx->pc = 0x1F1680u;
            goto label_1f1680;
        }
    }
    ctx->pc = 0x1F1674u;
label_1f1674:
    // 0x1f1674: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1f1674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1f1678: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1f1678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1f167c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1f167cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1f1680:
    // 0x1f1680: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1f1680u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1f1684: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f1684u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1f1688: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1f1688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1f168c: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x1f168cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f1690: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1F1690u;
    {
        const bool branch_taken_0x1f1690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1690u;
        // 0x1f1694: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1690) {
            ctx->pc = 0x1F1630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1630;
        }
    }
    ctx->pc = 0x1F1698u;
label_1f1698:
    // 0x1f1698: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1f1698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1f169c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f169cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f16a0: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F16A0u;
    {
        const bool branch_taken_0x1f16a0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1F16A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16A0u;
        // 0x1f16a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16a0) {
            ctx->pc = 0x1F16DCu;
            goto label_1f16dc;
        }
    }
    ctx->pc = 0x1F16A8u;
    // 0x1f16a8: 0x2506000c  addiu       $a2, $t0, 0xC
    ctx->pc = 0x1f16a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x1f16ac: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1f16acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f16b0:
    // 0x1f16b0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1f16b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f16b4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1f16b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f16b8: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1f16b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1f16bc: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1f16bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f16c0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1f16c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1f16c4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f16c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f16c8: 0x64280b  movn        $a1, $v1, $a0
    ctx->pc = 0x1f16c8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x1f16cc: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1f16ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1f16d0: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x1f16d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f16d4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1F16D4u;
    {
        const bool branch_taken_0x1f16d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16D4u;
        // 0x1f16d8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16d4) {
            ctx->pc = 0x1F16B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f16b0;
        }
    }
    ctx->pc = 0x1F16DCu;
label_1f16dc:
    // 0x1f16dc: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1f16dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f16e0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F16E0u;
    {
        const bool branch_taken_0x1f16e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F16E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16E0u;
        // 0x1f16e4: 0xad050004  sw          $a1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16e0) {
            ctx->pc = 0x1F174Cu;
            goto label_1f174c;
        }
    }
    ctx->pc = 0x1F16E8u;
    // 0x1f16e8: 0x8d03004c  lw          $v1, 0x4C($t0)
    ctx->pc = 0x1f16e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x1f16ec: 0x8c622718  lw          $v0, 0x2718($v1)
    ctx->pc = 0x1f16ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10008)));
    // 0x1f16f0: 0x54480004  bnel        $v0, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F16F0u;
    {
        const bool branch_taken_0x1f16f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x1f16f0) {
            ctx->pc = 0x1F16F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F16F0u;
            // 0x1f16f4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1704u;
            goto label_1f1704;
        }
    }
    ctx->pc = 0x1F16F8u;
    // 0x1f16f8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1f16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1f16fc:
    // 0x1f16fc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F16FCu;
    {
        const bool branch_taken_0x1f16fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16FCu;
        // 0x1f1700: 0xac622718  sw          $v0, 0x2718($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10008), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16fc) {
            ctx->pc = 0x1F1734u;
            goto label_1f1734;
        }
    }
    ctx->pc = 0x1F1704u;
label_1f1704:
    // 0x1f1704: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f1704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1708: 0x10480009  beq         $v0, $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1708u;
    {
        const bool branch_taken_0x1f1708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x1F170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1708u;
        // 0x1f170c: 0x8d040000  lw          $a0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1708) {
            ctx->pc = 0x1F1730u;
            goto label_1f1730;
        }
    }
    ctx->pc = 0x1F1710u;
    // 0x1f1710: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f1710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1714: 0x0  nop
    ctx->pc = 0x1f1714u;
    // NOP
label_1f1718:
    // 0x1f1718: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f1718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f171c: 0x0  nop
    ctx->pc = 0x1f171cu;
    // NOP
    // 0x1f1720: 0x0  nop
    ctx->pc = 0x1f1720u;
    // NOP
    // 0x1f1724: 0x0  nop
    ctx->pc = 0x1f1724u;
    // NOP
    // 0x1f1728: 0x5448fffb  bnel        $v0, $t0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F1728u;
    {
        const bool branch_taken_0x1f1728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x1f1728) {
            ctx->pc = 0x1F172Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1728u;
            // 0x1f172c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1718;
        }
    }
    ctx->pc = 0x1F1730u;
label_1f1730:
    // 0x1f1730: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1f1730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1f1734:
    // 0x1f1734: 0x8d04004c  lw          $a0, 0x4C($t0)
    ctx->pc = 0x1f1734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x1f1738: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f1738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f173c: 0x8c831d10  lw          $v1, 0x1D10($a0)
    ctx->pc = 0x1f173cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7440)));
    // 0x1f1740: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1f1740u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1f1744: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1744u;
    {
        const bool branch_taken_0x1f1744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1744u;
        // 0x1f1748: 0xac881d10  sw          $t0, 0x1D10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 7440), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1744) {
            ctx->pc = 0x1F1758u;
            goto label_1f1758;
        }
    }
    ctx->pc = 0x1F174Cu;
label_1f174c:
    // 0x1f174c: 0xc07c4d4  jal         func_1F1350
    ctx->pc = 0x1F174Cu;
    SET_GPR_U32(ctx, 31, 0x1F1754u);
    ctx->pc = 0x1F1750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F174Cu;
    // 0x1f1750: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F1350u, 0x1F174Cu, 0x1F1754u)) {
        return;
    }
    ctx->pc = 0x1F1754u;
label_1f1754:
    // 0x1f1754: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f1754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1758:
    // 0x1f1758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f175c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F175Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F175Cu;
        // 0x1f1760: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F175Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1764u;
    // 0x1f1764: 0x0  nop
    ctx->pc = 0x1f1764u;
    // NOP
    ctx->pc = 0x1f1768u;
}
