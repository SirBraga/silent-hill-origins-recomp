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

// Function: sub_0010BB88
// Address: 0x10bb88 - 0x10bca8
void sub_0010BB88_0x10bb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BB88_0x10bb88");
#endif

    switch (ctx->pc) {
        case 0x10bc20u: goto label_10bc20;
        case 0x10bc48u: goto label_10bc48;
        case 0x10bc6cu: goto label_10bc6c;
        case 0x10bc7cu: goto label_10bc7c;
        default: break;
    }

    ctx->pc = 0x10bb88u;

    // 0x10bb88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10bb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10bb8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10bb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10bb90: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x10bb90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10bb94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10bb94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bb98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10bb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10bb9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10bba0: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x10BBA0u;
    {
        const bool branch_taken_0x10bba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BBA0u;
        // 0x10bba4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bba0) {
            ctx->pc = 0x10BC90u;
            goto label_10bc90;
        }
    }
    ctx->pc = 0x10BBA8u;
    // 0x10bba8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x10bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x10bbac: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x10BBACu;
    {
        const bool branch_taken_0x10bbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BBACu;
        // 0x10bbb0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bbac) {
            ctx->pc = 0x10BC90u;
            goto label_10bc90;
        }
    }
    ctx->pc = 0x10BBB4u;
    // 0x10bbb4: 0x8c4382f4  lw          $v1, -0x7D0C($v0)
    ctx->pc = 0x10bbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935284)));
    // 0x10bbb8: 0x50600036  beql        $v1, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x10BBB8u;
    {
        const bool branch_taken_0x10bbb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bbb8) {
            ctx->pc = 0x10BBBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BBB8u;
            // 0x10bbbc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BC94u;
            goto label_10bc94;
        }
    }
    ctx->pc = 0x10BBC0u;
    // 0x10bbc0: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x10bbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10bbc4: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x10bbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
    // 0x10bbc8: 0x34215000  ori         $at, $at, 0x5000
    ctx->pc = 0x10bbc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20480);
    // 0x10bbcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10bbccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10bbd0: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x10bbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x10bbd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10bbd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10bbd8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x10bbd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10bbdc: 0x0  nop
    ctx->pc = 0x10bbdcu;
    // NOP
    // 0x10bbe0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x10BBE0u;
    {
        const bool branch_taken_0x10bbe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10bbe0) {
            ctx->pc = 0x10BBF0u;
            goto label_10bbf0;
        }
    }
    ctx->pc = 0x10BBE8u;
    // 0x10bbe8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10BBE8u;
    {
        const bool branch_taken_0x10bbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BBE8u;
        // 0x10bbec: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bbe8) {
            ctx->pc = 0x10BC00u;
            goto label_10bc00;
        }
    }
    ctx->pc = 0x10BBF0u;
label_10bbf0:
    // 0x10bbf0: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x10bbf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10bbf4: 0x0  nop
    ctx->pc = 0x10bbf4u;
    // NOP
    // 0x10bbf8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10BBF8u;
    {
        const bool branch_taken_0x10bbf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10bbf8) {
            ctx->pc = 0x10BBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BBF8u;
            // 0x10bbfc: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BC00u;
            goto label_10bc00;
        }
    }
    ctx->pc = 0x10BC00u;
label_10bc00:
    // 0x10bc00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10bc04: 0xe44c0054  swc1        $f12, 0x54($v0)
    ctx->pc = 0x10bc04u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x10bc08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10bc0c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x10bc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x10bc10: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BC10u;
    {
        const bool branch_taken_0x10bc10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC10u;
        // 0x10bc14: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc10) {
            ctx->pc = 0x10BC20u;
            goto label_10bc20;
        }
    }
    ctx->pc = 0x10BC18u;
    // 0x10bc18: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10BC18u;
    SET_GPR_U32(ctx, 31, 0x10BC20u);
    ctx->pc = 0x10BC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BC18u;
    // 0x10bc1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10BC18u, 0x10BC20u)) {
        return;
    }
    ctx->pc = 0x10BC20u;
label_10bc20:
    // 0x10bc20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10bc24: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x10bc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x10bc28: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x10bc28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x10bc2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10bc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10bc30: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x10bc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x10bc34: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10BC34u;
    {
        const bool branch_taken_0x10bc34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC34u;
        // 0x10bc38: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc34) {
            ctx->pc = 0x10BC48u;
            goto label_10bc48;
        }
    }
    ctx->pc = 0x10BC3Cu;
    // 0x10bc3c: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x10bc3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x10bc40: 0xc0b6726  jal         func_2D9C98
    ctx->pc = 0x10BC40u;
    SET_GPR_U32(ctx, 31, 0x10BC48u);
    ctx->pc = 0x10BC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BC40u;
    // 0x10bc44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9C98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9C98u, 0x10BC40u, 0x10BC48u)) {
        return;
    }
    ctx->pc = 0x10BC48u;
label_10bc48:
    // 0x10bc48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10bc4c: 0xe4540058  swc1        $f20, 0x58($v0)
    ctx->pc = 0x10bc4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x10bc50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10bc54: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x10bc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x10bc58: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10BC58u;
    {
        const bool branch_taken_0x10bc58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC58u;
        // 0x10bc5c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc58) {
            ctx->pc = 0x10BC70u;
            goto label_10bc70;
        }
    }
    ctx->pc = 0x10BC60u;
    // 0x10bc60: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x10bc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10bc64: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10BC64u;
    SET_GPR_U32(ctx, 31, 0x10BC6Cu);
    ctx->pc = 0x10BC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BC64u;
    // 0x10bc68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10BC64u, 0x10BC6Cu)) {
        return;
    }
    ctx->pc = 0x10BC6Cu;
label_10bc6c:
    // 0x10bc6c: 0x0  nop
    ctx->pc = 0x10bc6cu;
    // NOP
label_10bc70:
    // 0x10bc70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10bc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10bc74: 0xc0b879c  jal         func_2E1E70
    ctx->pc = 0x10BC74u;
    SET_GPR_U32(ctx, 31, 0x10BC7Cu);
    ctx->pc = 0x10BC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BC74u;
    // 0x10bc78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1E70u, 0x10BC74u, 0x10BC7Cu)) {
        return;
    }
    ctx->pc = 0x10BC7Cu;
label_10bc7c:
    // 0x10bc7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10bc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10bc80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10bc80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10bc84: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x10bc84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x10bc88: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x10bc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x10bc8c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x10bc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_10bc90:
    // 0x10bc90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10bc90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10bc94:
    // 0x10bc94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10bc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bc98: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x10bc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10bc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x10BC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC9Cu;
        // 0x10bca0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BCA4u;
    // 0x10bca4: 0x0  nop
    ctx->pc = 0x10bca4u;
    // NOP
    ctx->pc = 0x10bca8u;
}
