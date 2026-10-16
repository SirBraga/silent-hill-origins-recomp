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

// Function: sub_00203488
// Address: 0x203488 - 0x2036c0
void sub_00203488_0x203488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203488_0x203488");
#endif

    switch (ctx->pc) {
        case 0x2034c8u: goto label_2034c8;
        case 0x203548u: goto label_203548;
        case 0x2035b0u: goto label_2035b0;
        default: break;
    }

    ctx->pc = 0x203488u;

    // 0x203488: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x203488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x20348c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x20348cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203490: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x203490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x203494: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203494u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203498: 0x8d2200c0  lw          $v0, 0xC0($t1)
    ctx->pc = 0x203498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 192)));
    // 0x20349c: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x20349Cu;
    {
        const bool branch_taken_0x20349c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2034A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20349Cu;
        // 0x2034a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20349c) {
            ctx->pc = 0x203518u;
            goto label_203518;
        }
    }
    ctx->pc = 0x2034A4u;
    // 0x2034a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2034a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2034a8: 0xc4a6000c  lwc1        $f6, 0xC($a1)
    ctx->pc = 0x2034a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2034ac: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x2034acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2034b0: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x2034b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2034b4: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x2034b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2034b8: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x2034b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2034bc: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2034bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2034c0: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x2034c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2034c4: 0x0  nop
    ctx->pc = 0x2034c4u;
    // NOP
label_2034c8:
    // 0x2034c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2034c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2034cc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2034ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2034d0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2034d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2034d4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2034d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2034d8: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x2034d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2034dc: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2034dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2034e0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2034e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2034e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2034e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2034e8: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2034e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2034ec: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x2034ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2034f0: 0x0  nop
    ctx->pc = 0x2034f0u;
    // NOP
    // 0x2034f4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2034F4u;
    {
        const bool branch_taken_0x2034f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2034F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034F4u;
        // 0x2034f8: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034f4) {
            ctx->pc = 0x203504u;
            goto label_203504;
        }
    }
    ctx->pc = 0x2034FCu;
    // 0x2034fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2034FCu;
    {
        const bool branch_taken_0x2034fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034FCu;
        // 0x203500: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034fc) {
            ctx->pc = 0x203508u;
            goto label_203508;
        }
    }
    ctx->pc = 0x203504u;
label_203504:
    // 0x203504: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x203504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_203508:
    // 0x203508: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x203508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x20350c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x20350cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x203510: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x203510u;
    {
        const bool branch_taken_0x203510 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x203514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203510u;
        // 0x203514: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203510) {
            ctx->pc = 0x2034C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2034c8;
        }
    }
    ctx->pc = 0x203518u;
label_203518:
    // 0x203518: 0x10e00066  beqz        $a3, . + 4 + (0x66 << 2)
    ctx->pc = 0x203518u;
    {
        const bool branch_taken_0x203518 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x20351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203518u;
        // 0x20351c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203518) {
            ctx->pc = 0x2036B4u;
            goto label_2036b4;
        }
    }
    ctx->pc = 0x203520u;
    // 0x203520: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x203520u;
    {
        const bool branch_taken_0x203520 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x203520) {
            ctx->pc = 0x203524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203520u;
            // 0x203524: 0x8d2200c0  lw          $v0, 0xC0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203534u;
            goto label_203534;
        }
    }
    ctx->pc = 0x203528u;
    // 0x203528: 0xad2000c0  sw          $zero, 0xC0($t1)
    ctx->pc = 0x203528u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 192), GPR_U32(ctx, 0));
    // 0x20352c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x20352Cu;
    {
        const bool branch_taken_0x20352c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20352Cu;
        // 0x203530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20352c) {
            ctx->pc = 0x2036B4u;
            goto label_2036b4;
        }
    }
    ctx->pc = 0x203534u;
