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

// Function: sub_0014F150
// Address: 0x14f150 - 0x14f1d0
void sub_0014F150_0x14f150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F150_0x14f150");
#endif

    switch (ctx->pc) {
        case 0x14f1b0u: goto label_14f1b0;
        default: break;
    }

    ctx->pc = 0x14f150u;

    // 0x14f150: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14f150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14f154: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x14f154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x14f158: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x14f158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x14f15c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x14f15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x14f160: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14f160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f164: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14f164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f168: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14f168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14f16c: 0x6a020083  ldl         $v0, 0x83($s0)
    ctx->pc = 0x14f16cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14f170: 0x6e02007c  ldr         $v0, 0x7C($s0)
    ctx->pc = 0x14f170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x14f174: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x14f174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x14f178: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x14f178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14f17c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x14f17cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14f180: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x14f180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x14f184: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14f184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f188: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x14f188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14f18c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x14f18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14f190: 0x6a08002b  ldl         $t0, 0x2B($s0)
    ctx->pc = 0x14f190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x14f194: 0x6e080024  ldr         $t0, 0x24($s0)
    ctx->pc = 0x14f194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x14f198: 0x8e09002c  lw          $t1, 0x2C($s0)
    ctx->pc = 0x14f198u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x14f19c: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x14f19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14f1a0: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x14f1a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14f1a4: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x14f1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x14f1a8: 0xc0693d4  jal         func_1A4F50
    ctx->pc = 0x14F1A8u;
    SET_GPR_U32(ctx, 31, 0x14F1B0u);
    ctx->pc = 0x14F1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F1A8u;
    // 0x14f1ac: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4F50u, 0x14F1A8u, 0x14F1B0u)) {
        return;
    }
    ctx->pc = 0x14F1B0u;
label_14f1b0:
    // 0x14f1b0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x14f1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x14f1b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14f1b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f1b8: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x14f1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    // 0x14f1bc: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x14f1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x14f1c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x14f1c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f1c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14f1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x14F1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1C8u;
        // 0x14f1cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F1D0u;
}
