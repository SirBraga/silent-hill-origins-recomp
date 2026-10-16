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

// Function: sub_00252300
// Address: 0x252300 - 0x252418
void sub_00252300_0x252300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252300_0x252300");
#endif

    switch (ctx->pc) {
        case 0x252300u: goto label_252300;
        case 0x252304u: goto label_252304;
        case 0x252308u: goto label_252308;
        case 0x25230cu: goto label_25230c;
        case 0x252310u: goto label_252310;
        case 0x252314u: goto label_252314;
        case 0x252318u: goto label_252318;
        case 0x25231cu: goto label_25231c;
        case 0x252320u: goto label_252320;
        case 0x252324u: goto label_252324;
        case 0x252328u: goto label_252328;
        case 0x25232cu: goto label_25232c;
        case 0x252330u: goto label_252330;
        case 0x252334u: goto label_252334;
        case 0x252338u: goto label_252338;
        case 0x25233cu: goto label_25233c;
        case 0x252340u: goto label_252340;
        case 0x252344u: goto label_252344;
        case 0x252348u: goto label_252348;
        case 0x25234cu: goto label_25234c;
        case 0x252350u: goto label_252350;
        case 0x252354u: goto label_252354;
        case 0x252358u: goto label_252358;
        case 0x25235cu: goto label_25235c;
        case 0x252360u: goto label_252360;
        case 0x252364u: goto label_252364;
        case 0x252368u: goto label_252368;
        case 0x25236cu: goto label_25236c;
        case 0x252370u: goto label_252370;
        case 0x252374u: goto label_252374;
        case 0x252378u: goto label_252378;
        case 0x25237cu: goto label_25237c;
        case 0x252380u: goto label_252380;
        case 0x252384u: goto label_252384;
        case 0x252388u: goto label_252388;
        case 0x25238cu: goto label_25238c;
        case 0x252390u: goto label_252390;
        case 0x252394u: goto label_252394;
        case 0x252398u: goto label_252398;
        case 0x25239cu: goto label_25239c;
        case 0x2523a0u: goto label_2523a0;
        case 0x2523a4u: goto label_2523a4;
        case 0x2523a8u: goto label_2523a8;
        case 0x2523acu: goto label_2523ac;
        case 0x2523b0u: goto label_2523b0;
        case 0x2523b4u: goto label_2523b4;
        case 0x2523b8u: goto label_2523b8;
        case 0x2523bcu: goto label_2523bc;
        case 0x2523c0u: goto label_2523c0;
        case 0x2523c4u: goto label_2523c4;
        case 0x2523c8u: goto label_2523c8;
        case 0x2523ccu: goto label_2523cc;
        case 0x2523d0u: goto label_2523d0;
        case 0x2523d4u: goto label_2523d4;
        case 0x2523d8u: goto label_2523d8;
        case 0x2523dcu: goto label_2523dc;
        case 0x2523e0u: goto label_2523e0;
        case 0x2523e4u: goto label_2523e4;
        case 0x2523e8u: goto label_2523e8;
        case 0x2523ecu: goto label_2523ec;
        case 0x2523f0u: goto label_2523f0;
        case 0x2523f4u: goto label_2523f4;
        case 0x2523f8u: goto label_2523f8;
        case 0x2523fcu: goto label_2523fc;
        case 0x252400u: goto label_252400;
        case 0x252404u: goto label_252404;
        case 0x252408u: goto label_252408;
        case 0x25240cu: goto label_25240c;
        case 0x252410u: goto label_252410;
        case 0x252414u: goto label_252414;
        default: break;
    }

    ctx->pc = 0x252300u;

label_252300:
    // 0x252300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x252300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_252304:
    // 0x252304: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x252304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_252308:
    // 0x252308: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x252308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_25230c:
    // 0x25230c: 0x24435618  addiu       $v1, $v0, 0x5618
    ctx->pc = 0x25230cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 22040));
