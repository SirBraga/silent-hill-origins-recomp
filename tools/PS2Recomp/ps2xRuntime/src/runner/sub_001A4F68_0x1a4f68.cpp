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

// Function: sub_001A4F68
// Address: 0x1a4f68 - 0x1a4ff0
void sub_001A4F68_0x1a4f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4F68_0x1a4f68");
#endif

    switch (ctx->pc) {
        case 0x1a4fc8u: goto label_1a4fc8;
        case 0x1a4fdcu: goto label_1a4fdc;
        default: break;
    }

    ctx->pc = 0x1a4f68u;

    // 0x1a4f68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a4f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a4f6c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a4f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a4f70: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x1a4f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a4f74: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x1a4f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a4f78: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1a4f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a4f7c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1a4f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a4f80: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1a4f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a4f84: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1a4f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1a4f88: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x1a4f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a4f8c: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x1a4f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a4f90: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1a4f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a4f94: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x1a4f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a4f98: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x1a4f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a4f9c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1a4f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1a4fa0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1a4fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1a4fa4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1a4fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4fa8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1a4fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4fac: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1a4facu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1a4fb0: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x1a4fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33870Cu));
    // 0x1a4fb4: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x1a4fb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x1a4fb8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1a4fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a4fbc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1a4fbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a4fc0: 0xc05e396  jal         func_178E58
    ctx->pc = 0x1A4FC0u;
    SET_GPR_U32(ctx, 31, 0x1A4FC8u);
    ctx->pc = 0x1A4FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4FC0u;
    // 0x1a4fc4: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178E58u, 0x1A4FC0u, 0x1A4FC8u)) {
        return;
    }
    ctx->pc = 0x1A4FC8u;
label_1a4fc8:
    // 0x1a4fc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4fcc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a4fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4fd0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1a4fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a4fd4: 0xc086156  jal         func_218558
    ctx->pc = 0x1A4FD4u;
    SET_GPR_U32(ctx, 31, 0x1A4FDCu);
    ctx->pc = 0x1A4FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4FD4u;
    // 0x1a4fd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x218558u, 0x1A4FD4u, 0x1A4FDCu)) {
        return;
    }
    ctx->pc = 0x1A4FDCu;
label_1a4fdc:
    // 0x1a4fdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a4fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4fe0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a4fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a4fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FE4u;
        // 0x1a4fe8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4FECu;
    // 0x1a4fec: 0x0  nop
    ctx->pc = 0x1a4fecu;
    // NOP
    ctx->pc = 0x1a4ff0u;
}
