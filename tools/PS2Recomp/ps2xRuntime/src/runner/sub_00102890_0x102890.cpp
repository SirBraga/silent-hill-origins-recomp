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

// Function: sub_00102890
// Address: 0x102890 - 0x1029c8
void sub_00102890_0x102890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102890_0x102890");
#endif

    ctx->pc = 0x102890u;

    // 0x102890: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x102890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x102894: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x102894u;
    {
        const bool branch_taken_0x102894 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x102898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102894u;
        // 0x102898: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102894) {
            ctx->pc = 0x1028A0u;
            goto label_1028a0;
        }
    }
    ctx->pc = 0x10289Cu;
    // 0x10289c: 0x8d0701a0  lw          $a3, 0x1A0($t0)
    ctx->pc = 0x10289cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 416)));
label_1028a0:
    // 0x1028a0: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x1028a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1028a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1028A4u;
    {
        const bool branch_taken_0x1028a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1028A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028A4u;
        // 0x1028a8: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1028a4) {
            ctx->pc = 0x1028B4u;
            goto label_1028b4;
        }
    }
    ctx->pc = 0x1028ACu;
    // 0x1028ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1028ACu;
    {
        const bool branch_taken_0x1028ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1028B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028ACu;
        // 0x1028b0: 0xc0582d  daddu       $t3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1028ac) {
            ctx->pc = 0x1028BCu;
            goto label_1028bc;
        }
    }
    ctx->pc = 0x1028B4u;
label_1028b4:
    // 0x1028b4: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1028b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1028b8: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x1028b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1028bc:
    // 0x1028bc: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x1028bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1028c0: 0x14ed0002  bne         $a3, $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x1028C0u;
    {
        const bool branch_taken_0x1028c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 13));
        ctx->pc = 0x1028C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028C0u;
        // 0x1028c4: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1028c0) {
            ctx->pc = 0x1028CCu;
            goto label_1028cc;
        }
    }
    ctx->pc = 0x1028C8u;
    // 0x1028c8: 0x8d0301a0  lw          $v1, 0x1A0($t0)
    ctx->pc = 0x1028c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 416)));
label_1028cc:
    // 0x1028cc: 0x240c0060  addiu       $t4, $zero, 0x60
    ctx->pc = 0x1028ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1028d0: 0x8d0200d8  lw          $v0, 0xD8($t0)
    ctx->pc = 0x1028d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 216)));
    // 0x1028d4: 0x6c5018  mult        $t2, $v1, $t4
    ctx->pc = 0x1028d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1028d8: 0x1421821  addu        $v1, $t2, $v0
    ctx->pc = 0x1028d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1028dc: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x1028dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1028e0: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x1028e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1028e4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1028E4u;
    {
        const bool branch_taken_0x1028e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1028e4) {
            ctx->pc = 0x1028E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1028E4u;
            // 0x1028e8: 0x8d0300d8  lw          $v1, 0xD8($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102934u;
            goto label_102934;
        }
    }
    ctx->pc = 0x1028ECu;
    // 0x1028ec: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1028ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1028f0: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x1028f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1028f4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1028f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1028f8: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x1028f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1028fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1028fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102900: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x102900u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x102904: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x102904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x102908: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x102908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10290c: 0x92040  sll         $a0, $t1, 1
    ctx->pc = 0x10290cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x102910: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x102910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x102914: 0x8d0200d8  lw          $v0, 0xD8($t0)
    ctx->pc = 0x102914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 216)));
    // 0x102918: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x102918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x10291c: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x10291cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x102920: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x102920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x102924: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x102924u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x102928: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x102928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10292c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x10292cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x102930: 0x8d0300d8  lw          $v1, 0xD8($t0)
    ctx->pc = 0x102930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 216)));
label_102934:
    // 0x102934: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x102934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x102938: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x102938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x10293c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10293cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x102940: 0x14ed0002  bne         $a3, $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x102940u;
    {
        const bool branch_taken_0x102940 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 13));
        ctx->pc = 0x102944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102940u;
        // 0x102944: 0xac620058  sw          $v0, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102940) {
            ctx->pc = 0x10294Cu;
            goto label_10294c;
        }
    }
    ctx->pc = 0x102948u;
    // 0x102948: 0x8d0701a0  lw          $a3, 0x1A0($t0)
    ctx->pc = 0x102948u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 416)));
label_10294c:
    // 0x10294c: 0xec3818  mult        $a3, $a3, $t4
    ctx->pc = 0x10294cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x102950: 0x8d0200d8  lw          $v0, 0xD8($t0)
    ctx->pc = 0x102950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 216)));
    // 0x102954: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x102954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x102958: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x102958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x10295c: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x10295cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x102960: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x102960u;
    {
        const bool branch_taken_0x102960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102960) {
            ctx->pc = 0x102964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102960u;
            // 0x102964: 0x8d0300d8  lw          $v1, 0xD8($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1029B0u;
            goto label_1029b0;
        }
    }
    ctx->pc = 0x102968u;
    // 0x102968: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x102968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x10296c: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x10296cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x102970: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x102970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x102974: 0xb2080  sll         $a0, $t3, 2
    ctx->pc = 0x102974u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x102978: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x102978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10297c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x10297cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x102980: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x102980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x102984: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x102984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x102988: 0xb2040  sll         $a0, $t3, 1
    ctx->pc = 0x102988u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x10298c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x10298cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x102990: 0x8d0200d8  lw          $v0, 0xD8($t0)
    ctx->pc = 0x102990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 216)));
    // 0x102994: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x102994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x102998: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x102998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x10299c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x10299cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1029a0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1029a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1029a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1029a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1029a8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x1029a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1029ac: 0x8d0300d8  lw          $v1, 0xD8($t0)
    ctx->pc = 0x1029acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 216)));
label_1029b0:
    // 0x1029b0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1029b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1029b4: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1029b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1029b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1029b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1029bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1029BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1029C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1029BCu;
        // 0x1029c0: 0xac620058  sw          $v0, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1029BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1029C4u;
    // 0x1029c4: 0x0  nop
    ctx->pc = 0x1029c4u;
    // NOP
    ctx->pc = 0x1029c8u;
}
