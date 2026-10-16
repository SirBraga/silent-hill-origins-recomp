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

// Function: sub_0011F658
// Address: 0x11f658 - 0x11f728
void sub_0011F658_0x11f658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F658_0x11f658");
#endif

    switch (ctx->pc) {
        case 0x11f658u: goto label_11f658;
        case 0x11f65cu: goto label_11f65c;
        case 0x11f660u: goto label_11f660;
        case 0x11f664u: goto label_11f664;
        case 0x11f668u: goto label_11f668;
        case 0x11f66cu: goto label_11f66c;
        case 0x11f670u: goto label_11f670;
        case 0x11f674u: goto label_11f674;
        case 0x11f678u: goto label_11f678;
        case 0x11f67cu: goto label_11f67c;
        case 0x11f680u: goto label_11f680;
        case 0x11f684u: goto label_11f684;
        case 0x11f688u: goto label_11f688;
        case 0x11f68cu: goto label_11f68c;
        case 0x11f690u: goto label_11f690;
        case 0x11f694u: goto label_11f694;
        case 0x11f698u: goto label_11f698;
        case 0x11f69cu: goto label_11f69c;
        case 0x11f6a0u: goto label_11f6a0;
        case 0x11f6a4u: goto label_11f6a4;
        case 0x11f6a8u: goto label_11f6a8;
        case 0x11f6acu: goto label_11f6ac;
        case 0x11f6b0u: goto label_11f6b0;
        case 0x11f6b4u: goto label_11f6b4;
        case 0x11f6b8u: goto label_11f6b8;
        case 0x11f6bcu: goto label_11f6bc;
        case 0x11f6c0u: goto label_11f6c0;
        case 0x11f6c4u: goto label_11f6c4;
        case 0x11f6c8u: goto label_11f6c8;
        case 0x11f6ccu: goto label_11f6cc;
        case 0x11f6d0u: goto label_11f6d0;
        case 0x11f6d4u: goto label_11f6d4;
        case 0x11f6d8u: goto label_11f6d8;
        case 0x11f6dcu: goto label_11f6dc;
        case 0x11f6e0u: goto label_11f6e0;
        case 0x11f6e4u: goto label_11f6e4;
        case 0x11f6e8u: goto label_11f6e8;
        case 0x11f6ecu: goto label_11f6ec;
        case 0x11f6f0u: goto label_11f6f0;
        case 0x11f6f4u: goto label_11f6f4;
        case 0x11f6f8u: goto label_11f6f8;
        case 0x11f6fcu: goto label_11f6fc;
        case 0x11f700u: goto label_11f700;
        case 0x11f704u: goto label_11f704;
        case 0x11f708u: goto label_11f708;
        case 0x11f70cu: goto label_11f70c;
        case 0x11f710u: goto label_11f710;
        case 0x11f714u: goto label_11f714;
        case 0x11f718u: goto label_11f718;
        case 0x11f71cu: goto label_11f71c;
        case 0x11f720u: goto label_11f720;
        case 0x11f724u: goto label_11f724;
        default: break;
    }

    ctx->pc = 0x11f658u;

label_11f658:
    // 0x11f658: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11f658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_11f65c:
    // 0x11f65c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11f65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_11f660:
    // 0x11f660: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11f660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_11f664:
    // 0x11f664: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11f664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11f668:
    // 0x11f668: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11f668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_11f66c:
    // 0x11f66c: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x11f66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_11f670:
    // 0x11f670: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11f670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11f674:
    // 0x11f674: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x11f674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_11f678:
    // 0x11f678: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11f678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11f67c:
    // 0x11f67c: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x11f67cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_11f680:
    // 0x11f680: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x11f680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_11f684:
    // 0x11f684: 0x60f809  jalr        $v1
label_11f688:
    if (ctx->pc == 0x11F688u) {
        ctx->pc = 0x11F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F684u;
        // 0x11f688: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F68Cu;
        goto label_11f68c;
    }
    ctx->pc = 0x11F684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11F68Cu);
        ctx->pc = 0x11F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F684u;
        // 0x11f688: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F684u, 0x11F68Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F68Cu;
label_11f68c:
    // 0x11f68c: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x11f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
label_11f690:
    // 0x11f690: 0x3c030012  lui         $v1, 0x12
    ctx->pc = 0x11f690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18 << 16));
label_11f694:
    // 0x11f694: 0x2442f4e8  addiu       $v0, $v0, -0xB18
    ctx->pc = 0x11f694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964456));
label_11f698:
    // 0x11f698: 0x2463f518  addiu       $v1, $v1, -0xAE8
    ctx->pc = 0x11f698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964504));
label_11f69c:
    // 0x11f69c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x11f69cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_11f6a0:
    // 0x11f6a0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x11f6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_11f6a4:
    // 0x11f6a4: 0x8c848668  lw          $a0, -0x7998($a0)
    ctx->pc = 0x11f6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936168)));
