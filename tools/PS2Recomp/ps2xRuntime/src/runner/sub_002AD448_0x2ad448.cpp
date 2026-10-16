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

// Function: sub_002AD448
// Address: 0x2ad448 - 0x2ad508
void sub_002AD448_0x2ad448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD448_0x2ad448");
#endif

    switch (ctx->pc) {
        case 0x2ad448u: goto label_2ad448;
        case 0x2ad44cu: goto label_2ad44c;
        case 0x2ad450u: goto label_2ad450;
        case 0x2ad454u: goto label_2ad454;
        case 0x2ad458u: goto label_2ad458;
        case 0x2ad45cu: goto label_2ad45c;
        case 0x2ad460u: goto label_2ad460;
        case 0x2ad464u: goto label_2ad464;
        case 0x2ad468u: goto label_2ad468;
        case 0x2ad46cu: goto label_2ad46c;
        case 0x2ad470u: goto label_2ad470;
        case 0x2ad474u: goto label_2ad474;
        case 0x2ad478u: goto label_2ad478;
        case 0x2ad47cu: goto label_2ad47c;
        case 0x2ad480u: goto label_2ad480;
        case 0x2ad484u: goto label_2ad484;
        case 0x2ad488u: goto label_2ad488;
        case 0x2ad48cu: goto label_2ad48c;
        case 0x2ad490u: goto label_2ad490;
        case 0x2ad494u: goto label_2ad494;
        case 0x2ad498u: goto label_2ad498;
        case 0x2ad49cu: goto label_2ad49c;
        case 0x2ad4a0u: goto label_2ad4a0;
        case 0x2ad4a4u: goto label_2ad4a4;
        case 0x2ad4a8u: goto label_2ad4a8;
        case 0x2ad4acu: goto label_2ad4ac;
        case 0x2ad4b0u: goto label_2ad4b0;
        case 0x2ad4b4u: goto label_2ad4b4;
        case 0x2ad4b8u: goto label_2ad4b8;
        case 0x2ad4bcu: goto label_2ad4bc;
        case 0x2ad4c0u: goto label_2ad4c0;
        case 0x2ad4c4u: goto label_2ad4c4;
        case 0x2ad4c8u: goto label_2ad4c8;
        case 0x2ad4ccu: goto label_2ad4cc;
        case 0x2ad4d0u: goto label_2ad4d0;
        case 0x2ad4d4u: goto label_2ad4d4;
        case 0x2ad4d8u: goto label_2ad4d8;
        case 0x2ad4dcu: goto label_2ad4dc;
        case 0x2ad4e0u: goto label_2ad4e0;
        case 0x2ad4e4u: goto label_2ad4e4;
        case 0x2ad4e8u: goto label_2ad4e8;
        case 0x2ad4ecu: goto label_2ad4ec;
        case 0x2ad4f0u: goto label_2ad4f0;
        case 0x2ad4f4u: goto label_2ad4f4;
        case 0x2ad4f8u: goto label_2ad4f8;
        case 0x2ad4fcu: goto label_2ad4fc;
        case 0x2ad500u: goto label_2ad500;
        case 0x2ad504u: goto label_2ad504;
        default: break;
    }

    ctx->pc = 0x2ad448u;

label_2ad448:
    // 0x2ad448: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ad448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2ad44c:
    // 0x2ad44c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ad44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2ad450:
    // 0x2ad450: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ad450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2ad454:
    // 0x2ad454: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ad454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ad458:
    // 0x2ad458: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ad458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2ad45c:
    // 0x2ad45c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ad460:
    // 0x2ad460: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2ad460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2ad464:
    // 0x2ad464: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2ad468:
    if (ctx->pc == 0x2AD468u) {
        ctx->pc = 0x2AD468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD464u;
        // 0x2ad468: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD46Cu;
        goto label_2ad46c;
    }
    ctx->pc = 0x2AD464u;
    {
        const bool branch_taken_0x2ad464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD464u;
        // 0x2ad468: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad464) {
            ctx->pc = 0x2AD49Cu;
            goto label_2ad49c;
        }
    }
    ctx->pc = 0x2AD46Cu;
label_2ad46c:
    // 0x2ad46c: 0x96040020  lhu         $a0, 0x20($s0)
    ctx->pc = 0x2ad46cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
label_2ad470:
    // 0x2ad470: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ad470u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ad474:
    // 0x2ad474: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x2ad474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_2ad478:
    // 0x2ad478: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2ad478u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
