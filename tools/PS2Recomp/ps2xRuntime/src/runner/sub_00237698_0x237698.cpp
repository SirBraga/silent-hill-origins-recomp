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

// Function: sub_00237698
// Address: 0x237698 - 0x237800
void sub_00237698_0x237698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237698_0x237698");
#endif

    switch (ctx->pc) {
        case 0x237710u: goto label_237710;
        case 0x23771cu: goto label_23771c;
        case 0x237768u: goto label_237768;
        case 0x23777cu: goto label_23777c;
        case 0x2377a0u: goto label_2377a0;
        default: break;
    }

    ctx->pc = 0x237698u;

    // 0x237698: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23769c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23769cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2376a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2376a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2376a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2376a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2376a8: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x2376a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x2376ac: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2376acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2376b0: 0x30436000  andi        $v1, $v0, 0x6000
    ctx->pc = 0x2376b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x2376b4: 0x50600035  beql        $v1, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x2376B4u;
    {
        const bool branch_taken_0x2376b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2376b4) {
            ctx->pc = 0x2376B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2376B4u;
            // 0x2376b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23778Cu;
            goto label_23778c;
        }
    }
    ctx->pc = 0x2376BCu;
    // 0x2376bc: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x2376bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2376c0: 0x10e00031  beqz        $a3, . + 4 + (0x31 << 2)
    ctx->pc = 0x2376C0u;
    {
        const bool branch_taken_0x2376c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2376C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376C0u;
        // 0x2376c4: 0x30444000  andi        $a0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376c0) {
            ctx->pc = 0x237788u;
            goto label_237788;
        }
    }
    ctx->pc = 0x2376C8u;
    // 0x2376c8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2376c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2376cc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2376ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2376d0: 0x30460f00  andi        $a2, $v0, 0xF00
    ctx->pc = 0x2376d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x2376d4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2376d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2376d8: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2376D8u;
    {
        const bool branch_taken_0x2376d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2376DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376D8u;
        // 0x2376dc: 0x64280b  movn        $a1, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376d8) {
            ctx->pc = 0x2376F4u;
            goto label_2376f4;
        }
    }
    ctx->pc = 0x2376E0u;
    // 0x2376e0: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x2376e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x2376e4: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2376E4u;
    {
        const bool branch_taken_0x2376e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2376E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376E4u;
        // 0x2376e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376e4) {
            ctx->pc = 0x2376FCu;
            goto label_2376fc;
        }
    }
    ctx->pc = 0x2376ECu;
    // 0x2376ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2376ECu;
    {
        const bool branch_taken_0x2376ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2376F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376ECu;
        // 0x2376f0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376ec) {
            ctx->pc = 0x237704u;
            goto label_237704;
        }
    }
    ctx->pc = 0x2376F4u;
label_2376f4:
    // 0x2376f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2376F4u;
    {
        const bool branch_taken_0x2376f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2376F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376F4u;
        // 0x2376f8: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376f4) {
            ctx->pc = 0x237728u;
            goto label_237728;
        }
    }
    ctx->pc = 0x2376FCu;
label_2376fc:
    // 0x2376fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2376FCu;
    {
        const bool branch_taken_0x2376fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376FCu;
        // 0x237700: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376fc) {
            ctx->pc = 0x237728u;
            goto label_237728;
        }
    }
    ctx->pc = 0x237704u;
label_237704:
    // 0x237704: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x237704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x237708: 0xc092848  jal         func_24A120
    ctx->pc = 0x237708u;
    SET_GPR_U32(ctx, 31, 0x237710u);
    ctx->pc = 0x23770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237708u;
    // 0x23770c: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x237708u, 0x237710u)) {
        return;
    }
    ctx->pc = 0x237710u;
label_237710:
    // 0x237710: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x237710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237714: 0xc09281a  jal         func_24A068
    ctx->pc = 0x237714u;
    SET_GPR_U32(ctx, 31, 0x23771Cu);
    ctx->pc = 0x237718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237714u;
    // 0x237718: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x237714u, 0x23771Cu)) {
        return;
    }
    ctx->pc = 0x23771Cu;
label_23771c:
    // 0x23771c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x23771Cu;
    {
        const bool branch_taken_0x23771c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23771Cu;
        // 0x237720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23771c) {
            ctx->pc = 0x23778Cu;
            goto label_23778c;
        }
    }
    ctx->pc = 0x237724u;
    // 0x237724: 0x0  nop
    ctx->pc = 0x237724u;
    // NOP
