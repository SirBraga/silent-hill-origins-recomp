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

// Function: sub_002E14B0
// Address: 0x2e14b0 - 0x2e1578
void sub_002E14B0_0x2e14b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E14B0_0x2e14b0");
#endif

    switch (ctx->pc) {
        case 0x2e14c8u: goto label_2e14c8;
        default: break;
    }

    ctx->pc = 0x2e14b0u;

    // 0x2e14b0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e14b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e14b4: 0x24aa000c  addiu       $t2, $a1, 0xC
    ctx->pc = 0x2e14b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2e14b8: 0x65823  negu        $t3, $a2
    ctx->pc = 0x2e14b8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x2e14bc: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2e14bcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e14c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e14c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e14c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e14c8:
    // 0x2e14c8: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2e14c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e14cc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2e14ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e14d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2e14d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e14d4: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x2e14d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x2e14d8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2e14d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2e14dc: 0x4a102b  sltu        $v0, $v0, $t2
    ctx->pc = 0x2e14dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2e14e0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E14E0u;
    {
        const bool branch_taken_0x2e14e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e14e0) {
            ctx->pc = 0x2E14E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E14E0u;
            // 0x2e14e4: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1528u;
            goto label_2e1528;
        }
    }
    ctx->pc = 0x2E14E8u;
    // 0x2e14e8: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x2e14e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x2e14ec: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x2e14ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2e14f0: 0x2502000b  addiu       $v0, $t0, 0xB
    ctx->pc = 0x2e14f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 11));
    // 0x2e14f4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2e14f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2e14f8: 0x4b4024  and         $t0, $v0, $t3
    ctx->pc = 0x2e14f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x2e14fc: 0x2508fff4  addiu       $t0, $t0, -0xC
    ctx->pc = 0x2e14fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967284));
    // 0x2e1500: 0x10a1021  addu        $v0, $t0, $t2
    ctx->pc = 0x2e1500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x2e1504: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x2e1504u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e1508: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1508u;
    {
        const bool branch_taken_0x2e1508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1508) {
            ctx->pc = 0x2E150Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1508u;
            // 0x2e150c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1524u;
            goto label_2e1524;
        }
    }
    ctx->pc = 0x2E1510u;
    // 0x2e1510: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x2e1510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2e1514: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x2e1514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e1518: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1518u;
    {
        const bool branch_taken_0x2e1518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1518) {
            ctx->pc = 0x2E1534u;
            goto label_2e1534;
        }
    }
    ctx->pc = 0x2E1520u;
    // 0x2e1520: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e1520u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1524:
    // 0x2e1524: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2e1524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e1528:
    // 0x2e1528: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x2e1528u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e152c: 0x5462ffe6  bnel        $v1, $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2E152Cu;
    {
        const bool branch_taken_0x2e152c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e152c) {
            ctx->pc = 0x2E1530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E152Cu;
            // 0x2e1530: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E14C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e14c8;
        }
    }
    ctx->pc = 0x2E1534u;
label_2e1534:
    // 0x2e1534: 0x1100000d  beqz        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E1534u;
    {
        const bool branch_taken_0x2e1534 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1534) {
            ctx->pc = 0x2E156Cu;
            goto label_2e156c;
        }
    }
    ctx->pc = 0x2E153Cu;
    // 0x2e153c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2e153cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e1540: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x2e1540u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x2e1544: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x2e1544u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x2e1548: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2e1548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e154c: 0x54c20001  bnel        $a2, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E154Cu;
    {
        const bool branch_taken_0x2e154c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e154c) {
            ctx->pc = 0x2E1550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E154Cu;
            // 0x2e1550: 0xacc80004  sw          $t0, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1554u;
            goto label_2e1554;
        }
    }
    ctx->pc = 0x2E1554u;
label_2e1554:
    // 0x2e1554: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2e1554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e1558: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x2e1558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2e155c: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E155Cu;
    {
        const bool branch_taken_0x2e155c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e155c) {
            ctx->pc = 0x2E1560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E155Cu;
            // 0x2e1560: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1564u;
            goto label_2e1564;
        }
    }
    ctx->pc = 0x2E1564u;
label_2e1564:
    // 0x2e1564: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x2e1564u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
    // 0x2e1568: 0x250c000c  addiu       $t4, $t0, 0xC
    ctx->pc = 0x2e1568u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_2e156c:
    // 0x2e156c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E156Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E156Cu;
        // 0x2e1570: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E156Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1574u;
    // 0x2e1574: 0x0  nop
    ctx->pc = 0x2e1574u;
    // NOP
    ctx->pc = 0x2e1578u;
}
