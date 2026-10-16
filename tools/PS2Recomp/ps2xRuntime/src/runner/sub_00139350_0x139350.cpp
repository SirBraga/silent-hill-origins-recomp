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

// Function: sub_00139350
// Address: 0x139350 - 0x1394c0
void sub_00139350_0x139350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139350_0x139350");
#endif

    switch (ctx->pc) {
        case 0x139378u: goto label_139378;
        case 0x139398u: goto label_139398;
        case 0x1393a4u: goto label_1393a4;
        case 0x1393bcu: goto label_1393bc;
        case 0x1393c8u: goto label_1393c8;
        case 0x1393e0u: goto label_1393e0;
        case 0x1393f8u: goto label_1393f8;
        case 0x139410u: goto label_139410;
        case 0x139428u: goto label_139428;
        case 0x139440u: goto label_139440;
        case 0x139458u: goto label_139458;
        case 0x139470u: goto label_139470;
        case 0x139488u: goto label_139488;
        case 0x1394a0u: goto label_1394a0;
        default: break;
    }

    ctx->pc = 0x139350u;

    // 0x139350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x139350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x139354: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x139354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x139358: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x139358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13935c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x13935cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x139360: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x139360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x139364: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x139364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x139368: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x139368u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x13936c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13936cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139370: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x139370u;
    SET_GPR_U32(ctx, 31, 0x139378u);
    ctx->pc = 0x139374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139370u;
    // 0x139374: 0x26300048  addiu       $s0, $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x139370u, 0x139378u)) {
        return;
    }
    ctx->pc = 0x139378u;
label_139378:
    // 0x139378: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x139378u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13937c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13937cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x139380: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x139380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x139384: 0x2463ec70  addiu       $v1, $v1, -0x1390
    ctx->pc = 0x139384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
    // 0x139388: 0x2442ec90  addiu       $v0, $v0, -0x1370
    ctx->pc = 0x139388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962320));
    // 0x13938c: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x13938cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x139390: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x139390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x139394: 0x0  nop
    ctx->pc = 0x139394u;
    // NOP
label_139398:
    // 0x139398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13939c: 0xc04e864  jal         func_13A190
    ctx->pc = 0x13939Cu;
    SET_GPR_U32(ctx, 31, 0x1393A4u);
    ctx->pc = 0x1393A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13939Cu;
    // 0x1393a0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A190u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13A190u, 0x13939Cu, 0x1393A4u)) {
        return;
    }
    ctx->pc = 0x1393A4u;
label_1393a4:
    // 0x1393a4: 0x0  nop
    ctx->pc = 0x1393a4u;
    // NOP
    // 0x1393a8: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1393A8u;
    {
        const bool branch_taken_0x1393a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1393ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1393A8u;
        // 0x1393ac: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1393a8) {
            ctx->pc = 0x139398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_139398;
        }
    }
    ctx->pc = 0x1393B0u;
    // 0x1393b0: 0x262401cc  addiu       $a0, $s1, 0x1CC
    ctx->pc = 0x1393b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 460));
    // 0x1393b4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1393B4u;
    SET_GPR_U32(ctx, 31, 0x1393BCu);
    ctx->pc = 0x1393B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1393B4u;
    // 0x1393b8: 0x26300038  addiu       $s0, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1393B4u, 0x1393BCu)) {
        return;
    }
    ctx->pc = 0x1393BCu;
label_1393bc:
    // 0x1393bc: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x1393bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x1393c0: 0xc04e49a  jal         func_139268
    ctx->pc = 0x1393C0u;
    SET_GPR_U32(ctx, 31, 0x1393C8u);
    ctx->pc = 0x1393C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1393C0u;
    // 0x1393c4: 0xae2001c8  sw          $zero, 0x1C8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 456), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139268u, 0x1393C0u, 0x1393C8u)) {
        return;
    }
    ctx->pc = 0x1393C8u;
label_1393c8:
    // 0x1393c8: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1393c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1393cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1393ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1393d0: 0x24a54790  addiu       $a1, $a1, 0x4790
    ctx->pc = 0x1393d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18320));
    // 0x1393d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1393d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1393d8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1393D8u;
    SET_GPR_U32(ctx, 31, 0x1393E0u);
    ctx->pc = 0x1393DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1393D8u;
    // 0x1393dc: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1393D8u, 0x1393E0u)) {
        return;
    }
    ctx->pc = 0x1393E0u;
