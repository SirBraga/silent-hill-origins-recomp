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

// Function: sub_00302808
// Address: 0x302808 - 0x302960
void sub_00302808_0x302808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302808_0x302808");
#endif

    switch (ctx->pc) {
        case 0x302850u: goto label_302850;
        case 0x302864u: goto label_302864;
        case 0x302870u: goto label_302870;
        case 0x302878u: goto label_302878;
        case 0x302884u: goto label_302884;
        case 0x3028a0u: goto label_3028a0;
        case 0x3028e4u: goto label_3028e4;
        case 0x3028f4u: goto label_3028f4;
        case 0x302904u: goto label_302904;
        case 0x30291cu: goto label_30291c;
        default: break;
    }

    ctx->pc = 0x302808u;

    // 0x302808: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x302808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x30280c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x30280cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x302810: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x302810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x302814: 0x241701b3  addiu       $s7, $zero, 0x1B3
    ctx->pc = 0x302814u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
    // 0x302818: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x302818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x30281c: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x30281cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x302820: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x302820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x302824: 0x24150100  addiu       $s5, $zero, 0x100
    ctx->pc = 0x302824u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x302828: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x302828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x30282c: 0x241401b7  addiu       $s4, $zero, 0x1B7
    ctx->pc = 0x30282cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x302830: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x302830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x302834: 0x241301b8  addiu       $s3, $zero, 0x1B8
    ctx->pc = 0x302834u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
    // 0x302838: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x302838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x30283c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x30283cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x302840: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x302840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x302844: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x302844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302848: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x302848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x30284c: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x30284cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_302850:
    // 0x302850: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x302850u;
    {
        const bool branch_taken_0x302850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302850u;
        // 0x302854: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302850) {
            ctx->pc = 0x302930u;
            goto label_302930;
        }
    }
    ctx->pc = 0x302858u;
    // 0x302858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30285c: 0xc0c0a5a  jal         func_302968
    ctx->pc = 0x30285Cu;
    SET_GPR_U32(ctx, 31, 0x302864u);
    ctx->pc = 0x302860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30285Cu;
    // 0x302860: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302968u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x302968u, 0x30285Cu, 0x302864u)) {
        return;
    }
    ctx->pc = 0x302864u;
label_302864:
    // 0x302864: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x302864u;
    {
        const bool branch_taken_0x302864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302864u;
        // 0x302868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302864) {
            ctx->pc = 0x30287Cu;
            goto label_30287c;
        }
    }
    ctx->pc = 0x30286Cu;
    // 0x30286c: 0x0  nop
    ctx->pc = 0x30286cu;
    // NOP
label_302870:
    // 0x302870: 0xc0c0a00  jal         func_302800
    ctx->pc = 0x302870u;
    SET_GPR_U32(ctx, 31, 0x302878u);
    ctx->pc = 0x302874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302870u;
    // 0x302874: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302800u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x302800u, 0x302870u, 0x302878u)) {
        return;
    }
    ctx->pc = 0x302878u;
label_302878:
    // 0x302878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30287c:
    // 0x30287c: 0xc0c015c  jal         func_300570
    ctx->pc = 0x30287Cu;
    SET_GPR_U32(ctx, 31, 0x302884u);
    ctx->pc = 0x302880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30287Cu;
    // 0x302880: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300570u, 0x30287Cu, 0x302884u)) {
        return;
    }
    ctx->pc = 0x302884u;
label_302884:
    // 0x302884: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x302884u;
    {
        const bool branch_taken_0x302884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x302888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302884u;
        // 0x302888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302884) {
            ctx->pc = 0x302898u;
            goto label_302898;
        }
    }
    ctx->pc = 0x30288Cu;
    // 0x30288c: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x30288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x302890: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x302890u;
    {
        const bool branch_taken_0x302890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302890) {
            ctx->pc = 0x302870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_302870;
        }
    }
    ctx->pc = 0x302898u;
label_302898:
    // 0x302898: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302898u;
    SET_GPR_U32(ctx, 31, 0x3028A0u);
    ctx->pc = 0x30289Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302898u;
    // 0x30289c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302898u, 0x3028A0u)) {
        return;
    }
    ctx->pc = 0x3028A0u;
label_3028a0:
    // 0x3028a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3028a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3028a4: 0x1077000d  beq         $v1, $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x3028A4u;
    {
        const bool branch_taken_0x3028a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x3028A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3028A4u;
        // 0x3028a8: 0x2c6201b4  sltiu       $v0, $v1, 0x1B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)436) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3028a4) {
            ctx->pc = 0x3028DCu;
            goto label_3028dc;
        }
    }
    ctx->pc = 0x3028ACu;
    // 0x3028ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3028ACu;
    {
        const bool branch_taken_0x3028ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3028ac) {
            ctx->pc = 0x3028C4u;
            goto label_3028c4;
        }
    }
    ctx->pc = 0x3028B4u;
    // 0x3028b4: 0x10750011  beq         $v1, $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x3028B4u;
    {
        const bool branch_taken_0x3028b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x3028b4) {
            ctx->pc = 0x3028FCu;
            goto label_3028fc;
        }
    }
    ctx->pc = 0x3028BCu;
    // 0x3028bc: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x3028BCu;
    {
        const bool branch_taken_0x3028bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3028C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3028BCu;
        // 0x3028c0: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3028bc) {
            ctx->pc = 0x302850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_302850;
        }
    }
    ctx->pc = 0x3028C4u;
