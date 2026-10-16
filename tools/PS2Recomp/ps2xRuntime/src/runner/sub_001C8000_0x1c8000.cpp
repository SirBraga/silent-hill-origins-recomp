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

// Function: sub_001C8000
// Address: 0x1c8000 - 0x1c8058
void sub_001C8000_0x1c8000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8000_0x1c8000");
#endif

    ctx->pc = 0x1c8000u;

    // 0x1c8000: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c8000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1c8004: 0x14a20012  bne         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C8004u;
    {
        const bool branch_taken_0x1c8004 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c8004) {
            ctx->pc = 0x1C8050u;
            goto label_1c8050;
        }
    }
    ctx->pc = 0x1C800Cu;
    // 0x1c800c: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C800Cu;
    {
        const bool branch_taken_0x1c800c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C800Cu;
        // 0x1c8010: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c800c) {
            ctx->pc = 0x1C8050u;
            goto label_1c8050;
        }
    }
    ctx->pc = 0x1C8014u;
    // 0x1c8014: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c8014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8018: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c8018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c801c: 0xc4639910  lwc1        $f3, -0x66F0($v1)
    ctx->pc = 0x1c801cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294940944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8020: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c8020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c8024: 0xc44098f4  lwc1        $f0, -0x670C($v0)
    ctx->pc = 0x1c8024u;
    { uint32_t bits = FAST_READ32(0x3398F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8028: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1c8028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1c802c: 0x0  nop
    ctx->pc = 0x1c802cu;
    // NOP
    // 0x1c8030: 0x0  nop
    ctx->pc = 0x1c8030u;
    // NOP
    // 0x1c8034: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x1c8034u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[3]);
    // 0x1c8038: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c8038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c803c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c803cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8040: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1c8040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1c8044: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c8044u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c8048: 0xe46086b0  swc1        $f0, -0x7950($v1)
    ctx->pc = 0x1c8048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6F86B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F86B0u, _value); } while (0); }
    // 0x1c804c: 0xe44286b4  swc1        $f2, -0x794C($v0)
    ctx->pc = 0x1c804cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6F86B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F86B4u, _value); } while (0); }
label_1c8050:
    // 0x1c8050: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8058u;
}
