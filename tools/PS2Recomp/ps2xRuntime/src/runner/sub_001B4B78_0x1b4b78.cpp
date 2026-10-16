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

// Function: sub_001B4B78
// Address: 0x1b4b78 - 0x1b4bd0
void sub_001B4B78_0x1b4b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4B78_0x1b4b78");
#endif

    ctx->pc = 0x1b4b78u;

    // 0x1b4b78: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1b4b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b4b7c: 0x14a20012  bne         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B4B7Cu;
    {
        const bool branch_taken_0x1b4b7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b4b7c) {
            ctx->pc = 0x1B4BC8u;
            goto label_1b4bc8;
        }
    }
    ctx->pc = 0x1B4B84u;
    // 0x1b4b84: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B4B84u;
    {
        const bool branch_taken_0x1b4b84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B84u;
        // 0x1b4b88: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b84) {
            ctx->pc = 0x1B4BC8u;
            goto label_1b4bc8;
        }
    }
    ctx->pc = 0x1B4B8Cu;
    // 0x1b4b8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4b90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4b94: 0xc442c3a0  lwc1        $f2, -0x3C60($v0)
    ctx->pc = 0x1b4b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4b98: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1b4b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1b4b9c: 0x2442c3a0  addiu       $v0, $v0, -0x3C60
    ctx->pc = 0x1b4b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951840));
    // 0x1b4ba0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1b4ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4ba4: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x1b4ba4u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x1b4ba8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1b4ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b4bac: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1b4bacu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1b4bb0: 0x24628690  addiu       $v0, $v1, -0x7970
    ctx->pc = 0x1b4bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936208));
    // 0x1b4bb4: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1b4bb4u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x1b4bb8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1b4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b4bbc: 0xe4628690  swc1        $f2, -0x7970($v1)
    ctx->pc = 0x1b4bbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6F8690u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8690u, _value); } while (0); }
    // 0x1b4bc0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1b4bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6F8698u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8698u, _value); } while (0); }
    // 0x1b4bc4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b4bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6F8694u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8694u, _value); } while (0); }
label_1b4bc8:
    // 0x1b4bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4BD0u;
}
