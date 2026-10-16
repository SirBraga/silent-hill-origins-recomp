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

// Function: sub_0014F248
// Address: 0x14f248 - 0x14f298
void sub_0014F248_0x14f248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F248_0x14f248");
#endif

    ctx->pc = 0x14f248u;

    // 0x14f248: 0xc481007c  lwc1        $f1, 0x7C($a0)
    ctx->pc = 0x14f248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f24c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x14f24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f250: 0xc4820080  lwc1        $f2, 0x80($a0)
    ctx->pc = 0x14f250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f254: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x14f254u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14f258: 0xc4830084  lwc1        $f3, 0x84($a0)
    ctx->pc = 0x14f258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14f25c: 0xe481007c  swc1        $f1, 0x7C($a0)
    ctx->pc = 0x14f25cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
    // 0x14f260: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x14f260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f264: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x14f264u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x14f268: 0xe4820080  swc1        $f2, 0x80($a0)
    ctx->pc = 0x14f268u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x14f26c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x14f26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f270: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x14f270u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x14f274: 0xe4830084  swc1        $f3, 0x84($a0)
    ctx->pc = 0x14f274u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x14f278: 0x68820083  ldl         $v0, 0x83($a0)
    ctx->pc = 0x14f278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14f27c: 0x6c82007c  ldr         $v0, 0x7C($a0)
    ctx->pc = 0x14f27cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x14f280: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x14f280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x14f284: 0xb082008f  sdl         $v0, 0x8F($a0)
    ctx->pc = 0x14f284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14f288: 0xb4820088  sdr         $v0, 0x88($a0)
    ctx->pc = 0x14f288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14f28c: 0xac830090  sw          $v1, 0x90($a0)
    ctx->pc = 0x14f28cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 3));
    // 0x14f290: 0x3e00008  jr          $ra
    ctx->pc = 0x14F290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F298u;
}