label_3028c4:
    // 0x3028c4: 0x1074001a  beq         $v1, $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x3028C4u;
    {
        const bool branch_taken_0x3028c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x3028C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3028C4u;
        // 0x3028c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3028c4) {
            ctx->pc = 0x302930u;
            goto label_302930;
        }
    }
    ctx->pc = 0x3028CCu;
    // 0x3028cc: 0x10730007  beq         $v1, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x3028CCu;
    {
        const bool branch_taken_0x3028cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x3028cc) {
            ctx->pc = 0x3028ECu;
            goto label_3028ec;
        }
    }
    ctx->pc = 0x3028D4u;
    // 0x3028d4: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x3028D4u;
    {
        const bool branch_taken_0x3028d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3028D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3028D4u;
        // 0x3028d8: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3028d4) {
            ctx->pc = 0x302850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_302850;
        }
    }
    ctx->pc = 0x3028DCu;
label_3028dc:
    // 0x3028dc: 0xc0c0744  jal         func_301D10
    ctx->pc = 0x3028DCu;
    SET_GPR_U32(ctx, 31, 0x3028E4u);
    ctx->pc = 0x3028E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3028DCu;
    // 0x3028e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x301D10u, 0x3028DCu, 0x3028E4u)) {
        return;
    }
    ctx->pc = 0x3028E4u;
label_3028e4:
    // 0x3028e4: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x3028E4u;
    {
        const bool branch_taken_0x3028e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3028E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3028E4u;
        // 0x3028e8: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3028e4) {
            ctx->pc = 0x302850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_302850;
        }
    }
    ctx->pc = 0x3028ECu;
label_3028ec:
    // 0x3028ec: 0xc0c07f0  jal         func_301FC0
    ctx->pc = 0x3028ECu;
    SET_GPR_U32(ctx, 31, 0x3028F4u);
    ctx->pc = 0x3028F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3028ECu;
    // 0x3028f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x301FC0u, 0x3028ECu, 0x3028F4u)) {
        return;
    }
    ctx->pc = 0x3028F4u;
label_3028f4:
    // 0x3028f4: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x3028F4u;
    {
        const bool branch_taken_0x3028f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3028F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3028F4u;
        // 0x3028f8: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3028f4) {
            ctx->pc = 0x302850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_302850;
        }
    }
    ctx->pc = 0x3028FCu;
label_3028fc:
    // 0x3028fc: 0xc0c0818  jal         func_302060
    ctx->pc = 0x3028FCu;
    SET_GPR_U32(ctx, 31, 0x302904u);
    ctx->pc = 0x302900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3028FCu;
    // 0x302900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x302060u, 0x3028FCu, 0x302904u)) {
        return;
    }
    ctx->pc = 0x302904u;
label_302904:
    // 0x302904: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x302904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x302908: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x302908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30290c: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x30290cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x302910: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x302910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x302914: 0xc0be66a  jal         func_2F99A8
    ctx->pc = 0x302914u;
    SET_GPR_U32(ctx, 31, 0x30291Cu);
    ctx->pc = 0x302918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302914u;
    // 0x302918: 0xffb20008  sd          $s2, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F99A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F99A8u, 0x302914u, 0x30291Cu)) {
        return;
    }
    ctx->pc = 0x30291Cu;
label_30291c:
    // 0x30291c: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x30291cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302920: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x302920u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x302924: 0xfe020840  sd          $v0, 0x840($s0)
    ctx->pc = 0x302924u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2112), GPR_U64(ctx, 2));
    // 0x302928: 0xfe030838  sd          $v1, 0x838($s0)
    ctx->pc = 0x302928u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2104), GPR_U64(ctx, 3));
    // 0x30292c: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x30292cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_302930:
    // 0x302930: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x302930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x302934: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x302934u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x302938: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x302938u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30293c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x30293cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x302940: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x302940u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x302944: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x302944u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x302948: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x302948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30294c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x30294cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x302950: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x302950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302954: 0x3e00008  jr          $ra
    ctx->pc = 0x302954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302954u;
        // 0x302958: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30295Cu;
    // 0x30295c: 0x0  nop
    ctx->pc = 0x30295cu;
    // NOP
    ctx->pc = 0x302960u;
}
