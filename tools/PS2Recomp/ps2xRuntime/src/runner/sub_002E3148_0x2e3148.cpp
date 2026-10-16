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

// Function: sub_002E3148
// Address: 0x2e3148 - 0x2e31e8
void sub_002E3148_0x2e3148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3148_0x2e3148");
#endif

    switch (ctx->pc) {
        case 0x2e3170u: goto label_2e3170;
        default: break;
    }

    ctx->pc = 0x2e3148u;

    // 0x2e3148: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e3148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e314c: 0x6843005f  ldl         $v1, 0x5F($v0)
    ctx->pc = 0x2e314cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e3150: 0x6c430058  ldr         $v1, 0x58($v0)
    ctx->pc = 0x2e3150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e3154: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x2e3154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2e3158: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x2e3158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e315c: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x2e315cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e3160: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x2e3160u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x2e3164: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E316Cu;
    // 0x2e316c: 0x0  nop
    ctx->pc = 0x2e316cu;
    // NOP
label_2e3170:
    // 0x2e3170: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e3170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3174: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2e3174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e3178: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2e3178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e317c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2e317cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2e3180: 0xb043006b  sdl         $v1, 0x6B($v0)
    ctx->pc = 0x2e3180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e3184: 0xb4430064  sdr         $v1, 0x64($v0)
    ctx->pc = 0x2e3184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e3188: 0xac44006c  sw          $a0, 0x6C($v0)
    ctx->pc = 0x2e3188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 4));
    // 0x2e318c: 0xc444005c  lwc1        $f4, 0x5C($v0)
    ctx->pc = 0x2e318cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e3190: 0xc4420060  lwc1        $f2, 0x60($v0)
    ctx->pc = 0x2e3190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e3194: 0xc4400068  lwc1        $f0, 0x68($v0)
    ctx->pc = 0x2e3194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3198: 0xc446006c  lwc1        $f6, 0x6C($v0)
    ctx->pc = 0x2e3198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2e319c: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x2e319cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e31a0: 0x460011c2  mul.s       $f7, $f2, $f0
    ctx->pc = 0x2e31a0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2e31a4: 0xc4430064  lwc1        $f3, 0x64($v0)
    ctx->pc = 0x2e31a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e31a8: 0x46062142  mul.s       $f5, $f4, $f6
    ctx->pc = 0x2e31a8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2e31ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e31acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e31b0: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x2e31b0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2e31b4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2e31b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2e31b8: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2e31b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2e31bc: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x2e31bcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x2e31c0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2e31c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2e31c4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2e31c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2e31c8: 0xe4450070  swc1        $f5, 0x70($v0)
    ctx->pc = 0x2e31c8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2e31cc: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2e31ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2e31d0: 0xe4420074  swc1        $f2, 0x74($v0)
    ctx->pc = 0x2e31d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2e31d4: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x2e31d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2e31d8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2e31d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2e31dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E31DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E31E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E31DCu;
        // 0x2e31e0: 0xac430088  sw          $v1, 0x88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E31DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E31E4u;
    // 0x2e31e4: 0x0  nop
    ctx->pc = 0x2e31e4u;
    // NOP
    ctx->pc = 0x2e31e8u;
}
