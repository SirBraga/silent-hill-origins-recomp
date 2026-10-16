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

// Function: sub_001A58D8
// Address: 0x1a58d8 - 0x1a5920
void sub_001A58D8_0x1a58d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A58D8_0x1a58d8");
#endif

    ctx->pc = 0x1a58d8u;

    // 0x1a58d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1a58d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a58dc: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A58DCu;
    {
        const bool branch_taken_0x1a58dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a58dc) {
            ctx->pc = 0x1A5904u;
            goto label_1a5904;
        }
    }
    ctx->pc = 0x1A58E4u;
    // 0x1a58e4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A58E4u;
    {
        const bool branch_taken_0x1a58e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A58E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58E4u;
        // 0x1a58e8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a58e4) {
            ctx->pc = 0x1A5904u;
            goto label_1a5904;
        }
    }
    ctx->pc = 0x1A58ECu;
    // 0x1a58ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a58ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a58f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a58f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a58f4: 0xc44190c8  lwc1        $f1, -0x6F38($v0)
    ctx->pc = 0x1a58f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294938824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a58f8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1a58f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1a58fc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1a58fcu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1a5900: 0xe46081a8  swc1        $f0, -0x7E58($v1)
    ctx->pc = 0x1a5900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6F81A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F81A8u, _value); } while (0); }
label_1a5904:
    // 0x1a5904: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A590Cu;
    // 0x1a590c: 0x0  nop
    ctx->pc = 0x1a590cu;
    // NOP
    // 0x1a5910: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a5910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a5914: 0x0  nop
    ctx->pc = 0x1a5914u;
    // NOP
    // 0x1a5918: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1a5918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a591c: 0x0  nop
    ctx->pc = 0x1a591cu;
    // NOP
    ctx->pc = 0x1a5920u;
}
