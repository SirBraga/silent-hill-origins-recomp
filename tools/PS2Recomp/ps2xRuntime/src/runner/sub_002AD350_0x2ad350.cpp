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

// Function: sub_002AD350
// Address: 0x2ad350 - 0x2ad448
void sub_002AD350_0x2ad350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD350_0x2ad350");
#endif

    switch (ctx->pc) {
        case 0x2ad350u: goto label_2ad350;
        case 0x2ad354u: goto label_2ad354;
        case 0x2ad358u: goto label_2ad358;
        case 0x2ad35cu: goto label_2ad35c;
        case 0x2ad360u: goto label_2ad360;
        case 0x2ad364u: goto label_2ad364;
        case 0x2ad368u: goto label_2ad368;
        case 0x2ad36cu: goto label_2ad36c;
        case 0x2ad370u: goto label_2ad370;
        case 0x2ad374u: goto label_2ad374;
        case 0x2ad378u: goto label_2ad378;
        case 0x2ad37cu: goto label_2ad37c;
        case 0x2ad380u: goto label_2ad380;
        case 0x2ad384u: goto label_2ad384;
        case 0x2ad388u: goto label_2ad388;
        case 0x2ad38cu: goto label_2ad38c;
        case 0x2ad390u: goto label_2ad390;
        case 0x2ad394u: goto label_2ad394;
        case 0x2ad398u: goto label_2ad398;
        case 0x2ad39cu: goto label_2ad39c;
        case 0x2ad3a0u: goto label_2ad3a0;
        case 0x2ad3a4u: goto label_2ad3a4;
        case 0x2ad3a8u: goto label_2ad3a8;
        case 0x2ad3acu: goto label_2ad3ac;
        case 0x2ad3b0u: goto label_2ad3b0;
        case 0x2ad3b4u: goto label_2ad3b4;
        case 0x2ad3b8u: goto label_2ad3b8;
        case 0x2ad3bcu: goto label_2ad3bc;
        case 0x2ad3c0u: goto label_2ad3c0;
        case 0x2ad3c4u: goto label_2ad3c4;
        case 0x2ad3c8u: goto label_2ad3c8;
        case 0x2ad3ccu: goto label_2ad3cc;
        case 0x2ad3d0u: goto label_2ad3d0;
        case 0x2ad3d4u: goto label_2ad3d4;
        case 0x2ad3d8u: goto label_2ad3d8;
        case 0x2ad3dcu: goto label_2ad3dc;
        case 0x2ad3e0u: goto label_2ad3e0;
        case 0x2ad3e4u: goto label_2ad3e4;
        case 0x2ad3e8u: goto label_2ad3e8;
        case 0x2ad3ecu: goto label_2ad3ec;
        case 0x2ad3f0u: goto label_2ad3f0;
        case 0x2ad3f4u: goto label_2ad3f4;
        case 0x2ad3f8u: goto label_2ad3f8;
        case 0x2ad3fcu: goto label_2ad3fc;
        case 0x2ad400u: goto label_2ad400;
        case 0x2ad404u: goto label_2ad404;
        case 0x2ad408u: goto label_2ad408;
        case 0x2ad40cu: goto label_2ad40c;
        case 0x2ad410u: goto label_2ad410;
        case 0x2ad414u: goto label_2ad414;
        case 0x2ad418u: goto label_2ad418;
        case 0x2ad41cu: goto label_2ad41c;
        case 0x2ad420u: goto label_2ad420;
        case 0x2ad424u: goto label_2ad424;
        case 0x2ad428u: goto label_2ad428;
        case 0x2ad42cu: goto label_2ad42c;
        case 0x2ad430u: goto label_2ad430;
        case 0x2ad434u: goto label_2ad434;
        case 0x2ad438u: goto label_2ad438;
        case 0x2ad43cu: goto label_2ad43c;
        case 0x2ad440u: goto label_2ad440;
        case 0x2ad444u: goto label_2ad444;
        default: break;
    }

    ctx->pc = 0x2ad350u;

