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

// Function: sub_001534F0
// Address: 0x1534f0 - 0x153668
void sub_001534F0_0x1534f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001534F0_0x1534f0");
#endif

    switch (ctx->pc) {
        case 0x15350cu: goto label_15350c;
        case 0x153520u: goto label_153520;
        case 0x153538u: goto label_153538;
        case 0x153574u: goto label_153574;
        case 0x153598u: goto label_153598;
        case 0x1535e0u: goto label_1535e0;
        case 0x153640u: goto label_153640;
        default: break;
    }

    ctx->pc = 0x1534f0u;

    // 0x1534f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1534f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1534f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1534f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1534f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1534f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1534fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1534fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153500: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x153500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x153504: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x153504u;
    SET_GPR_U32(ctx, 31, 0x15350Cu);
    ctx->pc = 0x153508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153504u;
    // 0x153508: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x153504u, 0x15350Cu)) {
        return;
    }
    ctx->pc = 0x15350Cu;
label_15350c:
    // 0x15350c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15350cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x153510: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x153510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153514: 0x8c46f000  lw          $a2, -0x1000($v0)
    ctx->pc = 0x153514u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF000u));
    // 0x153518: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x153518u;
    SET_GPR_U32(ctx, 31, 0x153520u);
    ctx->pc = 0x15351Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153518u;
    // 0x15351c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x153518u, 0x153520u)) {
        return;
    }
    ctx->pc = 0x153520u;
label_153520:
    // 0x153520: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x153520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153524: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x153524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x153528: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x153528u;
    {
        const bool branch_taken_0x153528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153528u;
        // 0x15352c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153528) {
            ctx->pc = 0x153654u;
            goto label_153654;
        }
    }
    ctx->pc = 0x153530u;
    // 0x153530: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x153530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153534: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x153534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_153538:
    // 0x153538: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x153538u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x15353c: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x15353Cu;
    {
        const bool branch_taken_0x15353c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x153540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15353Cu;
        // 0x153540: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15353c) {
            ctx->pc = 0x153624u;
            goto label_153624;
        }
    }
    ctx->pc = 0x153544u;
    // 0x153544: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x153544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x153548: 0x24422690  addiu       $v0, $v0, 0x2690
    ctx->pc = 0x153548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9872));
    // 0x15354c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15354cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x153550: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x153550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x153554: 0x800008  jr          $a0
    ctx->pc = 0x153554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15355Cu: goto label_15355c;
            case 0x15357Cu: goto label_15357c;
            case 0x153588u: goto label_153588;
            case 0x1535A0u: goto label_1535a0;
            case 0x1535B0u: goto label_1535b0;
            case 0x1535C0u: goto label_1535c0;
            case 0x1535CCu: goto label_1535cc;
            case 0x1535E8u: goto label_1535e8;
            case 0x1535F8u: goto label_1535f8;
            case 0x153608u: goto label_153608;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153554u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15355Cu;
label_15355c:
    // 0x15355c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x15355cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153560: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x153560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x153564: 0x26250058  addiu       $a1, $s1, 0x58
    ctx->pc = 0x153564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x153568: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x153568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15356c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x15356Cu;
    SET_GPR_U32(ctx, 31, 0x153574u);
    ctx->pc = 0x153570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15356Cu;
    // 0x153570: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x15356Cu, 0x153574u)) {
        return;
    }
    ctx->pc = 0x153574u;
label_153574:
    // 0x153574: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x153574u;
    {
        const bool branch_taken_0x153574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153574u;
        // 0x153578: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153574) {
            ctx->pc = 0x153628u;
            goto label_153628;
        }
    }
    ctx->pc = 0x15357Cu;
label_15357c:
    // 0x15357c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x15357cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153580: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x153580u;
    {
        const bool branch_taken_0x153580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153580u;
        // 0x153584: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153580) {
            ctx->pc = 0x1535D4u;
            goto label_1535d4;
        }
    }
    ctx->pc = 0x153588u;
label_153588:
    // 0x153588: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x153588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15358c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15358cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153590: 0xc081b56  jal         func_206D58
    ctx->pc = 0x153590u;
    SET_GPR_U32(ctx, 31, 0x153598u);
    ctx->pc = 0x153594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153590u;
    // 0x153594: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x153590u, 0x153598u)) {
        return;
    }
    ctx->pc = 0x153598u;
label_153598:
    // 0x153598: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x153598u;
    {
        const bool branch_taken_0x153598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153598u;
        // 0x15359c: 0xae220084  sw          $v0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153598) {
            ctx->pc = 0x153624u;
            goto label_153624;
        }
    }
    ctx->pc = 0x1535A0u;
