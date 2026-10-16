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

// Function: sub_002A90F0
// Address: 0x2a90f0 - 0x2a9188
void sub_002A90F0_0x2a90f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A90F0_0x2a90f0");
#endif

    ctx->pc = 0x2a90f0u;

    // 0x2a90f0: 0xc482004c  lwc1        $f2, 0x4C($a0)
    ctx->pc = 0x2a90f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a90f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a90f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a90f8: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2a90f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a90fc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2a90fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a9100: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2a9100u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a9104: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A9104u;
    {
        const bool branch_taken_0x2a9104 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9104u;
        // 0x2a9108: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9104) {
            ctx->pc = 0x2A9158u;
            goto label_2a9158;
        }
    }
    ctx->pc = 0x2A910Cu;
    // 0x2a910c: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x2a910cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9110: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a9110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a9114: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2a9114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a9118: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x2a9118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a911c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a911cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2a9120: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a9120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a9124: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x2a9124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9128: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a9128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a912c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a912cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2a9130: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x2a9130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9134: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2a9134u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2a9138: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x2a9138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2a913c: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x2a913cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9140: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2a9140u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a9144: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2a9144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2a9148: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x2a9148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a914c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2a914cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2a9150: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2A9150u;
    {
        const bool branch_taken_0x2a9150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9150u;
        // 0x2a9154: 0xe4410018  swc1        $f1, 0x18($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9150) {
            ctx->pc = 0x2A9180u;
            goto label_2a9180;
        }
    }
    ctx->pc = 0x2A9158u;
label_2a9158:
    // 0x2a9158: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x2a9158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a915c: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x2a915cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a9160: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2a9160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9164: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x2a9164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a9168: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x2a9168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a916c: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x2a916cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x2a9170: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x2a9170u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x2a9174: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2a9174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2a9178: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2a9178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2a917c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2a917cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_2a9180:
    // 0x2a9180: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9180u;
        // 0x2a9184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9188u;
}
