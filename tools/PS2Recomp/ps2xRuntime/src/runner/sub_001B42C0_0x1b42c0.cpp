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

// Function: sub_001B42C0
// Address: 0x1b42c0 - 0x1b4390
void sub_001B42C0_0x1b42c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B42C0_0x1b42c0");
#endif

    switch (ctx->pc) {
        case 0x1b42dcu: goto label_1b42dc;
        case 0x1b42e8u: goto label_1b42e8;
        case 0x1b430cu: goto label_1b430c;
        case 0x1b4318u: goto label_1b4318;
        case 0x1b4330u: goto label_1b4330;
        case 0x1b4344u: goto label_1b4344;
        case 0x1b4350u: goto label_1b4350;
        case 0x1b4358u: goto label_1b4358;
        case 0x1b4364u: goto label_1b4364;
        case 0x1b436cu: goto label_1b436c;
        default: break;
    }

    ctx->pc = 0x1b42c0u;

    // 0x1b42c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b42c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b42c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b42c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b42c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b42c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b42cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b42ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b42d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b42d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b42d4: 0xc08114c  jal         func_204530
    ctx->pc = 0x1B42D4u;
    SET_GPR_U32(ctx, 31, 0x1B42DCu);
    ctx->pc = 0x1B42D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B42D4u;
    // 0x1b42d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204530u, 0x1B42D4u, 0x1B42DCu)) {
        return;
    }
    ctx->pc = 0x1B42DCu;
label_1b42dc:
    // 0x1b42dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b42dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b42e0: 0xc080faa  jal         func_203EA8
    ctx->pc = 0x1B42E0u;
    SET_GPR_U32(ctx, 31, 0x1B42E8u);
    ctx->pc = 0x1B42E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B42E0u;
    // 0x1b42e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203EA8u, 0x1B42E0u, 0x1B42E8u)) {
        return;
    }
    ctx->pc = 0x1B42E8u;
label_1b42e8:
    // 0x1b42e8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1B42E8u;
    {
        const bool branch_taken_0x1b42e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B42ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42E8u;
        // 0x1b42ec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42e8) {
            ctx->pc = 0x1B4374u;
            goto label_1b4374;
        }
    }
    ctx->pc = 0x1B42F0u;
    // 0x1b42f0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1b42f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1b42f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b42f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b42f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b42f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b42fc: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1b42fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1b4300: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1b4300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1b4304: 0xc0936ae  jal         func_24DAB8
    ctx->pc = 0x1B4304u;
    SET_GPR_U32(ctx, 31, 0x1B430Cu);
    ctx->pc = 0x1B4308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4304u;
    // 0x1b4308: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DAB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DAB8u, 0x1B4304u, 0x1B430Cu)) {
        return;
    }
    ctx->pc = 0x1B430Cu;
label_1b430c:
    // 0x1b430c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b430cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4310: 0xc081a96  jal         func_206A58
    ctx->pc = 0x1B4310u;
    SET_GPR_U32(ctx, 31, 0x1B4318u);
    ctx->pc = 0x1B4314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4310u;
    // 0x1b4314: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206A58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206A58u, 0x1B4310u, 0x1B4318u)) {
        return;
    }
    ctx->pc = 0x1B4318u;
label_1b4318:
    // 0x1b4318: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b431c: 0x24070504  addiu       $a3, $zero, 0x504
    ctx->pc = 0x1b431cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x1b4320: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b4320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b4324: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1b4324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b4328: 0xc08a1b0  jal         func_2286C0
    ctx->pc = 0x1B4328u;
    SET_GPR_U32(ctx, 31, 0x1B4330u);
    ctx->pc = 0x1B432Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4328u;
    // 0x1b432c: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2286C0u, 0x1B4328u, 0x1B4330u)) {
        return;
    }
    ctx->pc = 0x1B4330u;
label_1b4330:
    // 0x1b4330: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b4330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4334: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b4334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b433c: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x1B433Cu;
    SET_GPR_U32(ctx, 31, 0x1B4344u);
    ctx->pc = 0x1B4340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B433Cu;
    // 0x1b4340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2287C8u, 0x1B433Cu, 0x1B4344u)) {
        return;
    }
    ctx->pc = 0x1B4344u;
label_1b4344:
    // 0x1b4344: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b4344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4348: 0xc08a066  jal         func_228198
    ctx->pc = 0x1B4348u;
    SET_GPR_U32(ctx, 31, 0x1B4350u);
    ctx->pc = 0x1B434Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4348u;
    // 0x1b434c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228198u, 0x1B4348u, 0x1B4350u)) {
        return;
    }
    ctx->pc = 0x1B4350u;
label_1b4350:
    // 0x1b4350: 0xc08a0b0  jal         func_2282C0
    ctx->pc = 0x1B4350u;
    SET_GPR_U32(ctx, 31, 0x1B4358u);
    ctx->pc = 0x1B4354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4350u;
    // 0x1b4354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2282C0u, 0x1B4350u, 0x1B4358u)) {
        return;
    }
    ctx->pc = 0x1B4358u;
label_1b4358:
    // 0x1b4358: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b435c: 0xc09366a  jal         func_24D9A8
    ctx->pc = 0x1B435Cu;
    SET_GPR_U32(ctx, 31, 0x1B4364u);
    ctx->pc = 0x1B4360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B435Cu;
    // 0x1b4360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D9A8u, 0x1B435Cu, 0x1B4364u)) {
        return;
    }
    ctx->pc = 0x1B4364u;
label_1b4364:
    // 0x1b4364: 0xc089b96  jal         func_226E58
    ctx->pc = 0x1B4364u;
    SET_GPR_U32(ctx, 31, 0x1B436Cu);
    ctx->pc = 0x1B4368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4364u;
    // 0x1b4368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x1B4364u, 0x1B436Cu)) {
        return;
    }
    ctx->pc = 0x1B436Cu;
label_1b436c:
    // 0x1b436c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B436Cu;
    {
        const bool branch_taken_0x1b436c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B436Cu;
        // 0x1b4370: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b436c) {
            ctx->pc = 0x1B4378u;
            goto label_1b4378;
        }
    }
    ctx->pc = 0x1B4374u;
label_1b4374:
    // 0x1b4374: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4374u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4378:
    // 0x1b4378: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b4378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b437c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b437cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b4380: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b4380u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4384: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4388: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4388u;
        // 0x1b438c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4390u;
}
