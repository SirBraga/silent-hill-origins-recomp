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

// Function: sub_001915F0
// Address: 0x1915f0 - 0x191720
void sub_001915F0_0x1915f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001915F0_0x1915f0");
#endif

    switch (ctx->pc) {
        case 0x19160cu: goto label_19160c;
        case 0x191620u: goto label_191620;
        case 0x191638u: goto label_191638;
        case 0x1916c8u: goto label_1916c8;
        case 0x1916f8u: goto label_1916f8;
        default: break;
    }

    ctx->pc = 0x1915f0u;

    // 0x1915f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1915f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1915f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1915f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1915f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1915f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1915fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1915fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191600: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x191600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x191604: 0xc06233e  jal         func_188CF8
    ctx->pc = 0x191604u;
    SET_GPR_U32(ctx, 31, 0x19160Cu);
    ctx->pc = 0x191608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191604u;
    // 0x191608: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188CF8u, 0x191604u, 0x19160Cu)) {
        return;
    }
    ctx->pc = 0x19160Cu;
label_19160c:
    // 0x19160c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x19160cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x191610: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x191610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191614: 0x8c46bd98  lw          $a2, -0x4268($v0)
    ctx->pc = 0x191614u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6CBD98u));
    // 0x191618: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x191618u;
    SET_GPR_U32(ctx, 31, 0x191620u);
    ctx->pc = 0x19161Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191618u;
    // 0x19161c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x191618u, 0x191620u)) {
        return;
    }
    ctx->pc = 0x191620u;
label_191620:
    // 0x191620: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x191620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191624: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x191624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191628: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x191628u;
    {
        const bool branch_taken_0x191628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191628u;
        // 0x19162c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191628) {
            ctx->pc = 0x19170Cu;
            goto label_19170c;
        }
    }
    ctx->pc = 0x191630u;
    // 0x191630: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x191630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191634: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x191634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_191638:
    // 0x191638: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x191638u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x19163c: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x19163Cu;
    {
        const bool branch_taken_0x19163c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x191640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19163Cu;
        // 0x191640: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19163c) {
            ctx->pc = 0x1916DCu;
            goto label_1916dc;
        }
    }
    ctx->pc = 0x191644u;
    // 0x191644: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x191644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x191648: 0x244295a0  addiu       $v0, $v0, -0x6A60
    ctx->pc = 0x191648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940064));
    // 0x19164c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19164cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x191650: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x191650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191654: 0x800008  jr          $a0
    ctx->pc = 0x191654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19165Cu: goto label_19165c;
            case 0x19166Cu: goto label_19166c;
            case 0x191690u: goto label_191690;
            case 0x1916B0u: goto label_1916b0;
            case 0x1916D0u: goto label_1916d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191654u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19165Cu;
label_19165c:
    // 0x19165c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19165cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191660: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x191660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x191664: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x191664u;
    {
        const bool branch_taken_0x191664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191664u;
        // 0x191668: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191664) {
            ctx->pc = 0x1916DCu;
            goto label_1916dc;
        }
    }
    ctx->pc = 0x19166Cu;
label_19166c:
    // 0x19166c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19166cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191670: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x191670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x191674: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x191674u;
    {
        const bool branch_taken_0x191674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191674u;
        // 0x191678: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191674) {
            ctx->pc = 0x1916DCu;
            goto label_1916dc;
        }
    }
    ctx->pc = 0x19167Cu;
    // 0x19167c: 0x80620008  lb          $v0, 0x8($v1)
    ctx->pc = 0x19167cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x191680: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x191680u;
    {
        const bool branch_taken_0x191680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191680) {
            ctx->pc = 0x191684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191680u;
            // 0x191684: 0xae2000c4  sw          $zero, 0xC4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1916DCu;
            goto label_1916dc;
        }
    }
    ctx->pc = 0x191688u;
    // 0x191688: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x191688u;
    {
        const bool branch_taken_0x191688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191688u;
        // 0x19168c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191688) {
            ctx->pc = 0x1916E0u;
            goto label_1916e0;
        }
    }
    ctx->pc = 0x191690u;
label_191690:
    // 0x191690: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x191690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191694: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x191694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x191698: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x191698u;
    {
        const bool branch_taken_0x191698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191698u;
        // 0x19169c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191698) {
            ctx->pc = 0x1916A8u;
            goto label_1916a8;
        }
    }
    ctx->pc = 0x1916A0u;
    // 0x1916a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1916A0u;
    {
        const bool branch_taken_0x1916a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1916A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916A0u;
        // 0x1916a4: 0xae2200e0  sw          $v0, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1916a0) {
            ctx->pc = 0x1916DCu;
            goto label_1916dc;
        }
    }
    ctx->pc = 0x1916A8u;
label_1916a8:
    // 0x1916a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1916A8u;
    {
        const bool branch_taken_0x1916a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1916ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916A8u;
        // 0x1916ac: 0xae2000e0  sw          $zero, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1916a8) {
            ctx->pc = 0x1916DCu;
            goto label_1916dc;
        }
    }
    ctx->pc = 0x1916B0u;
label_1916b0:
    // 0x1916b0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1916b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1916b4: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x1916b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x1916b8: 0x262500e4  addiu       $a1, $s1, 0xE4
    ctx->pc = 0x1916b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    // 0x1916bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1916bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1916c0: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x1916C0u;
    SET_GPR_U32(ctx, 31, 0x1916C8u);
    ctx->pc = 0x1916C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1916C0u;
    // 0x1916c4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x1916C0u, 0x1916C8u)) {
        return;
    }
    ctx->pc = 0x1916C8u;
label_1916c8:
    // 0x1916c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1916C8u;
    {
        const bool branch_taken_0x1916c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1916CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916C8u;
        // 0x1916cc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1916c8) {
            ctx->pc = 0x1916E0u;
            goto label_1916e0;
        }
    }
    ctx->pc = 0x1916D0u;
label_1916d0:
    // 0x1916d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1916d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1916d4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1916d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1916d8: 0xae230110  sw          $v1, 0x110($s1)
    ctx->pc = 0x1916d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 3));
label_1916dc:
    // 0x1916dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1916dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1916e0:
    // 0x1916e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1916e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1916e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1916e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1916e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1916e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1916ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1916ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1916f0: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1916F0u;
    SET_GPR_U32(ctx, 31, 0x1916F8u);
    ctx->pc = 0x1916F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1916F0u;
    // 0x1916f4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1916F0u, 0x1916F8u)) {
        return;
    }
    ctx->pc = 0x1916F8u;
label_1916f8:
    // 0x1916f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1916f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1916fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1916fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191700: 0x5460ffcd  bnel        $v1, $zero, . + 4 + (-0x33 << 2)
    ctx->pc = 0x191700u;
    {
        const bool branch_taken_0x191700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x191700) {
            ctx->pc = 0x191704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191700u;
            // 0x191704: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191638;
        }
    }
    ctx->pc = 0x191708u;
    // 0x191708: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x191708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19170c:
    // 0x19170c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19170cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191710: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x191710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191714: 0x3e00008  jr          $ra
    ctx->pc = 0x191714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191714u;
        // 0x191718: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19171Cu;
    // 0x19171c: 0x0  nop
    ctx->pc = 0x19171cu;
    // NOP
    ctx->pc = 0x191720u;
}
