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

// Function: sub_002B7C48
// Address: 0x2b7c48 - 0x2b7cc8
void sub_002B7C48_0x2b7c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7C48_0x2b7c48");
#endif

    ctx->pc = 0x2b7c48u;

    // 0x2b7c48: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2b7c48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2b7c4c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2b7c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b7c50: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2b7c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b7c54: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2b7c54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2b7c58: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2b7c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b7c5c: 0xc4404014  lwc1        $f0, 0x4014($v0)
    ctx->pc = 0x2b7c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7c60: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x2b7c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7c64: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b7c64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b7c68: 0xe4c10010  swc1        $f1, 0x10($a2)
    ctx->pc = 0x2b7c68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x2b7c6c: 0xc4414014  lwc1        $f1, 0x4014($v0)
    ctx->pc = 0x2b7c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7c70: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x2b7c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7c74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b7c74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b7c78: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x2b7c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x2b7c7c: 0xc4404014  lwc1        $f0, 0x4014($v0)
    ctx->pc = 0x2b7c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7c80: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2b7c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7c84: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b7c84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b7c88: 0xe4c10018  swc1        $f1, 0x18($a2)
    ctx->pc = 0x2b7c88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x2b7c8c: 0xc4414014  lwc1        $f1, 0x4014($v0)
    ctx->pc = 0x2b7c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7c90: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2b7c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7c94: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b7c94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b7c98: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2b7c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2b7c9c: 0xc4404014  lwc1        $f0, 0x4014($v0)
    ctx->pc = 0x2b7c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7ca0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2b7ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7ca4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b7ca4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b7ca8: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x2b7ca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2b7cac: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2b7cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7cb0: 0xc4414014  lwc1        $f1, 0x4014($v0)
    ctx->pc = 0x2b7cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7cb4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b7cb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b7cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CB8u;
        // 0x2b7cbc: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7CC0u;
    // 0x2b7cc0: 0xe46c4014  swc1        $f12, 0x4014($v1)
    ctx->pc = 0x2b7cc0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16404), bits); }
    // 0x2b7cc4: 0x0  nop
    ctx->pc = 0x2b7cc4u;
    // NOP
    ctx->pc = 0x2b7cc8u;
}
