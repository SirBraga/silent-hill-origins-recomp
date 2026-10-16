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

// Function: sub_002E0600
// Address: 0x2e0600 - 0x2e07a8
void sub_002E0600_0x2e0600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0600_0x2e0600");
#endif

    switch (ctx->pc) {
        case 0x2e0638u: goto label_2e0638;
        case 0x2e0650u: goto label_2e0650;
        case 0x2e0670u: goto label_2e0670;
        case 0x2e0728u: goto label_2e0728;
        case 0x2e0748u: goto label_2e0748;
        default: break;
    }

    ctx->pc = 0x2e0600u;

    // 0x2e0600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e0600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e0604: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x2e0604u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0608: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e0608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e060c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e060cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2e0610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e0610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0614: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2e0614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2e0618: 0x262f0010  addiu       $t7, $s1, 0x10
    ctx->pc = 0x2e0618u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e061c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e061cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0620: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e0620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0624: 0x8e2d0010  lw          $t5, 0x10($s1)
    ctx->pc = 0x2e0624u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2e0628: 0x11af0034  beq         $t5, $t7, . + 4 + (0x34 << 2)
    ctx->pc = 0x2E0628u;
    {
        const bool branch_taken_0x2e0628 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        ctx->pc = 0x2E062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0628u;
        // 0x2e062c: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0628) {
            ctx->pc = 0x2E06FCu;
            goto label_2e06fc;
        }
    }
    ctx->pc = 0x2E0630u;
    // 0x2e0630: 0x26580008  addiu       $t8, $s2, 0x8
    ctx->pc = 0x2e0630u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2e0634: 0x25a20008  addiu       $v0, $t5, 0x8
    ctx->pc = 0x2e0634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_2e0638:
    // 0x2e0638: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x2e0638u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e063c: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x2E063Cu;
    {
        const bool branch_taken_0x2e063c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E063Cu;
        // 0x2e0640: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e063c) {
            ctx->pc = 0x2E06E8u;
            goto label_2e06e8;
        }
    }
    ctx->pc = 0x2E0644u;
    // 0x2e0644: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2e0644u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0648: 0x241000ff  addiu       $s0, $zero, 0xFF
    ctx->pc = 0x2e0648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2e064c: 0x1b83021  addu        $a2, $t5, $t8
    ctx->pc = 0x2e064cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 24)));
label_2e0650:
    // 0x2e0650: 0x916a0000  lbu         $t2, 0x0($t3)
    ctx->pc = 0x2e0650u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2e0654: 0x5150001e  beql        $t2, $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E0654u;
    {
        const bool branch_taken_0x2e0654 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 16));
        if (branch_taken_0x2e0654) {
            ctx->pc = 0x2E0658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0654u;
            // 0x2e0658: 0x2529fff8  addiu       $t1, $t1, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E06D0u;
            goto label_2e06d0;
        }
    }
    ctx->pc = 0x2E065Cu;
    // 0x2e065c: 0x1120001c  beqz        $t1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E065Cu;
    {
        const bool branch_taken_0x2e065c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E065Cu;
        // 0x2e0660: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e065c) {
            ctx->pc = 0x2E06D0u;
            goto label_2e06d0;
        }
    }
    ctx->pc = 0x2E0664u;
    // 0x2e0664: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x2e0664u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e0668: 0x10e1007  srav        $v0, $t6, $t0
    ctx->pc = 0x2e0668u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 8) & 0x1F));
    // 0x2e066c: 0x0  nop
    ctx->pc = 0x2e066cu;
    // NOP
label_2e0670:
    // 0x2e0670: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x2e0670u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e0674: 0x1471824  and         $v1, $t2, $a3
    ctx->pc = 0x2e0674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x2e0678: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E0678u;
    {
        const bool branch_taken_0x2e0678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0678) {
            ctx->pc = 0x2E067Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0678u;
            // 0x2e067c: 0x91620000  lbu         $v0, 0x0($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E06A0u;
            goto label_2e06a0;
        }
    }
    ctx->pc = 0x2E0680u;
    // 0x2e0680: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2e0680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e0684: 0x2d020008  sltiu       $v0, $t0, 0x8
    ctx->pc = 0x2e0684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e0688: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E0688u;
    {
        const bool branch_taken_0x2e0688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0688u;
        // 0x2e068c: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0688) {
            ctx->pc = 0x2E06D0u;
            goto label_2e06d0;
        }
    }
    ctx->pc = 0x2E0690u;
    // 0x2e0690: 0x1520fff7  bnez        $t1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E0690u;
    {
        const bool branch_taken_0x2e0690 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0690u;
        // 0x2e0694: 0x10e1007  srav        $v0, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0690) {
            ctx->pc = 0x2E0670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0670;
        }
    }
    ctx->pc = 0x2E0698u;
    // 0x2e0698: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E0698u;
    {
        const bool branch_taken_0x2e0698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0698) {
            ctx->pc = 0x2E06D0u;
            goto label_2e06d0;
        }
    }
    ctx->pc = 0x2E06A0u;
