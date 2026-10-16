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

// Function: sub_002A4398
// Address: 0x2a4398 - 0x2a4648
void sub_002A4398_0x2a4398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4398_0x2a4398");
#endif

    switch (ctx->pc) {
        case 0x2a4458u: goto label_2a4458;
        default: break;
    }

    ctx->pc = 0x2a4398u;

    // 0x2a4398: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a4398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a439c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2a439cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a43a0: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x2a43a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a43a4: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x2a43a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a43a8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2a43a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a43ac: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2a43acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a43b0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2a43b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a43b4: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x2a43b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a43b8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2a43b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2a43bc: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x2a43bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a43c0: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x2a43c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a43c4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2a43c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2a43c8: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2a43c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a43cc: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2a43ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a43d0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2a43d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2a43d4: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x2a43d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a43d8: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x2a43d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a43dc: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x2a43dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a43e0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2a43e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2a43e4: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x2a43e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a43e8: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x2a43e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a43ec: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x2a43ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x2a43f0: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x2a43f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a43f4: 0x68e60007  ldl         $a2, 0x7($a3)
    ctx->pc = 0x2a43f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a43f8: 0x6ce60000  ldr         $a2, 0x0($a3)
    ctx->pc = 0x2a43f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a43fc: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x2a43fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2a4400: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x2a4400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4404: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x2a4404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4408: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2a4408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x2a440c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2a440cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a4410: 0x69060007  ldl         $a2, 0x7($t0)
    ctx->pc = 0x2a4410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a4414: 0x6d060000  ldr         $a2, 0x0($t0)
    ctx->pc = 0x2a4414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a4418: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x2a4418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2a441c: 0xb3a60047  sdl         $a2, 0x47($sp)
    ctx->pc = 0x2a441cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4420: 0xb7a60040  sdr         $a2, 0x40($sp)
    ctx->pc = 0x2a4420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4424: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2a4424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x2a4428: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x2a4428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x2a442c: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x2A442Cu;
    {
        const bool branch_taken_0x2a442c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A442Cu;
        // 0x2a4430: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a442c) {
            ctx->pc = 0x2A463Cu;
            goto label_2a463c;
        }
    }
    ctx->pc = 0x2A4434u;
    // 0x2a4434: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a4434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a4438: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2a4438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a443c: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x2a443cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4440: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a4440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2a4444: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a4444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a4448: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a4448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a444c: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x2a444cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4450: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x2a4450u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a4454: 0x0  nop
    ctx->pc = 0x2a4454u;
    // NOP
label_2a4458:
    // 0x2a4458: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x2a4458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a445c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2a445cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4460: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a4460u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4464: 0x0  nop
    ctx->pc = 0x2a4464u;
    // NOP
    // 0x2a4468: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4468u;
    {
        const bool branch_taken_0x2a4468 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4468u;
        // 0x2a446c: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4468) {
            ctx->pc = 0x2A447Cu;
            goto label_2a447c;
        }
    }
    ctx->pc = 0x2A4470u;
    // 0x2a4470: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a4470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a4474: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4474u;
    {
        const bool branch_taken_0x2a4474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4474u;
        // 0x2a4478: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4474) {
            ctx->pc = 0x2A4484u;
            goto label_2a4484;
        }
    }
    ctx->pc = 0x2A447Cu;
label_2a447c:
    // 0x2a447c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a447cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a4480: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x2a4480u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2a4484:
    // 0x2a4484: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x2a4484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2a4488: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x2a4488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2a448c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a448cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a4490: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2a4490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a4494: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2a4494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4498: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2a4498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a449c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a449cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a44a0: 0x0  nop
    ctx->pc = 0x2a44a0u;
    // NOP
    // 0x2a44a4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A44A4u;
    {
        const bool branch_taken_0x2a44a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A44A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A44A4u;
        // 0x2a44a8: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a44a4) {
            ctx->pc = 0x2A44B8u;
            goto label_2a44b8;
        }
    }
    ctx->pc = 0x2A44ACu;
    // 0x2a44ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a44acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a44b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A44B0u;
    {
        const bool branch_taken_0x2a44b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A44B0u;
        // 0x2a44b4: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a44b0) {
            ctx->pc = 0x2A44C0u;
            goto label_2a44c0;
        }
    }
    ctx->pc = 0x2A44B8u;
label_2a44b8:
    // 0x2a44b8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a44b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a44bc: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x2a44bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2a44c0:
    // 0x2a44c0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x2a44c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2a44c4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x2a44c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2a44c8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a44c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a44cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2a44ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a44d0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2a44d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a44d4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2a44d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a44d8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a44d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a44dc: 0x0  nop
    ctx->pc = 0x2a44dcu;
    // NOP
    // 0x2a44e0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A44E0u;
    {
        const bool branch_taken_0x2a44e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A44E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A44E0u;
        // 0x2a44e4: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a44e0) {
            ctx->pc = 0x2A44F4u;
            goto label_2a44f4;
        }
    }
    ctx->pc = 0x2A44E8u;
    // 0x2a44e8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a44ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A44ECu;
    {
        const bool branch_taken_0x2a44ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A44F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A44ECu;
        // 0x2a44f0: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a44ec) {
            ctx->pc = 0x2A44FCu;
            goto label_2a44fc;
        }
    }
    ctx->pc = 0x2A44F4u;
