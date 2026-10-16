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

// Function: sub_002E3580
// Address: 0x2e3580 - 0x2e36c0
void sub_002E3580_0x2e3580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3580_0x2e3580");
#endif

    switch (ctx->pc) {
        case 0x2e35ccu: goto label_2e35cc;
        case 0x2e35f8u: goto label_2e35f8;
        case 0x2e3624u: goto label_2e3624;
        case 0x2e3650u: goto label_2e3650;
        case 0x2e366cu: goto label_2e366c;
        case 0x2e3688u: goto label_2e3688;
        case 0x2e3690u: goto label_2e3690;
        case 0x2e3698u: goto label_2e3698;
        default: break;
    }

    ctx->pc = 0x2e3580u;

    // 0x2e3580: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e3580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e3584: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x2e3584u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x2e3588: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2e3588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2e358c: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x2e358cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x2e3590: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2e3590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2e3594: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2e3594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3598: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2e3598u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e359c: 0xaf80906c  sw          $zero, -0x6F94($gp)
    ctx->pc = 0x2e359cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938732), GPR_U32(ctx, 0));
    // 0x2e35a0: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x2e35a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2e35a4: 0xaf908c48  sw          $s0, -0x73B8($gp)
    ctx->pc = 0x2e35a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937672), GPR_U32(ctx, 16));
    // 0x2e35a8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e35a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e35ac: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2e35acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e35b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e35b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e35b4: 0x25088310  addiu       $t0, $t0, -0x7CF0
    ctx->pc = 0x2e35b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935312));
    // 0x2e35b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2e35b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2e35bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e35bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e35c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e35c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e35c4: 0xc0b8270  jal         func_2E09C0
    ctx->pc = 0x2E35C4u;
    SET_GPR_U32(ctx, 31, 0x2E35CCu);
    ctx->pc = 0x2E35C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E35C4u;
    // 0x2e35c8: 0x35290809  ori         $t1, $t1, 0x809 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2057);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E09C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E09C0u, 0x2E35C4u, 0x2E35CCu)) {
        return;
    }
    ctx->pc = 0x2E35CCu;
label_2e35cc:
    // 0x2e35cc: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2E35CCu;
    {
        const bool branch_taken_0x2e35cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E35D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E35CCu;
        // 0x2e35d0: 0x3c080071  lui         $t0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e35cc) {
            ctx->pc = 0x2E3698u;
            goto label_2e3698;
        }
    }
    ctx->pc = 0x2E35D4u;
    // 0x2e35d4: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x2e35d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x2e35d8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2e35d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e35dc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2e35dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e35e0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e35e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e35e4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2e35e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e35e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e35e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e35ec: 0x25088338  addiu       $t0, $t0, -0x7CC8
    ctx->pc = 0x2e35ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935352));
    // 0x2e35f0: 0xc0b8270  jal         func_2E09C0
    ctx->pc = 0x2E35F0u;
    SET_GPR_U32(ctx, 31, 0x2E35F8u);
    ctx->pc = 0x2E35F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E35F0u;
    // 0x2e35f4: 0x35290809  ori         $t1, $t1, 0x809 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2057);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E09C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E09C0u, 0x2E35F0u, 0x2E35F8u)) {
        return;
    }
    ctx->pc = 0x2E35F8u;
label_2e35f8:
    // 0x2e35f8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2E35F8u;
    {
        const bool branch_taken_0x2e35f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E35FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E35F8u;
        // 0x2e35fc: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e35f8) {
            ctx->pc = 0x2E3690u;
            goto label_2e3690;
        }
    }
    ctx->pc = 0x2E3600u;
    // 0x2e3600: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x2e3600u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x2e3604: 0x24518360  addiu       $s1, $v0, -0x7CA0
    ctx->pc = 0x2e3604u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935392));
    // 0x2e3608: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2e3608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e360c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e360cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e3610: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2e3610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e3614: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e3614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3618: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2e3618u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e361c: 0xc0b8270  jal         func_2E09C0
    ctx->pc = 0x2E361Cu;
    SET_GPR_U32(ctx, 31, 0x2E3624u);
    ctx->pc = 0x2E3620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E361Cu;
    // 0x2e3620: 0x35290809  ori         $t1, $t1, 0x809 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2057);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E09C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E09C0u, 0x2E361Cu, 0x2E3624u)) {
        return;
    }
    ctx->pc = 0x2E3624u;
