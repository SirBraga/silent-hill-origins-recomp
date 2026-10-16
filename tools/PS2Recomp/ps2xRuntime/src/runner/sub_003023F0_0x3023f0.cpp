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

// Function: sub_003023F0
// Address: 0x3023f0 - 0x3025d8
void sub_003023F0_0x3023f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003023F0_0x3023f0");
#endif

    switch (ctx->pc) {
        case 0x302408u: goto label_302408;
        case 0x302418u: goto label_302418;
        case 0x302428u: goto label_302428;
        case 0x302438u: goto label_302438;
        case 0x302448u: goto label_302448;
        case 0x302478u: goto label_302478;
        case 0x302498u: goto label_302498;
        case 0x3024a8u: goto label_3024a8;
        case 0x3024b8u: goto label_3024b8;
        case 0x3024c8u: goto label_3024c8;
        case 0x3024f8u: goto label_3024f8;
        case 0x302528u: goto label_302528;
        case 0x302558u: goto label_302558;
        case 0x302568u: goto label_302568;
        case 0x302574u: goto label_302574;
        case 0x302584u: goto label_302584;
        case 0x302594u: goto label_302594;
        case 0x3025a0u: goto label_3025a0;
        case 0x3025acu: goto label_3025ac;
        case 0x3025b8u: goto label_3025b8;
        case 0x3025c4u: goto label_3025c4;
        default: break;
    }

    ctx->pc = 0x3023f0u;

    // 0x3023f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3023f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3023f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3023f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3023f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3023f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3023fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3023fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x302400: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302400u;
    SET_GPR_U32(ctx, 31, 0x302408u);
    ctx->pc = 0x302404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302400u;
    // 0x302404: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302400u, 0x302408u)) {
        return;
    }
    ctx->pc = 0x302408u;
label_302408:
    // 0x302408: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x302408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x30240c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30240cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302410: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302410u;
    SET_GPR_U32(ctx, 31, 0x302418u);
    ctx->pc = 0x302414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302410u;
    // 0x302414: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302410u, 0x302418u)) {
        return;
    }
    ctx->pc = 0x302418u;
label_302418:
    // 0x302418: 0xae020178  sw          $v0, 0x178($s0)
    ctx->pc = 0x302418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 2));
    // 0x30241c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30241cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302420: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302420u;
    SET_GPR_U32(ctx, 31, 0x302428u);
    ctx->pc = 0x302424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302420u;
    // 0x302424: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302420u, 0x302428u)) {
        return;
    }
    ctx->pc = 0x302428u;
label_302428:
    // 0x302428: 0xae02017c  sw          $v0, 0x17C($s0)
    ctx->pc = 0x302428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
    // 0x30242c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30242cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302430: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302430u;
    SET_GPR_U32(ctx, 31, 0x302438u);
    ctx->pc = 0x302434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302430u;
    // 0x302434: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302430u, 0x302438u)) {
        return;
    }
    ctx->pc = 0x302438u;
label_302438:
    // 0x302438: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x302438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x30243c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30243cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302440: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302440u;
    SET_GPR_U32(ctx, 31, 0x302448u);
    ctx->pc = 0x302444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302440u;
    // 0x302444: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302440u, 0x302448u)) {
        return;
    }
    ctx->pc = 0x302448u;
label_302448:
    // 0x302448: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x302448u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x30244c: 0x3c06fffc  lui         $a2, 0xFFFC
    ctx->pc = 0x30244cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65532 << 16));
    // 0x302450: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x302450u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x302454: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x302454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x302458: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x302458u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x30245c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x30245cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x302460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302464: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x302464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x302468: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x302468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x30246c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30246cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x302470: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302470u;
    SET_GPR_U32(ctx, 31, 0x302478u);
    ctx->pc = 0x302474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302470u;
    // 0x302474: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302470u, 0x302478u)) {
        return;
    }
    ctx->pc = 0x302478u;
label_302478:
    // 0x302478: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x302478u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30247c: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x30247cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x302480: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x302480u;
    {
        const bool branch_taken_0x302480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302480u;
        // 0x302484: 0xae030184  sw          $v1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302480) {
            ctx->pc = 0x30248Cu;
            goto label_30248c;
        }
    }
    ctx->pc = 0x302488u;
    // 0x302488: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x302488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
label_30248c:
    // 0x30248c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30248cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302490: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302490u;
    SET_GPR_U32(ctx, 31, 0x302498u);
    ctx->pc = 0x302494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302490u;
    // 0x302494: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302490u, 0x302498u)) {
        return;
    }
    ctx->pc = 0x302498u;
label_302498:
    // 0x302498: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x302498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x30249c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30249cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3024a0: 0xc0c0122  jal         func_300488
    ctx->pc = 0x3024A0u;
    SET_GPR_U32(ctx, 31, 0x3024A8u);
    ctx->pc = 0x3024A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3024A0u;
    // 0x3024a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x3024A0u, 0x3024A8u)) {
        return;
    }
    ctx->pc = 0x3024A8u;
label_3024a8:
    // 0x3024a8: 0xae02018c  sw          $v0, 0x18C($s0)
    ctx->pc = 0x3024a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 2));
    // 0x3024ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3024acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3024b0: 0xc0c0122  jal         func_300488
    ctx->pc = 0x3024B0u;
    SET_GPR_U32(ctx, 31, 0x3024B8u);
    ctx->pc = 0x3024B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3024B0u;
    // 0x3024b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x3024B0u, 0x3024B8u)) {
        return;
    }
    ctx->pc = 0x3024B8u;