label_1393e0:
    // 0x1393e0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1393e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1393e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1393e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1393e8: 0x24a54758  addiu       $a1, $a1, 0x4758
    ctx->pc = 0x1393e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18264));
    // 0x1393ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1393ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1393f0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1393F0u;
    SET_GPR_U32(ctx, 31, 0x1393F8u);
    ctx->pc = 0x1393F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1393F0u;
    // 0x1393f4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1393F0u, 0x1393F8u)) {
        return;
    }
    ctx->pc = 0x1393F8u;
label_1393f8:
    // 0x1393f8: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1393f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1393fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1393fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139400: 0x24a54760  addiu       $a1, $a1, 0x4760
    ctx->pc = 0x139400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18272));
    // 0x139404: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x139404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139408: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x139408u;
    SET_GPR_U32(ctx, 31, 0x139410u);
    ctx->pc = 0x13940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139408u;
    // 0x13940c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x139408u, 0x139410u)) {
        return;
    }
    ctx->pc = 0x139410u;
label_139410:
    // 0x139410: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x139410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x139414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139418: 0x24a54768  addiu       $a1, $a1, 0x4768
    ctx->pc = 0x139418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18280));
    // 0x13941c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13941cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139420: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x139420u;
    SET_GPR_U32(ctx, 31, 0x139428u);
    ctx->pc = 0x139424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139420u;
    // 0x139424: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x139420u, 0x139428u)) {
        return;
    }
    ctx->pc = 0x139428u;
label_139428:
    // 0x139428: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x139428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x13942c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13942cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139430: 0x24a54770  addiu       $a1, $a1, 0x4770
    ctx->pc = 0x139430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18288));
    // 0x139434: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x139434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139438: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x139438u;
    SET_GPR_U32(ctx, 31, 0x139440u);
    ctx->pc = 0x13943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139438u;
    // 0x13943c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x139438u, 0x139440u)) {
        return;
    }
    ctx->pc = 0x139440u;
label_139440:
    // 0x139440: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x139440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x139444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139448: 0x24a54778  addiu       $a1, $a1, 0x4778
    ctx->pc = 0x139448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18296));
    // 0x13944c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13944cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139450: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x139450u;
    SET_GPR_U32(ctx, 31, 0x139458u);
    ctx->pc = 0x139454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139450u;
    // 0x139454: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x139450u, 0x139458u)) {
        return;
    }
    ctx->pc = 0x139458u;
label_139458:
    // 0x139458: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x139458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x13945c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13945cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139460: 0x24a54780  addiu       $a1, $a1, 0x4780
    ctx->pc = 0x139460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18304));
    // 0x139464: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x139464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139468: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x139468u;
    SET_GPR_U32(ctx, 31, 0x139470u);
    ctx->pc = 0x13946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139468u;
    // 0x13946c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x139468u, 0x139470u)) {
        return;
    }
    ctx->pc = 0x139470u;
label_139470:
    // 0x139470: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x139470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x139474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139478: 0x24a54788  addiu       $a1, $a1, 0x4788
    ctx->pc = 0x139478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18312));
    // 0x13947c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13947cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139480: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x139480u;
    SET_GPR_U32(ctx, 31, 0x139488u);
    ctx->pc = 0x139484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139480u;
    // 0x139484: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x139480u, 0x139488u)) {
        return;
    }
    ctx->pc = 0x139488u;
label_139488:
    // 0x139488: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x139488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13948c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13948cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139490: 0x24a5f8a8  addiu       $a1, $a1, -0x758
    ctx->pc = 0x139490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965416));
    // 0x139494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x139494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139498: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x139498u;
    SET_GPR_U32(ctx, 31, 0x1394A0u);
    ctx->pc = 0x13949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139498u;
    // 0x13949c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x139498u, 0x1394A0u)) {
        return;
    }
    ctx->pc = 0x1394A0u;
label_1394a0:
    // 0x1394a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1394a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1394a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1394a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1394a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1394a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1394ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1394acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1394b0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1394b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1394b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1394b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1394b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1394B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1394BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1394B8u;
        // 0x1394bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1394B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1394C0u;
}