label_237728:
    // 0x237728: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x237728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x23772c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x23772cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x237730: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x237730u;
    {
        const bool branch_taken_0x237730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237730u;
        // 0x237734: 0xe32821  addu        $a1, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237730) {
            ctx->pc = 0x237770u;
            goto label_237770;
        }
    }
    ctx->pc = 0x237738u;
    // 0x237738: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x237738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x23773c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23773cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x237740: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x237740u;
    {
        const bool branch_taken_0x237740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237740) {
            ctx->pc = 0x237744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237740u;
            // 0x237744: 0x92020022  lbu         $v0, 0x22($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237780u;
            goto label_237780;
        }
    }
    ctx->pc = 0x237748u;
    // 0x237748: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x237748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23774c: 0x8c42416c  lw          $v0, 0x416C($v0)
    ctx->pc = 0x23774cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x237750: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x237750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x237754: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x237754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x237758: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x237758u;
    {
        const bool branch_taken_0x237758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x237758) {
            ctx->pc = 0x23775Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237758u;
            // 0x23775c: 0x92020022  lbu         $v0, 0x22($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237780u;
            goto label_237780;
        }
    }
    ctx->pc = 0x237760u;
    // 0x237760: 0xc0919bc  jal         func_2466F0
    ctx->pc = 0x237760u;
    SET_GPR_U32(ctx, 31, 0x237768u);
    ctx->pc = 0x237764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237760u;
    // 0x237764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2466F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2466F0u, 0x237760u, 0x237768u)) {
        return;
    }
    ctx->pc = 0x237768u;
label_237768:
    // 0x237768: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x237768u;
    {
        const bool branch_taken_0x237768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237768u;
        // 0x23776c: 0x92020022  lbu         $v0, 0x22($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237768) {
            ctx->pc = 0x237780u;
            goto label_237780;
        }
    }
    ctx->pc = 0x237770u;
label_237770:
    // 0x237770: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x237770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237774: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x237774u;
    SET_GPR_U32(ctx, 31, 0x23777Cu);
    ctx->pc = 0x237778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237774u;
    // 0x237778: 0x24a5007f  addiu       $a1, $a1, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x237774u, 0x23777Cu)) {
        return;
    }
    ctx->pc = 0x23777Cu;
label_23777c:
    // 0x23777c: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x23777cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
label_237780:
    // 0x237780: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x237780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x237784: 0xa2020022  sb          $v0, 0x22($s0)
    ctx->pc = 0x237784u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
label_237788:
    // 0x237788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23778c:
    // 0x23778c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23778cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237790: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237794: 0x3e00008  jr          $ra
    ctx->pc = 0x237794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237794u;
        // 0x237798: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23779Cu;
    // 0x23779c: 0x0  nop
    ctx->pc = 0x23779cu;
    // NOP
label_2377a0:
    // 0x2377a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2377a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2377a4: 0x8c42416c  lw          $v0, 0x416C($v0)
    ctx->pc = 0x2377a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x2377a8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2377a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2377ac: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2377ACu;
    {
        const bool branch_taken_0x2377ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2377B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377ACu;
        // 0x2377b0: 0xa23021  addu        $a2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377ac) {
            ctx->pc = 0x2377E8u;
            goto label_2377e8;
        }
    }
    ctx->pc = 0x2377B4u;
    // 0x2377b4: 0x90a20023  lbu         $v0, 0x23($a1)
    ctx->pc = 0x2377b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 35)));
    // 0x2377b8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2377b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2377bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2377BCu;
    {
        const bool branch_taken_0x2377bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2377C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377BCu;
        // 0x2377c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377bc) {
            ctx->pc = 0x2377E0u;
            goto label_2377e0;
        }
    }
    ctx->pc = 0x2377C4u;
    // 0x2377c4: 0x50c0000c  beql        $a2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2377C4u;
    {
        const bool branch_taken_0x2377c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2377c4) {
            ctx->pc = 0x2377C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2377C4u;
            // 0x2377c8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2377F8u;
            goto label_2377f8;
        }
    }
    ctx->pc = 0x2377CCu;
    // 0x2377cc: 0x90c20016  lbu         $v0, 0x16($a2)
    ctx->pc = 0x2377ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 22)));
    // 0x2377d0: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2377d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2377d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2377d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2377d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2377D8u;
    {
        const bool branch_taken_0x2377d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2377DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377D8u;
        // 0x2377dc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377d8) {
            ctx->pc = 0x2377F0u;
            goto label_2377f0;
        }
    }
    ctx->pc = 0x2377E0u;
label_2377e0:
    // 0x2377e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2377E0u;
    {
        const bool branch_taken_0x2377e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2377E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377E0u;
        // 0x2377e4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377e0) {
            ctx->pc = 0x2377F0u;
            goto label_2377f0;
        }
    }
    ctx->pc = 0x2377E8u;
label_2377e8:
    // 0x2377e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2377E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2377ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377E8u;
        // 0x2377ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2377E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2377F0u;
label_2377f0:
    // 0x2377f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2377F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2377F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377F0u;
        // 0x2377f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2377F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2377F8u;
label_2377f8:
    // 0x2377f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2377F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2377F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237800u;
}