label_203534:
    // 0x203534: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x203534u;
    {
        const bool branch_taken_0x203534 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x203538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203534u;
        // 0x203538: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203534) {
            ctx->pc = 0x203570u;
            goto label_203570;
        }
    }
    ctx->pc = 0x20353Cu;
    // 0x20353c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x20353cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x203540: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x203540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203544: 0x0  nop
    ctx->pc = 0x203544u;
    // NOP
label_203548:
    // 0x203548: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x203548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x20354c: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x20354cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x203550: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x203550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x203554: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x203554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203558: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x203558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20355c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x20355cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x203560: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x203560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x203564: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x203564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x203568: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x203568u;
    {
        const bool branch_taken_0x203568 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203568u;
        // 0x20356c: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203568) {
            ctx->pc = 0x203548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203548;
        }
    }
    ctx->pc = 0x203570u;
label_203570:
    // 0x203570: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x203570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203574: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x203574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203578: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x203578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20357c: 0x0  nop
    ctx->pc = 0x20357cu;
    // NOP
    // 0x203580: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x203580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203584: 0x0  nop
    ctx->pc = 0x203584u;
    // NOP
    // 0x203588: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x203588u;
    {
        const bool branch_taken_0x203588 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203588u;
        // 0x20358c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203588) {
            ctx->pc = 0x203594u;
            goto label_203594;
        }
    }
    ctx->pc = 0x203590u;
    // 0x203590: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x203590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203594:
    // 0x203594: 0x8ceb00c0  lw          $t3, 0xC0($a3)
    ctx->pc = 0x203594u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 192)));
    // 0x203598: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x203598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20359c: 0x19600044  blez        $t3, . + 4 + (0x44 << 2)
    ctx->pc = 0x20359Cu;
    {
        const bool branch_taken_0x20359c = (GPR_S64(ctx, 11) <= 0);
        ctx->pc = 0x2035A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20359Cu;
        // 0x2035a0: 0xace000c0  sw          $zero, 0xC0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20359c) {
            ctx->pc = 0x2036B0u;
            goto label_2036b0;
        }
    }
    ctx->pc = 0x2035A4u;
    // 0x2035a4: 0x460009c6  mov.s       $f7, $f1
    ctx->pc = 0x2035a4u;
    ctx->f[7] = FPU_MOV_S(ctx->f[1]);
    // 0x2035a8: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x2035a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2035ac: 0x27b80040  addiu       $t8, $sp, 0x40
    ctx->pc = 0x2035acu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2035b0:
    // 0x2035b0: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x2035b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2035b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2035b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035b8: 0x10b1026  xor         $v0, $t0, $t3
    ctx->pc = 0x2035b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 11));
    // 0x2035bc: 0x102280b  movn        $a1, $t0, $v0
    ctx->pc = 0x2035bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8));
    // 0x2035c0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2035c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2035c4: 0x3a31821  addu        $v1, $sp, $v1
    ctx->pc = 0x2035c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2035c8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2035c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2035cc: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x2035ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2035d0: 0x0  nop
    ctx->pc = 0x2035d0u;
    // NOP
    // 0x2035d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2035D4u;
    {
        const bool branch_taken_0x2035d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2035D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035D4u;
        // 0x2035d8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035d4) {
            ctx->pc = 0x2035E0u;
            goto label_2035e0;
        }
    }
    ctx->pc = 0x2035DCu;
    // 0x2035dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2035dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2035e0:
    // 0x2035e0: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2035E0u;
    {
        const bool branch_taken_0x2035e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2035E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035E0u;
        // 0x2035e4: 0xcc6818  mult        $t5, $a2, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035e0) {
            ctx->pc = 0x203614u;
            goto label_203614;
        }
    }
    ctx->pc = 0x2035E8u;
    // 0x2035e8: 0x1bd1021  addu        $v0, $t5, $sp
    ctx->pc = 0x2035e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 29)));
    // 0x2035ec: 0x684e0047  ldl         $t6, 0x47($v0)
    ctx->pc = 0x2035ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x2035f0: 0x6c4e0040  ldr         $t6, 0x40($v0)
    ctx->pc = 0x2035f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x2035f4: 0x8c4f0048  lw          $t7, 0x48($v0)
    ctx->pc = 0x2035f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2035f8: 0xb0ee0007  sdl         $t6, 0x7($a3)
    ctx->pc = 0x2035f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2035fc: 0xb4ee0000  sdr         $t6, 0x0($a3)
    ctx->pc = 0x2035fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203600: 0xacef0008  sw          $t7, 0x8($a3)
    ctx->pc = 0x203600u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 15));
    // 0x203604: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x203604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x203608: 0x8d2200c0  lw          $v0, 0xC0($t1)
    ctx->pc = 0x203608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 192)));
    // 0x20360c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x203610: 0xad2200c0  sw          $v0, 0xC0($t1)
    ctx->pc = 0x203610u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 192), GPR_U32(ctx, 2));
