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

// Function: sub_00126A70
// Address: 0x126a70 - 0x126b24
void sub_00126A70_0x126a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126A70_0x126a70");
#endif

    switch (ctx->pc) {
        case 0x126a70u: goto label_126a70;
        case 0x126a74u: goto label_126a74;
        case 0x126a78u: goto label_126a78;
        case 0x126a7cu: goto label_126a7c;
        case 0x126a80u: goto label_126a80;
        case 0x126a84u: goto label_126a84;
        case 0x126a88u: goto label_126a88;
        case 0x126a8cu: goto label_126a8c;
        case 0x126a90u: goto label_126a90;
        case 0x126a94u: goto label_126a94;
        case 0x126a98u: goto label_126a98;
        case 0x126a9cu: goto label_126a9c;
        case 0x126aa0u: goto label_126aa0;
        case 0x126aa4u: goto label_126aa4;
        case 0x126aa8u: goto label_126aa8;
        case 0x126aacu: goto label_126aac;
        case 0x126ab0u: goto label_126ab0;
        case 0x126ab4u: goto label_126ab4;
        case 0x126ab8u: goto label_126ab8;
        case 0x126abcu: goto label_126abc;
        case 0x126ac0u: goto label_126ac0;
        case 0x126ac4u: goto label_126ac4;
        case 0x126ac8u: goto label_126ac8;
        case 0x126accu: goto label_126acc;
        case 0x126ad0u: goto label_126ad0;
        case 0x126ad4u: goto label_126ad4;
        case 0x126ad8u: goto label_126ad8;
        case 0x126adcu: goto label_126adc;
        case 0x126ae0u: goto label_126ae0;
        case 0x126ae4u: goto label_126ae4;
        case 0x126ae8u: goto label_126ae8;
        case 0x126aecu: goto label_126aec;
        case 0x126af0u: goto label_126af0;
        case 0x126af4u: goto label_126af4;
        case 0x126af8u: goto label_126af8;
        case 0x126afcu: goto label_126afc;
        case 0x126b00u: goto label_126b00;
        case 0x126b04u: goto label_126b04;
        case 0x126b08u: goto label_126b08;
        case 0x126b0cu: goto label_126b0c;
        case 0x126b10u: goto label_126b10;
        case 0x126b14u: goto label_126b14;
        case 0x126b18u: goto label_126b18;
        case 0x126b1cu: goto label_126b1c;
        case 0x126b20u: goto label_126b20;
        default: break;
    }

    ctx->pc = 0x126a70u;

label_126a70:
    // 0x126a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_126a74:
    // 0x126a74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x126a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_126a78:
    // 0x126a78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x126a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_126a7c:
    // 0x126a7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x126a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_126a80:
    // 0x126a80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_126a84:
    // 0x126a84: 0x8e050c00  lw          $a1, 0xC00($s0)
    ctx->pc = 0x126a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
label_126a88:
    // 0x126a88: 0x50a00019  beql        $a1, $zero, . + 4 + (0x19 << 2)
label_126a8c:
    if (ctx->pc == 0x126A8Cu) {
        ctx->pc = 0x126A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A88u;
        // 0x126a8c: 0x8e030f54  lw          $v1, 0xF54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3924)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126A90u;
        goto label_126a90;
    }
    ctx->pc = 0x126A88u;
    {
        const bool branch_taken_0x126a88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x126a88) {
            ctx->pc = 0x126A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126A88u;
            // 0x126a8c: 0x8e030f54  lw          $v1, 0xF54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3924)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126AF0u;
            goto label_126af0;
        }
    }
    ctx->pc = 0x126A90u;
label_126a90:
    // 0x126a90: 0x8ca50054  lw          $a1, 0x54($a1)
    ctx->pc = 0x126a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_126a94:
    // 0x126a94: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x126a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_126a98:
    // 0x126a98: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_126a9c:
    if (ctx->pc == 0x126A9Cu) {
        ctx->pc = 0x126A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A98u;
        // 0x126a9c: 0x8e020c00  lw          $v0, 0xC00($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126AA0u;
        goto label_126aa0;
    }
    ctx->pc = 0x126A98u;
    {
        const bool branch_taken_0x126a98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x126a98) {
            ctx->pc = 0x126A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126A98u;
            // 0x126a9c: 0x8e020c00  lw          $v0, 0xC00($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126AACu;
            goto label_126aac;
        }
    }
    ctx->pc = 0x126AA0u;
label_126aa0:
    // 0x126aa0: 0xc0ab42e  jal         func_2AD0B8
label_126aa4:
    if (ctx->pc == 0x126AA4u) {
        ctx->pc = 0x126AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AA0u;
        // 0x126aa4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126AA8u;
        goto label_126aa8;
    }
    ctx->pc = 0x126AA0u;
    SET_GPR_U32(ctx, 31, 0x126AA8u);
    ctx->pc = 0x126AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126AA0u;
    // 0x126aa4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD0B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD0B8u, 0x126AA0u, 0x126AA8u)) {
        return;
    }
    ctx->pc = 0x126AA8u;
label_126aa8:
    // 0x126aa8: 0x8e020c00  lw          $v0, 0xC00($s0)
    ctx->pc = 0x126aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
