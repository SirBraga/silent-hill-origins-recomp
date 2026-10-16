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

// Function: sub_00301858
// Address: 0x301858 - 0x3019f8
void sub_00301858_0x301858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301858_0x301858");
#endif

    switch (ctx->pc) {
        case 0x301890u: goto label_301890;
        case 0x301898u: goto label_301898;
        case 0x3018a0u: goto label_3018a0;
        case 0x3018acu: goto label_3018ac;
        case 0x3018c8u: goto label_3018c8;
        case 0x3018ecu: goto label_3018ec;
        case 0x3018fcu: goto label_3018fc;
        case 0x301908u: goto label_301908;
        case 0x301918u: goto label_301918;
        case 0x301928u: goto label_301928;
        case 0x301934u: goto label_301934;
        case 0x301940u: goto label_301940;
        case 0x301948u: goto label_301948;
        case 0x301954u: goto label_301954;
        case 0x301964u: goto label_301964;
        case 0x301984u: goto label_301984;
        default: break;
    }

    ctx->pc = 0x301858u;

    // 0x301858: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x301858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30185c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30185cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x301860: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x301860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x301864: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x301864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301868: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x301868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x30186c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x30186cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301870: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x301870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x301874: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x301874u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301878: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x301878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x30187c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x30187cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x301880: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x301880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301884: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x301884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x301888: 0xc0c0a5a  jal         func_302968
    ctx->pc = 0x301888u;
    SET_GPR_U32(ctx, 31, 0x301890u);
    ctx->pc = 0x30188Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301888u;
    // 0x30188c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302968u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x302968u, 0x301888u, 0x301890u)) {
        return;
    }
    ctx->pc = 0x301890u;
label_301890:
    // 0x301890: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x301890u;
    {
        const bool branch_taken_0x301890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301890u;
        // 0x301894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301890) {
            ctx->pc = 0x3018A4u;
            goto label_3018a4;
        }
    }
    ctx->pc = 0x301898u;
label_301898:
    // 0x301898: 0xc0c0a00  jal         func_302800
    ctx->pc = 0x301898u;
    SET_GPR_U32(ctx, 31, 0x3018A0u);
    ctx->pc = 0x30189Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301898u;
    // 0x30189c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302800u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x302800u, 0x301898u, 0x3018A0u)) {
        return;
    }
    ctx->pc = 0x3018A0u;
label_3018a0:
    // 0x3018a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3018a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3018a4:
    // 0x3018a4: 0xc0c015c  jal         func_300570
    ctx->pc = 0x3018A4u;
    SET_GPR_U32(ctx, 31, 0x3018ACu);
    ctx->pc = 0x3018A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3018A4u;
    // 0x3018a8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300570u, 0x3018A4u, 0x3018ACu)) {
        return;
    }
    ctx->pc = 0x3018ACu;
label_3018ac:
    // 0x3018ac: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3018ACu;
    {
        const bool branch_taken_0x3018ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x3018B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3018ACu;
        // 0x3018b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3018ac) {
            ctx->pc = 0x3018C0u;
            goto label_3018c0;
        }
    }
    ctx->pc = 0x3018B4u;
    // 0x3018b4: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x3018b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x3018b8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3018B8u;
    {
        const bool branch_taken_0x3018b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3018b8) {
            ctx->pc = 0x301898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301898;
        }
    }
    ctx->pc = 0x3018C0u;
label_3018c0:
    // 0x3018c0: 0xc0c015c  jal         func_300570
    ctx->pc = 0x3018C0u;
    SET_GPR_U32(ctx, 31, 0x3018C8u);
    ctx->pc = 0x3018C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3018C0u;
    // 0x3018c4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300570u, 0x3018C0u, 0x3018C8u)) {
        return;
    }
    ctx->pc = 0x3018C8u;
label_3018c8:
    // 0x3018c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3018c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3018cc: 0x2642feff  addiu       $v0, $s2, -0x101
    ctx->pc = 0x3018ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967039));
    // 0x3018d0: 0x2c4200af  sltiu       $v0, $v0, 0xAF
    ctx->pc = 0x3018d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)175) ? 1 : 0);
    // 0x3018d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3018D4u;
    {
        const bool branch_taken_0x3018d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3018D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3018D4u;
        // 0x3018d8: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3018d4) {
            ctx->pc = 0x3018F4u;
            goto label_3018f4;
        }
    }
    ctx->pc = 0x3018DCu;
    // 0x3018dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3018dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3018e0: 0x24a50918  addiu       $a1, $a1, 0x918
    ctx->pc = 0x3018e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2328));
    // 0x3018e4: 0xc0bf772  jal         func_2FDDC8
    ctx->pc = 0x3018E4u;
    SET_GPR_U32(ctx, 31, 0x3018ECu);
    ctx->pc = 0x3018E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3018E4u;
    // 0x3018e8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDDC8u, 0x3018E4u, 0x3018ECu)) {
        return;
    }
    ctx->pc = 0x3018ECu;
label_3018ec:
    // 0x3018ec: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3018ECu;
    {
        const bool branch_taken_0x3018ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3018F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3018ECu;
        // 0x3018f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3018ec) {
            ctx->pc = 0x3019D8u;
            goto label_3019d8;
        }
    }
    ctx->pc = 0x3018F4u;
label_3018f4:
    // 0x3018f4: 0xc0c0a58  jal         func_302960
    ctx->pc = 0x3018F4u;
    SET_GPR_U32(ctx, 31, 0x3018FCu);
    ctx->pc = 0x3018F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3018F4u;
    // 0x3018f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x302960u, 0x3018F4u, 0x3018FCu)) {
        return;
    }
    ctx->pc = 0x3018FCu;