label_252310:
    // 0x252310: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x252310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_252314:
    // 0x252314: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x252314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_252318:
    // 0x252318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25231c:
    // 0x25231c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25231cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_252320:
    // 0x252320: 0x8c455618  lw          $a1, 0x5618($v0)
    ctx->pc = 0x252320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22040)));
label_252324:
    // 0x252324: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x252324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_252328:
    // 0x252328: 0xa48021  addu        $s0, $a1, $a0
    ctx->pc = 0x252328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_25232c:
    // 0x25232c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x25232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_252330:
    // 0x252330: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_252334:
    if (ctx->pc == 0x252334u) {
        ctx->pc = 0x252334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252330u;
        // 0x252334: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252338u;
        goto label_252338;
    }
    ctx->pc = 0x252330u;
    {
        const bool branch_taken_0x252330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252330u;
        // 0x252334: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252330) {
            ctx->pc = 0x252390u;
            goto label_252390;
        }
    }
    ctx->pc = 0x252338u;
label_252338:
    // 0x252338: 0xc094adc  jal         func_252B70
label_25233c:
    if (ctx->pc == 0x25233Cu) {
        ctx->pc = 0x25233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252338u;
        // 0x25233c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252340u;
        goto label_252340;
    }
    ctx->pc = 0x252338u;
    SET_GPR_U32(ctx, 31, 0x252340u);
    ctx->pc = 0x25233Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252338u;
    // 0x25233c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252B70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x252B70u, 0x252338u, 0x252340u)) {
        return;
    }
    ctx->pc = 0x252340u;
label_252340:
    // 0x252340: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_252344:
    if (ctx->pc == 0x252344u) {
        ctx->pc = 0x252344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252340u;
        // 0x252344: 0x96430084  lhu         $v1, 0x84($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252348u;
        goto label_252348;
    }
    ctx->pc = 0x252340u;
    {
        const bool branch_taken_0x252340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252340) {
            ctx->pc = 0x252344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252340u;
            // 0x252344: 0x96430084  lhu         $v1, 0x84($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25237Cu;
            goto label_25237c;
        }
    }
    ctx->pc = 0x252348u;
label_252348:
    // 0x252348: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x252348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_25234c:
    // 0x25234c: 0x40f809  jalr        $v0
label_252350:
    if (ctx->pc == 0x252350u) {
        ctx->pc = 0x252350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25234Cu;
        // 0x252350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252354u;
        goto label_252354;
    }
    ctx->pc = 0x25234Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x252354u);
        ctx->pc = 0x252350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25234Cu;
        // 0x252350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25234Cu, 0x252354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x252354u;
label_252354:
    // 0x252354: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x252354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_252358:
    // 0x252358: 0x96430084  lhu         $v1, 0x84($s2)
    ctx->pc = 0x252358u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 132)));
label_25235c:
    // 0x25235c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x25235cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_252360:
    // 0x252360: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x252360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_252364:
    // 0x252364: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x252364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_252368:
    // 0x252368: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x252368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_25236c:
    // 0x25236c: 0x96430084  lhu         $v1, 0x84($s2)
    ctx->pc = 0x25236cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 132)));
label_252370:
    // 0x252370: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x252370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_252374:
    // 0x252374: 0x1000000a  b           . + 4 + (0xA << 2)
label_252378:
    if (ctx->pc == 0x252378u) {
        ctx->pc = 0x252378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252374u;
        // 0x252378: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25237Cu;
        goto label_25237c;
    }
    ctx->pc = 0x252374u;
    {
        const bool branch_taken_0x252374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252374u;
        // 0x252378: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252374) {
            ctx->pc = 0x2523A0u;
            goto label_2523a0;
        }
    }
    ctx->pc = 0x25237Cu;
label_25237c:
    // 0x25237c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25237cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_252380:
    // 0x252380: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x252380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_252384:
    // 0x252384: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x252384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_252388:
    // 0x252388: 0x10000005  b           . + 4 + (0x5 << 2)