label_3024b8:
    // 0x3024b8: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x3024b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x3024bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3024bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3024c0: 0xc0c0122  jal         func_300488
    ctx->pc = 0x3024C0u;
    SET_GPR_U32(ctx, 31, 0x3024C8u);
    ctx->pc = 0x3024C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3024C0u;
    // 0x3024c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x3024C0u, 0x3024C8u)) {
        return;
    }
    ctx->pc = 0x3024C8u;
label_3024c8:
    // 0x3024c8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x3024c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x3024cc: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x3024ccu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x3024d0: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x3024d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x3024d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3024d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3024d8: 0x21580  sll         $v0, $v0, 22
    ctx->pc = 0x3024d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 22));
    // 0x3024dc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x3024dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3024e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3024e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3024e4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3024e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3024e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3024e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3024ec: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x3024ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x3024f0: 0xc0c0122  jal         func_300488
    ctx->pc = 0x3024F0u;
    SET_GPR_U32(ctx, 31, 0x3024F8u);
    ctx->pc = 0x3024F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3024F0u;
    // 0x3024f4: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x3024F0u, 0x3024F8u)) {
        return;
    }
    ctx->pc = 0x3024F8u;
label_3024f8:
    // 0x3024f8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x3024f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x3024fc: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x3024fcu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x302500: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x302500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x302504: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x302504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x302508: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x302508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
    // 0x30250c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x30250cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x302510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302514: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x302514u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x302518: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x302518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30251c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x30251cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x302520: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302520u;
    SET_GPR_U32(ctx, 31, 0x302528u);
    ctx->pc = 0x302524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302520u;
    // 0x302524: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302520u, 0x302528u)) {
        return;
    }
    ctx->pc = 0x302528u;
label_302528:
    // 0x302528: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x302528u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x30252c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x30252cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x302530: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x302530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x302534: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x302534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x302538: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x302538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x30253c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x30253cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x302540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302544: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x302544u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x302548: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x302548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30254c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x30254cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x302550: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302550u;
    SET_GPR_U32(ctx, 31, 0x302558u);
    ctx->pc = 0x302554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302550u;
    // 0x302554: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302550u, 0x302558u)) {
        return;
    }
    ctx->pc = 0x302558u;
label_302558:
    // 0x302558: 0xae020194  sw          $v0, 0x194($s0)
    ctx->pc = 0x302558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
    // 0x30255c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30255cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302560: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302560u;
    SET_GPR_U32(ctx, 31, 0x302568u);
    ctx->pc = 0x302564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302560u;
    // 0x302564: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302560u, 0x302568u)) {
        return;
    }
    ctx->pc = 0x302568u;
label_302568:
    // 0x302568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30256c: 0xc0c0122  jal         func_300488
    ctx->pc = 0x30256Cu;
    SET_GPR_U32(ctx, 31, 0x302574u);
    ctx->pc = 0x302570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30256Cu;
    // 0x302570: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x30256Cu, 0x302574u)) {
        return;
    }
    ctx->pc = 0x302574u;
label_302574:
    // 0x302574: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x302574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
    // 0x302578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30257c: 0xc0c0122  jal         func_300488
    ctx->pc = 0x30257Cu;
    SET_GPR_U32(ctx, 31, 0x302584u);
    ctx->pc = 0x302580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30257Cu;
    // 0x302580: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x30257Cu, 0x302584u)) {
        return;
    }
    ctx->pc = 0x302584u;
label_302584:
    // 0x302584: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x302584u;
    {
        const bool branch_taken_0x302584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302584u;
        // 0x302588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302584) {
            ctx->pc = 0x3025C4u;
            goto label_3025c4;
        }
    }
    ctx->pc = 0x30258Cu;
    // 0x30258c: 0xc0c0122  jal         func_300488
    ctx->pc = 0x30258Cu;
    SET_GPR_U32(ctx, 31, 0x302594u);
    ctx->pc = 0x302590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30258Cu;
    // 0x302590: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x30258Cu, 0x302594u)) {
        return;
    }
    ctx->pc = 0x302594u;
label_302594:
    // 0x302594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302598: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302598u;
    SET_GPR_U32(ctx, 31, 0x3025A0u);
    ctx->pc = 0x30259Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302598u;
    // 0x30259c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302598u, 0x3025A0u)) {
        return;
    }
    ctx->pc = 0x3025A0u;
label_3025a0:
    // 0x3025a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3025a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3025a4: 0xc0c0122  jal         func_300488
    ctx->pc = 0x3025A4u;
    SET_GPR_U32(ctx, 31, 0x3025ACu);
    ctx->pc = 0x3025A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3025A4u;
    // 0x3025a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x3025A4u, 0x3025ACu)) {
        return;
    }
    ctx->pc = 0x3025ACu;
label_3025ac:
    // 0x3025ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3025acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3025b0: 0xc0c0122  jal         func_300488
    ctx->pc = 0x3025B0u;
    SET_GPR_U32(ctx, 31, 0x3025B8u);
    ctx->pc = 0x3025B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3025B0u;
    // 0x3025b4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x3025B0u, 0x3025B8u)) {
        return;
    }
    ctx->pc = 0x3025B8u;
label_3025b8:
    // 0x3025b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3025b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3025bc: 0xc0c0122  jal         func_300488
    ctx->pc = 0x3025BCu;
    SET_GPR_U32(ctx, 31, 0x3025C4u);
    ctx->pc = 0x3025C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3025BCu;
    // 0x3025c0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x3025BCu, 0x3025C4u)) {
        return;
    }
    ctx->pc = 0x3025C4u;
label_3025c4:
    // 0x3025c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3025c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3025c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3025c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3025cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3025CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3025D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3025CCu;
        // 0x3025d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3025CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3025D4u;
    // 0x3025d4: 0x0  nop
    ctx->pc = 0x3025d4u;
    // NOP
    ctx->pc = 0x3025d8u;
}