label_11f6a8:
    // 0x11f6a8: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_11f6ac:
    if (ctx->pc == 0x11F6ACu) {
        ctx->pc = 0x11F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6A8u;
        // 0x11f6ac: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F6B0u;
        goto label_11f6b0;
    }
    ctx->pc = 0x11F6A8u;
    {
        const bool branch_taken_0x11f6a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6A8u;
        // 0x11f6ac: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6a8) {
            ctx->pc = 0x11F6C0u;
            goto label_11f6c0;
        }
    }
    ctx->pc = 0x11F6B0u;
label_11f6b0:
    // 0x11f6b0: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x11f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
label_11f6b4:
    // 0x11f6b4: 0x2442f570  addiu       $v0, $v0, -0xA90
    ctx->pc = 0x11f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964592));
label_11f6b8:
    // 0x11f6b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_11f6bc:
    if (ctx->pc == 0x11F6BCu) {
        ctx->pc = 0x11F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6B8u;
        // 0x11f6bc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F6C0u;
        goto label_11f6c0;
    }
    ctx->pc = 0x11F6B8u;
    {
        const bool branch_taken_0x11f6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6B8u;
        // 0x11f6bc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6b8) {
            ctx->pc = 0x11F6C4u;
            goto label_11f6c4;
        }
    }
    ctx->pc = 0x11F6C0u;
label_11f6c0:
    // 0x11f6c0: 0xae002dac  sw          $zero, 0x2DAC($s0)
    ctx->pc = 0x11f6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11692), GPR_U32(ctx, 0));
label_11f6c4:
    // 0x11f6c4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x11f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_11f6c8:
    // 0x11f6c8: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x11f6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_11f6cc:
    // 0x11f6cc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x11f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_11f6d0:
    // 0x11f6d0: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x11f6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_11f6d4:
    // 0x11f6d4: 0x8c452d9c  lw          $a1, 0x2D9C($v0)
    ctx->pc = 0x11f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11676)));
label_11f6d8:
    // 0x11f6d8: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x11f6d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_11f6dc:
    // 0x11f6dc: 0x3a310001  xori        $s1, $s1, 0x1
    ctx->pc = 0x11f6dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
label_11f6e0:
    // 0x11f6e0: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x11f6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
label_11f6e4:
    // 0x11f6e4: 0x11400b  movn        $t0, $zero, $s1
    ctx->pc = 0x11f6e4u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0));
label_11f6e8:
    // 0x11f6e8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x11f6e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11f6ec:
    // 0x11f6ec: 0xc0596ae  jal         func_165AB8
label_11f6f0:
    if (ctx->pc == 0x11F6F0u) {
        ctx->pc = 0x11F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6ECu;
        // 0x11f6f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F6F4u;
        goto label_11f6f4;
    }
    ctx->pc = 0x11F6ECu;
    SET_GPR_U32(ctx, 31, 0x11F6F4u);
    ctx->pc = 0x11F6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F6ECu;
    // 0x11f6f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165AB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165AB8u, 0x11F6ECu, 0x11F6F4u)) {
        return;
    }
    ctx->pc = 0x11F6F4u;
label_11f6f4:
    // 0x11f6f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11f6f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f6f8:
    // 0x11f6f8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_11f6fc:
    // 0x11f6fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_11f700:
    if (ctx->pc == 0x11F700u) {
        ctx->pc = 0x11F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6FCu;
        // 0x11f700: 0x2e220001  sltiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F704u;
        goto label_11f704;
    }
    ctx->pc = 0x11F6FCu;
    {
        const bool branch_taken_0x11f6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6FCu;
        // 0x11f700: 0x2e220001  sltiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6fc) {
            ctx->pc = 0x11F710u;
            goto label_11f710;
        }
    }
    ctx->pc = 0x11F704u;
label_11f704:
    // 0x11f704: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x11f704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11f708:
    // 0x11f708: 0xae022db0  sw          $v0, 0x2DB0($s0)
    ctx->pc = 0x11f708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11696), GPR_U32(ctx, 2));
label_11f70c:
    // 0x11f70c: 0xae032dac  sw          $v1, 0x2DAC($s0)
    ctx->pc = 0x11f70cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11692), GPR_U32(ctx, 3));
label_11f710:
    // 0x11f710: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11f710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11f714:
    // 0x11f714: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11f714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11f718:
    // 0x11f718: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11f718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11f71c:
    // 0x11f71c: 0x3e00008  jr          $ra
label_11f720:
    if (ctx->pc == 0x11F720u) {
        ctx->pc = 0x11F720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F71Cu;
        // 0x11f720: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F724u;
        goto label_11f724;
    }
    ctx->pc = 0x11F71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F71Cu;
        // 0x11f720: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F724u;
label_11f724:
    // 0x11f724: 0x0  nop
    ctx->pc = 0x11f724u;
    // NOP
    ctx->pc = 0x11f728u;
}