label_3018fc:
    // 0x3018fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3018fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301900: 0xc0c0122  jal         func_300488
    ctx->pc = 0x301900u;
    SET_GPR_U32(ctx, 31, 0x301908u);
    ctx->pc = 0x301904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301900u;
    // 0x301904: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x301900u, 0x301908u)) {
        return;
    }
    ctx->pc = 0x301908u;
label_301908:
    // 0x301908: 0xae0201c4  sw          $v0, 0x1C4($s0)
    ctx->pc = 0x301908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
    // 0x30190c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30190cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301910: 0xc0c0122  jal         func_300488
    ctx->pc = 0x301910u;
    SET_GPR_U32(ctx, 31, 0x301918u);
    ctx->pc = 0x301914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301910u;
    // 0x301914: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x301910u, 0x301918u)) {
        return;
    }
    ctx->pc = 0x301918u;
label_301918:
    // 0x301918: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x301918u;
    {
        const bool branch_taken_0x301918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301918u;
        // 0x30191c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301918) {
            ctx->pc = 0x30195Cu;
            goto label_30195c;
        }
    }
    ctx->pc = 0x301920u;
    // 0x301920: 0xc0c0122  jal         func_300488
    ctx->pc = 0x301920u;
    SET_GPR_U32(ctx, 31, 0x301928u);
    ctx->pc = 0x301924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301920u;
    // 0x301924: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x301920u, 0x301928u)) {
        return;
    }
    ctx->pc = 0x301928u;
label_301928:
    // 0x301928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30192c: 0xc0c0a00  jal         func_302800
    ctx->pc = 0x30192Cu;
    SET_GPR_U32(ctx, 31, 0x301934u);
    ctx->pc = 0x301930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30192Cu;
    // 0x301930: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302800u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x302800u, 0x30192Cu, 0x301934u)) {
        return;
    }
    ctx->pc = 0x301934u;
label_301934:
    // 0x301934: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x301934u;
    {
        const bool branch_taken_0x301934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301934u;
        // 0x301938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301934) {
            ctx->pc = 0x30194Cu;
            goto label_30194c;
        }
    }
    ctx->pc = 0x30193Cu;
    // 0x30193c: 0x0  nop
    ctx->pc = 0x30193cu;
    // NOP
label_301940:
    // 0x301940: 0xc0c0a00  jal         func_302800
    ctx->pc = 0x301940u;
    SET_GPR_U32(ctx, 31, 0x301948u);
    ctx->pc = 0x301944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301940u;
    // 0x301944: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302800u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x302800u, 0x301940u, 0x301948u)) {
        return;
    }
    ctx->pc = 0x301948u;
label_301948:
    // 0x301948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30194c:
    // 0x30194c: 0xc0c0122  jal         func_300488
    ctx->pc = 0x30194Cu;
    SET_GPR_U32(ctx, 31, 0x301954u);
    ctx->pc = 0x301950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30194Cu;
    // 0x301950: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x30194Cu, 0x301954u)) {
        return;
    }
    ctx->pc = 0x301954u;
label_301954:
    // 0x301954: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x301954u;
    {
        const bool branch_taken_0x301954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x301958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301954u;
        // 0x301958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301954) {
            ctx->pc = 0x301940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301940;
        }
    }
    ctx->pc = 0x30195Cu;
label_30195c:
    // 0x30195c: 0xc0c000a  jal         func_300028
    ctx->pc = 0x30195Cu;
    SET_GPR_U32(ctx, 31, 0x301964u);
    ctx->pc = 0x301960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30195Cu;
    // 0x301960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300028u, 0x30195Cu, 0x301964u)) {
        return;
    }
    ctx->pc = 0x301964u;
label_301964:
    // 0x301964: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x301964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301968: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x301968u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x30196c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x30196cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x301970: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x301970u;
    {
        const bool branch_taken_0x301970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301970u;
        // 0x301974: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301970) {
            ctx->pc = 0x30198Cu;
            goto label_30198c;
        }
    }
    ctx->pc = 0x301978u;
    // 0x301978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30197c: 0xc0bf75c  jal         func_2FDD70
    ctx->pc = 0x30197Cu;
    SET_GPR_U32(ctx, 31, 0x301984u);
    ctx->pc = 0x301980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30197Cu;
    // 0x301980: 0x24a50940  addiu       $a1, $a1, 0x940 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDD70u, 0x30197Cu, 0x301984u)) {
        return;
    }
    ctx->pc = 0x301984u;
label_301984:
    // 0x301984: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x301984u;
    {
        const bool branch_taken_0x301984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301984u;
        // 0x301988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301984) {
            ctx->pc = 0x3019D8u;
            goto label_3019d8;
        }
    }
    ctx->pc = 0x30198Cu;
label_30198c:
    // 0x30198c: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x30198cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x301990: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x301990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x301994: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x301994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x301998: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x301998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30199c: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x30199cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3019a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3019a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3019a4: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x3019a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3019a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3019a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3019ac: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3019acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x3019b0: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x3019b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x3019b4: 0xae0401c0  sw          $a0, 0x1C0($s0)
    ctx->pc = 0x3019b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 4));
    // 0x3019b8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3019b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3019bc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x3019bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x3019c0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3019c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x3019c4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3019c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x3019c8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3019c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x3019cc: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x3019ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x3019d0: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x3019d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x3019d4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3019d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_3019d8:
    // 0x3019d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3019d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3019dc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3019dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3019e0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3019e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3019e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3019e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3019e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3019e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3019ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3019ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3019f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3019F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3019F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3019F0u;
        // 0x3019f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3019F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3019F8u;
}
