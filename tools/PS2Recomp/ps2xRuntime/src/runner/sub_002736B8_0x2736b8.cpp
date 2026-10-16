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

// Function: sub_002736B8
// Address: 0x2736b8 - 0x273760
void sub_002736B8_0x2736b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002736B8_0x2736b8");
#endif

    switch (ctx->pc) {
        case 0x2736b8u: goto label_2736b8;
        case 0x2736bcu: goto label_2736bc;
        case 0x2736c0u: goto label_2736c0;
        case 0x2736c4u: goto label_2736c4;
        case 0x2736c8u: goto label_2736c8;
        case 0x2736ccu: goto label_2736cc;
        case 0x2736d0u: goto label_2736d0;
        case 0x2736d4u: goto label_2736d4;
        case 0x2736d8u: goto label_2736d8;
        case 0x2736dcu: goto label_2736dc;
        case 0x2736e0u: goto label_2736e0;
        case 0x2736e4u: goto label_2736e4;
        case 0x2736e8u: goto label_2736e8;
        case 0x2736ecu: goto label_2736ec;
        case 0x2736f0u: goto label_2736f0;
        case 0x2736f4u: goto label_2736f4;
        case 0x2736f8u: goto label_2736f8;
        case 0x2736fcu: goto label_2736fc;
        case 0x273700u: goto label_273700;
        case 0x273704u: goto label_273704;
        case 0x273708u: goto label_273708;
        case 0x27370cu: goto label_27370c;
        case 0x273710u: goto label_273710;
        case 0x273714u: goto label_273714;
        case 0x273718u: goto label_273718;
        case 0x27371cu: goto label_27371c;
        case 0x273720u: goto label_273720;
        case 0x273724u: goto label_273724;
        case 0x273728u: goto label_273728;
        case 0x27372cu: goto label_27372c;
        case 0x273730u: goto label_273730;
        case 0x273734u: goto label_273734;
        case 0x273738u: goto label_273738;
        case 0x27373cu: goto label_27373c;
        case 0x273740u: goto label_273740;
        case 0x273744u: goto label_273744;
        case 0x273748u: goto label_273748;
        case 0x27374cu: goto label_27374c;
        case 0x273750u: goto label_273750;
        case 0x273754u: goto label_273754;
        case 0x273758u: goto label_273758;
        case 0x27375cu: goto label_27375c;
        default: break;
    }

    ctx->pc = 0x2736b8u;

label_2736b8:
    // 0x2736b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2736b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2736bc:
    // 0x2736bc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x2736bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_2736c0:
    // 0x2736c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2736c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2736c4:
    // 0x2736c4: 0x8c5053c8  lw          $s0, 0x53C8($v0)
    ctx->pc = 0x2736c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21448)));
label_2736c8:
    // 0x2736c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2736c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2736cc:
    // 0x2736cc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2736ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2736d0:
    // 0x2736d0: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_2736d4:
    if (ctx->pc == 0x2736D4u) {
        ctx->pc = 0x2736D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736D0u;
        // 0x2736d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2736D8u;
        goto label_2736d8;
    }
    ctx->pc = 0x2736D0u;
    {
        const bool branch_taken_0x2736d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2736D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736D0u;
        // 0x2736d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2736d0) {
            ctx->pc = 0x273744u;
            goto label_273744;
        }
    }
    ctx->pc = 0x2736D8u;
label_2736d8:
    // 0x2736d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2736d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2736dc:
    // 0x2736dc: 0x0  nop
    ctx->pc = 0x2736dcu;
    // NOP
label_2736e0:
    // 0x2736e0: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_2736e4:
    if (ctx->pc == 0x2736E4u) {
        ctx->pc = 0x2736E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736E0u;
        // 0x2736e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2736E8u;
        goto label_2736e8;
    }
    ctx->pc = 0x2736E0u;
    {
        const bool branch_taken_0x2736e0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2736E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736E0u;
        // 0x2736e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2736e0) {
            ctx->pc = 0x273738u;
            goto label_273738;
        }
    }
    ctx->pc = 0x2736E8u;
