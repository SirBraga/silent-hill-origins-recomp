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

// Function: sub_001C0738
// Address: 0x1c0738 - 0x1c07c0
void sub_001C0738_0x1c0738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0738_0x1c0738");
#endif

    switch (ctx->pc) {
        case 0x1c0748u: goto label_1c0748;
        default: break;
    }

    ctx->pc = 0x1c0738u;

    // 0x1c0738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c073c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1c073cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1c0740: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c0740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0744: 0x0  nop
    ctx->pc = 0x1c0744u;
    // NOP
label_1c0748:
    // 0x1c0748: 0x68a3ffff  ldl         $v1, -0x1($a1)
    ctx->pc = 0x1c0748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c074c: 0x6ca3fff8  ldr         $v1, -0x8($a1)
    ctx->pc = 0x1c074cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c0750: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1c0750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c0754: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1c0754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c0758: 0x68a3ffff  ldl         $v1, -0x1($a1)
    ctx->pc = 0x1c0758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c075c: 0x6ca3fff8  ldr         $v1, -0x8($a1)
    ctx->pc = 0x1c075cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c0760: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x1c0760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c0764: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x1c0764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c0768: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1c0768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c076c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1c076cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c0770: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1c0770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0774: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1c0774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0778: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1c0778u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1c077c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c077cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c0780: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x1c0780u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x1c0784: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1c0784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1c0788: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x1c0788u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x1c078c: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x1c078cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1c0790: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1c0790u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c0794: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1c0794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c0798: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1c0798u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1c079c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c079cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c07a0: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x1c07a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1c07a4: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1c07a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1c07a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c07a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c07ac: 0x441ffe6  bgez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1C07ACu;
    {
        const bool branch_taken_0x1c07ac = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1C07B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C07ACu;
        // 0x1c07b0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c07ac) {
            ctx->pc = 0x1C0748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0748;
        }
    }
    ctx->pc = 0x1C07B4u;
    // 0x1c07b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C07B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C07B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C07B4u;
        // 0x1c07b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C07B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C07BCu;
    // 0x1c07bc: 0x0  nop
    ctx->pc = 0x1c07bcu;
    // NOP
    ctx->pc = 0x1c07c0u;
}