label_1535a0:
    // 0x1535a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1535a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1535a4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1535a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1535a8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1535A8u;
    {
        const bool branch_taken_0x1535a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1535ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535A8u;
        // 0x1535ac: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535a8) {
            ctx->pc = 0x153624u;
            goto label_153624;
        }
    }
    ctx->pc = 0x1535B0u;
label_1535b0:
    // 0x1535b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1535b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1535b4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1535b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1535b8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1535B8u;
    {
        const bool branch_taken_0x1535b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1535BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535B8u;
        // 0x1535bc: 0xae2300a4  sw          $v1, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535b8) {
            ctx->pc = 0x153624u;
            goto label_153624;
        }
    }
    ctx->pc = 0x1535C0u;
label_1535c0:
    // 0x1535c0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1535c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1535c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1535C4u;
    {
        const bool branch_taken_0x1535c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1535C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535C4u;
        // 0x1535c8: 0x2624008c  addiu       $a0, $s1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535c4) {
            ctx->pc = 0x1535D4u;
            goto label_1535d4;
        }
    }
    ctx->pc = 0x1535CCu;
label_1535cc:
    // 0x1535cc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1535ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1535d0: 0x26240094  addiu       $a0, $s1, 0x94
    ctx->pc = 0x1535d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_1535d4:
    // 0x1535d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1535d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1535d8: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x1535D8u;
    SET_GPR_U32(ctx, 31, 0x1535E0u);
    ctx->pc = 0x1535DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1535D8u;
    // 0x1535dc: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x1535D8u, 0x1535E0u)) {
        return;
    }
    ctx->pc = 0x1535E0u;
label_1535e0:
    // 0x1535e0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1535E0u;
    {
        const bool branch_taken_0x1535e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1535E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535E0u;
        // 0x1535e4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535e0) {
            ctx->pc = 0x153628u;
            goto label_153628;
        }
    }
    ctx->pc = 0x1535E8u;
label_1535e8:
    // 0x1535e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1535e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1535ec: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1535ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1535f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1535F0u;
    {
        const bool branch_taken_0x1535f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1535F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535F0u;
        // 0x1535f4: 0xae230050  sw          $v1, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535f0) {
            ctx->pc = 0x153624u;
            goto label_153624;
        }
    }
    ctx->pc = 0x1535F8u;
label_1535f8:
    // 0x1535f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1535f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1535fc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1535fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x153600: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x153600u;
    {
        const bool branch_taken_0x153600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153600u;
        // 0x153604: 0xae2300a8  sw          $v1, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153600) {
            ctx->pc = 0x153624u;
            goto label_153624;
        }
    }
    ctx->pc = 0x153608u;
label_153608:
    // 0x153608: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x153608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15360c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x15360cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x153610: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x153610u;
    {
        const bool branch_taken_0x153610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x153614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153610u;
        // 0x153614: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153610) {
            ctx->pc = 0x153620u;
            goto label_153620;
        }
    }
    ctx->pc = 0x153618u;
    // 0x153618: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x153618u;
    {
        const bool branch_taken_0x153618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153618u;
        // 0x15361c: 0xae2200bc  sw          $v0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153618) {
            ctx->pc = 0x153624u;
            goto label_153624;
        }
    }
    ctx->pc = 0x153620u;
label_153620:
    // 0x153620: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x153620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_153624:
    // 0x153624: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x153624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_153628:
    // 0x153628: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x153628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15362c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15362cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153630: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x153630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x153634: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x153634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x153638: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x153638u;
    SET_GPR_U32(ctx, 31, 0x153640u);
    ctx->pc = 0x15363Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153638u;
    // 0x15363c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x153638u, 0x153640u)) {
        return;
    }
    ctx->pc = 0x153640u;
label_153640:
    // 0x153640: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x153640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153644: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x153644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153648: 0x5460ffbb  bnel        $v1, $zero, . + 4 + (-0x45 << 2)
    ctx->pc = 0x153648u;
    {
        const bool branch_taken_0x153648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x153648) {
            ctx->pc = 0x15364Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153648u;
            // 0x15364c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153538;
        }
    }
    ctx->pc = 0x153650u;
    // 0x153650: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x153650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_153654:
    // 0x153654: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x153654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153658: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x153658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15365c: 0x3e00008  jr          $ra
    ctx->pc = 0x15365Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15365Cu;
        // 0x153660: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15365Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153664u;
    // 0x153664: 0x0  nop
    ctx->pc = 0x153664u;
    // NOP
    ctx->pc = 0x153668u;
}