label_2e06a0:
    // 0x2e06a0: 0xc20c0  sll         $a0, $t4, 3
    ctx->pc = 0x2e06a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x2e06a4: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x2e06a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2e06a8: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x2e06a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2e06ac: 0xa1620000  sb          $v0, 0x0($t3)
    ctx->pc = 0x2e06acu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e06b0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e06b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e06b4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2e06b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e06b8: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x2e06b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2e06bc: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x2e06bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2e06c0: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2e06c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2e06c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e06c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e06c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e06c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e06cc: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2e06ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2e06d0:
    // 0x2e06d0: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E06D0u;
    {
        const bool branch_taken_0x2e06d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e06d0) {
            ctx->pc = 0x2E06D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E06D0u;
            // 0x2e06d4: 0x8dad0000  lw          $t5, 0x0($t5) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E06ECu;
            goto label_2e06ec;
        }
    }
    ctx->pc = 0x2E06D8u;
    // 0x2e06d8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2e06d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2e06dc: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x2e06dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2e06e0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2E06E0u;
    {
        const bool branch_taken_0x2e06e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E06E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E06E0u;
        // 0x2e06e4: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e06e0) {
            ctx->pc = 0x2E0650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0650;
        }
    }
    ctx->pc = 0x2E06E8u;
label_2e06e8:
    // 0x2e06e8: 0x8dad0000  lw          $t5, 0x0($t5)
    ctx->pc = 0x2e06e8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_2e06ec:
    // 0x2e06ec: 0x11af0003  beq         $t5, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E06ECu;
    {
        const bool branch_taken_0x2e06ec = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        if (branch_taken_0x2e06ec) {
            ctx->pc = 0x2E06FCu;
            goto label_2e06fc;
        }
    }
    ctx->pc = 0x2E06F4u;
    // 0x2e06f4: 0x1080ffd0  beqz        $a0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2E06F4u;
    {
        const bool branch_taken_0x2e06f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E06F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E06F4u;
        // 0x2e06f8: 0x25a20008  addiu       $v0, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e06f4) {
            ctx->pc = 0x2E0638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0638;
        }
    }
    ctx->pc = 0x2E06FCu;
label_2e06fc:
    // 0x2e06fc: 0x14800023  bnez        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E06FCu;
    {
        const bool branch_taken_0x2e06fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E06FCu;
        // 0x2e0700: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e06fc) {
            ctx->pc = 0x2E078Cu;
            goto label_2e078c;
        }
    }
    ctx->pc = 0x2E0704u;
    // 0x2e0704: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2e0704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e0708: 0x320282d  daddu       $a1, $t9, $zero
    ctx->pc = 0x2e0708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e070c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e070cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e0710: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2e0710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e0714: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2e0714u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2e0718: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2e0718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e071c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x2e071cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2e0720: 0xc0b7076  jal         func_2DC1D8
    ctx->pc = 0x2E0720u;
    SET_GPR_U32(ctx, 31, 0x2E0728u);
    ctx->pc = 0x2E0724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0720u;
    // 0x2e0724: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC1D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC1D8u, 0x2E0720u, 0x2E0728u)) {
        return;
    }
    ctx->pc = 0x2E0728u;
label_2e0728:
    // 0x2e0728: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e0728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e072c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E072Cu;
    {
        const bool branch_taken_0x2e072c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E072Cu;
        // 0x2e0730: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e072c) {
            ctx->pc = 0x2E073Cu;
            goto label_2e073c;
        }
    }
    ctx->pc = 0x2E0734u;
    // 0x2e0734: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E0734u;
    {
        const bool branch_taken_0x2e0734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0734u;
        // 0x2e0738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0734) {
            ctx->pc = 0x2E078Cu;
            goto label_2e078c;
        }
    }
    ctx->pc = 0x2E073Cu;
label_2e073c:
    // 0x2e073c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e073cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0740: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2E0740u;
    SET_GPR_U32(ctx, 31, 0x2E0748u);
    ctx->pc = 0x2E0744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0740u;
    // 0x2e0744: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2E0740u, 0x2E0748u)) {
        return;
    }
    ctx->pc = 0x2E0748u;
label_2e0748:
    // 0x2e0748: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2e0748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2e074c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2e074cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e0750: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2e0750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2e0754: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2e0754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e0758: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2e0758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2e075c: 0x26430008  addiu       $v1, $s2, 0x8
    ctx->pc = 0x2e075cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2e0760: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2e0760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e0764: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2e0764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2e0768: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x2e0768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x2e076c: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x2e076cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x2e0770: 0xa2050008  sb          $a1, 0x8($s0)
    ctx->pc = 0x2e0770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e0774: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2e0774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e0778: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e0778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e077c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2e077cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2e0780: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e0780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e0784: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x2e0784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e0788: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e0788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e078c:
    // 0x2e078c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e078cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0790: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e0790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0794: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2e0794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e079c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E079Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E07A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E079Cu;
        // 0x2e07a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E079Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E07A4u;
    // 0x2e07a4: 0x0  nop
    ctx->pc = 0x2e07a4u;
    // NOP
    ctx->pc = 0x2e07a8u;
}
