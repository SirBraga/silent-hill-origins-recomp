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

// Function: sub_002764E0
// Address: 0x2764e0 - 0x276590
void sub_002764E0_0x2764e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002764E0_0x2764e0");
#endif

    switch (ctx->pc) {
        case 0x2764e0u: goto label_2764e0;
        case 0x2764e4u: goto label_2764e4;
        case 0x2764e8u: goto label_2764e8;
        case 0x2764ecu: goto label_2764ec;
        case 0x2764f0u: goto label_2764f0;
        case 0x2764f4u: goto label_2764f4;
        case 0x2764f8u: goto label_2764f8;
        case 0x2764fcu: goto label_2764fc;
        case 0x276500u: goto label_276500;
        case 0x276504u: goto label_276504;
        case 0x276508u: goto label_276508;
        case 0x27650cu: goto label_27650c;
        case 0x276510u: goto label_276510;
        case 0x276514u: goto label_276514;
        case 0x276518u: goto label_276518;
        case 0x27651cu: goto label_27651c;
        case 0x276520u: goto label_276520;
        case 0x276524u: goto label_276524;
        case 0x276528u: goto label_276528;
        case 0x27652cu: goto label_27652c;
        case 0x276530u: goto label_276530;
        case 0x276534u: goto label_276534;
        case 0x276538u: goto label_276538;
        case 0x27653cu: goto label_27653c;
        case 0x276540u: goto label_276540;
        case 0x276544u: goto label_276544;
        case 0x276548u: goto label_276548;
        case 0x27654cu: goto label_27654c;
        case 0x276550u: goto label_276550;
        case 0x276554u: goto label_276554;
        case 0x276558u: goto label_276558;
        case 0x27655cu: goto label_27655c;
        case 0x276560u: goto label_276560;
        case 0x276564u: goto label_276564;
        case 0x276568u: goto label_276568;
        case 0x27656cu: goto label_27656c;
        case 0x276570u: goto label_276570;
        case 0x276574u: goto label_276574;
        case 0x276578u: goto label_276578;
        case 0x27657cu: goto label_27657c;
        case 0x276580u: goto label_276580;
        case 0x276584u: goto label_276584;
        case 0x276588u: goto label_276588;
        case 0x27658cu: goto label_27658c;
        default: break;
    }

    ctx->pc = 0x2764e0u;

label_2764e0:
    // 0x2764e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2764e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2764e4:
    // 0x2764e4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2764e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2764e8:
    // 0x2764e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2764e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2764ec:
    // 0x2764ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2764ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2764f0:
    // 0x2764f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2764f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2764f4:
    // 0x2764f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2764f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2764f8:
    // 0x2764f8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2764f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2764fc:
    // 0x2764fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2764fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_276500:
    // 0x276500: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x276500u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_276504:
    // 0x276504: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x276504u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_276508:
    // 0x276508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27650c:
    // 0x27650c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x27650cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_276510:
    // 0x276510: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
label_276514:
    if (ctx->pc == 0x276514u) {
        ctx->pc = 0x276514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276510u;
        // 0x276514: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x276518u;
        goto label_276518;
    }
    ctx->pc = 0x276510u;
    {
        const bool branch_taken_0x276510 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x276514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276510u;
        // 0x276514: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x276510) {
            ctx->pc = 0x27656Cu;
            goto label_27656c;
        }
    }
    ctx->pc = 0x276518u;
label_276518:
    // 0x276518: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x276518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_27651c:
    // 0x27651c: 0x0  nop
    ctx->pc = 0x27651cu;
    // NOP
label_276520:
    // 0x276520: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x276520u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_276524:
    // 0x276524: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x276524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_276528:
    // 0x276528: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x276528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_27652c:
    // 0x27652c: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x27652cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_276530:
    // 0x276530: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x276530u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_276534:
    // 0x276534: 0x8e2b0040  lw          $t3, 0x40($s1)
    ctx->pc = 0x276534u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_276538:
    // 0x276538: 0x2063018  mult        $a2, $s0, $a2
    ctx->pc = 0x276538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_27653c:
    // 0x27653c: 0x2484004c  addiu       $a0, $a0, 0x4C
    ctx->pc = 0x27653cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
label_276540:
    // 0x276540: 0x24a5004c  addiu       $a1, $a1, 0x4C
    ctx->pc = 0x276540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
label_276544:
    // 0x276544: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x276544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_276548:
    // 0x276548: 0x24c6004c  addiu       $a2, $a2, 0x4C
    ctx->pc = 0x276548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 76));
label_27654c:
    // 0x27654c: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x27654cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_276550:
    // 0x276550: 0x160f809  jalr        $t3
label_276554:
    if (ctx->pc == 0x276554u) {
        ctx->pc = 0x276554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276550u;
        // 0x276554: 0x2463021  addu        $a2, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276558u;
        goto label_276558;
    }
    ctx->pc = 0x276550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 11);
        SET_GPR_U32(ctx, 31, 0x276558u);
        ctx->pc = 0x276554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276550u;
        // 0x276554: 0x2463021  addu        $a2, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276550u, 0x276558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x276558u;
label_276558:
    // 0x276558: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x276558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_27655c:
    // 0x27655c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x27655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_276560:
    // 0x276560: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x276560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_276564:
    // 0x276564: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
label_276568:
    if (ctx->pc == 0x276568u) {
        ctx->pc = 0x276568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276564u;
        // 0x276568: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27656Cu;
        goto label_27656c;
    }
    ctx->pc = 0x276564u;
    {
        const bool branch_taken_0x276564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276564) {
            ctx->pc = 0x276568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276564u;
            // 0x276568: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276520;
        }
    }
    ctx->pc = 0x27656Cu;
label_27656c:
    // 0x27656c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x27656cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_276570:
    // 0x276570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_276574:
    // 0x276574: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x276574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_276578:
    // 0x276578: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x276578u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27657c:
    // 0x27657c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x27657cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_276580:
    // 0x276580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_276584:
    // 0x276584: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x276584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_276588:
    // 0x276588: 0x3e00008  jr          $ra
label_27658c:
    if (ctx->pc == 0x27658Cu) {
        ctx->pc = 0x27658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276588u;
        // 0x27658c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276590u;
        goto label_fallthrough_0x276588;
    }
    ctx->pc = 0x276588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276588u;
        // 0x27658c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x276588:
    ctx->pc = 0x276590u;
}