label_2ad350:
    // 0x2ad350: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ad350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2ad354:
    // 0x2ad354: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ad354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2ad358:
    // 0x2ad358: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ad358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2ad35c:
    // 0x2ad35c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ad35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ad360:
    // 0x2ad360: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ad360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2ad364:
    // 0x2ad364: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ad364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ad368:
    // 0x2ad368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ad36c:
    // 0x2ad36c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2ad36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2ad370:
    // 0x2ad370: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_2ad374:
    if (ctx->pc == 0x2AD374u) {
        ctx->pc = 0x2AD374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD370u;
        // 0x2ad374: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD378u;
        goto label_2ad378;
    }
    ctx->pc = 0x2AD370u;
    {
        const bool branch_taken_0x2ad370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD370u;
        // 0x2ad374: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad370) {
            ctx->pc = 0x2AD3A8u;
            goto label_2ad3a8;
        }
    }
    ctx->pc = 0x2AD378u;
label_2ad378:
    // 0x2ad378: 0x96020020  lhu         $v0, 0x20($s0)
    ctx->pc = 0x2ad378u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
label_2ad37c:
    // 0x2ad37c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ad37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ad380:
    // 0x2ad380: 0x8c650060  lw          $a1, 0x60($v1)
    ctx->pc = 0x2ad380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_2ad384:
    // 0x2ad384: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2ad384u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_2ad388:
    // 0x2ad388: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2ad388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_2ad38c:
    // 0x2ad38c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ad38cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ad390:
    // 0x2ad390: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x2ad390u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_2ad394:
    // 0x2ad394: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ad394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2ad398:
    // 0x2ad398: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ad398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ad39c:
    // 0x2ad39c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ad39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2ad3a0:
    // 0x2ad3a0: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_2ad3a4:
    if (ctx->pc == 0x2AD3A4u) {
        ctx->pc = 0x2AD3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD3A0u;
        // 0x2ad3a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD3A8u;
        goto label_2ad3a8;
    }
    ctx->pc = 0x2AD3A0u;
    {
        const bool branch_taken_0x2ad3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD3A0u;
        // 0x2ad3a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad3a0) {
            ctx->pc = 0x2AD42Cu;
            goto label_2ad42c;
        }
    }
    ctx->pc = 0x2AD3A8u;
label_2ad3a8:
    // 0x2ad3a8: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2ad3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2ad3ac:
    // 0x2ad3ac: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2ad3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2ad3b0:
    // 0x2ad3b0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2ad3b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2ad3b4:
    // 0x2ad3b4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2ad3b8:
    if (ctx->pc == 0x2AD3B8u) {
        ctx->pc = 0x2AD3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD3B4u;
        // 0x2ad3b8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD3BCu;
        goto label_2ad3bc;
    }
    ctx->pc = 0x2AD3B4u;
    {
        const bool branch_taken_0x2ad3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD3B4u;
        // 0x2ad3b8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad3b4) {
            ctx->pc = 0x2AD42Cu;
            goto label_2ad42c;
        }
    }
    ctx->pc = 0x2AD3BCu;
label_2ad3bc:
    // 0x2ad3bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ad3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ad3c0:
    // 0x2ad3c0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2ad3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2ad3c4:
    // 0x2ad3c4: 0x40f809  jalr        $v0
label_2ad3c8:
    if (ctx->pc == 0x2AD3C8u) {
        ctx->pc = 0x2AD3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD3C4u;
        // 0x2ad3c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD3CCu;
        goto label_2ad3cc;
    }
    ctx->pc = 0x2AD3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AD3CCu);
        ctx->pc = 0x2AD3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD3C4u;
        // 0x2ad3c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD3C4u, 0x2AD3CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD3CCu;
