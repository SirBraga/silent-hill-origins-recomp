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

// Function: sub_002055D0
// Address: 0x2055d0 - 0x2056c8
void sub_002055D0_0x2055d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002055D0_0x2055d0");
#endif

    switch (ctx->pc) {
        case 0x2055f4u: goto label_2055f4;
        case 0x205638u: goto label_205638;
        case 0x205678u: goto label_205678;
        case 0x2056a0u: goto label_2056a0;
        default: break;
    }

    ctx->pc = 0x2055d0u;

    // 0x2055d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2055d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2055d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2055d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2055d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2055d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2055dc: 0x14a20030  bne         $a1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2055DCu;
    {
        const bool branch_taken_0x2055dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2055E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055DCu;
        // 0x2055e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055dc) {
            ctx->pc = 0x2056A0u;
            goto label_2056a0;
        }
    }
    ctx->pc = 0x2055E4u;
    // 0x2055e4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2055E4u;
    {
        const bool branch_taken_0x2055e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2055E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055E4u;
        // 0x2055e8: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055e4) {
            ctx->pc = 0x205618u;
            goto label_205618;
        }
    }
    ctx->pc = 0x2055ECu;
    // 0x2055ec: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x2055ECu;
    SET_GPR_U32(ctx, 31, 0x2055F4u);
    ctx->pc = 0x2055F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2055ECu;
    // 0x2055f0: 0x24842d10  addiu       $a0, $a0, 0x2D10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x2055ECu, 0x2055F4u)) {
        return;
    }
    ctx->pc = 0x2055F4u;
label_2055f4:
    // 0x2055f4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2055f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x2055f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2055f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2055fc: 0x24832d18  addiu       $v1, $a0, 0x2D18
    ctx->pc = 0x2055fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 11544));
    // 0x205600: 0x24423ed0  addiu       $v0, $v0, 0x3ED0
    ctx->pc = 0x205600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16080));
    // 0x205604: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x205604u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x702D24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x702D24u, _value); } while (0);
    // 0x205608: 0xac802d18  sw          $zero, 0x2D18($a0)
    ctx->pc = 0x205608u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x702D18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x702D18u, _value); } while (0);
    // 0x20560c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x20560cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x702D20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x702D20u, _value); } while (0);
    // 0x205610: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x205610u;
    {
        const bool branch_taken_0x205610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205610u;
        // 0x205614: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205610) {
            ctx->pc = 0x2056A0u;
            goto label_2056a0;
        }
    }
    ctx->pc = 0x205618u;
label_205618:
    // 0x205618: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x205618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x20561c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x20561cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x205620: 0x24502d18  addiu       $s0, $v0, 0x2D18
    ctx->pc = 0x205620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11544));
    // 0x205624: 0x24633ed0  addiu       $v1, $v1, 0x3ED0
    ctx->pc = 0x205624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16080));
    // 0x205628: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x205628u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x702D1Cu));
    // 0x20562c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20562Cu;
    {
        const bool branch_taken_0x20562c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20562Cu;
        // 0x205630: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20562c) {
            ctx->pc = 0x205690u;
            goto label_205690;
        }
    }
    ctx->pc = 0x205634u;
    // 0x205634: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x205634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_205638:
    // 0x205638: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x205638u;
    {
        const bool branch_taken_0x205638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x205638) {
            ctx->pc = 0x20563Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205638u;
            // 0x20563c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205688u;
            goto label_205688;
        }
    }
    ctx->pc = 0x205640u;
    // 0x205640: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x205640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x205644: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x205644u;
    {
        const bool branch_taken_0x205644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x205648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205644u;
        // 0x205648: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205644) {
            ctx->pc = 0x205654u;
            goto label_205654;
        }
    }
    ctx->pc = 0x20564Cu;
    // 0x20564c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20564Cu;
    {
        const bool branch_taken_0x20564c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20564Cu;
        // 0x205650: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20564c) {
            ctx->pc = 0x205658u;
            goto label_205658;
        }
    }
    ctx->pc = 0x205654u;
label_205654:
    // 0x205654: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x205654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_205658:
    // 0x205658: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x205658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20565c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20565Cu;
    {
        const bool branch_taken_0x20565c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x205660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20565Cu;
        // 0x205660: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20565c) {
            ctx->pc = 0x20566Cu;
            goto label_20566c;
        }
    }
    ctx->pc = 0x205664u;
    // 0x205664: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x205664u;
    {
        const bool branch_taken_0x205664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205664u;
        // 0x205668: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205664) {
            ctx->pc = 0x205670u;
            goto label_205670;
        }
    }
    ctx->pc = 0x20566Cu;
label_20566c:
    // 0x20566c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x20566cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_205670:
    // 0x205670: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x205670u;
    SET_GPR_U32(ctx, 31, 0x205678u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x205670u, 0x205678u)) {
        return;
    }
    ctx->pc = 0x205678u;
label_205678:
    // 0x205678: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x205678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20567c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20567cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x205680: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x205680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x205684: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x205684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_205688:
    // 0x205688: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x205688u;
    {
        const bool branch_taken_0x205688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205688) {
            ctx->pc = 0x20568Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205688u;
            // 0x20568c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205638;
        }
    }
    ctx->pc = 0x205690u;
label_205690:
    // 0x205690: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x205690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x205694: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x205694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x205698: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x205698u;
    SET_GPR_U32(ctx, 31, 0x2056A0u);
    ctx->pc = 0x20569Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205698u;
    // 0x20569c: 0x24842d10  addiu       $a0, $a0, 0x2D10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x205698u, 0x2056A0u)) {
        return;
    }
    ctx->pc = 0x2056A0u;
label_2056a0:
    // 0x2056a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2056a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2056a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2056a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2056a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2056A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2056ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056A8u;
        // 0x2056ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2056A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2056B0u;
    // 0x2056b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2056b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2056b4: 0x0  nop
    ctx->pc = 0x2056b4u;
    // NOP
    // 0x2056b8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2056b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2056bc: 0x0  nop
    ctx->pc = 0x2056bcu;
    // NOP
    // 0x2056c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2056c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2056c4: 0x0  nop
    ctx->pc = 0x2056c4u;
    // NOP
    ctx->pc = 0x2056c8u;
}
