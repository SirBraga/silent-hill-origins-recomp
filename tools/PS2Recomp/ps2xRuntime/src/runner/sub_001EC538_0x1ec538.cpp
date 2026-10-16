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

// Function: sub_001EC538
// Address: 0x1ec538 - 0x1ec5f0
void sub_001EC538_0x1ec538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC538_0x1ec538");
#endif

    switch (ctx->pc) {
        case 0x1ec538u: goto label_1ec538;
        case 0x1ec53cu: goto label_1ec53c;
        case 0x1ec540u: goto label_1ec540;
        case 0x1ec544u: goto label_1ec544;
        case 0x1ec548u: goto label_1ec548;
        case 0x1ec54cu: goto label_1ec54c;
        case 0x1ec550u: goto label_1ec550;
        case 0x1ec554u: goto label_1ec554;
        case 0x1ec558u: goto label_1ec558;
        case 0x1ec55cu: goto label_1ec55c;
        case 0x1ec560u: goto label_1ec560;
        case 0x1ec564u: goto label_1ec564;
        case 0x1ec568u: goto label_1ec568;
        case 0x1ec56cu: goto label_1ec56c;
        case 0x1ec570u: goto label_1ec570;
        case 0x1ec574u: goto label_1ec574;
        case 0x1ec578u: goto label_1ec578;
        case 0x1ec57cu: goto label_1ec57c;
        case 0x1ec580u: goto label_1ec580;
        case 0x1ec584u: goto label_1ec584;
        case 0x1ec588u: goto label_1ec588;
        case 0x1ec58cu: goto label_1ec58c;
        case 0x1ec590u: goto label_1ec590;
        case 0x1ec594u: goto label_1ec594;
        case 0x1ec598u: goto label_1ec598;
        case 0x1ec59cu: goto label_1ec59c;
        case 0x1ec5a0u: goto label_1ec5a0;
        case 0x1ec5a4u: goto label_1ec5a4;
        case 0x1ec5a8u: goto label_1ec5a8;
        case 0x1ec5acu: goto label_1ec5ac;
        case 0x1ec5b0u: goto label_1ec5b0;
        case 0x1ec5b4u: goto label_1ec5b4;
        case 0x1ec5b8u: goto label_1ec5b8;
        case 0x1ec5bcu: goto label_1ec5bc;
        case 0x1ec5c0u: goto label_1ec5c0;
        case 0x1ec5c4u: goto label_1ec5c4;
        case 0x1ec5c8u: goto label_1ec5c8;
        case 0x1ec5ccu: goto label_1ec5cc;
        case 0x1ec5d0u: goto label_1ec5d0;
        case 0x1ec5d4u: goto label_1ec5d4;
        case 0x1ec5d8u: goto label_1ec5d8;
        case 0x1ec5dcu: goto label_1ec5dc;
        case 0x1ec5e0u: goto label_1ec5e0;
        case 0x1ec5e4u: goto label_1ec5e4;
        case 0x1ec5e8u: goto label_1ec5e8;
        case 0x1ec5ecu: goto label_1ec5ec;
        default: break;
    }

    ctx->pc = 0x1ec538u;

label_1ec538:
    // 0x1ec538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ec53c:
    // 0x1ec53c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ec53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ec540:
    // 0x1ec540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ec544:
    // 0x1ec544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ec544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ec548:
    // 0x1ec548: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ec548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ec54c:
    // 0x1ec54c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1ec550:
    if (ctx->pc == 0x1EC550u) {
        ctx->pc = 0x1EC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC54Cu;
        // 0x1ec550: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC554u;
        goto label_1ec554;
    }
    ctx->pc = 0x1EC54Cu;
    {
        const bool branch_taken_0x1ec54c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec54c) {
            ctx->pc = 0x1EC550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC54Cu;
            // 0x1ec550: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC560u;
            goto label_1ec560;
        }
    }
    ctx->pc = 0x1EC554u;
label_1ec554:
    // 0x1ec554: 0xc07b14e  jal         func_1EC538
label_1ec558:
    if (ctx->pc == 0x1EC558u) {
        ctx->pc = 0x1EC55Cu;
        goto label_1ec55c;
    }
    ctx->pc = 0x1EC554u;
    SET_GPR_U32(ctx, 31, 0x1EC55Cu);
    ctx->pc = 0x1EC538u;
    goto label_1ec538;
    ctx->pc = 0x1EC55Cu;
label_1ec55c:
    // 0x1ec55c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1ec55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ec560:
    // 0x1ec560: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1ec564:
    if (ctx->pc == 0x1EC564u) {
        ctx->pc = 0x1EC564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC560u;
        // 0x1ec564: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC568u;
        goto label_1ec568;
    }
    ctx->pc = 0x1EC560u;
    {
        const bool branch_taken_0x1ec560 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec560) {
            ctx->pc = 0x1EC564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC560u;
            // 0x1ec564: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC574u;
            goto label_1ec574;
        }
    }
    ctx->pc = 0x1EC568u;
label_1ec568:
    // 0x1ec568: 0xc07b14e  jal         func_1EC538
