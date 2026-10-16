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

// Function: sub_001687C8
// Address: 0x1687c8 - 0x1688e0
void sub_001687C8_0x1687c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001687C8_0x1687c8");
#endif

    switch (ctx->pc) {
        case 0x16881cu: goto label_16881c;
        case 0x168830u: goto label_168830;
        case 0x16883cu: goto label_16883c;
        case 0x168844u: goto label_168844;
        case 0x168850u: goto label_168850;
        case 0x168858u: goto label_168858;
        case 0x168870u: goto label_168870;
        case 0x168898u: goto label_168898;
        case 0x1688a4u: goto label_1688a4;
        case 0x1688b0u: goto label_1688b0;
        case 0x1688bcu: goto label_1688bc;
        default: break;
    }

    ctx->pc = 0x1687c8u;

    // 0x1687c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1687c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1687cc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1687ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1687d0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1687d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1687d4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1687d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1687d8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1687d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1687dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1687dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1687e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1687e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1687e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687e8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1687e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1687ec: 0x24424080  addiu       $v0, $v0, 0x4080
    ctx->pc = 0x1687ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16512));
    // 0x1687f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1687f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1687f4: 0x246340a0  addiu       $v1, $v1, 0x40A0
    ctx->pc = 0x1687f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16544));
    // 0x1687f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1687f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1687fc: 0x26700038  addiu       $s0, $s3, 0x38
    ctx->pc = 0x1687fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x168800: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x168800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x168804: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x168804u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    // 0x168808: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x168808u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
    // 0x16880c: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x16880cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    // 0x168810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168814: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x168814u;
    SET_GPR_U32(ctx, 31, 0x16881Cu);
    ctx->pc = 0x168818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168814u;
    // 0x168818: 0x26710074  addiu       $s1, $s3, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x168814u, 0x16881Cu)) {
        return;
    }
    ctx->pc = 0x16881Cu;
label_16881c:
    // 0x16881c: 0x2672007c  addiu       $s2, $s3, 0x7C
    ctx->pc = 0x16881cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 124));
    // 0x168820: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x168820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x168824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168828: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x168828u;
    SET_GPR_U32(ctx, 31, 0x168830u);
    ctx->pc = 0x16882Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168828u;
    // 0x16882c: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x168828u, 0x168830u)) {
        return;
    }
    ctx->pc = 0x168830u;
label_168830:
    // 0x168830: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x168830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168834: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x168834u;
    SET_GPR_U32(ctx, 31, 0x16883Cu);
    ctx->pc = 0x168838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168834u;
    // 0x168838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x168834u, 0x16883Cu)) {
        return;
    }
    ctx->pc = 0x16883Cu;
label_16883c:
    // 0x16883c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16883Cu;
    SET_GPR_U32(ctx, 31, 0x168844u);
    ctx->pc = 0x168840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16883Cu;
    // 0x168840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16883Cu, 0x168844u)) {
        return;
    }
    ctx->pc = 0x168844u;
label_168844:
    // 0x168844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168848: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x168848u;
    SET_GPR_U32(ctx, 31, 0x168850u);
    ctx->pc = 0x16884Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168848u;
    // 0x16884c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x168848u, 0x168850u)) {
        return;
    }
    ctx->pc = 0x168850u;
label_168850:
    // 0x168850: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x168850u;
    SET_GPR_U32(ctx, 31, 0x168858u);
    ctx->pc = 0x168854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168850u;
    // 0x168854: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x168850u, 0x168858u)) {
        return;
    }
    ctx->pc = 0x168858u;
label_168858:
    // 0x168858: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x168858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x16885c: 0x8c4486ac  lw          $a0, -0x7954($v0)
    ctx->pc = 0x16885cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3386ACu));
    // 0x168860: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x168860u;
    {
        const bool branch_taken_0x168860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x168864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168860u;
        // 0x168864: 0xac4086ac  sw          $zero, -0x7954($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168860) {
            ctx->pc = 0x16888Cu;
            goto label_16888c;
        }
    }
    ctx->pc = 0x168868u;
    // 0x168868: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16886c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x16886cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_168870:
    // 0x168870: 0x10730004  beq         $v1, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x168870u;
    {
        const bool branch_taken_0x168870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x168874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168870u;
        // 0x168874: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168870) {
            ctx->pc = 0x168884u;
            goto label_168884;
        }
    }
    ctx->pc = 0x168878u;
    // 0x168878: 0x8ca286ac  lw          $v0, -0x7954($a1)
    ctx->pc = 0x168878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294936236)));
    // 0x16887c: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x16887cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x168880: 0xaca386ac  sw          $v1, -0x7954($a1)
    ctx->pc = 0x168880u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294936236), GPR_U32(ctx, 3));
label_168884:
    // 0x168884: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x168884u;
    {
        const bool branch_taken_0x168884 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x168888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168884u;
        // 0x168888: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168884) {
            ctx->pc = 0x168870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168870;
        }
    }
    ctx->pc = 0x16888Cu;
label_16888c:
    // 0x16888c: 0x2664007c  addiu       $a0, $s3, 0x7C
    ctx->pc = 0x16888cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 124));
    // 0x168890: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x168890u;
    SET_GPR_U32(ctx, 31, 0x168898u);
    ctx->pc = 0x168894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168890u;
    // 0x168894: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x168890u, 0x168898u)) {
        return;
    }
    ctx->pc = 0x168898u;
label_168898:
    // 0x168898: 0x26640074  addiu       $a0, $s3, 0x74
    ctx->pc = 0x168898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 116));
    // 0x16889c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16889Cu;
    SET_GPR_U32(ctx, 31, 0x1688A4u);
    ctx->pc = 0x1688A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16889Cu;
    // 0x1688a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16889Cu, 0x1688A4u)) {
        return;
    }
    ctx->pc = 0x1688A4u;
label_1688a4:
    // 0x1688a4: 0x26640044  addiu       $a0, $s3, 0x44
    ctx->pc = 0x1688a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
    // 0x1688a8: 0xc07924c  jal         func_1E4930
    ctx->pc = 0x1688A8u;
    SET_GPR_U32(ctx, 31, 0x1688B0u);
    ctx->pc = 0x1688ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1688A8u;
    // 0x1688ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4930u, 0x1688A8u, 0x1688B0u)) {
        return;
    }
    ctx->pc = 0x1688B0u;
label_1688b0:
    // 0x1688b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1688b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1688b4: 0xc04f084  jal         func_13C210
    ctx->pc = 0x1688B4u;
    SET_GPR_U32(ctx, 31, 0x1688BCu);
    ctx->pc = 0x1688B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1688B4u;
    // 0x1688b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x1688B4u, 0x1688BCu)) {
        return;
    }
    ctx->pc = 0x1688BCu;
label_1688bc:
    // 0x1688bc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1688bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1688c0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1688c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1688c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1688c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1688c8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1688c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1688cc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1688ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1688d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1688d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1688d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1688D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1688D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1688D4u;
        // 0x1688d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1688D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1688DCu;
    // 0x1688dc: 0x0  nop
    ctx->pc = 0x1688dcu;
    // NOP
    ctx->pc = 0x1688e0u;
}
