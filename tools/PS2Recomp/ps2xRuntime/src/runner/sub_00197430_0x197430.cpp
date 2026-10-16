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

// Function: sub_00197430
// Address: 0x197430 - 0x1975d0
void sub_00197430_0x197430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197430_0x197430");
#endif

    switch (ctx->pc) {
        case 0x197468u: goto label_197468;
        case 0x1974a0u: goto label_1974a0;
        case 0x1974f0u: goto label_1974f0;
        case 0x197528u: goto label_197528;
        case 0x197588u: goto label_197588;
        case 0x19759cu: goto label_19759c;
        default: break;
    }

    ctx->pc = 0x197430u;

    // 0x197430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x197430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x197434: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x197434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x197438: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x197438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19743c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19743cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x197444: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x197444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x197448: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x197448u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19744c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x19744cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x197450: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x197450u;
    {
        const bool branch_taken_0x197450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x197454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197450u;
        // 0x197454: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197450) {
            ctx->pc = 0x197484u;
            goto label_197484;
        }
    }
    ctx->pc = 0x197458u;
    // 0x197458: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x197458u;
    {
        const bool branch_taken_0x197458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197458u;
        // 0x19745c: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197458) {
            ctx->pc = 0x197480u;
            goto label_197480;
        }
    }
    ctx->pc = 0x197460u;
    // 0x197460: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x197460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x197464: 0x0  nop
    ctx->pc = 0x197464u;
    // NOP
label_197468:
    // 0x197468: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x197468u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19746c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19746Cu;
    {
        const bool branch_taken_0x19746c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19746c) {
            ctx->pc = 0x197470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19746Cu;
            // 0x197470: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197484u;
            goto label_197484;
        }
    }
    ctx->pc = 0x197474u;
    // 0x197474: 0x0  nop
    ctx->pc = 0x197474u;
    // NOP
    // 0x197478: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x197478u;
    {
        const bool branch_taken_0x197478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x197478) {
            ctx->pc = 0x19747Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197478u;
            // 0x19747c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197468;
        }
    }
    ctx->pc = 0x197480u;
label_197480:
    // 0x197480: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x197480u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_197484:
    // 0x197484: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x197484u;
    {
        const bool branch_taken_0x197484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x197488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197484u;
        // 0x197488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197484) {
            ctx->pc = 0x1974B8u;
            goto label_1974b8;
        }
    }
    ctx->pc = 0x19748Cu;
    // 0x19748c: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x19748cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x197490: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x197490u;
    {
        const bool branch_taken_0x197490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x197494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197490u;
        // 0x197494: 0x2403003e  addiu       $v1, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197490) {
            ctx->pc = 0x1974B8u;
            goto label_1974b8;
        }
    }
    ctx->pc = 0x197498u;
    // 0x197498: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x197498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19749c: 0x0  nop
    ctx->pc = 0x19749cu;
    // NOP
label_1974a0:
    // 0x1974a0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1974a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1974a4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1974A4u;
    {
        const bool branch_taken_0x1974a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1974a4) {
            ctx->pc = 0x1974A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1974A4u;
            // 0x1974a8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1974C0u;
            goto label_1974c0;
        }
    }
    ctx->pc = 0x1974ACu;
    // 0x1974ac: 0x0  nop
    ctx->pc = 0x1974acu;
    // NOP
    // 0x1974b0: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1974B0u;
    {
        const bool branch_taken_0x1974b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1974b0) {
            ctx->pc = 0x1974B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1974B0u;
            // 0x1974b4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1974A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1974a0;
        }
    }
    ctx->pc = 0x1974B8u;
label_1974b8:
    // 0x1974b8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1974b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1974bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1974bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1974c0:
    // 0x1974c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1974c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1974c4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1974c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1974c8: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1974c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1974cc: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1974CCu;
    {
        const bool branch_taken_0x1974cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1974D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974CCu;
        // 0x1974d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974cc) {
            ctx->pc = 0x1975B4u;
            goto label_1975b4;
        }
    }
    ctx->pc = 0x1974D4u;
    // 0x1974d4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1974d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1974d8: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1974D8u;
    {
        const bool branch_taken_0x1974d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1974DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974D8u;
        // 0x1974dc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974d8) {
            ctx->pc = 0x1975B0u;
            goto label_1975b0;
        }
    }
    ctx->pc = 0x1974E0u;
    // 0x1974e0: 0xa240000c  sb          $zero, 0xC($s2)
    ctx->pc = 0x1974e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x1974e4: 0x244511d1  addiu       $a1, $v0, 0x11D1
    ctx->pc = 0x1974e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4561));
    // 0x1974e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1974e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1974ec: 0x0  nop
    ctx->pc = 0x1974ecu;
    // NOP