label_2ad3cc:
    // 0x2ad3cc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2ad3d0:
    if (ctx->pc == 0x2AD3D0u) {
        ctx->pc = 0x2AD3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD3CCu;
        // 0x2ad3d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD3D4u;
        goto label_2ad3d4;
    }
    ctx->pc = 0x2AD3CCu;
    {
        const bool branch_taken_0x2ad3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD3CCu;
        // 0x2ad3d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad3cc) {
            ctx->pc = 0x2AD414u;
            goto label_2ad414;
        }
    }
    ctx->pc = 0x2AD3D4u;
label_2ad3d4:
    // 0x2ad3d4: 0x96020020  lhu         $v0, 0x20($s0)
    ctx->pc = 0x2ad3d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
label_2ad3d8:
    // 0x2ad3d8: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x2ad3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2ad3dc:
    // 0x2ad3dc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2ad3dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ad3e0:
    // 0x2ad3e0: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2ad3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_2ad3e4:
    // 0x2ad3e4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2ad3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_2ad3e8:
    // 0x2ad3e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ad3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ad3ec:
    // 0x2ad3ec: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x2ad3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_2ad3f0:
    // 0x2ad3f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ad3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2ad3f4:
    // 0x2ad3f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ad3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ad3f8:
    // 0x2ad3f8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ad3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2ad3fc:
    // 0x2ad3fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2ad3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2ad400:
    // 0x2ad400: 0xaf8089dc  sw          $zero, -0x7624($gp)
    ctx->pc = 0x2ad400u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937052), GPR_U32(ctx, 0));
label_2ad404:
    // 0x2ad404: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2ad404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2ad408:
    // 0x2ad408: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ad408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2ad40c:
    // 0x2ad40c: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ad410:
    if (ctx->pc == 0x2AD410u) {
        ctx->pc = 0x2AD410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD40Cu;
        // 0x2ad410: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD414u;
        goto label_2ad414;
    }
    ctx->pc = 0x2AD40Cu;
    {
        const bool branch_taken_0x2ad40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD40Cu;
        // 0x2ad410: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad40c) {
            ctx->pc = 0x2AD428u;
            goto label_2ad428;
        }
    }
    ctx->pc = 0x2AD414u;
label_2ad414:
    // 0x2ad414: 0x8f8289dc  lw          $v0, -0x7624($gp)
    ctx->pc = 0x2ad414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
label_2ad418:
    // 0x2ad418: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2ad41c:
    if (ctx->pc == 0x2AD41Cu) {
        ctx->pc = 0x2AD41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD418u;
        // 0x2ad41c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD420u;
        goto label_2ad420;
    }
    ctx->pc = 0x2AD418u;
    {
        const bool branch_taken_0x2ad418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD418u;
        // 0x2ad41c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad418) {
            ctx->pc = 0x2AD42Cu;
            goto label_2ad42c;
        }
    }
    ctx->pc = 0x2AD420u;
label_2ad420:
    // 0x2ad420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ad420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ad424:
    // 0x2ad424: 0xaf8289dc  sw          $v0, -0x7624($gp)
    ctx->pc = 0x2ad424u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937052), GPR_U32(ctx, 2));
label_2ad428:
    // 0x2ad428: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2ad428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ad42c:
    // 0x2ad42c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ad42cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ad430:
    // 0x2ad430: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ad430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ad434:
    // 0x2ad434: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ad434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ad438:
    // 0x2ad438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ad43c:
    // 0x2ad43c: 0x3e00008  jr          $ra
label_2ad440:
    if (ctx->pc == 0x2AD440u) {
        ctx->pc = 0x2AD440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD43Cu;
        // 0x2ad440: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD444u;
        goto label_2ad444;
    }
    ctx->pc = 0x2AD43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD43Cu;
        // 0x2ad440: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD444u;
label_2ad444:
    // 0x2ad444: 0x0  nop
    ctx->pc = 0x2ad444u;
    // NOP
    ctx->pc = 0x2ad448u;
}
