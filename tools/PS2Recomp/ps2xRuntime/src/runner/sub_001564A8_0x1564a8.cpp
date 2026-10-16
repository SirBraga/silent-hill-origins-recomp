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

// Function: sub_001564A8
// Address: 0x1564a8 - 0x156510
void sub_001564A8_0x1564a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001564A8_0x1564a8");
#endif

    ctx->pc = 0x1564a8u;

    // 0x1564a8: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x1564a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1564ac: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1564ACu;
    {
        const bool branch_taken_0x1564ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1564ac) {
            ctx->pc = 0x156504u;
            goto label_156504;
        }
    }
    ctx->pc = 0x1564B4u;
    // 0x1564b4: 0x8c8200e0  lw          $v0, 0xE0($a0)
    ctx->pc = 0x1564b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x1564b8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1564B8u;
    {
        const bool branch_taken_0x1564b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1564BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564B8u;
        // 0x1564bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564b8) {
            ctx->pc = 0x156504u;
            goto label_156504;
        }
    }
    ctx->pc = 0x1564C0u;
    // 0x1564c0: 0xc48100f0  lwc1        $f1, 0xF0($a0)
    ctx->pc = 0x1564c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1564c4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1564c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1564c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1564c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1564cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1564ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1564d0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1564d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1564d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1564d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1564d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1564d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1564dc: 0x0  nop
    ctx->pc = 0x1564dcu;
    // NOP
    // 0x1564e0: 0x0  nop
    ctx->pc = 0x1564e0u;
    // NOP
    // 0x1564e4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1564e4u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[2]);
    // 0x1564e8: 0xa08200eb  sb          $v0, 0xEB($a0)
    ctx->pc = 0x1564e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 235), (uint8_t)GPR_U32(ctx, 2));
    // 0x1564ec: 0xac8300e0  sw          $v1, 0xE0($a0)
    ctx->pc = 0x1564ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
    // 0x1564f0: 0xac8300dc  sw          $v1, 0xDC($a0)
    ctx->pc = 0x1564f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
    // 0x1564f4: 0xa08000e7  sb          $zero, 0xE7($a0)
    ctx->pc = 0x1564f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 231), (uint8_t)GPR_U32(ctx, 0));
    // 0x1564f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1564f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1564fc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1564fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x156500: 0xe48000f0  swc1        $f0, 0xF0($a0)
    ctx->pc = 0x156500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
label_156504:
    // 0x156504: 0x3e00008  jr          $ra
    ctx->pc = 0x156504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15650Cu;
    // 0x15650c: 0x0  nop
    ctx->pc = 0x15650cu;
    // NOP
    ctx->pc = 0x156510u;
}