label_1974f0:
    // 0x1974f0: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x1974f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1974f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1974F4u;
    {
        const bool branch_taken_0x1974f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1974F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974F4u;
        // 0x1974f8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974f4) {
            ctx->pc = 0x19751Cu;
            goto label_19751c;
        }
    }
    ctx->pc = 0x1974FCu;
    // 0x1974fc: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1974fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x197500: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x197500u;
    {
        const bool branch_taken_0x197500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x197504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197500u;
        // 0x197504: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197500) {
            ctx->pc = 0x19751Cu;
            goto label_19751c;
        }
    }
    ctx->pc = 0x197508u;
    // 0x197508: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x197508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19750c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x19750cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x197510: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x197510u;
    {
        const bool branch_taken_0x197510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197510) {
            ctx->pc = 0x197514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197510u;
            // 0x197514: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1974F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1974f0;
        }
    }
    ctx->pc = 0x197518u;
    // 0x197518: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x197518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_19751c:
    // 0x19751c: 0x244511d1  addiu       $a1, $v0, 0x11D1
    ctx->pc = 0x19751cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4561));
    // 0x197520: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x197520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x197524: 0x0  nop
    ctx->pc = 0x197524u;
    // NOP
label_197528:
    // 0x197528: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x197528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x19752c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19752Cu;
    {
        const bool branch_taken_0x19752c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19752Cu;
        // 0x197530: 0x90102b  sltu        $v0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19752c) {
            ctx->pc = 0x197554u;
            goto label_197554;
        }
    }
    ctx->pc = 0x197534u;
    // 0x197534: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x197534u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197538: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x197538u;
    {
        const bool branch_taken_0x197538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197538u;
        // 0x19753c: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197538) {
            ctx->pc = 0x197554u;
            goto label_197554;
        }
    }
    ctx->pc = 0x197540u;
    // 0x197540: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x197540u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197544: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x197544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x197548: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x197548u;
    {
        const bool branch_taken_0x197548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197548) {
            ctx->pc = 0x19754Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197548u;
            // 0x19754c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197528;
        }
    }
    ctx->pc = 0x197550u;
    // 0x197550: 0x90102b  sltu        $v0, $a0, $s0
    ctx->pc = 0x197550u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_197554:
    // 0x197554: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x197554u;
    {
        const bool branch_taken_0x197554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197554u;
        // 0x197558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197554) {
            ctx->pc = 0x1975B4u;
            goto label_1975b4;
        }
    }
    ctx->pc = 0x19755Cu;
    // 0x19755c: 0x901023  subu        $v0, $a0, $s0
    ctx->pc = 0x19755cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x197560: 0x240309c3  addiu       $v1, $zero, 0x9C3
    ctx->pc = 0x197560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2499));
    // 0x197564: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x197564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x197568: 0x2651000c  addiu       $s1, $s2, 0xC
    ctx->pc = 0x197568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x19756c: 0x284509c4  slti        $a1, $v0, 0x9C4
    ctx->pc = 0x19756cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2500) ? 1 : 0);
    // 0x197570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x197570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197574: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x197574u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
    // 0x197578: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x197578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19757c: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x19757cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x197580: 0xc0c4bea  jal         func_312FA8
    ctx->pc = 0x197580u;
    SET_GPR_U32(ctx, 31, 0x197588u);
    ctx->pc = 0x197584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197580u;
    // 0x197584: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312FA8u, 0x197580u, 0x197588u)) {
        return;
    }
    ctx->pc = 0x197588u;
label_197588:
    // 0x197588: 0x8e4309e4  lw          $v1, 0x9E4($s2)
    ctx->pc = 0x197588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2532)));
    // 0x19758c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19758Cu;
    {
        const bool branch_taken_0x19758c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19758c) {
            ctx->pc = 0x197590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19758Cu;
            // 0x197590: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1975A0u;
            goto label_1975a0;
        }
    }
    ctx->pc = 0x197594u;
    // 0x197594: 0xc0c5cb6  jal         func_3172D8
    ctx->pc = 0x197594u;
    SET_GPR_U32(ctx, 31, 0x19759Cu);
    ctx->pc = 0x197598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197594u;
    // 0x197598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3172D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3172D8u, 0x197594u, 0x19759Cu)) {
        return;
    }
    ctx->pc = 0x19759Cu;
label_19759c:
    // 0x19759c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x19759cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1975a0:
    // 0x1975a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1975a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1975a4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1975a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1975a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1975A8u;
    {
        const bool branch_taken_0x1975a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1975ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975A8u;
        // 0x1975ac: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975a8) {
            ctx->pc = 0x1975B4u;
            goto label_1975b4;
        }
    }
    ctx->pc = 0x1975B0u;
label_1975b0:
    // 0x1975b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1975b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1975b4:
    // 0x1975b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1975b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1975b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1975b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1975bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1975bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1975c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1975c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1975c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1975C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1975C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975C4u;
        // 0x1975c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1975C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1975CCu;
    // 0x1975cc: 0x0  nop
    ctx->pc = 0x1975ccu;
    // NOP
    ctx->pc = 0x1975d0u;
}
