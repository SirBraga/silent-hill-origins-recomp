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

// Function: sub_00311210
// Address: 0x311210 - 0x311278
void sub_00311210_0x311210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311210_0x311210");
#endif

    ctx->pc = 0x311210u;

    // 0x311210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x311210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x311214: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x311214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x311218: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x311218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x31121c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x31121cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x311220: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x311220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x311224: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x311224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x311228: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x311228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x31122c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x31122cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311230: 0x46000885  abs.s       $f2, $f1
    ctx->pc = 0x311230u;
    ctx->f[2] = FPU_ABS_S(ctx->f[1]);
    // 0x311234: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x311234u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x311238: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x311238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31123c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31123cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311240: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x311240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x311244: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x311244u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x311248: 0x46000004  c1          0x4
    ctx->pc = 0x311248u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x31124c: 0xc4810044  lwc1        $f1, 0x44($a0)
    ctx->pc = 0x31124cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311254: 0xc4830040  lwc1        $f3, 0x40($a0)
    ctx->pc = 0x311254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x311258: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x311258u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31125c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x31125cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x311260: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x311260u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x311264: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x311264u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x311268: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x311268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x31126c: 0xe4e20000  swc1        $f2, 0x0($a3)
    ctx->pc = 0x31126cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x311270: 0x3e00008  jr          $ra
    ctx->pc = 0x311270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311270u;
        // 0x311274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311278u;
}
