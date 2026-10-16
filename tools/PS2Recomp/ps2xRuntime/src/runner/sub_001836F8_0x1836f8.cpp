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

// Function: sub_001836F8
// Address: 0x1836f8 - 0x1837f0
void sub_001836F8_0x1836f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001836F8_0x1836f8");
#endif

    switch (ctx->pc) {
        case 0x183750u: goto label_183750;
        case 0x183760u: goto label_183760;
        case 0x1837acu: goto label_1837ac;
        case 0x1837bcu: goto label_1837bc;
        case 0x1837e0u: goto label_1837e0;
        default: break;
    }

    ctx->pc = 0x1836f8u;

    // 0x1836f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1836f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1836fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1836fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x183700: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183704: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x183704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183708: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x183708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18370c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x18370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x183710: 0x50820034  beql        $a0, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x183710u;
    {
        const bool branch_taken_0x183710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x183710) {
            ctx->pc = 0x183714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183710u;
            // 0x183714: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1837E4u;
            goto label_1837e4;
        }
    }
    ctx->pc = 0x183718u;
    // 0x183718: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x183718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x18371c: 0x10820030  beq         $a0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x18371Cu;
    {
        const bool branch_taken_0x18371c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x183720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18371Cu;
        // 0x183720: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18371c) {
            ctx->pc = 0x1837E0u;
            goto label_1837e0;
        }
    }
    ctx->pc = 0x183724u;
    // 0x183724: 0x8c43bcf0  lw          $v1, -0x4310($v0)
    ctx->pc = 0x183724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950128)));
    // 0x183728: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x183728u;
    {
        const bool branch_taken_0x183728 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x18372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183728u;
        // 0x18372c: 0x3c03006d  lui         $v1, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183728) {
            ctx->pc = 0x183768u;
            goto label_183768;
        }
    }
    ctx->pc = 0x183730u;
    // 0x183730: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x183730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x183734: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x183734u;
    {
        const bool branch_taken_0x183734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x183734) {
            ctx->pc = 0x183738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183734u;
            // 0x183738: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183768u;
            goto label_183768;
        }
    }
    ctx->pc = 0x18373Cu;
    // 0x18373c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x18373cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x183740: 0x50800028  beql        $a0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x183740u;
    {
        const bool branch_taken_0x183740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x183740) {
            ctx->pc = 0x183744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183740u;
            // 0x183744: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1837E4u;
            goto label_1837e4;
        }
    }
    ctx->pc = 0x183748u;
    // 0x183748: 0xc065c58  jal         func_197160
    ctx->pc = 0x183748u;
    SET_GPR_U32(ctx, 31, 0x183750u);
    ctx->pc = 0x18374Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183748u;
    // 0x18374c: 0x8e05008c  lw          $a1, 0x8C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x183748u, 0x183750u)) {
        return;
    }
    ctx->pc = 0x183750u;
label_183750:
    // 0x183750: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x183750u;
    {
        const bool branch_taken_0x183750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183750) {
            ctx->pc = 0x183754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183750u;
            // 0x183754: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1837E4u;
            goto label_1837e4;
        }
    }
    ctx->pc = 0x183758u;
    // 0x183758: 0xc060f90  jal         func_183E40
    ctx->pc = 0x183758u;
    SET_GPR_U32(ctx, 31, 0x183760u);
    ctx->pc = 0x18375Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183758u;
    // 0x18375c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183E40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x183E40u, 0x183758u, 0x183760u)) {
        return;
    }
    ctx->pc = 0x183760u;
label_183760:
    // 0x183760: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x183760u;
    {
        const bool branch_taken_0x183760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183760u;
        // 0x183764: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183760) {
            ctx->pc = 0x1837E4u;
            goto label_1837e4;
        }
    }
    ctx->pc = 0x183768u;
label_183768:
    // 0x183768: 0x8c62bd00  lw          $v0, -0x4300($v1)
    ctx->pc = 0x183768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950144)));
    // 0x18376c: 0x14820015  bne         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x18376Cu;
    {
        const bool branch_taken_0x18376c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x183770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18376Cu;
        // 0x183770: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18376c) {
            ctx->pc = 0x1837C4u;
            goto label_1837c4;
        }
    }
    ctx->pc = 0x183774u;
    // 0x183774: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x183774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x183778: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x183778u;
    {
        const bool branch_taken_0x183778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183778) {
            ctx->pc = 0x18377Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183778u;
            // 0x18377c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1837E4u;
            goto label_1837e4;
        }
    }
    ctx->pc = 0x183780u;
    // 0x183780: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x183780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x183784: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x183784u;
    {
        const bool branch_taken_0x183784 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x183784) {
            ctx->pc = 0x1837B4u;
            goto label_1837b4;
        }
    }
    ctx->pc = 0x18378Cu;
    // 0x18378c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x18378cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x183790: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x183790u;
    {
        const bool branch_taken_0x183790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183790) {
            ctx->pc = 0x1837B4u;
            goto label_1837b4;
        }
    }
    ctx->pc = 0x183798u;
    // 0x183798: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x183798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x18379c: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x18379cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1837a0: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x1837a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1837a4: 0xc09d926  jal         func_276498
    ctx->pc = 0x1837A4u;
    SET_GPR_U32(ctx, 31, 0x1837ACu);
    ctx->pc = 0x1837A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1837A4u;
    // 0x1837a8: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x1837A4u, 0x1837ACu)) {
        return;
    }
    ctx->pc = 0x1837ACu;
label_1837ac:
    // 0x1837ac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1837ACu;
    {
        const bool branch_taken_0x1837ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1837B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1837ACu;
        // 0x1837b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1837ac) {
            ctx->pc = 0x1837E4u;
            goto label_1837e4;
        }
    }
    ctx->pc = 0x1837B4u;
label_1837b4:
    // 0x1837b4: 0xc060fbc  jal         func_183EF0
    ctx->pc = 0x1837B4u;
    SET_GPR_U32(ctx, 31, 0x1837BCu);
    ctx->pc = 0x1837B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1837B4u;
    // 0x1837b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x183EF0u, 0x1837B4u, 0x1837BCu)) {
        return;
    }
    ctx->pc = 0x1837BCu;
label_1837bc:
    // 0x1837bc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1837BCu;
    {
        const bool branch_taken_0x1837bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1837C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1837BCu;
        // 0x1837c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1837bc) {
            ctx->pc = 0x1837E4u;
            goto label_1837e4;
        }
    }
    ctx->pc = 0x1837C4u;
label_1837c4:
    // 0x1837c4: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x1837c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    // 0x1837c8: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1837C8u;
    {
        const bool branch_taken_0x1837c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1837c8) {
            ctx->pc = 0x1837CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1837C8u;
            // 0x1837cc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1837E4u;
            goto label_1837e4;
        }
    }
    ctx->pc = 0x1837D0u;
    // 0x1837d0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1837d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1837d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1837d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1837d8: 0xc060ea4  jal         func_183A90
    ctx->pc = 0x1837D8u;
    SET_GPR_U32(ctx, 31, 0x1837E0u);
    ctx->pc = 0x1837DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1837D8u;
    // 0x1837dc: 0xc44c0008  lwc1        $f12, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x183A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x183A90u, 0x1837D8u, 0x1837E0u)) {
        return;
    }
    ctx->pc = 0x1837E0u;
label_1837e0:
    // 0x1837e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1837e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1837e4:
    // 0x1837e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1837e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1837e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1837E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1837ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1837E8u;
        // 0x1837ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1837E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1837F0u;
}