label_2a44f4:
    // 0x2a44f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a44f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a44f8: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2a44f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2a44fc:
    // 0x2a44fc: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x2a44fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2a4500: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x2a4500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2a4504: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a4504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a4508: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2a4508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a450c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2a450cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4510: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2a4510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4514: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a4514u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4518: 0x0  nop
    ctx->pc = 0x2a4518u;
    // NOP
    // 0x2a451c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A451Cu;
    {
        const bool branch_taken_0x2a451c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A4520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A451Cu;
        // 0x2a4520: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a451c) {
            ctx->pc = 0x2A4530u;
            goto label_2a4530;
        }
    }
    ctx->pc = 0x2A4524u;
    // 0x2a4524: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a4524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a4528: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4528u;
    {
        const bool branch_taken_0x2a4528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4528u;
        // 0x2a452c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4528) {
            ctx->pc = 0x2A4538u;
            goto label_2a4538;
        }
    }
    ctx->pc = 0x2A4530u;
label_2a4530:
    // 0x2a4530: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a4530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a4534: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2a4534u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_2a4538:
    // 0x2a4538: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x2a4538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2a453c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a453cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a4540: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a4540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a4544: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2a4544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a4548: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2a4548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a454c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a454cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4550: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a4550u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4554: 0x0  nop
    ctx->pc = 0x2a4554u;
    // NOP
    // 0x2a4558: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4558u;
    {
        const bool branch_taken_0x2a4558 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4558u;
        // 0x2a455c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4558) {
            ctx->pc = 0x2A456Cu;
            goto label_2a456c;
        }
    }
    ctx->pc = 0x2A4560u;
    // 0x2a4560: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a4560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a4564: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4564u;
    {
        const bool branch_taken_0x2a4564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4564u;
        // 0x2a4568: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4564) {
            ctx->pc = 0x2A4574u;
            goto label_2a4574;
        }
    }
    ctx->pc = 0x2A456Cu;
label_2a456c:
    // 0x2a456c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a456cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a4570: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2a4570u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2a4574:
    // 0x2a4574: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x2a4574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2a4578: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a4578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a457c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a4580: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2a4580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a4584: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2a4584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4588: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2a4588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a458c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a458cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4590: 0x0  nop
    ctx->pc = 0x2a4590u;
    // NOP
    // 0x2a4594: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4594u;
    {
        const bool branch_taken_0x2a4594 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A4598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4594u;
        // 0x2a4598: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4594) {
            ctx->pc = 0x2A45A8u;
            goto label_2a45a8;
        }
    }
    ctx->pc = 0x2A459Cu;
    // 0x2a459c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a459cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a45a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A45A0u;
    {
        const bool branch_taken_0x2a45a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A45A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A45A0u;
        // 0x2a45a4: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a45a0) {
            ctx->pc = 0x2A45B0u;
            goto label_2a45b0;
        }
    }
    ctx->pc = 0x2A45A8u;
label_2a45a8:
    // 0x2a45a8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a45a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a45ac: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2a45acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2a45b0:
    // 0x2a45b0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x2a45b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2a45b4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a45b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a45b8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a45b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a45bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2a45bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a45c0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2a45c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a45c4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2a45c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a45c8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a45c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a45cc: 0x0  nop
    ctx->pc = 0x2a45ccu;
    // NOP
    // 0x2a45d0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A45D0u;
    {
        const bool branch_taken_0x2a45d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A45D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A45D0u;
        // 0x2a45d4: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a45d0) {
            ctx->pc = 0x2A45E4u;
            goto label_2a45e4;
        }
    }
    ctx->pc = 0x2A45D8u;
    // 0x2a45d8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a45d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a45dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A45DCu;
    {
        const bool branch_taken_0x2a45dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A45E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A45DCu;
        // 0x2a45e0: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a45dc) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A45E4u;
label_2a45e4:
    // 0x2a45e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a45e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a45e8: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2a45e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2a45ec:
    // 0x2a45ec: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x2a45ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2a45f0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a45f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a45f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a45f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a45f8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2a45f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a45fc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2a45fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4600: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2a4600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4604: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a4604u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4608: 0x0  nop
    ctx->pc = 0x2a4608u;
    // NOP
    // 0x2a460c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A460Cu;
    {
        const bool branch_taken_0x2a460c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A4610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A460Cu;
        // 0x2a4610: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a460c) {
            ctx->pc = 0x2A4620u;
            goto label_2a4620;
        }
    }
    ctx->pc = 0x2A4614u;
    // 0x2a4614: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a4614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a4618: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4618u;
    {
        const bool branch_taken_0x2a4618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4618u;
        // 0x2a461c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4618) {
            ctx->pc = 0x2A4628u;
            goto label_2a4628;
        }
    }
    ctx->pc = 0x2A4620u;
label_2a4620:
    // 0x2a4620: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a4620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a4624: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2a4624u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_2a4628:
    // 0x2a4628: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2a4628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2a462c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x2a462cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2a4630: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2a4630u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2a4634: 0x158dff88  bne         $t4, $t5, . + 4 + (-0x78 << 2)
    ctx->pc = 0x2A4634u;
    {
        const bool branch_taken_0x2a4634 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 13));
        ctx->pc = 0x2A4638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4634u;
        // 0x2a4638: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4634) {
            ctx->pc = 0x2A4458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4458;
        }
    }
    ctx->pc = 0x2A463Cu;
label_2a463c:
    // 0x2a463c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A463Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A463Cu;
        // 0x2a4640: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A463Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4644u;
    // 0x2a4644: 0x0  nop
    ctx->pc = 0x2a4644u;
    // NOP
    ctx->pc = 0x2a4648u;
}
