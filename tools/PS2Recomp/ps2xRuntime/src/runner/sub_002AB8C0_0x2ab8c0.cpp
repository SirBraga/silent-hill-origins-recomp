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

// Function: sub_002AB8C0
// Address: 0x2ab8c0 - 0x2aba10
void sub_002AB8C0_0x2ab8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB8C0_0x2ab8c0");
#endif

    ctx->pc = 0x2ab8c0u;

    // 0x2ab8c0: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x2ab8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2ab8c4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2ab8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2ab8c8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2ab8c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ab8cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB8CCu;
    {
        const bool branch_taken_0x2ab8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB8CCu;
        // 0x2ab8d0: 0x24a8001c  addiu       $t0, $a1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab8cc) {
            ctx->pc = 0x2AB8DCu;
            goto label_2ab8dc;
        }
    }
    ctx->pc = 0x2AB8D4u;
    // 0x2ab8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB8D4u;
        // 0x2ab8d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB8DCu;
label_2ab8dc:
    // 0x2ab8dc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2ab8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab8e0: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2ab8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab8e4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2ab8e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ab8e8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2ab8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab8ec: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2ab8ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2ab8f0: 0xc78380d8  lwc1        $f3, -0x7F28($gp)
    ctx->pc = 0x2ab8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ab8f4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ab8f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2ab8f8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2ab8f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2ab8fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ab8fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ab900: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x2ab900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab904: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2AB904u;
    {
        const bool branch_taken_0x2ab904 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ab904) {
            ctx->pc = 0x2AB920u;
            goto label_2ab920;
        }
    }
    ctx->pc = 0x2AB90Cu;
    // 0x2ab90c: 0xc78080dc  lwc1        $f0, -0x7F24($gp)
    ctx->pc = 0x2ab90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab910: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ab910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab914: 0x0  nop
    ctx->pc = 0x2ab914u;
    // NOP
    // 0x2ab918: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB918u;
    {
        const bool branch_taken_0x2ab918 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB918u;
        // 0x2ab91c: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab918) {
            ctx->pc = 0x2AB928u;
            goto label_2ab928;
        }
    }
    ctx->pc = 0x2AB920u;
label_2ab920:
    // 0x2ab920: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB920u;
        // 0x2ab924: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB928u;
label_2ab928:
    // 0x2ab928: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2ab928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ab92c: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2ab92cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ab930: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2ab930u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x2ab934: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2ab934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ab938: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2ab938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2ab93c: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x2ab93cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ab940: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x2ab940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2ab944: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x2ab944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2ab948: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2ab948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ab94c: 0xb0e20007  sdl         $v0, 0x7($a3)
    ctx->pc = 0x2ab94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab950: 0xb4e20000  sdr         $v0, 0x0($a3)
    ctx->pc = 0x2ab950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab954: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x2ab954u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x2ab958: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2ab958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2ab95c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2ab95cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2ab960: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2ab960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2ab964: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2ab964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2ab968: 0xb0e30017  sdl         $v1, 0x17($a3)
    ctx->pc = 0x2ab968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab96c: 0xb4e30010  sdr         $v1, 0x10($a3)
    ctx->pc = 0x2ab96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab970: 0xace40018  sw          $a0, 0x18($a3)
    ctx->pc = 0x2ab970u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 4));
    // 0x2ab974: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x2ab974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2ab978: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x2ab978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2ab97c: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x2ab97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2ab980: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2ab980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ab984: 0xb0e20027  sdl         $v0, 0x27($a3)
    ctx->pc = 0x2ab984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab988: 0xb4e20020  sdr         $v0, 0x20($a3)
    ctx->pc = 0x2ab988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab98c: 0xace40028  sw          $a0, 0x28($a3)
    ctx->pc = 0x2ab98cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
    // 0x2ab990: 0x68aa0007  ldl         $t2, 0x7($a1)
    ctx->pc = 0x2ab990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2ab994: 0x6caa0000  ldr         $t2, 0x0($a1)
    ctx->pc = 0x2ab994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2ab998: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2ab998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2ab99c: 0xb0ea0037  sdl         $t2, 0x37($a3)
    ctx->pc = 0x2ab99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab9a0: 0xb4ea0030  sdr         $t2, 0x30($a3)
    ctx->pc = 0x2ab9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab9a4: 0xace20038  sw          $v0, 0x38($a3)
    ctx->pc = 0x2ab9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 2));
    // 0x2ab9a8: 0xace00040  sw          $zero, 0x40($a3)
    ctx->pc = 0x2ab9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 0));
    // 0x2ab9ac: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x2ab9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2ab9b0: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2ab9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2ab9b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AB9B4u;
    {
        const bool branch_taken_0x2ab9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB9B4u;
        // 0x2ab9b8: 0xace40044  sw          $a0, 0x44($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab9b4) {
            ctx->pc = 0x2AB9E4u;
            goto label_2ab9e4;
        }
    }
    ctx->pc = 0x2AB9BCu;
    // 0x2ab9bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ab9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ab9c0: 0x418c2  srl         $v1, $a0, 3
    ctx->pc = 0x2ab9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x2ab9c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ab9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ab9c8: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x2ab9c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x2ab9cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ab9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ab9d0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2ab9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab9d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ab9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ab9d8: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x2ab9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2ab9dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AB9DCu;
    {
        const bool branch_taken_0x2ab9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB9DCu;
        // 0x2ab9e0: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab9dc) {
            ctx->pc = 0x2AB9E8u;
            goto label_2ab9e8;
        }
    }
    ctx->pc = 0x2AB9E4u;
label_2ab9e4:
    // 0x2ab9e4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2ab9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2ab9e8:
    // 0x2ab9e8: 0xace20048  sw          $v0, 0x48($a3)
    ctx->pc = 0x2ab9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 2));
    // 0x2ab9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB9ECu;
        // 0x2ab9f0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB9ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB9F4u;
    // 0x2ab9f4: 0x0  nop
    ctx->pc = 0x2ab9f4u;
    // NOP
    // 0x2ab9f8: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x2ab9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2ab9fc: 0x0  nop
    ctx->pc = 0x2ab9fcu;
    // NOP
    // 0x2aba00: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2aba00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2aba04: 0x0  nop
    ctx->pc = 0x2aba04u;
    // NOP
    // 0x2aba08: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2aba08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2aba0c: 0x0  nop
    ctx->pc = 0x2aba0cu;
    // NOP
    ctx->pc = 0x2aba10u;
}