label_25238c:
    if (ctx->pc == 0x25238Cu) {
        ctx->pc = 0x25238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252388u;
        // 0x25238c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252390u;
        goto label_252390;
    }
    ctx->pc = 0x252388u;
    {
        const bool branch_taken_0x252388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252388u;
        // 0x25238c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252388) {
            ctx->pc = 0x2523A0u;
            goto label_2523a0;
        }
    }
    ctx->pc = 0x252390u;
label_252390:
    // 0x252390: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x252390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_252394:
    // 0x252394: 0x40f809  jalr        $v0
label_252398:
    if (ctx->pc == 0x252398u) {
        ctx->pc = 0x252398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252394u;
        // 0x252398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25239Cu;
        goto label_25239c;
    }
    ctx->pc = 0x252394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25239Cu);
        ctx->pc = 0x252398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252394u;
        // 0x252398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252394u, 0x25239Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25239Cu;
label_25239c:
    // 0x25239c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25239cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2523a0:
    // 0x2523a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2523a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2523a4:
    // 0x2523a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2523a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2523a8:
    // 0x2523a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2523a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2523ac:
    // 0x2523ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2523acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2523b0:
    // 0x2523b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2523b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2523b4:
    // 0x2523b4: 0x3e00008  jr          $ra
label_2523b8:
    if (ctx->pc == 0x2523B8u) {
        ctx->pc = 0x2523B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2523B4u;
        // 0x2523b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2523BCu;
        goto label_2523bc;
    }
    ctx->pc = 0x2523B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2523B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2523B4u;
        // 0x2523b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2523B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2523BCu;
label_2523bc:
    // 0x2523bc: 0x0  nop
    ctx->pc = 0x2523bcu;
    // NOP
label_2523c0:
    // 0x2523c0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2523c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2523c4:
    // 0x2523c4: 0x0  nop
    ctx->pc = 0x2523c4u;
    // NOP
label_2523c8:
    // 0x2523c8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2523c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2523cc:
    // 0x2523cc: 0x0  nop
    ctx->pc = 0x2523ccu;
    // NOP
label_2523d0:
    // 0x2523d0: 0x0  nop
    ctx->pc = 0x2523d0u;
    // NOP
label_2523d4:
    // 0x2523d4: 0x0  nop
    ctx->pc = 0x2523d4u;
    // NOP
label_2523d8:
    // 0x2523d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2523d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2523dc:
    // 0x2523dc: 0x0  nop
    ctx->pc = 0x2523dcu;
    // NOP
label_2523e0:
    // 0x2523e0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2523e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_2523e4:
    // 0x2523e4: 0x0  nop
    ctx->pc = 0x2523e4u;
    // NOP
label_2523e8:
    // 0x2523e8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2523e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2523ec:
    // 0x2523ec: 0x0  nop
    ctx->pc = 0x2523ecu;
    // NOP
label_2523f0:
    // 0x2523f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2523f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2523f4:
    // 0x2523f4: 0x0  nop
    ctx->pc = 0x2523f4u;
    // NOP
label_2523f8:
    // 0x2523f8: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2523f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2523fc:
    // 0x2523fc: 0x0  nop
    ctx->pc = 0x2523fcu;
    // NOP
label_252400:
    // 0x252400: 0x0  nop
    ctx->pc = 0x252400u;
    // NOP
label_252404:
    // 0x252404: 0x0  nop
    ctx->pc = 0x252404u;
    // NOP
label_252408:
    // 0x252408: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x252408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_25240c:
    // 0x25240c: 0x0  nop
    ctx->pc = 0x25240cu;
    // NOP
label_252410:
    // 0x252410: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x252410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_252414:
    // 0x252414: 0x0  nop
    ctx->pc = 0x252414u;
    // NOP
    ctx->pc = 0x252418u;
}
