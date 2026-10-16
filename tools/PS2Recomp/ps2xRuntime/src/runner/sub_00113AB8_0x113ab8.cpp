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

// Function: sub_00113AB8
// Address: 0x113ab8 - 0x113b28
void sub_00113AB8_0x113ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113AB8_0x113ab8");
#endif

    ctx->pc = 0x113ab8u;

    // 0x113ab8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x113ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x113abc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x113abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x113ac0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x113ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x113ac4: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x113ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x113ac8: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x113ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x113acc: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x113accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x113ad0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x113ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x113ad4: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x113ad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x113ad8: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x113ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x113adc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x113adcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113ae0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x113ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x113ae4: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x113ae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x113ae8: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x113ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x113aec: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x113aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x113af0: 0xe4810040  swc1        $f1, 0x40($a0)
    ctx->pc = 0x113af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x113af4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x113af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x113af8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x113af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x113afc: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x113afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x113b00: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x113b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x113b04: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x113b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x113b08: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x113b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x113b0c: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x113b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x113b10: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x113b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x113b14: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x113b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x113b18: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x113b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x113b1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x113b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x113b20: 0x3e00008  jr          $ra
    ctx->pc = 0x113B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B20u;
        // 0x113b24: 0xac82004c  sw          $v0, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113B28u;
}