label_2e3624:
    // 0x2e3624: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E3624u;
    {
        const bool branch_taken_0x2e3624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3624u;
        // 0x2e3628: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3624) {
            ctx->pc = 0x2E3688u;
            goto label_2e3688;
        }
    }
    ctx->pc = 0x2E362Cu;
    // 0x2e362c: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x2e362cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x2e3630: 0x24c68388  addiu       $a2, $a2, -0x7C78
    ctx->pc = 0x2e3630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935432));
    // 0x2e3634: 0xaf908c44  sw          $s0, -0x73BC($gp)
    ctx->pc = 0x2e3634u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937668), GPR_U32(ctx, 16));
    // 0x2e3638: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e3638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e363c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e363cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3640: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e3640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3644: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e3644u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3648: 0xc0b8f16  jal         func_2E3C58
    ctx->pc = 0x2E3648u;
    SET_GPR_U32(ctx, 31, 0x2E3650u);
    ctx->pc = 0x2E364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3648u;
    // 0x2e364c: 0x35290809  ori         $t1, $t1, 0x809 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2057);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3C58u, 0x2E3648u, 0x2E3650u)) {
        return;
    }
    ctx->pc = 0x2E3650u;
label_2e3650:
    // 0x2e3650: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E3650u;
    {
        const bool branch_taken_0x2e3650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3650u;
        // 0x2e3654: 0xaf829068  sw          $v0, -0x6F98($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3650) {
            ctx->pc = 0x2E3680u;
            goto label_2e3680;
        }
    }
    ctx->pc = 0x2E3658u;
    // 0x2e3658: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x2e3658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x2e365c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e365cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3660: 0x24a540b8  addiu       $a1, $a1, 0x40B8
    ctx->pc = 0x2e3660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16568));
    // 0x2e3664: 0xc0b8f92  jal         func_2E3E48
    ctx->pc = 0x2E3664u;
    SET_GPR_U32(ctx, 31, 0x2E366Cu);
    ctx->pc = 0x2E3668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3664u;
    // 0x2e3668: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3E48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3E48u, 0x2E3664u, 0x2E366Cu)) {
        return;
    }
    ctx->pc = 0x2E366Cu;
label_2e366c:
    // 0x2e366c: 0x8f839068  lw          $v1, -0x6F98($gp)
    ctx->pc = 0x2e366cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
    // 0x2e3670: 0xa4700046  sh          $s0, 0x46($v1)
    ctx->pc = 0x2e3670u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 16));
    // 0x2e3674: 0xaf808c48  sw          $zero, -0x73B8($gp)
    ctx->pc = 0x2e3674u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937672), GPR_U32(ctx, 0));
    // 0x2e3678: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E3678u;
    {
        const bool branch_taken_0x2e3678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3678u;
        // 0x2e367c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3678) {
            ctx->pc = 0x2E36A4u;
            goto label_2e36a4;
        }
    }
    ctx->pc = 0x2E3680u;
label_2e3680:
    // 0x2e3680: 0xc0b82d0  jal         func_2E0B40
    ctx->pc = 0x2E3680u;
    SET_GPR_U32(ctx, 31, 0x2E3688u);
    ctx->pc = 0x2E3684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3680u;
    // 0x2e3684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0B40u, 0x2E3680u, 0x2E3688u)) {
        return;
    }
    ctx->pc = 0x2E3688u;
label_2e3688:
    // 0x2e3688: 0xc0b82d0  jal         func_2E0B40
    ctx->pc = 0x2E3688u;
    SET_GPR_U32(ctx, 31, 0x2E3690u);
    ctx->pc = 0x2E368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3688u;
    // 0x2e368c: 0x26448338  addiu       $a0, $s2, -0x7CC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0B40u, 0x2E3688u, 0x2E3690u)) {
        return;
    }
    ctx->pc = 0x2E3690u;
label_2e3690:
    // 0x2e3690: 0xc0b82d0  jal         func_2E0B40
    ctx->pc = 0x2E3690u;
    SET_GPR_U32(ctx, 31, 0x2E3698u);
    ctx->pc = 0x2E3694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3690u;
    // 0x2e3694: 0x26648310  addiu       $a0, $s3, -0x7CF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0B40u, 0x2E3690u, 0x2E3698u)) {
        return;
    }
    ctx->pc = 0x2E3698u;
label_2e3698:
    // 0x2e3698: 0xaf808c48  sw          $zero, -0x73B8($gp)
    ctx->pc = 0x2e3698u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937672), GPR_U32(ctx, 0));
    // 0x2e369c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e369cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e36a0: 0xaf808c44  sw          $zero, -0x73BC($gp)
    ctx->pc = 0x2e36a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937668), GPR_U32(ctx, 0));
label_2e36a4:
    // 0x2e36a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2e36a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e36a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2e36a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e36ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e36acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e36b0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2e36b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e36b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e36b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e36b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E36B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E36BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36B8u;
        // 0x2e36bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E36B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E36C0u;
}
