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

// Function: sub_001AB688
// Address: 0x1ab688 - 0x1ab718
void sub_001AB688_0x1ab688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB688_0x1ab688");
#endif

    switch (ctx->pc) {
        case 0x1ab6b0u: goto label_1ab6b0;
        default: break;
    }

    ctx->pc = 0x1ab688u;

    // 0x1ab688: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x1ab688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x1ab68c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab68cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab690: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1ab690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1ab694: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ab694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ab698: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1ab698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1ab69c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ab69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ab6a0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1ab6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ab6a4: 0x10a20012  beq         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AB6A4u;
    {
        const bool branch_taken_0x1ab6a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AB6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6A4u;
        // 0x1ab6a8: 0xaca50090  sw          $a1, 0x90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab6a4) {
            ctx->pc = 0x1AB6F0u;
            goto label_1ab6f0;
        }
    }
    ctx->pc = 0x1AB6ACu;
    // 0x1ab6ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ab6acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab6b0:
    // 0x1ab6b0: 0x8ca20090  lw          $v0, 0x90($a1)
    ctx->pc = 0x1ab6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x1ab6b4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1ab6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab6b8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ab6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab6bc: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1ab6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ab6c0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ab6c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ab6c4: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1ab6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ab6c8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1ab6c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ab6cc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1ab6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab6d0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1ab6d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ab6d4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1ab6d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1ab6d8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ab6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab6dc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1ab6dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1ab6e0: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x1ab6e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1ab6e4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ab6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ab6e8: 0x1443fff1  bne         $v0, $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1AB6E8u;
    {
        const bool branch_taken_0x1ab6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AB6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6E8u;
        // 0x1ab6ec: 0xaca20090  sw          $v0, 0x90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab6e8) {
            ctx->pc = 0x1AB6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab6b0;
        }
    }
    ctx->pc = 0x1AB6F0u;
label_1ab6f0:
    // 0x1ab6f0: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x1ab6f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ab6f4: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x1ab6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ab6f8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1ab6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab6fc: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x1ab6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab700: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x1ab700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab704: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ab704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab708: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1ab708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1ab70c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB70Cu;
        // 0x1ab710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB714u;
    // 0x1ab714: 0x0  nop
    ctx->pc = 0x1ab714u;
    // NOP
    ctx->pc = 0x1ab718u;
}
