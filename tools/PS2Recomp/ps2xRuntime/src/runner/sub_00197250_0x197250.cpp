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

// Function: sub_00197250
// Address: 0x197250 - 0x1972e8
void sub_00197250_0x197250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197250_0x197250");
#endif

    ctx->pc = 0x197250u;

    // 0x197250: 0xc4860020  lwc1        $f6, 0x20($a0)
    ctx->pc = 0x197250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x197254: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197254u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x197258: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x197258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19725c: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x19725cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x197260: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x197260u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x197264: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x197264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x197268: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x197268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19726c: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x19726cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x197270: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x197270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x197274: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x197274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x197278: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x197278u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x19727c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x19727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197280: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x197280u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x197284: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x197284u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x197288: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x197288u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19728c: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x19728cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x197290: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x197290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x197294: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x197294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x197298: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x197298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x19729c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19729cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1972a0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1972a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1972a4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1972a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1972a8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1972a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1972ac: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1972acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1972b0: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1972b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1972b4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1972b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1972b8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1972b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1972bc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1972bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1972c0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1972c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1972c4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1972c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1972c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1972c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1972cc: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x1972ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1972d0: 0x0  nop
    ctx->pc = 0x1972d0u;
    // NOP
    // 0x1972d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1972D4u;
    {
        const bool branch_taken_0x1972d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1972D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972D4u;
        // 0x1972d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1972d4) {
            ctx->pc = 0x1972E0u;
            goto label_1972e0;
        }
    }
    ctx->pc = 0x1972DCu;
    // 0x1972dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1972dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1972e0:
    // 0x1972e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1972E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1972E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972E0u;
        // 0x1972e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1972E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1972E8u;
}