label_2736e8:
    // 0x2736e8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2736e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2736ec:
    // 0x2736ec: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2736ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2736f0:
    // 0x2736f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2736f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2736f4:
    // 0x2736f4: 0x40f809  jalr        $v0
label_2736f8:
    if (ctx->pc == 0x2736F8u) {
        ctx->pc = 0x2736F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736F4u;
        // 0x2736f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2736FCu;
        goto label_2736fc;
    }
    ctx->pc = 0x2736F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2736FCu);
        ctx->pc = 0x2736F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736F4u;
        // 0x2736f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2736F4u, 0x2736FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2736FCu;
label_2736fc:
    // 0x2736fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2736fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_273700:
    // 0x273700: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_273704:
    if (ctx->pc == 0x273704u) {
        ctx->pc = 0x273704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273700u;
        // 0x273704: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273708u;
        goto label_273708;
    }
    ctx->pc = 0x273700u;
    {
        const bool branch_taken_0x273700 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x273700) {
            ctx->pc = 0x273704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273700u;
            // 0x273704: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273728u;
            goto label_273728;
        }
    }
    ctx->pc = 0x273708u;
label_273708:
    // 0x273708: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x273708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_27370c:
    // 0x27370c: 0x50520006  beql        $v0, $s2, . + 4 + (0x6 << 2)
label_273710:
    if (ctx->pc == 0x273710u) {
        ctx->pc = 0x273710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27370Cu;
        // 0x273710: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273714u;
        goto label_273714;
    }
    ctx->pc = 0x27370Cu;
    {
        const bool branch_taken_0x27370c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x27370c) {
            ctx->pc = 0x273710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27370Cu;
            // 0x273710: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273728u;
            goto label_273728;
        }
    }
    ctx->pc = 0x273714u;
label_273714:
    // 0x273714: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x273714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_273718:
    // 0x273718: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x273718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_27371c:
    // 0x27371c: 0x40f809  jalr        $v0
label_273720:
    if (ctx->pc == 0x273720u) {
        ctx->pc = 0x273720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27371Cu;
        // 0x273720: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273724u;
        goto label_273724;
    }
    ctx->pc = 0x27371Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x273724u);
        ctx->pc = 0x273720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27371Cu;
        // 0x273720: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27371Cu, 0x273724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273724u;
label_273724:
    // 0x273724: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x273724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_273728:
    // 0x273728: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x273728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_27372c:
    // 0x27372c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x27372cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_273730:
    // 0x273730: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_273734:
    if (ctx->pc == 0x273734u) {
        ctx->pc = 0x273734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273730u;
        // 0x273734: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273738u;
        goto label_273738;
    }
    ctx->pc = 0x273730u;
    {
        const bool branch_taken_0x273730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273730) {
            ctx->pc = 0x273734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273730u;
            // 0x273734: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2736F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2736f0;
        }
    }
    ctx->pc = 0x273738u;
label_273738:
    // 0x273738: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x273738u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27373c:
    // 0x27373c: 0x5600ffe8  bnel        $s0, $zero, . + 4 + (-0x18 << 2)
label_273740:
    if (ctx->pc == 0x273740u) {
        ctx->pc = 0x273740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27373Cu;
        // 0x273740: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273744u;
        goto label_273744;
    }
    ctx->pc = 0x27373Cu;
    {
        const bool branch_taken_0x27373c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x27373c) {
            ctx->pc = 0x273740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27373Cu;
            // 0x273740: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2736E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2736e0;
        }
    }
    ctx->pc = 0x273744u;
label_273744:
    // 0x273744: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x273744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_273748:
    // 0x273748: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x273748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27374c:
    // 0x27374c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x27374cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_273750:
    // 0x273750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_273754:
    // 0x273754: 0x3e00008  jr          $ra
label_273758:
    if (ctx->pc == 0x273758u) {
        ctx->pc = 0x273758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273754u;
        // 0x273758: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27375Cu;
        goto label_27375c;
    }
    ctx->pc = 0x273754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273754u;
        // 0x273758: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27375Cu;
label_27375c:
    // 0x27375c: 0x0  nop
    ctx->pc = 0x27375cu;
    // NOP
    ctx->pc = 0x273760u;
}