label_203614:
    // 0x203614: 0x108a0022  beq         $a0, $t2, . + 4 + (0x22 << 2)
    ctx->pc = 0x203614u;
    {
        const bool branch_taken_0x203614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 10));
        ctx->pc = 0x203618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203614u;
        // 0x203618: 0xac1018  mult        $v0, $a1, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x203614) {
            ctx->pc = 0x2036A0u;
            goto label_2036a0;
        }
    }
    ctx->pc = 0x20361Cu;
    // 0x20361c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x20361cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203620: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x203620u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x203624: 0x582821  addu        $a1, $v0, $t8
    ctx->pc = 0x203624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x203628: 0xcc1018  mult        $v0, $a2, $t4
    ctx->pc = 0x203628u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20362c: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x20362cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x203630: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x203630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203634: 0x581821  addu        $v1, $v0, $t8
    ctx->pc = 0x203634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x203638: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x203638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x20363c: 0xc4660008  lwc1        $f6, 0x8($v1)
    ctx->pc = 0x20363cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x203640: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x203640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x203644: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x203644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x203648: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x203648u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x20364c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x20364cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x203650: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x203650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x203654: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x203654u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x203658: 0x0  nop
    ctx->pc = 0x203658u;
    // NOP
    // 0x20365c: 0x0  nop
    ctx->pc = 0x20365cu;
    // NOP
    // 0x203660: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x203660u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[0]);
    // 0x203664: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x203664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203668: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x203668u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x20366c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x20366cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x203670: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x203670u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x203674: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x203674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x203678: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x203678u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x20367c: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x20367cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x203680: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x203680u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x203684: 0xe4e60008  swc1        $f6, 0x8($a3)
    ctx->pc = 0x203684u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x203688: 0xe4e50000  swc1        $f5, 0x0($a3)
    ctx->pc = 0x203688u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x20368c: 0xe4e40004  swc1        $f4, 0x4($a3)
    ctx->pc = 0x20368cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x203690: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x203690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x203694: 0x8d2200c0  lw          $v0, 0xC0($t1)
    ctx->pc = 0x203694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 192)));
    // 0x203698: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x203698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20369c: 0xad2200c0  sw          $v0, 0xC0($t1)
    ctx->pc = 0x20369cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 192), GPR_U32(ctx, 2));
label_2036a0:
    // 0x2036a0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2036a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036a4: 0xcb102a  slt         $v0, $a2, $t3
    ctx->pc = 0x2036a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x2036a8: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x2036A8u;
    {
        const bool branch_taken_0x2036a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2036ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036A8u;
        // 0x2036ac: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036a8) {
            ctx->pc = 0x2035B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2035b0;
        }
    }
    ctx->pc = 0x2036B0u;
label_2036b0:
    // 0x2036b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2036b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2036b4:
    // 0x2036b4: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x2036b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2036b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2036B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2036BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036B8u;
        // 0x2036bc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2036B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2036C0u;
}
