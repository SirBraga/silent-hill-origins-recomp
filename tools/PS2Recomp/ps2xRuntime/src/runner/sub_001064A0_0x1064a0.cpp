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

// Function: sub_001064A0
// Address: 0x1064a0 - 0x106598
void sub_001064A0_0x1064a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001064A0_0x1064a0");
#endif

    switch (ctx->pc) {
        case 0x1064e0u: goto label_1064e0;
        case 0x1064f8u: goto label_1064f8;
        case 0x106510u: goto label_106510;
        case 0x106550u: goto label_106550;
        case 0x10655cu: goto label_10655c;
        case 0x10656cu: goto label_10656c;
        default: break;
    }

    ctx->pc = 0x1064a0u;

    // 0x1064a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1064a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1064a4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1064a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1064a8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1064a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1064ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1064acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064b0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1064b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1064b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1064b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1064b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1064bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1064bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1064c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1064c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1064c4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1064c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1064c8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1064C8u;
    {
        const bool branch_taken_0x1064c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1064CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064C8u;
        // 0x1064cc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064c8) {
            ctx->pc = 0x106578u;
            goto label_106578;
        }
    }
    ctx->pc = 0x1064D0u;
    // 0x1064d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1064d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1064d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064d8: 0xc08063c  jal         func_2018F0
    ctx->pc = 0x1064D8u;
    SET_GPR_U32(ctx, 31, 0x1064E0u);
    ctx->pc = 0x1064DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1064D8u;
    // 0x1064dc: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x1064D8u, 0x1064E0u)) {
        return;
    }
    ctx->pc = 0x1064E0u;
label_1064e0:
    // 0x1064e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1064e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064e4: 0x12400024  beqz        $s2, . + 4 + (0x24 << 2)
    ctx->pc = 0x1064E4u;
    {
        const bool branch_taken_0x1064e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1064E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064E4u;
        // 0x1064e8: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064e4) {
            ctx->pc = 0x106578u;
            goto label_106578;
        }
    }
    ctx->pc = 0x1064ECu;
    // 0x1064ec: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1064ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1064f0: 0xc065c58  jal         func_197160
    ctx->pc = 0x1064F0u;
    SET_GPR_U32(ctx, 31, 0x1064F8u);
    ctx->pc = 0x1064F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1064F0u;
    // 0x1064f4: 0x248498b0  addiu       $a0, $a0, -0x6750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x1064F0u, 0x1064F8u)) {
        return;
    }
    ctx->pc = 0x1064F8u;
label_1064f8:
    // 0x1064f8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1064F8u;
    {
        const bool branch_taken_0x1064f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1064FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064F8u;
        // 0x1064fc: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064f8) {
            ctx->pc = 0x106578u;
            goto label_106578;
        }
    }
    ctx->pc = 0x106500u;
    // 0x106500: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x106500u;
    {
        const bool branch_taken_0x106500 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x106504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106500u;
        // 0x106504: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106500) {
            ctx->pc = 0x10657Cu;
            goto label_10657c;
        }
    }
    ctx->pc = 0x106508u;
    // 0x106508: 0xc0419d8  jal         func_106760
    ctx->pc = 0x106508u;
    SET_GPR_U32(ctx, 31, 0x106510u);
    ctx->pc = 0x10650Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106508u;
    // 0x10650c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x106760u, 0x106508u, 0x106510u)) {
        return;
    }
    ctx->pc = 0x106510u;
label_106510:
    // 0x106510: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x106510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x106514: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x106514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x106518: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x106518u;
    {
        const bool branch_taken_0x106518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106518u;
        // 0x10651c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106518) {
            ctx->pc = 0x10657Cu;
            goto label_10657c;
        }
    }
    ctx->pc = 0x106520u;
    // 0x106520: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x106520u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x106524: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x106524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x106528: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x106528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x10652c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x10652cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x106530: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x106530u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x106534: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x106534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x106538: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x106538u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10653c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10653cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x106540: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x106540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x106544: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x106544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x106548: 0xc081b9a  jal         func_206E68
    ctx->pc = 0x106548u;
    SET_GPR_U32(ctx, 31, 0x106550u);
    ctx->pc = 0x10654Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106548u;
    // 0x10654c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206E68u, 0x106548u, 0x106550u)) {
        return;
    }
    ctx->pc = 0x106550u;
label_106550:
    // 0x106550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106554: 0xc065c40  jal         func_197100
    ctx->pc = 0x106554u;
    SET_GPR_U32(ctx, 31, 0x10655Cu);
    ctx->pc = 0x106558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106554u;
    // 0x106558: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x106554u, 0x10655Cu)) {
        return;
    }
    ctx->pc = 0x10655Cu;
label_10655c:
    // 0x10655c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x10655cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x106560: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x106560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106564: 0xc041966  jal         func_106598
    ctx->pc = 0x106564u;
    SET_GPR_U32(ctx, 31, 0x10656Cu);
    ctx->pc = 0x106568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106564u;
    // 0x106568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x106598u, 0x106564u, 0x10656Cu)) {
        return;
    }
    ctx->pc = 0x10656Cu;
label_10656c:
    // 0x10656c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x10656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x106570: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x106570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x106574: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x106574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_106578:
    // 0x106578: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x106578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10657c:
    // 0x10657c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x10657cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106580: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x106580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106584: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x106584u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106588: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x106588u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10658c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10658cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106590: 0x3e00008  jr          $ra
    ctx->pc = 0x106590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106590u;
        // 0x106594: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106598u;
}