label_2ad47c:
    // 0x2ad47c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ad47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ad480:
    // 0x2ad480: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2ad480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_2ad484:
    // 0x2ad484: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ad484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2ad488:
    // 0x2ad488: 0x922004  sllv        $a0, $s2, $a0
    ctx->pc = 0x2ad488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 4) & 0x1F));
label_2ad48c:
    // 0x2ad48c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ad48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ad490:
    // 0x2ad490: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ad490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2ad494:
    // 0x2ad494: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2ad498:
    if (ctx->pc == 0x2AD498u) {
        ctx->pc = 0x2AD498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD494u;
        // 0x2ad498: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD49Cu;
        goto label_2ad49c;
    }
    ctx->pc = 0x2AD494u;
    {
        const bool branch_taken_0x2ad494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad494) {
            ctx->pc = 0x2AD498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD494u;
            // 0x2ad498: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD4A4u;
            goto label_2ad4a4;
        }
    }
    ctx->pc = 0x2AD49Cu;
label_2ad49c:
    // 0x2ad49c: 0x10000013  b           . + 4 + (0x13 << 2)
label_2ad4a0:
    if (ctx->pc == 0x2AD4A0u) {
        ctx->pc = 0x2AD4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD49Cu;
        // 0x2ad4a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD4A4u;
        goto label_2ad4a4;
    }
    ctx->pc = 0x2AD49Cu;
    {
        const bool branch_taken_0x2ad49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD49Cu;
        // 0x2ad4a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad49c) {
            ctx->pc = 0x2AD4ECu;
            goto label_2ad4ec;
        }
    }
    ctx->pc = 0x2AD4A4u;
label_2ad4a4:
    // 0x2ad4a4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2ad4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2ad4a8:
    // 0x2ad4a8: 0x40f809  jalr        $v0
label_2ad4ac:
    if (ctx->pc == 0x2AD4ACu) {
        ctx->pc = 0x2AD4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD4A8u;
        // 0x2ad4ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD4B0u;
        goto label_2ad4b0;
    }
    ctx->pc = 0x2AD4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AD4B0u);
        ctx->pc = 0x2AD4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD4A8u;
        // 0x2ad4ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD4A8u, 0x2AD4B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD4B0u;
label_2ad4b0:
    // 0x2ad4b0: 0x96040020  lhu         $a0, 0x20($s0)
    ctx->pc = 0x2ad4b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
label_2ad4b4:
    // 0x2ad4b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ad4b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ad4b8:
    // 0x2ad4b8: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x2ad4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2ad4bc:
    // 0x2ad4bc: 0x42942  srl         $a1, $a0, 5
    ctx->pc = 0x2ad4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
label_2ad4c0:
    // 0x2ad4c0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2ad4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2ad4c4:
    // 0x2ad4c4: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2ad4c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_2ad4c8:
    // 0x2ad4c8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2ad4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2ad4cc:
    // 0x2ad4cc: 0x922004  sllv        $a0, $s2, $a0
    ctx->pc = 0x2ad4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 4) & 0x1F));
label_2ad4d0:
    // 0x2ad4d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ad4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ad4d4:
    // 0x2ad4d4: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x2ad4d4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_2ad4d8:
    // 0x2ad4d8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ad4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2ad4dc:
    // 0x2ad4dc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2ad4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2ad4e0:
    // 0x2ad4e0: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x2ad4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2ad4e4:
    // 0x2ad4e4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2ad4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2ad4e8:
    // 0x2ad4e8: 0xae24004c  sw          $a0, 0x4C($s1)
    ctx->pc = 0x2ad4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 4));
label_2ad4ec:
    // 0x2ad4ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ad4ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ad4f0:
    // 0x2ad4f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ad4f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ad4f4:
    // 0x2ad4f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ad4f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ad4f8:
    // 0x2ad4f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ad4fc:
    // 0x2ad4fc: 0x3e00008  jr          $ra
label_2ad500:
    if (ctx->pc == 0x2AD500u) {
        ctx->pc = 0x2AD500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD4FCu;
        // 0x2ad500: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD504u;
        goto label_2ad504;
    }
    ctx->pc = 0x2AD4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD4FCu;
        // 0x2ad500: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD504u;
label_2ad504:
    // 0x2ad504: 0x0  nop
    ctx->pc = 0x2ad504u;
    // NOP
    ctx->pc = 0x2ad508u;
}