label_1ec56c:
    if (ctx->pc == 0x1EC56Cu) {
        ctx->pc = 0x1EC570u;
        goto label_1ec570;
    }
    ctx->pc = 0x1EC568u;
    SET_GPR_U32(ctx, 31, 0x1EC570u);
    ctx->pc = 0x1EC538u;
    goto label_1ec538;
    ctx->pc = 0x1EC570u;
label_1ec570:
    // 0x1ec570: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1ec570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ec574:
    // 0x1ec574: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ec578:
    if (ctx->pc == 0x1EC578u) {
        ctx->pc = 0x1EC57Cu;
        goto label_1ec57c;
    }
    ctx->pc = 0x1EC574u;
    {
        const bool branch_taken_0x1ec574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec574) {
            ctx->pc = 0x1EC590u;
            goto label_1ec590;
        }
    }
    ctx->pc = 0x1EC57Cu;
label_1ec57c:
    // 0x1ec57c: 0xc0932d4  jal         func_24CB50
label_1ec580:
    if (ctx->pc == 0x1EC580u) {
        ctx->pc = 0x1EC584u;
        goto label_1ec584;
    }
    ctx->pc = 0x1EC57Cu;
    SET_GPR_U32(ctx, 31, 0x1EC584u);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EC57Cu, 0x1EC584u)) {
        return;
    }
    ctx->pc = 0x1EC584u;
label_1ec584:
    // 0x1ec584: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ec584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ec588:
    // 0x1ec588: 0x60f809  jalr        $v1
label_1ec58c:
    if (ctx->pc == 0x1EC58Cu) {
        ctx->pc = 0x1EC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC588u;
        // 0x1ec58c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC590u;
        goto label_1ec590;
    }
    ctx->pc = 0x1EC588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EC590u);
        ctx->pc = 0x1EC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC588u;
        // 0x1ec58c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC588u, 0x1EC590u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EC590u;
label_1ec590:
    // 0x1ec590: 0xc0932d4  jal         func_24CB50
label_1ec594:
    if (ctx->pc == 0x1EC594u) {
        ctx->pc = 0x1EC598u;
        goto label_1ec598;
    }
    ctx->pc = 0x1EC590u;
    SET_GPR_U32(ctx, 31, 0x1EC598u);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EC590u, 0x1EC598u)) {
        return;
    }
    ctx->pc = 0x1EC598u;
label_1ec598:
    // 0x1ec598: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ec598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ec59c:
    // 0x1ec59c: 0x60f809  jalr        $v1
label_1ec5a0:
    if (ctx->pc == 0x1EC5A0u) {
        ctx->pc = 0x1EC5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC59Cu;
        // 0x1ec5a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC5A4u;
        goto label_1ec5a4;
    }
    ctx->pc = 0x1EC59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EC5A4u);
        ctx->pc = 0x1EC5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC59Cu;
        // 0x1ec5a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC59Cu, 0x1EC5A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EC5A4u;
label_1ec5a4:
    // 0x1ec5a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ec5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec5a8:
    // 0x1ec5a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec5ac:
    // 0x1ec5ac: 0x3e00008  jr          $ra
label_1ec5b0:
    if (ctx->pc == 0x1EC5B0u) {
        ctx->pc = 0x1EC5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5ACu;
        // 0x1ec5b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC5B4u;
        goto label_1ec5b4;
    }
    ctx->pc = 0x1EC5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5ACu;
        // 0x1ec5b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC5B4u;
label_1ec5b4:
    // 0x1ec5b4: 0x0  nop
    ctx->pc = 0x1ec5b4u;
    // NOP
label_1ec5b8:
    // 0x1ec5b8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ec5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec5bc:
    // 0x1ec5bc: 0x0  nop
    ctx->pc = 0x1ec5bcu;
    // NOP
label_1ec5c0:
    // 0x1ec5c0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1ec5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ec5c4:
    // 0x1ec5c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec5c8:
    // 0x1ec5c8: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x1ec5c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1ec5cc:
    // 0x1ec5cc: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_1ec5d0:
    if (ctx->pc == 0x1EC5D0u) {
        ctx->pc = 0x1EC5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5CCu;
        // 0x1ec5d0: 0x24421d60  addiu       $v0, $v0, 0x1D60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC5D4u;
        goto label_1ec5d4;
    }
    ctx->pc = 0x1EC5CCu;
    {
        const bool branch_taken_0x1ec5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5CCu;
        // 0x1ec5d0: 0x24421d60  addiu       $v0, $v0, 0x1D60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5cc) {
            ctx->pc = 0x1EC64Cu;
            return;
        }
    }
    ctx->pc = 0x1EC5D4u;
label_1ec5d4:
    // 0x1ec5d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec5d8:
    // 0x1ec5d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ec5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ec5dc:
    // 0x1ec5dc: 0x24421e20  addiu       $v0, $v0, 0x1E20
    ctx->pc = 0x1ec5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7712));
label_1ec5e0:
    // 0x1ec5e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ec5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ec5e4:
    // 0x1ec5e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ec5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ec5e8:
    // 0x1ec5e8: 0x800008  jr          $a0
label_1ec5ec:
    if (ctx->pc == 0x1EC5ECu) {
        ctx->pc = 0x1EC5F0u;
        goto label_fallthrough_0x1ec5e8;
    }
    ctx->pc = 0x1EC5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC5E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1ec5e8:
    ctx->pc = 0x1EC5F0u;
}