label_126aac:
    // 0x126aac: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x126aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_126ab0:
    // 0x126ab0: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x126ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_126ab4:
    // 0x126ab4: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x126ab4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_126ab8:
    // 0x126ab8: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_126abc:
    if (ctx->pc == 0x126ABCu) {
        ctx->pc = 0x126ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AB8u;
        // 0x126abc: 0x26050044  addiu       $a1, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126AC0u;
        goto label_126ac0;
    }
    ctx->pc = 0x126AB8u;
    {
        const bool branch_taken_0x126ab8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x126ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AB8u;
        // 0x126abc: 0x26050044  addiu       $a1, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ab8) {
            ctx->pc = 0x126AECu;
            goto label_126aec;
        }
    }
    ctx->pc = 0x126AC0u;
label_126ac0:
    // 0x126ac0: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x126ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_126ac4:
    // 0x126ac4: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x126ac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_126ac8:
    // 0x126ac8: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x126ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_126acc:
    // 0x126acc: 0x40f809  jalr        $v0
label_126ad0:
    if (ctx->pc == 0x126AD0u) {
        ctx->pc = 0x126AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126ACCu;
        // 0x126ad0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126AD4u;
        goto label_126ad4;
    }
    ctx->pc = 0x126ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x126AD4u);
        ctx->pc = 0x126AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126ACCu;
        // 0x126ad0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126ACCu, 0x126AD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126AD4u;
label_126ad4:
    // 0x126ad4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_126ad8:
    if (ctx->pc == 0x126AD8u) {
        ctx->pc = 0x126AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AD4u;
        // 0x126ad8: 0x8e030f54  lw          $v1, 0xF54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3924)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126ADCu;
        goto label_126adc;
    }
    ctx->pc = 0x126AD4u;
    {
        const bool branch_taken_0x126ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126ad4) {
            ctx->pc = 0x126AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126AD4u;
            // 0x126ad8: 0x8e030f54  lw          $v1, 0xF54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3924)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126AF0u;
            goto label_126af0;
        }
    }
    ctx->pc = 0x126ADCu;
label_126adc:
    // 0x126adc: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x126adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
label_126ae0:
    // 0x126ae0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x126ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_126ae4:
    // 0x126ae4: 0xc0ab838  jal         func_2AE0E0
label_126ae8:
    if (ctx->pc == 0x126AE8u) {
        ctx->pc = 0x126AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AE4u;
        // 0x126ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126AECu;
        goto label_126aec;
    }
    ctx->pc = 0x126AE4u;
    SET_GPR_U32(ctx, 31, 0x126AECu);
    ctx->pc = 0x126AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126AE4u;
    // 0x126ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE0E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE0E0u, 0x126AE4u, 0x126AECu)) {
        return;
    }
    ctx->pc = 0x126AECu;
label_126aec:
    // 0x126aec: 0x8e030f54  lw          $v1, 0xF54($s0)
    ctx->pc = 0x126aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3924)));
label_126af0:
    // 0x126af0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x126af0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_126af4:
    // 0x126af4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_126af8:
    if (ctx->pc == 0x126AF8u) {
        ctx->pc = 0x126AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AF4u;
        // 0x126af8: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126AFCu;
        goto label_126afc;
    }
    ctx->pc = 0x126AF4u;
    {
        const bool branch_taken_0x126af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AF4u;
        // 0x126af8: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126af4) {
            ctx->pc = 0x126B34u;
            return;
        }
    }
    ctx->pc = 0x126AFCu;
label_126afc:
    // 0x126afc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x126afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_126b00:
    // 0x126b00: 0x2442c4e0  addiu       $v0, $v0, -0x3B20
    ctx->pc = 0x126b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952160));
label_126b04:
    // 0x126b04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x126b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_126b08:
    // 0x126b08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x126b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_126b0c:
    // 0x126b0c: 0x800008  jr          $a0
label_126b10:
    if (ctx->pc == 0x126B10u) {
        ctx->pc = 0x126B14u;
        goto label_126b14;
    }
    ctx->pc = 0x126B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126B14u: goto label_126b14;
            case 0x126B1Cu: goto label_126b1c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126B0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x126B14u;
label_126b14:
    // 0x126b14: 0x10000006  b           . + 4 + (0x6 << 2)
label_126b18:
    if (ctx->pc == 0x126B18u) {
        ctx->pc = 0x126B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B14u;
        // 0x126b18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126B1Cu;
        goto label_126b1c;
    }
    ctx->pc = 0x126B14u;
    {
        const bool branch_taken_0x126b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B14u;
        // 0x126b18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b14) {
            ctx->pc = 0x126B30u;
            return;
        }
    }
    ctx->pc = 0x126B1Cu;
label_126b1c:
    // 0x126b1c: 0x10000004  b           . + 4 + (0x4 << 2)
label_126b20:
    if (ctx->pc == 0x126B20u) {
        ctx->pc = 0x126B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B1Cu;
        // 0x126b20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126B24u;
        goto label_fallthrough_0x126b1c;
    }
    ctx->pc = 0x126B1Cu;
    {
        const bool branch_taken_0x126b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B1Cu;
        // 0x126b20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b1c) {
            ctx->pc = 0x126B30u;
            return;
        }
    }
label_fallthrough_0x126b1c:
    ctx->pc = 0x126B24u;
}
