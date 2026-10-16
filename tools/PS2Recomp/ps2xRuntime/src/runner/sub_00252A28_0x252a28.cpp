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

// Function: sub_00252A28
// Address: 0x252a28 - 0x252b00
void sub_00252A28_0x252a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252A28_0x252a28");
#endif

    ctx->pc = 0x252a28u;

    // 0x252a28: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x252a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x252a2c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x252a2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a30: 0x24465618  addiu       $a2, $v0, 0x5618
    ctx->pc = 0x252a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 22040));
    // 0x252a34: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x252a34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a38: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x252a38u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x735620u));
    // 0x252a3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x252a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x252a40: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x252a40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x735638u));
    // 0x252a44: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x252A44u;
    {
        const bool branch_taken_0x252a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x252A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A44u;
        // 0x252a48: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252a44) {
            ctx->pc = 0x252AD0u;
            goto label_252ad0;
        }
    }
    ctx->pc = 0x252A4Cu;
    // 0x252a4c: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x252a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252a50: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x252a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252a54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252a54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252a58: 0x0  nop
    ctx->pc = 0x252a58u;
    // NOP
    // 0x252a5c: 0x45020020  bc1fl       . + 4 + (0x20 << 2)
    ctx->pc = 0x252A5Cu;
    {
        const bool branch_taken_0x252a5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252a5c) {
            ctx->pc = 0x252A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252A5Cu;
            // 0x252a60: 0x25035618  addiu       $v1, $t0, 0x5618 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 22040));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252AE0u;
            goto label_252ae0;
        }
    }
    ctx->pc = 0x252A64u;
    // 0x252a64: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x252a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252a68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x252a68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252a6c: 0x0  nop
    ctx->pc = 0x252a6cu;
    // NOP
    // 0x252a70: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
    ctx->pc = 0x252A70u;
    {
        const bool branch_taken_0x252a70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252a70) {
            ctx->pc = 0x252A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252A70u;
            // 0x252a74: 0x25035618  addiu       $v1, $t0, 0x5618 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 22040));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252AE0u;
            goto label_252ae0;
        }
    }
    ctx->pc = 0x252A78u;
    // 0x252a78: 0xc4c10028  lwc1        $f1, 0x28($a2)
    ctx->pc = 0x252a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252a7c: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x252a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252a80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252a80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252a84: 0x0  nop
    ctx->pc = 0x252a84u;
    // NOP
    // 0x252a88: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x252A88u;
    {
        const bool branch_taken_0x252a88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x252A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A88u;
        // 0x252a8c: 0x25035618  addiu       $v1, $t0, 0x5618 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 22040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252a88) {
            ctx->pc = 0x252AE0u;
            goto label_252ae0;
        }
    }
    ctx->pc = 0x252A90u;
    // 0x252a90: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x252a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252a94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x252a94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252a98: 0x0  nop
    ctx->pc = 0x252a98u;
    // NOP
    // 0x252a9c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x252A9Cu;
    {
        const bool branch_taken_0x252a9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252a9c) {
            ctx->pc = 0x252AE0u;
            goto label_252ae0;
        }
    }
    ctx->pc = 0x252AA4u;
    // 0x252aa4: 0xc4c1002c  lwc1        $f1, 0x2C($a2)
    ctx->pc = 0x252aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252aa8: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x252aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252aac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252aacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252ab0: 0x0  nop
    ctx->pc = 0x252ab0u;
    // NOP
    // 0x252ab4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x252AB4u;
    {
        const bool branch_taken_0x252ab4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x252AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AB4u;
        // 0x252ab8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ab4) {
            ctx->pc = 0x252AE4u;
            goto label_252ae4;
        }
    }
    ctx->pc = 0x252ABCu;
    // 0x252abc: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x252abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252ac0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x252ac0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252ac4: 0x0  nop
    ctx->pc = 0x252ac4u;
    // NOP
    // 0x252ac8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x252AC8u;
    {
        const bool branch_taken_0x252ac8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252ac8) {
            ctx->pc = 0x252AE4u;
            goto label_252ae4;
        }
    }
    ctx->pc = 0x252AD0u;
label_252ad0:
    // 0x252ad0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x252ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x252ad4: 0xacc40030  sw          $a0, 0x30($a2)
    ctx->pc = 0x252ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 4));
    // 0x252ad8: 0xacc20020  sw          $v0, 0x20($a2)
    ctx->pc = 0x252ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 2));
    // 0x252adc: 0x25035618  addiu       $v1, $t0, 0x5618
    ctx->pc = 0x252adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 22040));
label_252ae0:
    // 0x252ae0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x252ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_252ae4:
    // 0x252ae4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x252ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x252ae8: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x252ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x252aec: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x252aecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x252af0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x252af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x252af4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x252af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x252af8: 0x3e00008  jr          $ra
    ctx->pc = 0x252AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AF8u;
        // 0x252afc: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252B00u;
}
