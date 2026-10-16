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

// Function: sub_002F2750
// Address: 0x2f2750 - 0x2f2880
void sub_002F2750_0x2f2750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2750_0x2f2750");
#endif

    switch (ctx->pc) {
        case 0x2f27b8u: goto label_2f27b8;
        case 0x2f27e0u: goto label_2f27e0;
        case 0x2f27ecu: goto label_2f27ec;
        default: break;
    }

    ctx->pc = 0x2f2750u;

    // 0x2f2750: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2f2750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2f2754: 0x24020898  addiu       $v0, $zero, 0x898
    ctx->pc = 0x2f2754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x2f2758: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2f2758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2f275c: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2f275cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2f2760: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2f2760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2f2764: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2f2764u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2768: 0x2a2b018  mult        $s6, $s5, $v0
    ctx->pc = 0x2f2768u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
    // 0x2f276c: 0x24040184  addiu       $a0, $zero, 0x184
    ctx->pc = 0x2f276cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x2f2770: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f2770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f2774: 0x2a42018  mult        $a0, $s5, $a0
    ctx->pc = 0x2f2774u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f2778: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2f2778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2f277c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f277cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2780: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2f2780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2f2784: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f2784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f2788: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f2788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f278c: 0x24426340  addiu       $v0, $v0, 0x6340
    ctx->pc = 0x2f278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25408));
    // 0x2f2790: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2f2790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2f2794: 0x2477bfd8  addiu       $s7, $v1, -0x4028
    ctx->pc = 0x2f2794u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950872));
    // 0x2f2798: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f2798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f279c: 0x829821  addu        $s3, $a0, $v0
    ctx->pc = 0x2f279cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f27a0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f27a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f27a4: 0x2d7f021  addu        $fp, $s6, $s7
    ctx->pc = 0x2f27a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
    // 0x2f27a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f27a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f27ac: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2f27acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2f27b0: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x2f27b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x2f27b4: 0x8e630170  lw          $v1, 0x170($s3)
    ctx->pc = 0x2f27b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 368)));
label_2f27b8:
    // 0x2f27b8: 0x8fd00000  lw          $s0, 0x0($fp)
    ctx->pc = 0x2f27b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2f27bc: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x2f27bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f27c0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F27C0u;
    {
        const bool branch_taken_0x2f27c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F27C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F27C0u;
        // 0x2f27c4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f27c0) {
            ctx->pc = 0x2F2828u;
            goto label_2f2828;
        }
    }
    ctx->pc = 0x2F27C8u;
    // 0x2f27c8: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2f27c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2f27cc: 0x2463bfd8  addiu       $v1, $v1, -0x4028
    ctx->pc = 0x2f27ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950872));
    // 0x2f27d0: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x2f27d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    // 0x2f27d4: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x2f27d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f27d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f27d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f27dc: 0x0  nop
    ctx->pc = 0x2f27dcu;
    // NOP
label_2f27e0:
    // 0x2f27e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f27e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f27e4: 0xc0bc916  jal         func_2F2458
    ctx->pc = 0x2F27E4u;
    SET_GPR_U32(ctx, 31, 0x2F27ECu);
    ctx->pc = 0x2F27E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F27E4u;
    // 0x2f27e8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2458u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2458u, 0x2F27E4u, 0x2F27ECu)) {
        return;
    }
    ctx->pc = 0x2F27ECu;
label_2f27ec:
    // 0x2f27ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f27ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f27f0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f27f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f27f4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2F27F4u;
    {
        const bool branch_taken_0x2f27f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F27F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F27F4u;
        // 0x2f27f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f27f4) {
            ctx->pc = 0x2F284Cu;
            goto label_2f284c;
        }
    }
    ctx->pc = 0x2F27FCu;
    // 0x2f27fc: 0x741024  and         $v0, $v1, $s4
    ctx->pc = 0x2f27fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x2f2800: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2800u;
    {
        const bool branch_taken_0x2f2800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2800) {
            ctx->pc = 0x2F2804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2800u;
            // 0x2f2804: 0x8e630170  lw          $v1, 0x170($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2818u;
            goto label_2f2818;
        }
    }
    ctx->pc = 0x2F2808u;
    // 0x2f2808: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2f2808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2f280c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f280cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2810: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2F2810u;
    {
        const bool branch_taken_0x2f2810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2810u;
        // 0x2f2814: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2810) {
            ctx->pc = 0x2F284Cu;
            goto label_2f284c;
        }
    }
    ctx->pc = 0x2F2818u;
label_2f2818:
    // 0x2f2818: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f2818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f281c: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x2f281cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f2820: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2F2820u;
    {
        const bool branch_taken_0x2f2820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2820u;
        // 0x2f2824: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2820) {
            ctx->pc = 0x2F27E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f27e0;
        }
    }
    ctx->pc = 0x2F2828u;
label_2f2828:
    // 0x2f2828: 0x2d72021  addu        $a0, $s6, $s7
    ctx->pc = 0x2f2828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
    // 0x2f282c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f282cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f2830: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2830u;
    {
        const bool branch_taken_0x2f2830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2830u;
        // 0x2f2834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2830) {
            ctx->pc = 0x2F2840u;
            goto label_2f2840;
        }
    }
    ctx->pc = 0x2F2838u;
    // 0x2f2838: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x2F2838u;
    {
        const bool branch_taken_0x2f2838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2838u;
        // 0x2f283c: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2838) {
            ctx->pc = 0x2F27B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f27b8;
        }
    }
    ctx->pc = 0x2F2840u;
label_2f2840:
    // 0x2f2840: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f2840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f2844: 0x3463001c  ori         $v1, $v1, 0x1C
    ctx->pc = 0x2f2844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28);
    // 0x2f2848: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2f2848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2f284c:
    // 0x2f284c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2f284cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f2850: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2f2850u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f2854: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2f2854u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f2858: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2f2858u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f285c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2f285cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f2860: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f2860u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f2864: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f2864u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2868: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f2868u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f286c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f286cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2870: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f2870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2874: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2874u;
        // 0x2f2878: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F287Cu;
    // 0x2f287c: 0x0  nop
    ctx->pc = 0x2f287cu;
    // NOP
    ctx->pc = 0x2f2880u;
}
