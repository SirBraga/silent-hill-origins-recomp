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

// Function: sub_0028F1F0
// Address: 0x28f1f0 - 0x28f2c0
void sub_0028F1F0_0x28f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F1F0_0x28f1f0");
#endif

    ctx->pc = 0x28f1f0u;

    // 0x28f1f0: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x28f1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x28f1f4: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x28f1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x28f1f8: 0xb0820017  sdl         $v0, 0x17($a0)
    ctx->pc = 0x28f1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f1fc: 0xb4820010  sdr         $v0, 0x10($a0)
    ctx->pc = 0x28f1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f200: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x28f200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f204: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x28f204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f208: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28f208u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28f20c: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x28f20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x28f210: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x28f210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f214: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x28f214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f218: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28f218u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28f21c: 0xe481002c  swc1        $f1, 0x2C($a0)
    ctx->pc = 0x28f21cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x28f220: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x28f220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x28f224: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x28f224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x28f228: 0xb0820047  sdl         $v0, 0x47($a0)
    ctx->pc = 0x28f228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f22c: 0xb4820040  sdr         $v0, 0x40($a0)
    ctx->pc = 0x28f22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f230: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x28f230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f234: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x28f234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f238: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x28f238u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28f23c: 0xe4820058  swc1        $f2, 0x58($a0)
    ctx->pc = 0x28f23cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x28f240: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x28f240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f244: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x28f244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f248: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28f248u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28f24c: 0xe481005c  swc1        $f1, 0x5C($a0)
    ctx->pc = 0x28f24cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x28f250: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x28f250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f254: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x28f254u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28f258: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x28f258u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f25c: 0x0  nop
    ctx->pc = 0x28f25cu;
    // NOP
    // 0x28f260: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x28F260u;
    {
        const bool branch_taken_0x28f260 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f260) {
            ctx->pc = 0x28F264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F260u;
            // 0x28f264: 0x8c820064  lw          $v0, 0x64($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F2ACu;
            goto label_28f2ac;
        }
    }
    ctx->pc = 0x28F268u;
    // 0x28f268: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x28f268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f26c: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x28f26cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f270: 0x0  nop
    ctx->pc = 0x28f270u;
    // NOP
    // 0x28f274: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x28F274u;
    {
        const bool branch_taken_0x28f274 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f274) {
            ctx->pc = 0x28F278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F274u;
            // 0x28f278: 0x8c820064  lw          $v0, 0x64($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F2ACu;
            goto label_28f2ac;
        }
    }
    ctx->pc = 0x28F27Cu;
    // 0x28f27c: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x28f27cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f280: 0x0  nop
    ctx->pc = 0x28f280u;
    // NOP
    // 0x28f284: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x28F284u;
    {
        const bool branch_taken_0x28f284 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f284) {
            ctx->pc = 0x28F288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F284u;
            // 0x28f288: 0x8c820064  lw          $v0, 0x64($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F2ACu;
            goto label_28f2ac;
        }
    }
    ctx->pc = 0x28F28Cu;
    // 0x28f28c: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x28f28cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f290: 0x0  nop
    ctx->pc = 0x28f290u;
    // NOP
    // 0x28f294: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x28F294u;
    {
        const bool branch_taken_0x28f294 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F294u;
        // 0x28f298: 0x2403fffd  addiu       $v1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f294) {
            ctx->pc = 0x28F2A8u;
            goto label_28f2a8;
        }
    }
    ctx->pc = 0x28F29Cu;
    // 0x28f29c: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x28f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x28f2a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28F2A0u;
    {
        const bool branch_taken_0x28f2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F2A0u;
        // 0x28f2a4: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f2a0) {
            ctx->pc = 0x28F2B0u;
            goto label_28f2b0;
        }
    }
    ctx->pc = 0x28F2A8u;
label_28f2a8:
    // 0x28f2a8: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x28f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_28f2ac:
    // 0x28f2ac: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x28f2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_28f2b0:
    // 0x28f2b0: 0xac820064  sw          $v0, 0x64($a0)
    ctx->pc = 0x28f2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
    // 0x28f2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x28F2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F2B4u;
        // 0x28f2b8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F2BCu;
    // 0x28f2bc: 0x0  nop
    ctx->pc = 0x28f2bcu;
    // NOP
    ctx->pc = 0x28f2c0u;
}
