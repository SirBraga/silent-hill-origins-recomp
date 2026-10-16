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

// Function: sub_002917A8
// Address: 0x2917a8 - 0x292d20
void sub_002917A8_0x2917a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002917A8_0x2917a8");
#endif

    ctx->pc = 0x2917a8u;

    // 0x2917a8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2917a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2917ac: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2917acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2917b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2917b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2917b4: 0x0  nop
    ctx->pc = 0x2917b4u;
    // NOP
    // 0x2917b8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2917B8u;
    {
        const bool branch_taken_0x2917b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2917BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917B8u;
        // 0x2917bc: 0x27bdff00  addiu       $sp, $sp, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917b8) {
            ctx->pc = 0x2917DCu;
            goto label_2917dc;
        }
    }
    ctx->pc = 0x2917C0u;
    // 0x2917c0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2917c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2917c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2917c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2917c8: 0x0  nop
    ctx->pc = 0x2917c8u;
    // NOP
    // 0x2917cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2917CCu;
    {
        const bool branch_taken_0x2917cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2917D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917CCu;
        // 0x2917d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917cc) {
            ctx->pc = 0x2917E0u;
            goto label_2917e0;
        }
    }
    ctx->pc = 0x2917D4u;
    // 0x2917d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2917D4u;
    {
        const bool branch_taken_0x2917d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2917D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917D4u;
        // 0x2917d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917d4) {
            ctx->pc = 0x2917E0u;
            goto label_2917e0;
        }
    }
    ctx->pc = 0x2917DCu;
label_2917dc:
    // 0x2917dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2917dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2917e0:
    // 0x2917e0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2917e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2917e4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2917e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2917e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2917e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2917ec: 0x0  nop
    ctx->pc = 0x2917ecu;
    // NOP
    // 0x2917f0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2917F0u;
    {
        const bool branch_taken_0x2917f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2917F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917F0u;
        // 0x2917f4: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917f0) {
            ctx->pc = 0x291814u;
            goto label_291814;
        }
    }
    ctx->pc = 0x2917F8u;
    // 0x2917f8: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2917f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2917fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2917fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291800: 0x0  nop
    ctx->pc = 0x291800u;
    // NOP
    // 0x291804: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x291804u;
    {
        const bool branch_taken_0x291804 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x291804) {
            ctx->pc = 0x291808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291804u;
            // 0x291808: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x291818u;
            goto label_291818;
        }
    }
    ctx->pc = 0x29180Cu;
    // 0x29180c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29180Cu;
    {
        const bool branch_taken_0x29180c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29180Cu;
        // 0x291810: 0xc4800008  lwc1        $f0, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29180c) {
            ctx->pc = 0x29181Cu;
            goto label_29181c;
        }
    }
    ctx->pc = 0x291814u;
label_291814:
    // 0x291814: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x291814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_291818:
    // 0x291818: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x291818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29181c:
    // 0x29181c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x29181cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291820: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x291820u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291824: 0x0  nop
    ctx->pc = 0x291824u;
    // NOP
    // 0x291828: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x291828u;
    {
        const bool branch_taken_0x291828 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291828u;
        // 0x29182c: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291828) {
            ctx->pc = 0x29184Cu;
            goto label_29184c;
        }
    }
    ctx->pc = 0x291830u;
    // 0x291830: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x291830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291834: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291838: 0x0  nop
    ctx->pc = 0x291838u;
    // NOP
    // 0x29183c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x29183Cu;
    {
        const bool branch_taken_0x29183c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29183Cu;
        // 0x291840: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29183c) {
            ctx->pc = 0x291850u;
            goto label_291850;
        }
    }
    ctx->pc = 0x291844u;
    // 0x291844: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x291844u;
    {
        const bool branch_taken_0x291844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291844u;
        // 0x291848: 0x35080020  ori         $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291844) {
            ctx->pc = 0x291850u;
            goto label_291850;
        }
    }
    ctx->pc = 0x29184Cu;
label_29184c:
    // 0x29184c: 0x34480010  ori         $t0, $v0, 0x10
    ctx->pc = 0x29184cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_291850:
    // 0x291850: 0x1100052f  beqz        $t0, . + 4 + (0x52F << 2)
    ctx->pc = 0x291850u;
    {
        const bool branch_taken_0x291850 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x291854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291850u;
        // 0x291854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291850) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x291858u;
    // 0x291858: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x291858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29185c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x29185cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291860: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x291860u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x291864: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x291864u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291868: 0x0  nop
    ctx->pc = 0x291868u;
    // NOP
    // 0x29186c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x29186Cu;
    {
        const bool branch_taken_0x29186c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29186Cu;
        // 0x291870: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29186c) {
            ctx->pc = 0x29188Cu;
            goto label_29188c;
        }
    }
    ctx->pc = 0x291874u;
    // 0x291874: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x291874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291878: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x291878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29187c: 0x0  nop
    ctx->pc = 0x29187cu;
    // NOP
    // 0x291880: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x291880u;
    {
        const bool branch_taken_0x291880 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291880u;
        // 0x291884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291880) {
            ctx->pc = 0x29188Cu;
            goto label_29188c;
        }
    }
    ctx->pc = 0x291888u;
    // 0x291888: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x291888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29188c:
    // 0x29188c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x29188cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291890: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x291890u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291894: 0x0  nop
    ctx->pc = 0x291894u;
    // NOP
    // 0x291898: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x291898u;
    {
        const bool branch_taken_0x291898 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x291898) {
            ctx->pc = 0x29189Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291898u;
            // 0x29189c: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2918BCu;
            goto label_2918bc;
        }
    }
    ctx->pc = 0x2918A0u;
    // 0x2918a0: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2918a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2918a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2918a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2918a8: 0x0  nop
    ctx->pc = 0x2918a8u;
    // NOP
    // 0x2918ac: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2918ACu;
    {
        const bool branch_taken_0x2918ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2918ac) {
            ctx->pc = 0x2918B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2918ACu;
            // 0x2918b0: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2918BCu;
            goto label_2918bc;
        }
    }
    ctx->pc = 0x2918B4u;
    // 0x2918b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2918B4u;
    {
        const bool branch_taken_0x2918b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2918B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918B4u;
        // 0x2918b8: 0xc4c10008  lwc1        $f1, 0x8($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2918b4) {
            ctx->pc = 0x2918C0u;
            goto label_2918c0;
        }
    }
    ctx->pc = 0x2918BCu;
label_2918bc:
    // 0x2918bc: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2918bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2918c0:
    // 0x2918c0: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x2918c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2918c4: 0x0  nop
    ctx->pc = 0x2918c4u;
    // NOP
    // 0x2918c8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2918C8u;
    {
        const bool branch_taken_0x2918c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2918c8) {
            ctx->pc = 0x2918CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2918C8u;
            // 0x2918cc: 0x344a0010  ori         $t2, $v0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2918E8u;
            goto label_2918e8;
        }
    }
    ctx->pc = 0x2918D0u;
    // 0x2918d0: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x2918d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2918d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2918d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2918d8: 0x0  nop
    ctx->pc = 0x2918d8u;
    // NOP
    // 0x2918dc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2918DCu;
    {
        const bool branch_taken_0x2918dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2918E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918DCu;
        // 0x2918e0: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2918dc) {
            ctx->pc = 0x2918E8u;
            goto label_2918e8;
        }
    }
    ctx->pc = 0x2918E4u;
    // 0x2918e4: 0x354a0020  ori         $t2, $t2, 0x20
    ctx->pc = 0x2918e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32);
label_2918e8:
    // 0x2918e8: 0x11400509  beqz        $t2, . + 4 + (0x509 << 2)
    ctx->pc = 0x2918E8u;
    {
        const bool branch_taken_0x2918e8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2918ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918E8u;
        // 0x2918ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2918e8) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x2918F0u;
    // 0x2918f0: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2918f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2918f4: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x2918f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2918f8: 0x0  nop
    ctx->pc = 0x2918f8u;
    // NOP
    // 0x2918fc: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2918FCu;
    {
        const bool branch_taken_0x2918fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2918fc) {
            ctx->pc = 0x291900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2918FCu;
            // 0x291900: 0xc4e10004  lwc1        $f1, 0x4($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x291920u;
            goto label_291920;
        }
    }
    ctx->pc = 0x291904u;
    // 0x291904: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x291904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291908: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29190c: 0x0  nop
    ctx->pc = 0x29190cu;
    // NOP
    // 0x291910: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x291910u;
    {
        const bool branch_taken_0x291910 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291910u;
        // 0x291914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291910) {
            ctx->pc = 0x29191Cu;
            goto label_29191c;
        }
    }
    ctx->pc = 0x291918u;
    // 0x291918: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x291918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29191c:
    // 0x29191c: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x29191cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_291920:
    // 0x291920: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x291920u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291924: 0x0  nop
    ctx->pc = 0x291924u;
    // NOP
    // 0x291928: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x291928u;
    {
        const bool branch_taken_0x291928 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x291928) {
            ctx->pc = 0x29192Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291928u;
            // 0x29192c: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29194Cu;
            goto label_29194c;
        }
    }
    ctx->pc = 0x291930u;
    // 0x291930: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x291930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291934: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291938: 0x0  nop
    ctx->pc = 0x291938u;
    // NOP
    // 0x29193c: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x29193Cu;
    {
        const bool branch_taken_0x29193c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29193c) {
            ctx->pc = 0x291940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29193Cu;
            // 0x291940: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29194Cu;
            goto label_29194c;
        }
    }
    ctx->pc = 0x291944u;
    // 0x291944: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x291944u;
    {
        const bool branch_taken_0x291944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291944u;
        // 0x291948: 0xc4e10008  lwc1        $f1, 0x8($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291944) {
            ctx->pc = 0x291950u;
            goto label_291950;
        }
    }
    ctx->pc = 0x29194Cu;
label_29194c:
    // 0x29194c: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x29194cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_291950:
    // 0x291950: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x291950u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291954: 0x0  nop
    ctx->pc = 0x291954u;
    // NOP
    // 0x291958: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x291958u;
    {
        const bool branch_taken_0x291958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x291958) {
            ctx->pc = 0x29195Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291958u;
            // 0x29195c: 0x34490010  ori         $t1, $v0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x291978u;
            goto label_291978;
        }
    }
    ctx->pc = 0x291960u;
    // 0x291960: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x291960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291964: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291964u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291968: 0x0  nop
    ctx->pc = 0x291968u;
    // NOP
    // 0x29196c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x29196Cu;
    {
        const bool branch_taken_0x29196c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29196Cu;
        // 0x291970: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29196c) {
            ctx->pc = 0x291978u;
            goto label_291978;
        }
    }
    ctx->pc = 0x291974u;
    // 0x291974: 0x35290020  ori         $t1, $t1, 0x20
    ctx->pc = 0x291974u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32);
label_291978:
    // 0x291978: 0x112004af  beqz        $t1, . + 4 + (0x4AF << 2)
    ctx->pc = 0x291978u;
    {
        const bool branch_taken_0x291978 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x29197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291978u;
        // 0x29197c: 0x10a1824  and         $v1, $t0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291978) {
            ctx->pc = 0x292C38u;
            goto label_292c38;
        }
    }
    ctx->pc = 0x291980u;
    // 0x291980: 0x691024  and         $v0, $v1, $t1
    ctx->pc = 0x291980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x291984: 0x144004e2  bnez        $v0, . + 4 + (0x4E2 << 2)
    ctx->pc = 0x291984u;
    {
        const bool branch_taken_0x291984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291984u;
        // 0x291988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291984) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x29198Cu;
    // 0x29198c: 0x1460015e  bnez        $v1, . + 4 + (0x15E << 2)
    ctx->pc = 0x29198Cu;
    {
        const bool branch_taken_0x29198c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29198Cu;
        // 0x291990: 0x1091024  and         $v0, $t0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29198c) {
            ctx->pc = 0x291F08u;
            goto label_291f08;
        }
    }
    ctx->pc = 0x291994u;
    // 0x291994: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x291994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291998: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x291998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29199c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x29199cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2919a0: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2919a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2919a4: 0x46040201  sub.s       $f8, $f0, $f4
    ctx->pc = 0x2919a4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2919a8: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x2919a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2919ac: 0x46030a81  sub.s       $f10, $f1, $f3
    ctx->pc = 0x2919acu;
    ctx->f[10] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2919b0: 0x46051181  sub.s       $f6, $f2, $f5
    ctx->pc = 0x2919b0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2919b4: 0xe7a80004  swc1        $f8, 0x4($sp)
    ctx->pc = 0x2919b4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2919b8: 0xe7aa0008  swc1        $f10, 0x8($sp)
    ctx->pc = 0x2919b8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2919bc: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x2919bcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2919c0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2919c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2919c4: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x2919c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2919c8: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x2919c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2919cc: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x2919ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2919d0: 0x460221c1  sub.s       $f7, $f4, $f2
    ctx->pc = 0x2919d0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2919d4: 0x46011ac1  sub.s       $f11, $f3, $f1
    ctx->pc = 0x2919d4u;
    ctx->f[11] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2919d8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2919d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2919dc: 0xe7a70014  swc1        $f7, 0x14($sp)
    ctx->pc = 0x2919dcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2919e0: 0xe7ab0018  swc1        $f11, 0x18($sp)
    ctx->pc = 0x2919e0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2919e4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2919e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2919e8: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2919e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2919ec: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2919ecu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2919f0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2919f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2919f4: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x2919f4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2919f8: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2919f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2919fc: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x2919fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x291a00: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x291a00u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x291a04: 0x10a1026  xor         $v0, $t0, $t2
    ctx->pc = 0x291a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 10));
    // 0x291a08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x291a08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291a0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x291a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x291a10: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x291A10u;
    {
        const bool branch_taken_0x291a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A10u;
        // 0x291a14: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291a10) {
            ctx->pc = 0x291ACCu;
            goto label_291acc;
        }
    }
    ctx->pc = 0x291A18u;
    // 0x291a18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x291a18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291a1c: 0x460030c6  mov.s       $f3, $f6
    ctx->pc = 0x291a1cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[6]);
    // 0x291a20: 0x46002a46  mov.s       $f9, $f5
    ctx->pc = 0x291a20u;
    ctx->f[9] = FPU_MOV_S(ctx->f[5]);
    // 0x291a24: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x291a24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291a28: 0x0  nop
    ctx->pc = 0x291a28u;
    // NOP
    // 0x291a2c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x291A2Cu;
    {
        const bool branch_taken_0x291a2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A2Cu;
        // 0x291a30: 0x46084882  mul.s       $f2, $f9, $f8 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291a2c) {
            ctx->pc = 0x291A80u;
            goto label_291a80;
        }
    }
    ctx->pc = 0x291A34u;
    // 0x291a34: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x291a34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x291a38: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x291a38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291a3c: 0x0  nop
    ctx->pc = 0x291a3cu;
    // NOP
    // 0x291a40: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x291A40u;
    {
        const bool branch_taken_0x291a40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A40u;
        // 0x291a44: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291a40) {
            ctx->pc = 0x291AD0u;
            goto label_291ad0;
        }
    }
    ctx->pc = 0x291A48u;
    // 0x291a48: 0x46033802  mul.s       $f0, $f7, $f3
    ctx->pc = 0x291a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x291a4c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x291a4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291a50: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x291A50u;
    {
        const bool branch_taken_0x291a50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x291a50) {
            ctx->pc = 0x291AD0u;
            goto label_291ad0;
        }
    }
    ctx->pc = 0x291A58u;
    // 0x291a58: 0x460a4882  mul.s       $f2, $f9, $f10
    ctx->pc = 0x291a58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
    // 0x291a5c: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x291a5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x291a60: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x291a60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291a64: 0x0  nop
    ctx->pc = 0x291a64u;
    // NOP
    // 0x291a68: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x291A68u;
    {
        const bool branch_taken_0x291a68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A68u;
        // 0x291a6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291a68) {
            ctx->pc = 0x291ACCu;
            goto label_291acc;
        }
    }
    ctx->pc = 0x291A70u;
    // 0x291a70: 0x46035802  mul.s       $f0, $f11, $f3
    ctx->pc = 0x291a70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x291a74: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x291a74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291a78: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x291A78u;
    {
        const bool branch_taken_0x291a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291a78) {
            ctx->pc = 0x291AC4u;
            goto label_291ac4;
        }
    }
    ctx->pc = 0x291A80u;
label_291a80:
    // 0x291a80: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x291a80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x291a84: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x291a84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291a88: 0x0  nop
    ctx->pc = 0x291a88u;
    // NOP
    // 0x291a8c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x291A8Cu;
    {
        const bool branch_taken_0x291a8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A8Cu;
        // 0x291a90: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291a8c) {
            ctx->pc = 0x291AD0u;
            goto label_291ad0;
        }
    }
    ctx->pc = 0x291A94u;
    // 0x291a94: 0x46063802  mul.s       $f0, $f7, $f6
    ctx->pc = 0x291a94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x291a98: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x291a98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291a9c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x291A9Cu;
    {
        const bool branch_taken_0x291a9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x291a9c) {
            ctx->pc = 0x291AD0u;
            goto label_291ad0;
        }
    }
    ctx->pc = 0x291AA4u;
    // 0x291aa4: 0x460a2882  mul.s       $f2, $f5, $f10
    ctx->pc = 0x291aa4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x291aa8: 0x46060802  mul.s       $f0, $f1, $f6
    ctx->pc = 0x291aa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x291aac: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x291aacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291ab0: 0x0  nop
    ctx->pc = 0x291ab0u;
    // NOP
    // 0x291ab4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x291AB4u;
    {
        const bool branch_taken_0x291ab4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291AB4u;
        // 0x291ab8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ab4) {
            ctx->pc = 0x291ACCu;
            goto label_291acc;
        }
    }
    ctx->pc = 0x291ABCu;
    // 0x291abc: 0x46065802  mul.s       $f0, $f11, $f6
    ctx->pc = 0x291abcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x291ac0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x291ac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_291ac4:
    // 0x291ac4: 0x45010492  bc1t        . + 4 + (0x492 << 2)
    ctx->pc = 0x291AC4u;
    {
        const bool branch_taken_0x291ac4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x291ac4) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x291ACCu;
label_291acc:
    // 0x291acc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x291accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_291ad0:
    // 0x291ad0: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x291AD0u;
    {
        const bool branch_taken_0x291ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291AD0u;
        // 0x291ad4: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ad0) {
            ctx->pc = 0x291BA4u;
            goto label_291ba4;
        }
    }
    ctx->pc = 0x291AD8u;
    // 0x291ad8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x291ad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x291adc: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x291adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x291ae0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x291ae0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291ae4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x291ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291ae8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x291AE8u;
    {
        const bool branch_taken_0x291ae8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291AE8u;
        // 0x291aec: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ae8) {
            ctx->pc = 0x291B48u;
            goto label_291b48;
        }
    }
    ctx->pc = 0x291AF0u;
    // 0x291af0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x291af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291af4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291af4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291af8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291af8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291afc: 0x0  nop
    ctx->pc = 0x291afcu;
    // NOP
    // 0x291b00: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x291B00u;
    {
        const bool branch_taken_0x291b00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B00u;
        // 0x291b04: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291b00) {
            ctx->pc = 0x291BA4u;
            goto label_291ba4;
        }
    }
    ctx->pc = 0x291B08u;
    // 0x291b08: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291b08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291b0c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291b0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291b10: 0x0  nop
    ctx->pc = 0x291b10u;
    // NOP
    // 0x291b14: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x291B14u;
    {
        const bool branch_taken_0x291b14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B14u;
        // 0x291b18: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291b14) {
            ctx->pc = 0x291BA4u;
            goto label_291ba4;
        }
    }
    ctx->pc = 0x291B1Cu;
    // 0x291b1c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x291b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291b20: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x291b20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x291b24: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291b24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291b28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291b28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291b2c: 0x0  nop
    ctx->pc = 0x291b2cu;
    // NOP
    // 0x291b30: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x291B30u;
    {
        const bool branch_taken_0x291b30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B30u;
        // 0x291b34: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291b30) {
            ctx->pc = 0x291BA4u;
            goto label_291ba4;
        }
    }
    ctx->pc = 0x291B38u;
    // 0x291b38: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291b38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291b3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291b3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291b40: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x291B40u;
    {
        const bool branch_taken_0x291b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B40u;
        // 0x291b44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291b40) {
            ctx->pc = 0x291B9Cu;
            goto label_291b9c;
        }
    }
    ctx->pc = 0x291B48u;
label_291b48:
    // 0x291b48: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x291b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291b4c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291b4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291b50: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291b50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291b54: 0x0  nop
    ctx->pc = 0x291b54u;
    // NOP
    // 0x291b58: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x291B58u;
    {
        const bool branch_taken_0x291b58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B58u;
        // 0x291b5c: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291b58) {
            ctx->pc = 0x291BA4u;
            goto label_291ba4;
        }
    }
    ctx->pc = 0x291B60u;
    // 0x291b60: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291b60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291b64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291b64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291b68: 0x0  nop
    ctx->pc = 0x291b68u;
    // NOP
    // 0x291b6c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x291B6Cu;
    {
        const bool branch_taken_0x291b6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B6Cu;
        // 0x291b70: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291b6c) {
            ctx->pc = 0x291BA4u;
            goto label_291ba4;
        }
    }
    ctx->pc = 0x291B74u;
    // 0x291b74: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x291b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291b78: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x291b78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x291b7c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291b7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291b80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291b80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291b84: 0x0  nop
    ctx->pc = 0x291b84u;
    // NOP
    // 0x291b88: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x291B88u;
    {
        const bool branch_taken_0x291b88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B88u;
        // 0x291b8c: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291b88) {
            ctx->pc = 0x291BA4u;
            goto label_291ba4;
        }
    }
    ctx->pc = 0x291B90u;
    // 0x291b90: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291b90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291b94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291b94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291b98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_291b9c:
    // 0x291b9c: 0x4501045c  bc1t        . + 4 + (0x45C << 2)
    ctx->pc = 0x291B9Cu;
    {
        const bool branch_taken_0x291b9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x291b9c) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x291BA4u;
label_291ba4:
    // 0x291ba4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x291ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x291ba8: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x291BA8u;
    {
        const bool branch_taken_0x291ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291BA8u;
        // 0x291bac: 0xc7a20004  lwc1        $f2, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ba8) {
            ctx->pc = 0x291C7Cu;
            goto label_291c7c;
        }
    }
    ctx->pc = 0x291BB0u;
    // 0x291bb0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x291bb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x291bb4: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x291bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x291bb8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x291bb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291bbc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x291bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291bc0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x291BC0u;
    {
        const bool branch_taken_0x291bc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291BC0u;
        // 0x291bc4: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291bc0) {
            ctx->pc = 0x291C20u;
            goto label_291c20;
        }
    }
    ctx->pc = 0x291BC8u;
    // 0x291bc8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x291bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291bcc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291bccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291bd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291bd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291bd4: 0x0  nop
    ctx->pc = 0x291bd4u;
    // NOP
    // 0x291bd8: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x291BD8u;
    {
        const bool branch_taken_0x291bd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291BD8u;
        // 0x291bdc: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291bd8) {
            ctx->pc = 0x291C7Cu;
            goto label_291c7c;
        }
    }
    ctx->pc = 0x291BE0u;
    // 0x291be0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291be0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291be4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291be4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291be8: 0x0  nop
    ctx->pc = 0x291be8u;
    // NOP
    // 0x291bec: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x291BECu;
    {
        const bool branch_taken_0x291bec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291BECu;
        // 0x291bf0: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291bec) {
            ctx->pc = 0x291C7Cu;
            goto label_291c7c;
        }
    }
    ctx->pc = 0x291BF4u;
    // 0x291bf4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x291bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291bf8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x291bf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x291bfc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291bfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291c00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291c00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291c04: 0x0  nop
    ctx->pc = 0x291c04u;
    // NOP
    // 0x291c08: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x291C08u;
    {
        const bool branch_taken_0x291c08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C08u;
        // 0x291c0c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c08) {
            ctx->pc = 0x291C7Cu;
            goto label_291c7c;
        }
    }
    ctx->pc = 0x291C10u;
    // 0x291c10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291c10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291c14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291c18: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x291C18u;
    {
        const bool branch_taken_0x291c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C18u;
        // 0x291c1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c18) {
            ctx->pc = 0x291C74u;
            goto label_291c74;
        }
    }
    ctx->pc = 0x291C20u;
label_291c20:
    // 0x291c20: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x291c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291c24: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291c24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291c28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291c28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291c2c: 0x0  nop
    ctx->pc = 0x291c2cu;
    // NOP
    // 0x291c30: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x291C30u;
    {
        const bool branch_taken_0x291c30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C30u;
        // 0x291c34: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c30) {
            ctx->pc = 0x291C7Cu;
            goto label_291c7c;
        }
    }
    ctx->pc = 0x291C38u;
    // 0x291c38: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291c38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291c3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291c3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291c40: 0x0  nop
    ctx->pc = 0x291c40u;
    // NOP
    // 0x291c44: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x291C44u;
    {
        const bool branch_taken_0x291c44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C44u;
        // 0x291c48: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c44) {
            ctx->pc = 0x291C7Cu;
            goto label_291c7c;
        }
    }
    ctx->pc = 0x291C4Cu;
    // 0x291c4c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x291c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291c50: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x291c50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x291c54: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291c58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291c58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291c5c: 0x0  nop
    ctx->pc = 0x291c5cu;
    // NOP
    // 0x291c60: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x291C60u;
    {
        const bool branch_taken_0x291c60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C60u;
        // 0x291c64: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c60) {
            ctx->pc = 0x291C7Cu;
            goto label_291c7c;
        }
    }
    ctx->pc = 0x291C68u;
    // 0x291c68: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291c68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291c6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291c6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_291c74:
    // 0x291c74: 0x45010426  bc1t        . + 4 + (0x426 << 2)
    ctx->pc = 0x291C74u;
    {
        const bool branch_taken_0x291c74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x291c74) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x291C7Cu;
label_291c7c:
    // 0x291c7c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x291c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x291c80: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x291C80u;
    {
        const bool branch_taken_0x291c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C80u;
        // 0x291c84: 0xc7a20004  lwc1        $f2, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c80) {
            ctx->pc = 0x291D54u;
            goto label_291d54;
        }
    }
    ctx->pc = 0x291C88u;
    // 0x291c88: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x291c88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x291c8c: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x291c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x291c90: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x291c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291c94: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x291c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291c98: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x291C98u;
    {
        const bool branch_taken_0x291c98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C98u;
        // 0x291c9c: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c98) {
            ctx->pc = 0x291CF8u;
            goto label_291cf8;
        }
    }
    ctx->pc = 0x291CA0u;
    // 0x291ca0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x291ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291ca4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291ca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291ca8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291ca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291cac: 0x0  nop
    ctx->pc = 0x291cacu;
    // NOP
    // 0x291cb0: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x291CB0u;
    {
        const bool branch_taken_0x291cb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CB0u;
        // 0x291cb4: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291cb0) {
            ctx->pc = 0x291D54u;
            goto label_291d54;
        }
    }
    ctx->pc = 0x291CB8u;
    // 0x291cb8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291cb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291cbc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291cbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291cc0: 0x0  nop
    ctx->pc = 0x291cc0u;
    // NOP
    // 0x291cc4: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x291CC4u;
    {
        const bool branch_taken_0x291cc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CC4u;
        // 0x291cc8: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291cc4) {
            ctx->pc = 0x291D54u;
            goto label_291d54;
        }
    }
    ctx->pc = 0x291CCCu;
    // 0x291ccc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x291cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291cd0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x291cd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x291cd4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291cd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291cd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291cd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291cdc: 0x0  nop
    ctx->pc = 0x291cdcu;
    // NOP
    // 0x291ce0: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x291CE0u;
    {
        const bool branch_taken_0x291ce0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CE0u;
        // 0x291ce4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ce0) {
            ctx->pc = 0x291D54u;
            goto label_291d54;
        }
    }
    ctx->pc = 0x291CE8u;
    // 0x291ce8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291ce8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291cec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291cecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291cf0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x291CF0u;
    {
        const bool branch_taken_0x291cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CF0u;
        // 0x291cf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291cf0) {
            ctx->pc = 0x291D4Cu;
            goto label_291d4c;
        }
    }
    ctx->pc = 0x291CF8u;
label_291cf8:
    // 0x291cf8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x291cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291cfc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291cfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291d00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291d00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291d04: 0x0  nop
    ctx->pc = 0x291d04u;
    // NOP
    // 0x291d08: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x291D08u;
    {
        const bool branch_taken_0x291d08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D08u;
        // 0x291d0c: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d08) {
            ctx->pc = 0x291D54u;
            goto label_291d54;
        }
    }
    ctx->pc = 0x291D10u;
    // 0x291d10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291d10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291d14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291d14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291d18: 0x0  nop
    ctx->pc = 0x291d18u;
    // NOP
    // 0x291d1c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x291D1Cu;
    {
        const bool branch_taken_0x291d1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D1Cu;
        // 0x291d20: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d1c) {
            ctx->pc = 0x291D54u;
            goto label_291d54;
        }
    }
    ctx->pc = 0x291D24u;
    // 0x291d24: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x291d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291d28: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x291d28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x291d2c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291d2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291d30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291d34: 0x0  nop
    ctx->pc = 0x291d34u;
    // NOP
    // 0x291d38: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x291D38u;
    {
        const bool branch_taken_0x291d38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D38u;
        // 0x291d3c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d38) {
            ctx->pc = 0x291D54u;
            goto label_291d54;
        }
    }
    ctx->pc = 0x291D40u;
    // 0x291d40: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291d40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291d44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291d44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291d48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_291d4c:
    // 0x291d4c: 0x450103f0  bc1t        . + 4 + (0x3F0 << 2)
    ctx->pc = 0x291D4Cu;
    {
        const bool branch_taken_0x291d4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x291d4c) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x291D54u;
label_291d54:
    // 0x291d54: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x291d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x291d58: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x291D58u;
    {
        const bool branch_taken_0x291d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D58u;
        // 0x291d5c: 0xc7a20008  lwc1        $f2, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d58) {
            ctx->pc = 0x291E2Cu;
            goto label_291e2c;
        }
    }
    ctx->pc = 0x291D60u;
    // 0x291d60: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x291d60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x291d64: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x291d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x291d68: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x291d68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291d6c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x291d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291d70: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x291D70u;
    {
        const bool branch_taken_0x291d70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D70u;
        // 0x291d74: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d70) {
            ctx->pc = 0x291DD0u;
            goto label_291dd0;
        }
    }
    ctx->pc = 0x291D78u;
    // 0x291d78: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x291d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291d7c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291d7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291d80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291d80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291d84: 0x0  nop
    ctx->pc = 0x291d84u;
    // NOP
    // 0x291d88: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x291D88u;
    {
        const bool branch_taken_0x291d88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D88u;
        // 0x291d8c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d88) {
            ctx->pc = 0x291E2Cu;
            goto label_291e2c;
        }
    }
    ctx->pc = 0x291D90u;
    // 0x291d90: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291d90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291d94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291d94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291d98: 0x0  nop
    ctx->pc = 0x291d98u;
    // NOP
    // 0x291d9c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x291D9Cu;
    {
        const bool branch_taken_0x291d9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D9Cu;
        // 0x291da0: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d9c) {
            ctx->pc = 0x291E2Cu;
            goto label_291e2c;
        }
    }
    ctx->pc = 0x291DA4u;
    // 0x291da4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x291da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291da8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x291da8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x291dac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291dacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291db0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291db0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291db4: 0x0  nop
    ctx->pc = 0x291db4u;
    // NOP
    // 0x291db8: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x291DB8u;
    {
        const bool branch_taken_0x291db8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DB8u;
        // 0x291dbc: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291db8) {
            ctx->pc = 0x291E2Cu;
            goto label_291e2c;
        }
    }
    ctx->pc = 0x291DC0u;
    // 0x291dc0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291dc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291dc4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291dc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291dc8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x291DC8u;
    {
        const bool branch_taken_0x291dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DC8u;
        // 0x291dcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291dc8) {
            ctx->pc = 0x291E24u;
            goto label_291e24;
        }
    }
    ctx->pc = 0x291DD0u;
label_291dd0:
    // 0x291dd0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x291dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291dd4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291dd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291dd8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291dd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291ddc: 0x0  nop
    ctx->pc = 0x291ddcu;
    // NOP
    // 0x291de0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x291DE0u;
    {
        const bool branch_taken_0x291de0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DE0u;
        // 0x291de4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291de0) {
            ctx->pc = 0x291E2Cu;
            goto label_291e2c;
        }
    }
    ctx->pc = 0x291DE8u;
    // 0x291de8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291de8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291dec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291decu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291df0: 0x0  nop
    ctx->pc = 0x291df0u;
    // NOP
    // 0x291df4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x291DF4u;
    {
        const bool branch_taken_0x291df4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DF4u;
        // 0x291df8: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291df4) {
            ctx->pc = 0x291E2Cu;
            goto label_291e2c;
        }
    }
    ctx->pc = 0x291DFCu;
    // 0x291dfc: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x291dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291e00: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x291e00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x291e04: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291e04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291e08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291e08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291e0c: 0x0  nop
    ctx->pc = 0x291e0cu;
    // NOP
    // 0x291e10: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x291E10u;
    {
        const bool branch_taken_0x291e10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E10u;
        // 0x291e14: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291e10) {
            ctx->pc = 0x291E2Cu;
            goto label_291e2c;
        }
    }
    ctx->pc = 0x291E18u;
    // 0x291e18: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291e18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291e1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291e1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291e20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_291e24:
    // 0x291e24: 0x450103ba  bc1t        . + 4 + (0x3BA << 2)
    ctx->pc = 0x291E24u;
    {
        const bool branch_taken_0x291e24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x291e24) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x291E2Cu;
label_291e2c:
    // 0x291e2c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x291e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x291e30: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x291E30u;
    {
        const bool branch_taken_0x291e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E30u;
        // 0x291e34: 0xc7a20008  lwc1        $f2, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291e30) {
            ctx->pc = 0x291F04u;
            goto label_291f04;
        }
    }
    ctx->pc = 0x291E38u;
    // 0x291e38: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x291e38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x291e3c: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x291e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x291e40: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x291e40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291e44: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x291e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291e48: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x291E48u;
    {
        const bool branch_taken_0x291e48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E48u;
        // 0x291e4c: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291e48) {
            ctx->pc = 0x291EA8u;
            goto label_291ea8;
        }
    }
    ctx->pc = 0x291E50u;
    // 0x291e50: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x291e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291e54: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291e54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291e58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291e58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291e5c: 0x0  nop
    ctx->pc = 0x291e5cu;
    // NOP
    // 0x291e60: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x291E60u;
    {
        const bool branch_taken_0x291e60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E60u;
        // 0x291e64: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291e60) {
            ctx->pc = 0x291F04u;
            goto label_291f04;
        }
    }
    ctx->pc = 0x291E68u;
    // 0x291e68: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291e68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291e6c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291e70: 0x0  nop
    ctx->pc = 0x291e70u;
    // NOP
    // 0x291e74: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x291E74u;
    {
        const bool branch_taken_0x291e74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E74u;
        // 0x291e78: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291e74) {
            ctx->pc = 0x291F04u;
            goto label_291f04;
        }
    }
    ctx->pc = 0x291E7Cu;
    // 0x291e7c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x291e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291e80: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x291e80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x291e84: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291e84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291e88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291e88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291e8c: 0x0  nop
    ctx->pc = 0x291e8cu;
    // NOP
    // 0x291e90: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x291E90u;
    {
        const bool branch_taken_0x291e90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E90u;
        // 0x291e94: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291e90) {
            ctx->pc = 0x291F04u;
            goto label_291f04;
        }
    }
    ctx->pc = 0x291E98u;
    // 0x291e98: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291e98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291e9c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291e9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291ea0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x291EA0u;
    {
        const bool branch_taken_0x291ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291EA0u;
        // 0x291ea4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ea0) {
            ctx->pc = 0x291EFCu;
            goto label_291efc;
        }
    }
    ctx->pc = 0x291EA8u;
label_291ea8:
    // 0x291ea8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x291ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291eac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291eacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291eb0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291eb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291eb4: 0x0  nop
    ctx->pc = 0x291eb4u;
    // NOP
    // 0x291eb8: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x291EB8u;
    {
        const bool branch_taken_0x291eb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291EB8u;
        // 0x291ebc: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291eb8) {
            ctx->pc = 0x291F04u;
            goto label_291f04;
        }
    }
    ctx->pc = 0x291EC0u;
    // 0x291ec0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291ec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291ec4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291ec4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291ec8: 0x0  nop
    ctx->pc = 0x291ec8u;
    // NOP
    // 0x291ecc: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x291ECCu;
    {
        const bool branch_taken_0x291ecc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291ECCu;
        // 0x291ed0: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ecc) {
            ctx->pc = 0x291F04u;
            goto label_291f04;
        }
    }
    ctx->pc = 0x291ED4u;
    // 0x291ed4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x291ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291ed8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x291ed8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x291edc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291edcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291ee0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291ee0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291ee4: 0x0  nop
    ctx->pc = 0x291ee4u;
    // NOP
    // 0x291ee8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x291EE8u;
    {
        const bool branch_taken_0x291ee8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291EE8u;
        // 0x291eec: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ee8) {
            ctx->pc = 0x291F04u;
            goto label_291f04;
        }
    }
    ctx->pc = 0x291EF0u;
    // 0x291ef0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x291ef0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x291ef4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291ef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291ef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_291efc:
    // 0x291efc: 0x45010384  bc1t        . + 4 + (0x384 << 2)
    ctx->pc = 0x291EFCu;
    {
        const bool branch_taken_0x291efc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x291efc) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x291F04u;
label_291f04:
    // 0x291f04: 0x1091024  and         $v0, $t0, $t1
    ctx->pc = 0x291f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
label_291f08:
    // 0x291f08: 0x1440015f  bnez        $v0, . + 4 + (0x15F << 2)
    ctx->pc = 0x291F08u;
    {
        const bool branch_taken_0x291f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F08u;
        // 0x291f0c: 0x1491024  and         $v0, $t2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291f08) {
            ctx->pc = 0x292488u;
            goto label_292488;
        }
    }
    ctx->pc = 0x291F10u;
    // 0x291f10: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x291f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291f14: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x291f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x291f18: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x291f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291f1c: 0x46050181  sub.s       $f6, $f0, $f5
    ctx->pc = 0x291f1cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x291f20: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x291f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x291f24: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x291f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291f28: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x291f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x291f2c: 0x46040a01  sub.s       $f8, $f1, $f4
    ctx->pc = 0x291f2cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x291f30: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x291f30u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x291f34: 0x46030281  sub.s       $f10, $f0, $f3
    ctx->pc = 0x291f34u;
    ctx->f[10] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x291f38: 0xe7a80034  swc1        $f8, 0x34($sp)
    ctx->pc = 0x291f38u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x291f3c: 0xe7aa0038  swc1        $f10, 0x38($sp)
    ctx->pc = 0x291f3cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x291f40: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x291f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291f44: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x291f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291f48: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x291f48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x291f4c: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x291f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291f50: 0x460221c1  sub.s       $f7, $f4, $f2
    ctx->pc = 0x291f50u;
    ctx->f[7] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x291f54: 0x46011ac1  sub.s       $f11, $f3, $f1
    ctx->pc = 0x291f54u;
    ctx->f[11] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x291f58: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x291f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x291f5c: 0xe7a70044  swc1        $f7, 0x44($sp)
    ctx->pc = 0x291f5cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x291f60: 0xe7ab0048  swc1        $f11, 0x48($sp)
    ctx->pc = 0x291f60u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x291f64: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x291f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291f68: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x291f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291f6c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x291f6cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x291f70: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x291f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291f74: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x291f74u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x291f78: 0x46011881  sub.s       $f2, $f3, $f1
    ctx->pc = 0x291f78u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x291f7c: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x291f7cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x291f80: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x291f80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x291f84: 0x1091026  xor         $v0, $t0, $t1
    ctx->pc = 0x291f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 9));
    // 0x291f88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x291f88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x291f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x291f90: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x291F90u;
    {
        const bool branch_taken_0x291f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F90u;
        // 0x291f94: 0xe7a20058  swc1        $f2, 0x58($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291f90) {
            ctx->pc = 0x29204Cu;
            goto label_29204c;
        }
    }
    ctx->pc = 0x291F98u;
    // 0x291f98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x291f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291f9c: 0x460030c6  mov.s       $f3, $f6
    ctx->pc = 0x291f9cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[6]);
    // 0x291fa0: 0x46002a46  mov.s       $f9, $f5
    ctx->pc = 0x291fa0u;
    ctx->f[9] = FPU_MOV_S(ctx->f[5]);
    // 0x291fa4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x291fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291fa8: 0x0  nop
    ctx->pc = 0x291fa8u;
    // NOP
    // 0x291fac: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x291FACu;
    {
        const bool branch_taken_0x291fac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291FACu;
        // 0x291fb0: 0x46084842  mul.s       $f1, $f9, $f8 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291fac) {
            ctx->pc = 0x292000u;
            goto label_292000;
        }
    }
    ctx->pc = 0x291FB4u;
    // 0x291fb4: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x291fb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x291fb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291fb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291fbc: 0x0  nop
    ctx->pc = 0x291fbcu;
    // NOP
    // 0x291fc0: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x291FC0u;
    {
        const bool branch_taken_0x291fc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291FC0u;
        // 0x291fc4: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291fc0) {
            ctx->pc = 0x292050u;
            goto label_292050;
        }
    }
    ctx->pc = 0x291FC8u;
    // 0x291fc8: 0x46033802  mul.s       $f0, $f7, $f3
    ctx->pc = 0x291fc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x291fcc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291fccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291fd0: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x291FD0u;
    {
        const bool branch_taken_0x291fd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x291fd0) {
            ctx->pc = 0x292050u;
            goto label_292050;
        }
    }
    ctx->pc = 0x291FD8u;
    // 0x291fd8: 0x460a4842  mul.s       $f1, $f9, $f10
    ctx->pc = 0x291fd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
    // 0x291fdc: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x291fdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x291fe0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291fe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291fe4: 0x0  nop
    ctx->pc = 0x291fe4u;
    // NOP
    // 0x291fe8: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x291FE8u;
    {
        const bool branch_taken_0x291fe8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291FE8u;
        // 0x291fec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291fe8) {
            ctx->pc = 0x29204Cu;
            goto label_29204c;
        }
    }
    ctx->pc = 0x291FF0u;
    // 0x291ff0: 0x46035802  mul.s       $f0, $f11, $f3
    ctx->pc = 0x291ff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x291ff4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291ff8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x291FF8u;
    {
        const bool branch_taken_0x291ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291ff8) {
            ctx->pc = 0x292044u;
            goto label_292044;
        }
    }
    ctx->pc = 0x292000u;
label_292000:
    // 0x292000: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x292000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x292004: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292004u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292008: 0x0  nop
    ctx->pc = 0x292008u;
    // NOP
    // 0x29200c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x29200Cu;
    {
        const bool branch_taken_0x29200c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29200Cu;
        // 0x292010: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29200c) {
            ctx->pc = 0x292050u;
            goto label_292050;
        }
    }
    ctx->pc = 0x292014u;
    // 0x292014: 0x46063802  mul.s       $f0, $f7, $f6
    ctx->pc = 0x292014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x292018: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29201c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x29201Cu;
    {
        const bool branch_taken_0x29201c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29201c) {
            ctx->pc = 0x292050u;
            goto label_292050;
        }
    }
    ctx->pc = 0x292024u;
    // 0x292024: 0x460a2842  mul.s       $f1, $f5, $f10
    ctx->pc = 0x292024u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x292028: 0x46061002  mul.s       $f0, $f2, $f6
    ctx->pc = 0x292028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x29202c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29202cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292030: 0x0  nop
    ctx->pc = 0x292030u;
    // NOP
    // 0x292034: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x292034u;
    {
        const bool branch_taken_0x292034 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292034u;
        // 0x292038: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292034) {
            ctx->pc = 0x29204Cu;
            goto label_29204c;
        }
    }
    ctx->pc = 0x29203Cu;
    // 0x29203c: 0x46065802  mul.s       $f0, $f11, $f6
    ctx->pc = 0x29203cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x292040: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_292044:
    // 0x292044: 0x45010332  bc1t        . + 4 + (0x332 << 2)
    ctx->pc = 0x292044u;
    {
        const bool branch_taken_0x292044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x292044) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x29204Cu;
label_29204c:
    // 0x29204c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x29204cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_292050:
    // 0x292050: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x292050u;
    {
        const bool branch_taken_0x292050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292050u;
        // 0x292054: 0xc7a20030  lwc1        $f2, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292050) {
            ctx->pc = 0x292124u;
            goto label_292124;
        }
    }
    ctx->pc = 0x292058u;
    // 0x292058: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x292058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29205c: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x29205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x292060: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x292060u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292064: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x292064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292068: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x292068u;
    {
        const bool branch_taken_0x292068 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292068u;
        // 0x29206c: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292068) {
            ctx->pc = 0x2920C8u;
            goto label_2920c8;
        }
    }
    ctx->pc = 0x292070u;
    // 0x292070: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x292070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292074: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292078: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29207c: 0x0  nop
    ctx->pc = 0x29207cu;
    // NOP
    // 0x292080: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x292080u;
    {
        const bool branch_taken_0x292080 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292080u;
        // 0x292084: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292080) {
            ctx->pc = 0x292124u;
            goto label_292124;
        }
    }
    ctx->pc = 0x292088u;
    // 0x292088: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29208c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29208cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292090: 0x0  nop
    ctx->pc = 0x292090u;
    // NOP
    // 0x292094: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x292094u;
    {
        const bool branch_taken_0x292094 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292094u;
        // 0x292098: 0xc7a10038  lwc1        $f1, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292094) {
            ctx->pc = 0x292124u;
            goto label_292124;
        }
    }
    ctx->pc = 0x29209Cu;
    // 0x29209c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x29209cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2920a0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2920a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2920a4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2920a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2920a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2920a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2920ac: 0x0  nop
    ctx->pc = 0x2920acu;
    // NOP
    // 0x2920b0: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x2920B0u;
    {
        const bool branch_taken_0x2920b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2920B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2920B0u;
        // 0x2920b4: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2920b0) {
            ctx->pc = 0x292124u;
            goto label_292124;
        }
    }
    ctx->pc = 0x2920B8u;
    // 0x2920b8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2920b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2920bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2920bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2920c0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2920C0u;
    {
        const bool branch_taken_0x2920c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2920C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2920C0u;
        // 0x2920c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2920c0) {
            ctx->pc = 0x29211Cu;
            goto label_29211c;
        }
    }
    ctx->pc = 0x2920C8u;
label_2920c8:
    // 0x2920c8: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2920c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2920cc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2920ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2920d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2920d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2920d4: 0x0  nop
    ctx->pc = 0x2920d4u;
    // NOP
    // 0x2920d8: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2920D8u;
    {
        const bool branch_taken_0x2920d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2920DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2920D8u;
        // 0x2920dc: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2920d8) {
            ctx->pc = 0x292124u;
            goto label_292124;
        }
    }
    ctx->pc = 0x2920E0u;
    // 0x2920e0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2920e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2920e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2920e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2920e8: 0x0  nop
    ctx->pc = 0x2920e8u;
    // NOP
    // 0x2920ec: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2920ECu;
    {
        const bool branch_taken_0x2920ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2920F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2920ECu;
        // 0x2920f0: 0xc7a10038  lwc1        $f1, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2920ec) {
            ctx->pc = 0x292124u;
            goto label_292124;
        }
    }
    ctx->pc = 0x2920F4u;
    // 0x2920f4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2920f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2920f8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2920f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2920fc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2920fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292100: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292104: 0x0  nop
    ctx->pc = 0x292104u;
    // NOP
    // 0x292108: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x292108u;
    {
        const bool branch_taken_0x292108 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292108u;
        // 0x29210c: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292108) {
            ctx->pc = 0x292124u;
            goto label_292124;
        }
    }
    ctx->pc = 0x292110u;
    // 0x292110: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292114: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29211c:
    // 0x29211c: 0x450102fc  bc1t        . + 4 + (0x2FC << 2)
    ctx->pc = 0x29211Cu;
    {
        const bool branch_taken_0x29211c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29211c) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x292124u;
label_292124:
    // 0x292124: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x292124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x292128: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x292128u;
    {
        const bool branch_taken_0x292128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292128u;
        // 0x29212c: 0xc7a20034  lwc1        $f2, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292128) {
            ctx->pc = 0x2921FCu;
            goto label_2921fc;
        }
    }
    ctx->pc = 0x292130u;
    // 0x292130: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x292130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x292134: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x292134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x292138: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x292138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29213c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x29213cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292140: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x292140u;
    {
        const bool branch_taken_0x292140 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292140u;
        // 0x292144: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292140) {
            ctx->pc = 0x2921A0u;
            goto label_2921a0;
        }
    }
    ctx->pc = 0x292148u;
    // 0x292148: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x292148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29214c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29214cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292150: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292154: 0x0  nop
    ctx->pc = 0x292154u;
    // NOP
    // 0x292158: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x292158u;
    {
        const bool branch_taken_0x292158 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292158u;
        // 0x29215c: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292158) {
            ctx->pc = 0x2921FCu;
            goto label_2921fc;
        }
    }
    ctx->pc = 0x292160u;
    // 0x292160: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292160u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292164: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292168: 0x0  nop
    ctx->pc = 0x292168u;
    // NOP
    // 0x29216c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x29216Cu;
    {
        const bool branch_taken_0x29216c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29216Cu;
        // 0x292170: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29216c) {
            ctx->pc = 0x2921FCu;
            goto label_2921fc;
        }
    }
    ctx->pc = 0x292174u;
    // 0x292174: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x292174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292178: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x292178u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x29217c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29217cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292180: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292184: 0x0  nop
    ctx->pc = 0x292184u;
    // NOP
    // 0x292188: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x292188u;
    {
        const bool branch_taken_0x292188 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292188u;
        // 0x29218c: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292188) {
            ctx->pc = 0x2921FCu;
            goto label_2921fc;
        }
    }
    ctx->pc = 0x292190u;
    // 0x292190: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292194: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292198: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x292198u;
    {
        const bool branch_taken_0x292198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292198u;
        // 0x29219c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292198) {
            ctx->pc = 0x2921F4u;
            goto label_2921f4;
        }
    }
    ctx->pc = 0x2921A0u;
label_2921a0:
    // 0x2921a0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2921a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2921a4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2921a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2921a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2921a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2921ac: 0x0  nop
    ctx->pc = 0x2921acu;
    // NOP
    // 0x2921b0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2921B0u;
    {
        const bool branch_taken_0x2921b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2921B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2921B0u;
        // 0x2921b4: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2921b0) {
            ctx->pc = 0x2921FCu;
            goto label_2921fc;
        }
    }
    ctx->pc = 0x2921B8u;
    // 0x2921b8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2921b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2921bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2921bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2921c0: 0x0  nop
    ctx->pc = 0x2921c0u;
    // NOP
    // 0x2921c4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2921C4u;
    {
        const bool branch_taken_0x2921c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2921C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2921C4u;
        // 0x2921c8: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2921c4) {
            ctx->pc = 0x2921FCu;
            goto label_2921fc;
        }
    }
    ctx->pc = 0x2921CCu;
    // 0x2921cc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2921ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2921d0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2921d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2921d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2921d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2921d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2921d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2921dc: 0x0  nop
    ctx->pc = 0x2921dcu;
    // NOP
    // 0x2921e0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2921E0u;
    {
        const bool branch_taken_0x2921e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2921E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2921E0u;
        // 0x2921e4: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2921e0) {
            ctx->pc = 0x2921FCu;
            goto label_2921fc;
        }
    }
    ctx->pc = 0x2921E8u;
    // 0x2921e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2921e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2921ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2921ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2921f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2921f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2921f4:
    // 0x2921f4: 0x450102c6  bc1t        . + 4 + (0x2C6 << 2)
    ctx->pc = 0x2921F4u;
    {
        const bool branch_taken_0x2921f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2921f4) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x2921FCu;
label_2921fc:
    // 0x2921fc: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2921fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x292200: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x292200u;
    {
        const bool branch_taken_0x292200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292200u;
        // 0x292204: 0xc7a20034  lwc1        $f2, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292200) {
            ctx->pc = 0x2922D4u;
            goto label_2922d4;
        }
    }
    ctx->pc = 0x292208u;
    // 0x292208: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x292208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29220c: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x29220cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x292210: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x292210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292214: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x292214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292218: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x292218u;
    {
        const bool branch_taken_0x292218 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292218u;
        // 0x29221c: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292218) {
            ctx->pc = 0x292278u;
            goto label_292278;
        }
    }
    ctx->pc = 0x292220u;
    // 0x292220: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x292220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292224: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292228: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29222c: 0x0  nop
    ctx->pc = 0x29222cu;
    // NOP
    // 0x292230: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x292230u;
    {
        const bool branch_taken_0x292230 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292230u;
        // 0x292234: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292230) {
            ctx->pc = 0x2922D4u;
            goto label_2922d4;
        }
    }
    ctx->pc = 0x292238u;
    // 0x292238: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29223c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29223cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292240: 0x0  nop
    ctx->pc = 0x292240u;
    // NOP
    // 0x292244: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x292244u;
    {
        const bool branch_taken_0x292244 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292244u;
        // 0x292248: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292244) {
            ctx->pc = 0x2922D4u;
            goto label_2922d4;
        }
    }
    ctx->pc = 0x29224Cu;
    // 0x29224c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x29224cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292250: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x292250u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x292254: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292258: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29225c: 0x0  nop
    ctx->pc = 0x29225cu;
    // NOP
    // 0x292260: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x292260u;
    {
        const bool branch_taken_0x292260 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292260u;
        // 0x292264: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292260) {
            ctx->pc = 0x2922D4u;
            goto label_2922d4;
        }
    }
    ctx->pc = 0x292268u;
    // 0x292268: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29226c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29226cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292270: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x292270u;
    {
        const bool branch_taken_0x292270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292270u;
        // 0x292274: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292270) {
            ctx->pc = 0x2922CCu;
            goto label_2922cc;
        }
    }
    ctx->pc = 0x292278u;
label_292278:
    // 0x292278: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x292278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29227c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29227cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292280: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292280u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292284: 0x0  nop
    ctx->pc = 0x292284u;
    // NOP
    // 0x292288: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x292288u;
    {
        const bool branch_taken_0x292288 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292288u;
        // 0x29228c: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292288) {
            ctx->pc = 0x2922D4u;
            goto label_2922d4;
        }
    }
    ctx->pc = 0x292290u;
    // 0x292290: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292294: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292298: 0x0  nop
    ctx->pc = 0x292298u;
    // NOP
    // 0x29229c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x29229Cu;
    {
        const bool branch_taken_0x29229c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2922A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29229Cu;
        // 0x2922a0: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29229c) {
            ctx->pc = 0x2922D4u;
            goto label_2922d4;
        }
    }
    ctx->pc = 0x2922A4u;
    // 0x2922a4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2922a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2922a8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2922a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2922ac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2922acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2922b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2922b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2922b4: 0x0  nop
    ctx->pc = 0x2922b4u;
    // NOP
    // 0x2922b8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2922B8u;
    {
        const bool branch_taken_0x2922b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2922BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2922B8u;
        // 0x2922bc: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2922b8) {
            ctx->pc = 0x2922D4u;
            goto label_2922d4;
        }
    }
    ctx->pc = 0x2922C0u;
    // 0x2922c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2922c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2922c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2922c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2922c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2922c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2922cc:
    // 0x2922cc: 0x45010290  bc1t        . + 4 + (0x290 << 2)
    ctx->pc = 0x2922CCu;
    {
        const bool branch_taken_0x2922cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2922cc) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x2922D4u;
label_2922d4:
    // 0x2922d4: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2922d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2922d8: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2922D8u;
    {
        const bool branch_taken_0x2922d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2922DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2922D8u;
        // 0x2922dc: 0xc7a20038  lwc1        $f2, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2922d8) {
            ctx->pc = 0x2923ACu;
            goto label_2923ac;
        }
    }
    ctx->pc = 0x2922E0u;
    // 0x2922e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2922e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2922e4: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x2922e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2922e8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2922e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2922ec: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2922ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2922f0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x2922F0u;
    {
        const bool branch_taken_0x2922f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2922F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2922F0u;
        // 0x2922f4: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2922f0) {
            ctx->pc = 0x292350u;
            goto label_292350;
        }
    }
    ctx->pc = 0x2922F8u;
    // 0x2922f8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2922f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2922fc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2922fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292300: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292304: 0x0  nop
    ctx->pc = 0x292304u;
    // NOP
    // 0x292308: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x292308u;
    {
        const bool branch_taken_0x292308 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292308u;
        // 0x29230c: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292308) {
            ctx->pc = 0x2923ACu;
            goto label_2923ac;
        }
    }
    ctx->pc = 0x292310u;
    // 0x292310: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292314: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292314u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292318: 0x0  nop
    ctx->pc = 0x292318u;
    // NOP
    // 0x29231c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x29231Cu;
    {
        const bool branch_taken_0x29231c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29231Cu;
        // 0x292320: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29231c) {
            ctx->pc = 0x2923ACu;
            goto label_2923ac;
        }
    }
    ctx->pc = 0x292324u;
    // 0x292324: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x292324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292328: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x292328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x29232c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29232cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292330: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292330u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292334: 0x0  nop
    ctx->pc = 0x292334u;
    // NOP
    // 0x292338: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x292338u;
    {
        const bool branch_taken_0x292338 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292338u;
        // 0x29233c: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292338) {
            ctx->pc = 0x2923ACu;
            goto label_2923ac;
        }
    }
    ctx->pc = 0x292340u;
    // 0x292340: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292344: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292348: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x292348u;
    {
        const bool branch_taken_0x292348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292348u;
        // 0x29234c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292348) {
            ctx->pc = 0x2923A4u;
            goto label_2923a4;
        }
    }
    ctx->pc = 0x292350u;
label_292350:
    // 0x292350: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x292350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292354: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292354u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292358: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29235c: 0x0  nop
    ctx->pc = 0x29235cu;
    // NOP
    // 0x292360: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x292360u;
    {
        const bool branch_taken_0x292360 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292360u;
        // 0x292364: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292360) {
            ctx->pc = 0x2923ACu;
            goto label_2923ac;
        }
    }
    ctx->pc = 0x292368u;
    // 0x292368: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292368u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29236c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29236cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292370: 0x0  nop
    ctx->pc = 0x292370u;
    // NOP
    // 0x292374: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x292374u;
    {
        const bool branch_taken_0x292374 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292374u;
        // 0x292378: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292374) {
            ctx->pc = 0x2923ACu;
            goto label_2923ac;
        }
    }
    ctx->pc = 0x29237Cu;
    // 0x29237c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x29237cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292380: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x292380u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x292384: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292388: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29238c: 0x0  nop
    ctx->pc = 0x29238cu;
    // NOP
    // 0x292390: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x292390u;
    {
        const bool branch_taken_0x292390 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292390u;
        // 0x292394: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292390) {
            ctx->pc = 0x2923ACu;
            goto label_2923ac;
        }
    }
    ctx->pc = 0x292398u;
    // 0x292398: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292398u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29239c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29239cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2923a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2923a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2923a4:
    // 0x2923a4: 0x4501025a  bc1t        . + 4 + (0x25A << 2)
    ctx->pc = 0x2923A4u;
    {
        const bool branch_taken_0x2923a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2923a4) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x2923ACu;
label_2923ac:
    // 0x2923ac: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x2923acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2923b0: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2923B0u;
    {
        const bool branch_taken_0x2923b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2923B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2923B0u;
        // 0x2923b4: 0xc7a20038  lwc1        $f2, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2923b0) {
            ctx->pc = 0x292484u;
            goto label_292484;
        }
    }
    ctx->pc = 0x2923B8u;
    // 0x2923b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2923b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2923bc: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x2923bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2923c0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2923c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2923c4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2923c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2923c8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x2923C8u;
    {
        const bool branch_taken_0x2923c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2923CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2923C8u;
        // 0x2923cc: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2923c8) {
            ctx->pc = 0x292428u;
            goto label_292428;
        }
    }
    ctx->pc = 0x2923D0u;
    // 0x2923d0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2923d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2923d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2923d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2923d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2923d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2923dc: 0x0  nop
    ctx->pc = 0x2923dcu;
    // NOP
    // 0x2923e0: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x2923E0u;
    {
        const bool branch_taken_0x2923e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2923E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2923E0u;
        // 0x2923e4: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2923e0) {
            ctx->pc = 0x292484u;
            goto label_292484;
        }
    }
    ctx->pc = 0x2923E8u;
    // 0x2923e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2923e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2923ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2923ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2923f0: 0x0  nop
    ctx->pc = 0x2923f0u;
    // NOP
    // 0x2923f4: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x2923F4u;
    {
        const bool branch_taken_0x2923f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2923F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2923F4u;
        // 0x2923f8: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2923f4) {
            ctx->pc = 0x292484u;
            goto label_292484;
        }
    }
    ctx->pc = 0x2923FCu;
    // 0x2923fc: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2923fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292400: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x292400u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x292404: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292408: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29240c: 0x0  nop
    ctx->pc = 0x29240cu;
    // NOP
    // 0x292410: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x292410u;
    {
        const bool branch_taken_0x292410 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292410u;
        // 0x292414: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292410) {
            ctx->pc = 0x292484u;
            goto label_292484;
        }
    }
    ctx->pc = 0x292418u;
    // 0x292418: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29241c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29241cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292420: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x292420u;
    {
        const bool branch_taken_0x292420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292420u;
        // 0x292424: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292420) {
            ctx->pc = 0x29247Cu;
            goto label_29247c;
        }
    }
    ctx->pc = 0x292428u;
label_292428:
    // 0x292428: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x292428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29242c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29242cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292430: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292434: 0x0  nop
    ctx->pc = 0x292434u;
    // NOP
    // 0x292438: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x292438u;
    {
        const bool branch_taken_0x292438 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292438u;
        // 0x29243c: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292438) {
            ctx->pc = 0x292484u;
            goto label_292484;
        }
    }
    ctx->pc = 0x292440u;
    // 0x292440: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292444: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292444u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292448: 0x0  nop
    ctx->pc = 0x292448u;
    // NOP
    // 0x29244c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x29244Cu;
    {
        const bool branch_taken_0x29244c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29244Cu;
        // 0x292450: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29244c) {
            ctx->pc = 0x292484u;
            goto label_292484;
        }
    }
    ctx->pc = 0x292454u;
    // 0x292454: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x292454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292458: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x292458u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x29245c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29245cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292460: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292460u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292464: 0x0  nop
    ctx->pc = 0x292464u;
    // NOP
    // 0x292468: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x292468u;
    {
        const bool branch_taken_0x292468 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292468u;
        // 0x29246c: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292468) {
            ctx->pc = 0x292484u;
            goto label_292484;
        }
    }
    ctx->pc = 0x292470u;
    // 0x292470: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292474: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292474u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292478: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29247c:
    // 0x29247c: 0x45010224  bc1t        . + 4 + (0x224 << 2)
    ctx->pc = 0x29247Cu;
    {
        const bool branch_taken_0x29247c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29247c) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x292484u;
label_292484:
    // 0x292484: 0x1491024  and         $v0, $t2, $t1
    ctx->pc = 0x292484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
label_292488:
    // 0x292488: 0x5440015f  bnel        $v0, $zero, . + 4 + (0x15F << 2)
    ctx->pc = 0x292488u;
    {
        const bool branch_taken_0x292488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292488) {
            ctx->pc = 0x29248Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292488u;
            // 0x29248c: 0xc4c60008  lwc1        $f6, 0x8($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x292A08u;
            goto label_292a08;
        }
    }
    ctx->pc = 0x292490u;
    // 0x292490: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x292490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292494: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x292494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x292498: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x292498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29249c: 0x46050181  sub.s       $f6, $f0, $f5
    ctx->pc = 0x29249cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2924a0: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x2924a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2924a4: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2924a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2924a8: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x2924a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2924ac: 0x46040a01  sub.s       $f8, $f1, $f4
    ctx->pc = 0x2924acu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2924b0: 0xe7a60060  swc1        $f6, 0x60($sp)
    ctx->pc = 0x2924b0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2924b4: 0x46030281  sub.s       $f10, $f0, $f3
    ctx->pc = 0x2924b4u;
    ctx->f[10] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2924b8: 0xe7a80064  swc1        $f8, 0x64($sp)
    ctx->pc = 0x2924b8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2924bc: 0xe7aa0068  swc1        $f10, 0x68($sp)
    ctx->pc = 0x2924bcu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2924c0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2924c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2924c4: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x2924c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2924c8: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x2924c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2924cc: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x2924ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2924d0: 0x460221c1  sub.s       $f7, $f4, $f2
    ctx->pc = 0x2924d0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2924d4: 0x46011ac1  sub.s       $f11, $f3, $f1
    ctx->pc = 0x2924d4u;
    ctx->f[11] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2924d8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2924d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2924dc: 0xe7a70074  swc1        $f7, 0x74($sp)
    ctx->pc = 0x2924dcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2924e0: 0xe7ab0078  swc1        $f11, 0x78($sp)
    ctx->pc = 0x2924e0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2924e4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2924e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2924e8: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2924e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2924ec: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2924ecu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2924f0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2924f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2924f4: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x2924f4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2924f8: 0x46011881  sub.s       $f2, $f3, $f1
    ctx->pc = 0x2924f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2924fc: 0xe7a50080  swc1        $f5, 0x80($sp)
    ctx->pc = 0x2924fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x292500: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x292500u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x292504: 0x1491026  xor         $v0, $t2, $t1
    ctx->pc = 0x292504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 9));
    // 0x292508: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x292508u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29250c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29250cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x292510: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x292510u;
    {
        const bool branch_taken_0x292510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292510u;
        // 0x292514: 0xe7a20088  swc1        $f2, 0x88($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292510) {
            ctx->pc = 0x2925CCu;
            goto label_2925cc;
        }
    }
    ctx->pc = 0x292518u;
    // 0x292518: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x292518u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29251c: 0x460030c6  mov.s       $f3, $f6
    ctx->pc = 0x29251cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[6]);
    // 0x292520: 0x46002a46  mov.s       $f9, $f5
    ctx->pc = 0x292520u;
    ctx->f[9] = FPU_MOV_S(ctx->f[5]);
    // 0x292524: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x292524u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292528: 0x0  nop
    ctx->pc = 0x292528u;
    // NOP
    // 0x29252c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x29252Cu;
    {
        const bool branch_taken_0x29252c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29252Cu;
        // 0x292530: 0x46084842  mul.s       $f1, $f9, $f8 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29252c) {
            ctx->pc = 0x292580u;
            goto label_292580;
        }
    }
    ctx->pc = 0x292534u;
    // 0x292534: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x292534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x292538: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29253c: 0x0  nop
    ctx->pc = 0x29253cu;
    // NOP
    // 0x292540: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x292540u;
    {
        const bool branch_taken_0x292540 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292540u;
        // 0x292544: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292540) {
            ctx->pc = 0x2925D0u;
            goto label_2925d0;
        }
    }
    ctx->pc = 0x292548u;
    // 0x292548: 0x46033802  mul.s       $f0, $f7, $f3
    ctx->pc = 0x292548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x29254c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29254cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292550: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x292550u;
    {
        const bool branch_taken_0x292550 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x292550) {
            ctx->pc = 0x2925D0u;
            goto label_2925d0;
        }
    }
    ctx->pc = 0x292558u;
    // 0x292558: 0x460a4842  mul.s       $f1, $f9, $f10
    ctx->pc = 0x292558u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
    // 0x29255c: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x29255cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x292560: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292564: 0x0  nop
    ctx->pc = 0x292564u;
    // NOP
    // 0x292568: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x292568u;
    {
        const bool branch_taken_0x292568 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292568u;
        // 0x29256c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292568) {
            ctx->pc = 0x2925CCu;
            goto label_2925cc;
        }
    }
    ctx->pc = 0x292570u;
    // 0x292570: 0x46035802  mul.s       $f0, $f11, $f3
    ctx->pc = 0x292570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x292574: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292574u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292578: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x292578u;
    {
        const bool branch_taken_0x292578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292578) {
            ctx->pc = 0x2925C4u;
            goto label_2925c4;
        }
    }
    ctx->pc = 0x292580u;
label_292580:
    // 0x292580: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x292580u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x292584: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292588: 0x0  nop
    ctx->pc = 0x292588u;
    // NOP
    // 0x29258c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x29258Cu;
    {
        const bool branch_taken_0x29258c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29258Cu;
        // 0x292590: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29258c) {
            ctx->pc = 0x2925D0u;
            goto label_2925d0;
        }
    }
    ctx->pc = 0x292594u;
    // 0x292594: 0x46063802  mul.s       $f0, $f7, $f6
    ctx->pc = 0x292594u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x292598: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29259c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x29259Cu;
    {
        const bool branch_taken_0x29259c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29259c) {
            ctx->pc = 0x2925D0u;
            goto label_2925d0;
        }
    }
    ctx->pc = 0x2925A4u;
    // 0x2925a4: 0x460a2842  mul.s       $f1, $f5, $f10
    ctx->pc = 0x2925a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x2925a8: 0x46061002  mul.s       $f0, $f2, $f6
    ctx->pc = 0x2925a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2925ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2925acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2925b0: 0x0  nop
    ctx->pc = 0x2925b0u;
    // NOP
    // 0x2925b4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2925B4u;
    {
        const bool branch_taken_0x2925b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2925B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2925B4u;
        // 0x2925b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2925b4) {
            ctx->pc = 0x2925CCu;
            goto label_2925cc;
        }
    }
    ctx->pc = 0x2925BCu;
    // 0x2925bc: 0x46065802  mul.s       $f0, $f11, $f6
    ctx->pc = 0x2925bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x2925c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2925c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2925c4:
    // 0x2925c4: 0x450101d2  bc1t        . + 4 + (0x1D2 << 2)
    ctx->pc = 0x2925C4u;
    {
        const bool branch_taken_0x2925c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2925c4) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x2925CCu;
label_2925cc:
    // 0x2925cc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2925ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2925d0:
    // 0x2925d0: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2925D0u;
    {
        const bool branch_taken_0x2925d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2925D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2925D0u;
        // 0x2925d4: 0xc7a20060  lwc1        $f2, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2925d0) {
            ctx->pc = 0x2926A4u;
            goto label_2926a4;
        }
    }
    ctx->pc = 0x2925D8u;
    // 0x2925d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2925d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2925dc: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x2925dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2925e0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2925e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2925e4: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2925e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2925e8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x2925E8u;
    {
        const bool branch_taken_0x2925e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2925ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2925E8u;
        // 0x2925ec: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2925e8) {
            ctx->pc = 0x292648u;
            goto label_292648;
        }
    }
    ctx->pc = 0x2925F0u;
    // 0x2925f0: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2925f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2925f4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2925f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2925f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2925f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2925fc: 0x0  nop
    ctx->pc = 0x2925fcu;
    // NOP
    // 0x292600: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x292600u;
    {
        const bool branch_taken_0x292600 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292600u;
        // 0x292604: 0xc7a00074  lwc1        $f0, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292600) {
            ctx->pc = 0x2926A4u;
            goto label_2926a4;
        }
    }
    ctx->pc = 0x292608u;
    // 0x292608: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292608u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29260c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29260cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292610: 0x0  nop
    ctx->pc = 0x292610u;
    // NOP
    // 0x292614: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x292614u;
    {
        const bool branch_taken_0x292614 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292614u;
        // 0x292618: 0xc7a10068  lwc1        $f1, 0x68($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292614) {
            ctx->pc = 0x2926A4u;
            goto label_2926a4;
        }
    }
    ctx->pc = 0x29261Cu;
    // 0x29261c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x29261cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292620: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x292620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x292624: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292628: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292628u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29262c: 0x0  nop
    ctx->pc = 0x29262cu;
    // NOP
    // 0x292630: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x292630u;
    {
        const bool branch_taken_0x292630 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292630u;
        // 0x292634: 0xc7a00078  lwc1        $f0, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292630) {
            ctx->pc = 0x2926A4u;
            goto label_2926a4;
        }
    }
    ctx->pc = 0x292638u;
    // 0x292638: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29263c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29263cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292640: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x292640u;
    {
        const bool branch_taken_0x292640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292640u;
        // 0x292644: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292640) {
            ctx->pc = 0x29269Cu;
            goto label_29269c;
        }
    }
    ctx->pc = 0x292648u;
label_292648:
    // 0x292648: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x292648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29264c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29264cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292650: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292654: 0x0  nop
    ctx->pc = 0x292654u;
    // NOP
    // 0x292658: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x292658u;
    {
        const bool branch_taken_0x292658 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292658u;
        // 0x29265c: 0xc7a00074  lwc1        $f0, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292658) {
            ctx->pc = 0x2926A4u;
            goto label_2926a4;
        }
    }
    ctx->pc = 0x292660u;
    // 0x292660: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292664: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292668: 0x0  nop
    ctx->pc = 0x292668u;
    // NOP
    // 0x29266c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x29266Cu;
    {
        const bool branch_taken_0x29266c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29266Cu;
        // 0x292670: 0xc7a10068  lwc1        $f1, 0x68($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29266c) {
            ctx->pc = 0x2926A4u;
            goto label_2926a4;
        }
    }
    ctx->pc = 0x292674u;
    // 0x292674: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x292674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292678: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x292678u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x29267c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29267cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292680: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292684: 0x0  nop
    ctx->pc = 0x292684u;
    // NOP
    // 0x292688: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x292688u;
    {
        const bool branch_taken_0x292688 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292688u;
        // 0x29268c: 0xc7a00078  lwc1        $f0, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292688) {
            ctx->pc = 0x2926A4u;
            goto label_2926a4;
        }
    }
    ctx->pc = 0x292690u;
    // 0x292690: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292690u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292694: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292698: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29269c:
    // 0x29269c: 0x4501019c  bc1t        . + 4 + (0x19C << 2)
    ctx->pc = 0x29269Cu;
    {
        const bool branch_taken_0x29269c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29269c) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x2926A4u;
label_2926a4:
    // 0x2926a4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2926a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2926a8: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2926A8u;
    {
        const bool branch_taken_0x2926a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2926ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926A8u;
        // 0x2926ac: 0xc7a20064  lwc1        $f2, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2926a8) {
            ctx->pc = 0x29277Cu;
            goto label_29277c;
        }
    }
    ctx->pc = 0x2926B0u;
    // 0x2926b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2926b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2926b4: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x2926b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2926b8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2926b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2926bc: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2926bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2926c0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x2926C0u;
    {
        const bool branch_taken_0x2926c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2926C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926C0u;
        // 0x2926c4: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2926c0) {
            ctx->pc = 0x292720u;
            goto label_292720;
        }
    }
    ctx->pc = 0x2926C8u;
    // 0x2926c8: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2926c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2926cc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2926ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2926d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2926d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2926d4: 0x0  nop
    ctx->pc = 0x2926d4u;
    // NOP
    // 0x2926d8: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x2926D8u;
    {
        const bool branch_taken_0x2926d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2926DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926D8u;
        // 0x2926dc: 0xc7a00078  lwc1        $f0, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2926d8) {
            ctx->pc = 0x29277Cu;
            goto label_29277c;
        }
    }
    ctx->pc = 0x2926E0u;
    // 0x2926e0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2926e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2926e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2926e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2926e8: 0x0  nop
    ctx->pc = 0x2926e8u;
    // NOP
    // 0x2926ec: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x2926ECu;
    {
        const bool branch_taken_0x2926ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2926F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926ECu;
        // 0x2926f0: 0xc7a10060  lwc1        $f1, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2926ec) {
            ctx->pc = 0x29277Cu;
            goto label_29277c;
        }
    }
    ctx->pc = 0x2926F4u;
    // 0x2926f4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2926f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2926f8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2926f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2926fc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2926fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292700: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292704: 0x0  nop
    ctx->pc = 0x292704u;
    // NOP
    // 0x292708: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x292708u;
    {
        const bool branch_taken_0x292708 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292708u;
        // 0x29270c: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292708) {
            ctx->pc = 0x29277Cu;
            goto label_29277c;
        }
    }
    ctx->pc = 0x292710u;
    // 0x292710: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292714: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292718: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x292718u;
    {
        const bool branch_taken_0x292718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292718u;
        // 0x29271c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292718) {
            ctx->pc = 0x292774u;
            goto label_292774;
        }
    }
    ctx->pc = 0x292720u;
label_292720:
    // 0x292720: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x292720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292724: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292728: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29272c: 0x0  nop
    ctx->pc = 0x29272cu;
    // NOP
    // 0x292730: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x292730u;
    {
        const bool branch_taken_0x292730 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292730u;
        // 0x292734: 0xc7a00078  lwc1        $f0, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292730) {
            ctx->pc = 0x29277Cu;
            goto label_29277c;
        }
    }
    ctx->pc = 0x292738u;
    // 0x292738: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29273c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29273cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292740: 0x0  nop
    ctx->pc = 0x292740u;
    // NOP
    // 0x292744: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x292744u;
    {
        const bool branch_taken_0x292744 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292744u;
        // 0x292748: 0xc7a10060  lwc1        $f1, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292744) {
            ctx->pc = 0x29277Cu;
            goto label_29277c;
        }
    }
    ctx->pc = 0x29274Cu;
    // 0x29274c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x29274cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292750: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x292750u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x292754: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292758: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29275c: 0x0  nop
    ctx->pc = 0x29275cu;
    // NOP
    // 0x292760: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x292760u;
    {
        const bool branch_taken_0x292760 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292760u;
        // 0x292764: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292760) {
            ctx->pc = 0x29277Cu;
            goto label_29277c;
        }
    }
    ctx->pc = 0x292768u;
    // 0x292768: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29276c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29276cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_292774:
    // 0x292774: 0x45010166  bc1t        . + 4 + (0x166 << 2)
    ctx->pc = 0x292774u;
    {
        const bool branch_taken_0x292774 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x292774) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x29277Cu;
label_29277c:
    // 0x29277c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x29277cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x292780: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x292780u;
    {
        const bool branch_taken_0x292780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292780u;
        // 0x292784: 0xc7a20064  lwc1        $f2, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292780) {
            ctx->pc = 0x292854u;
            goto label_292854;
        }
    }
    ctx->pc = 0x292788u;
    // 0x292788: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x292788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29278c: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x29278cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x292790: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x292790u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292794: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x292794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292798: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x292798u;
    {
        const bool branch_taken_0x292798 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292798u;
        // 0x29279c: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292798) {
            ctx->pc = 0x2927F8u;
            goto label_2927f8;
        }
    }
    ctx->pc = 0x2927A0u;
    // 0x2927a0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2927a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2927a4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2927a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2927a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2927a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2927ac: 0x0  nop
    ctx->pc = 0x2927acu;
    // NOP
    // 0x2927b0: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x2927B0u;
    {
        const bool branch_taken_0x2927b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2927B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2927B0u;
        // 0x2927b4: 0xc7a00078  lwc1        $f0, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2927b0) {
            ctx->pc = 0x292854u;
            goto label_292854;
        }
    }
    ctx->pc = 0x2927B8u;
    // 0x2927b8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2927b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2927bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2927bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2927c0: 0x0  nop
    ctx->pc = 0x2927c0u;
    // NOP
    // 0x2927c4: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x2927C4u;
    {
        const bool branch_taken_0x2927c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2927C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2927C4u;
        // 0x2927c8: 0xc7a10060  lwc1        $f1, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2927c4) {
            ctx->pc = 0x292854u;
            goto label_292854;
        }
    }
    ctx->pc = 0x2927CCu;
    // 0x2927cc: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2927ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2927d0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2927d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2927d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2927d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2927d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2927d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2927dc: 0x0  nop
    ctx->pc = 0x2927dcu;
    // NOP
    // 0x2927e0: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x2927E0u;
    {
        const bool branch_taken_0x2927e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2927E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2927E0u;
        // 0x2927e4: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2927e0) {
            ctx->pc = 0x292854u;
            goto label_292854;
        }
    }
    ctx->pc = 0x2927E8u;
    // 0x2927e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2927e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2927ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2927ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2927f0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2927F0u;
    {
        const bool branch_taken_0x2927f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2927F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2927F0u;
        // 0x2927f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2927f0) {
            ctx->pc = 0x29284Cu;
            goto label_29284c;
        }
    }
    ctx->pc = 0x2927F8u;
label_2927f8:
    // 0x2927f8: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2927f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2927fc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2927fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292800: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292804: 0x0  nop
    ctx->pc = 0x292804u;
    // NOP
    // 0x292808: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x292808u;
    {
        const bool branch_taken_0x292808 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292808u;
        // 0x29280c: 0xc7a00078  lwc1        $f0, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292808) {
            ctx->pc = 0x292854u;
            goto label_292854;
        }
    }
    ctx->pc = 0x292810u;
    // 0x292810: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292814: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292818: 0x0  nop
    ctx->pc = 0x292818u;
    // NOP
    // 0x29281c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x29281Cu;
    {
        const bool branch_taken_0x29281c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29281Cu;
        // 0x292820: 0xc7a10060  lwc1        $f1, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29281c) {
            ctx->pc = 0x292854u;
            goto label_292854;
        }
    }
    ctx->pc = 0x292824u;
    // 0x292824: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x292824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292828: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x292828u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x29282c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29282cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292830: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292834: 0x0  nop
    ctx->pc = 0x292834u;
    // NOP
    // 0x292838: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x292838u;
    {
        const bool branch_taken_0x292838 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292838u;
        // 0x29283c: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292838) {
            ctx->pc = 0x292854u;
            goto label_292854;
        }
    }
    ctx->pc = 0x292840u;
    // 0x292840: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292840u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292844: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29284c:
    // 0x29284c: 0x45010130  bc1t        . + 4 + (0x130 << 2)
    ctx->pc = 0x29284Cu;
    {
        const bool branch_taken_0x29284c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29284c) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x292854u;
label_292854:
    // 0x292854: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x292854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x292858: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x292858u;
    {
        const bool branch_taken_0x292858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292858u;
        // 0x29285c: 0xc7a20068  lwc1        $f2, 0x68($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292858) {
            ctx->pc = 0x29292Cu;
            goto label_29292c;
        }
    }
    ctx->pc = 0x292860u;
    // 0x292860: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x292860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x292864: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x292864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x292868: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x292868u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29286c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x29286cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292870: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x292870u;
    {
        const bool branch_taken_0x292870 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292870u;
        // 0x292874: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292870) {
            ctx->pc = 0x2928D0u;
            goto label_2928d0;
        }
    }
    ctx->pc = 0x292878u;
    // 0x292878: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x292878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29287c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29287cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292880: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292880u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292884: 0x0  nop
    ctx->pc = 0x292884u;
    // NOP
    // 0x292888: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x292888u;
    {
        const bool branch_taken_0x292888 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292888u;
        // 0x29288c: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292888) {
            ctx->pc = 0x29292Cu;
            goto label_29292c;
        }
    }
    ctx->pc = 0x292890u;
    // 0x292890: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292894: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292898: 0x0  nop
    ctx->pc = 0x292898u;
    // NOP
    // 0x29289c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x29289Cu;
    {
        const bool branch_taken_0x29289c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2928A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29289Cu;
        // 0x2928a0: 0xc7a10064  lwc1        $f1, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29289c) {
            ctx->pc = 0x29292Cu;
            goto label_29292c;
        }
    }
    ctx->pc = 0x2928A4u;
    // 0x2928a4: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2928a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2928a8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2928a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2928ac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2928acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2928b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2928b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2928b4: 0x0  nop
    ctx->pc = 0x2928b4u;
    // NOP
    // 0x2928b8: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x2928B8u;
    {
        const bool branch_taken_0x2928b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2928BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2928B8u;
        // 0x2928bc: 0xc7a00074  lwc1        $f0, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2928b8) {
            ctx->pc = 0x29292Cu;
            goto label_29292c;
        }
    }
    ctx->pc = 0x2928C0u;
    // 0x2928c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2928c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2928c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2928c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2928c8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2928C8u;
    {
        const bool branch_taken_0x2928c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2928CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2928C8u;
        // 0x2928cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2928c8) {
            ctx->pc = 0x292924u;
            goto label_292924;
        }
    }
    ctx->pc = 0x2928D0u;
label_2928d0:
    // 0x2928d0: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2928d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2928d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2928d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2928d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2928d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2928dc: 0x0  nop
    ctx->pc = 0x2928dcu;
    // NOP
    // 0x2928e0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2928E0u;
    {
        const bool branch_taken_0x2928e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2928E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2928E0u;
        // 0x2928e4: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2928e0) {
            ctx->pc = 0x29292Cu;
            goto label_29292c;
        }
    }
    ctx->pc = 0x2928E8u;
    // 0x2928e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2928e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2928ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2928ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2928f0: 0x0  nop
    ctx->pc = 0x2928f0u;
    // NOP
    // 0x2928f4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2928F4u;
    {
        const bool branch_taken_0x2928f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2928F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2928F4u;
        // 0x2928f8: 0xc7a10064  lwc1        $f1, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2928f4) {
            ctx->pc = 0x29292Cu;
            goto label_29292c;
        }
    }
    ctx->pc = 0x2928FCu;
    // 0x2928fc: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2928fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292900: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x292900u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x292904: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292908: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29290c: 0x0  nop
    ctx->pc = 0x29290cu;
    // NOP
    // 0x292910: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x292910u;
    {
        const bool branch_taken_0x292910 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292910u;
        // 0x292914: 0xc7a00074  lwc1        $f0, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292910) {
            ctx->pc = 0x29292Cu;
            goto label_29292c;
        }
    }
    ctx->pc = 0x292918u;
    // 0x292918: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29291c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29291cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_292924:
    // 0x292924: 0x450100fa  bc1t        . + 4 + (0xFA << 2)
    ctx->pc = 0x292924u;
    {
        const bool branch_taken_0x292924 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x292924) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x29292Cu;
label_29292c:
    // 0x29292c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x29292cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x292930: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x292930u;
    {
        const bool branch_taken_0x292930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292930u;
        // 0x292934: 0xc7a20068  lwc1        $f2, 0x68($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292930) {
            ctx->pc = 0x292A04u;
            goto label_292a04;
        }
    }
    ctx->pc = 0x292938u;
    // 0x292938: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x292938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29293c: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x29293cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x292940: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x292940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292944: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x292944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292948: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x292948u;
    {
        const bool branch_taken_0x292948 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292948u;
        // 0x29294c: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292948) {
            ctx->pc = 0x2929A8u;
            goto label_2929a8;
        }
    }
    ctx->pc = 0x292950u;
    // 0x292950: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x292950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292954: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292954u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292958: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29295c: 0x0  nop
    ctx->pc = 0x29295cu;
    // NOP
    // 0x292960: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x292960u;
    {
        const bool branch_taken_0x292960 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292960u;
        // 0x292964: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292960) {
            ctx->pc = 0x292A04u;
            goto label_292a04;
        }
    }
    ctx->pc = 0x292968u;
    // 0x292968: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29296c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29296cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292970: 0x0  nop
    ctx->pc = 0x292970u;
    // NOP
    // 0x292974: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x292974u;
    {
        const bool branch_taken_0x292974 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292974u;
        // 0x292978: 0xc7a10064  lwc1        $f1, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292974) {
            ctx->pc = 0x292A04u;
            goto label_292a04;
        }
    }
    ctx->pc = 0x29297Cu;
    // 0x29297c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x29297cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292980: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x292980u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x292984: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292988: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29298c: 0x0  nop
    ctx->pc = 0x29298cu;
    // NOP
    // 0x292990: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x292990u;
    {
        const bool branch_taken_0x292990 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292990u;
        // 0x292994: 0xc7a00074  lwc1        $f0, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292990) {
            ctx->pc = 0x292A04u;
            goto label_292a04;
        }
    }
    ctx->pc = 0x292998u;
    // 0x292998: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292998u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29299c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29299cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2929a0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2929A0u;
    {
        const bool branch_taken_0x2929a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2929a0) {
            ctx->pc = 0x2929FCu;
            goto label_2929fc;
        }
    }
    ctx->pc = 0x2929A8u;
label_2929a8:
    // 0x2929a8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2929a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2929ac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2929acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2929b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2929b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2929b4: 0x0  nop
    ctx->pc = 0x2929b4u;
    // NOP
    // 0x2929b8: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2929B8u;
    {
        const bool branch_taken_0x2929b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2929BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929B8u;
        // 0x2929bc: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929b8) {
            ctx->pc = 0x292A04u;
            goto label_292a04;
        }
    }
    ctx->pc = 0x2929C0u;
    // 0x2929c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2929c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2929c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2929c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2929c8: 0x0  nop
    ctx->pc = 0x2929c8u;
    // NOP
    // 0x2929cc: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2929CCu;
    {
        const bool branch_taken_0x2929cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2929D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929CCu;
        // 0x2929d0: 0xc7a10064  lwc1        $f1, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929cc) {
            ctx->pc = 0x292A04u;
            goto label_292a04;
        }
    }
    ctx->pc = 0x2929D4u;
    // 0x2929d4: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2929d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2929d8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2929d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2929dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2929dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2929e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2929e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2929e4: 0x0  nop
    ctx->pc = 0x2929e4u;
    // NOP
    // 0x2929e8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2929E8u;
    {
        const bool branch_taken_0x2929e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2929ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929E8u;
        // 0x2929ec: 0xc7a00074  lwc1        $f0, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929e8) {
            ctx->pc = 0x292A04u;
            goto label_292a04;
        }
    }
    ctx->pc = 0x2929F0u;
    // 0x2929f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2929f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2929f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2929f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2929f8: 0x0  nop
    ctx->pc = 0x2929f8u;
    // NOP
label_2929fc:
    // 0x2929fc: 0x450100c4  bc1t        . + 4 + (0xC4 << 2)
    ctx->pc = 0x2929FCu;
    {
        const bool branch_taken_0x2929fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x292A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929FCu;
        // 0x292a00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929fc) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x292A04u;
label_292a04:
    // 0x292a04: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x292a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_292a08:
    // 0x292a08: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x292a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x292a0c: 0xc4a90004  lwc1        $f9, 0x4($a1)
    ctx->pc = 0x292a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x292a10: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x292a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x292a14: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x292a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x292a18: 0x46092101  sub.s       $f4, $f4, $f9
    ctx->pc = 0x292a18u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[9]);
    // 0x292a1c: 0xc4a80000  lwc1        $f8, 0x0($a1)
    ctx->pc = 0x292a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x292a20: 0x46033181  sub.s       $f6, $f6, $f3
    ctx->pc = 0x292a20u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x292a24: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x292a24u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x292a28: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x292a28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x292a2c: 0xe7a60098  swc1        $f6, 0x98($sp)
    ctx->pc = 0x292a2cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x292a30: 0xe7a50090  swc1        $f5, 0x90($sp)
    ctx->pc = 0x292a30u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x292a34: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x292a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292a38: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x292a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x292a3c: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x292a3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x292a40: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x292a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292a44: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x292a44u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x292a48: 0x46090841  sub.s       $f1, $f1, $f9
    ctx->pc = 0x292a48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x292a4c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x292a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x292a50: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x292a50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x292a54: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x292a54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x292a58: 0x460221c2  mul.s       $f7, $f4, $f2
    ctx->pc = 0x292a58u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x292a5c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x292a5cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x292a60: 0x460128c2  mul.s       $f3, $f5, $f1
    ctx->pc = 0x292a60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x292a64: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x292a64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x292a68: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x292a68u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x292a6c: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x292a6cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x292a70: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x292a70u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x292a74: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x292a74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x292a78: 0x460639c1  sub.s       $f7, $f7, $f6
    ctx->pc = 0x292a78u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x292a7c: 0xe7a300b8  swc1        $f3, 0xB8($sp)
    ctx->pc = 0x292a7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x292a80: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x292a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x292a84: 0xe7a700b0  swc1        $f7, 0xB0($sp)
    ctx->pc = 0x292a84u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x292a88: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x292a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292a8c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x292a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292a90: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x292a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x292a94: 0x46080a01  sub.s       $f8, $f1, $f8
    ctx->pc = 0x292a94u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x292a98: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x292a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x292a9c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x292a9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x292aa0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x292aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x292aa4: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x292aa4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x292aa8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292AA8u;
    {
        const bool branch_taken_0x292aa8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x292AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292AA8u;
        // 0x292aac: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292aa8) {
            ctx->pc = 0x292AC0u;
            goto label_292ac0;
        }
    }
    ctx->pc = 0x292AB0u;
    // 0x292ab0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x292ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292ab4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x292AB4u;
    {
        const bool branch_taken_0x292ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292AB4u;
        // 0x292ab8: 0xc4810010  lwc1        $f1, 0x10($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292ab4) {
            ctx->pc = 0x292AC8u;
            goto label_292ac8;
        }
    }
    ctx->pc = 0x292ABCu;
    // 0x292abc: 0x0  nop
    ctx->pc = 0x292abcu;
    // NOP
label_292ac0:
    // 0x292ac0: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x292ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292ac4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x292ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_292ac8:
    // 0x292ac8: 0x46090081  sub.s       $f2, $f0, $f9
    ctx->pc = 0x292ac8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x292acc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x292accu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x292ad0: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x292ad0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x292ad4: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x292ad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x292ad8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x292ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x292adc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x292adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x292ae0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x292ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x292ae4: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292AE4u;
    {
        const bool branch_taken_0x292ae4 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x292ae4) {
            ctx->pc = 0x292AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292AE4u;
            // 0x292ae8: 0xc4800014  lwc1        $f0, 0x14($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x292AFCu;
            goto label_292afc;
        }
    }
    ctx->pc = 0x292AECu;
    // 0x292aec: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x292aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292af0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x292af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292af4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x292AF4u;
    {
        const bool branch_taken_0x292af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292AF4u;
        // 0x292af8: 0xc4820014  lwc1        $f2, 0x14($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292af4) {
            ctx->pc = 0x292B04u;
            goto label_292b04;
        }
    }
    ctx->pc = 0x292AFCu;
label_292afc:
    // 0x292afc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x292afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292b00: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x292b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_292b04:
    // 0x292b04: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x292b04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x292b08: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x292b08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x292b0c: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x292b0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x292b10: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x292b10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x292b14: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x292b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292b18: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x292b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x292b1c: 0xc7a800c0  lwc1        $f8, 0xC0($sp)
    ctx->pc = 0x292b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x292b20: 0xc7ab00c4  lwc1        $f11, 0xC4($sp)
    ctx->pc = 0x292b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x292b24: 0x46014002  mul.s       $f0, $f8, $f1
    ctx->pc = 0x292b24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x292b28: 0xc7a300b8  lwc1        $f3, 0xB8($sp)
    ctx->pc = 0x292b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x292b2c: 0x46025902  mul.s       $f4, $f11, $f2
    ctx->pc = 0x292b2cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x292b30: 0xc7aa00c8  lwc1        $f10, 0xC8($sp)
    ctx->pc = 0x292b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x292b34: 0xc7a600d0  lwc1        $f6, 0xD0($sp)
    ctx->pc = 0x292b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x292b38: 0x46035142  mul.s       $f5, $f10, $f3
    ctx->pc = 0x292b38u;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x292b3c: 0xc7a700d4  lwc1        $f7, 0xD4($sp)
    ctx->pc = 0x292b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x292b40: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x292b40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x292b44: 0xc7a900d8  lwc1        $f9, 0xD8($sp)
    ctx->pc = 0x292b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x292b48: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x292b48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x292b4c: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x292b4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x292b50: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x292b50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x292b54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x292b54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x292b58: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x292b58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x292b5c: 0x46000147  neg.s       $f5, $f0
    ctx->pc = 0x292b5cu;
    ctx->f[5] = FPU_NEG_S(ctx->f[0]);
    // 0x292b60: 0x460348c2  mul.s       $f3, $f9, $f3
    ctx->pc = 0x292b60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x292b64: 0x460c2834  c.lt.s      $f5, $f12
    ctx->pc = 0x292b64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292b68: 0x0  nop
    ctx->pc = 0x292b68u;
    // NOP
    // 0x292b6c: 0x45000034  bc1f        . + 4 + (0x34 << 2)
    ctx->pc = 0x292B6Cu;
    {
        const bool branch_taken_0x292b6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B6Cu;
        // 0x292b70: 0x46030840  add.s       $f1, $f1, $f3 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b6c) {
            ctx->pc = 0x292C40u;
            goto label_292c40;
        }
    }
    ctx->pc = 0x292B74u;
    // 0x292b74: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x292b74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292b78: 0x0  nop
    ctx->pc = 0x292b78u;
    // NOP
    // 0x292b7c: 0x45000064  bc1f        . + 4 + (0x64 << 2)
    ctx->pc = 0x292B7Cu;
    {
        const bool branch_taken_0x292b7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B7Cu;
        // 0x292b80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b7c) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x292B84u;
    // 0x292b84: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x292b84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292b88: 0x45000061  bc1f        . + 4 + (0x61 << 2)
    ctx->pc = 0x292B88u;
    {
        const bool branch_taken_0x292b88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x292b88) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x292B90u;
    // 0x292b90: 0x460b3082  mul.s       $f2, $f6, $f11
    ctx->pc = 0x292b90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x292b94: 0x46083802  mul.s       $f0, $f7, $f8
    ctx->pc = 0x292b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x292b98: 0x460848c2  mul.s       $f3, $f9, $f8
    ctx->pc = 0x292b98u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x292b9c: 0x460a3042  mul.s       $f1, $f6, $f10
    ctx->pc = 0x292b9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x292ba0: 0x46001201  sub.s       $f8, $f2, $f0
    ctx->pc = 0x292ba0u;
    ctx->f[8] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x292ba4: 0x460a3902  mul.s       $f4, $f7, $f10
    ctx->pc = 0x292ba4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x292ba8: 0x460b4802  mul.s       $f0, $f9, $f11
    ctx->pc = 0x292ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[11]);
    // 0x292bac: 0x46011981  sub.s       $f6, $f3, $f1
    ctx->pc = 0x292bacu;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x292bb0: 0xe7a800e8  swc1        $f8, 0xE8($sp)
    ctx->pc = 0x292bb0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x292bb4: 0x460020c1  sub.s       $f3, $f4, $f0
    ctx->pc = 0x292bb4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x292bb8: 0xe7a600e4  swc1        $f6, 0xE4($sp)
    ctx->pc = 0x292bb8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x292bbc: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x292bbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x292bc0: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x292bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292bc4: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x292bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x292bc8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x292bc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x292bcc: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x292bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292bd0: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x292bd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x292bd4: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x292bd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x292bd8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x292bd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x292bdc: 0x460009c0  add.s       $f7, $f1, $f0
    ctx->pc = 0x292bdcu;
    ctx->f[7] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x292be0: 0x460c3834  c.lt.s      $f7, $f12
    ctx->pc = 0x292be0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292be4: 0x4500004a  bc1f        . + 4 + (0x4A << 2)
    ctx->pc = 0x292BE4u;
    {
        const bool branch_taken_0x292be4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x292be4) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x292BECu;
    // 0x292bec: 0x46072834  c.lt.s      $f5, $f7
    ctx->pc = 0x292becu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292bf0: 0x0  nop
    ctx->pc = 0x292bf0u;
    // NOP
    // 0x292bf4: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x292BF4u;
    {
        const bool branch_taken_0x292bf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292BF4u;
        // 0x292bf8: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292bf4) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x292BFCu;
    // 0x292bfc: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x292bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x292c00: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x292c00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x292c04: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x292c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292c08: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x292c08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x292c0c: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x292c0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x292c10: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x292c10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x292c14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x292c14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x292c18: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x292c18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x292c1c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x292c1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292c20: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x292C20u;
    {
        const bool branch_taken_0x292c20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x292c20) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x292C28u;
    // 0x292c28: 0x46003800  add.s       $f0, $f7, $f0
    ctx->pc = 0x292c28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x292c2c: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x292c2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292c30: 0x45000037  bc1f        . + 4 + (0x37 << 2)
    ctx->pc = 0x292C30u;
    {
        const bool branch_taken_0x292c30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x292c30) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x292C38u;
label_292c38:
    // 0x292c38: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x292C38u;
    {
        const bool branch_taken_0x292c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292C38u;
        // 0x292c3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c38) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x292C40u;
label_292c40:
    // 0x292c40: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x292c40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292c44: 0x0  nop
    ctx->pc = 0x292c44u;
    // NOP
    // 0x292c48: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x292C48u;
    {
        const bool branch_taken_0x292c48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292C48u;
        // 0x292c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c48) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x292C50u;
    // 0x292c50: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x292c50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292c54: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x292C54u;
    {
        const bool branch_taken_0x292c54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x292c54) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x292C5Cu;
    // 0x292c5c: 0x460b3082  mul.s       $f2, $f6, $f11
    ctx->pc = 0x292c5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x292c60: 0x46083802  mul.s       $f0, $f7, $f8
    ctx->pc = 0x292c60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x292c64: 0x460848c2  mul.s       $f3, $f9, $f8
    ctx->pc = 0x292c64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x292c68: 0x460a3042  mul.s       $f1, $f6, $f10
    ctx->pc = 0x292c68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x292c6c: 0x46001201  sub.s       $f8, $f2, $f0
    ctx->pc = 0x292c6cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x292c70: 0x460a3902  mul.s       $f4, $f7, $f10
    ctx->pc = 0x292c70u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x292c74: 0x460b4802  mul.s       $f0, $f9, $f11
    ctx->pc = 0x292c74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[11]);
    // 0x292c78: 0x46011981  sub.s       $f6, $f3, $f1
    ctx->pc = 0x292c78u;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x292c7c: 0xe7a800f8  swc1        $f8, 0xF8($sp)
    ctx->pc = 0x292c7cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x292c80: 0x460020c1  sub.s       $f3, $f4, $f0
    ctx->pc = 0x292c80u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x292c84: 0xe7a600f4  swc1        $f6, 0xF4($sp)
    ctx->pc = 0x292c84u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x292c88: 0xe7a300f0  swc1        $f3, 0xF0($sp)
    ctx->pc = 0x292c88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x292c8c: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x292c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292c90: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x292c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x292c94: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x292c94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x292c98: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x292c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292c9c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x292c9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x292ca0: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x292ca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x292ca4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x292ca4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x292ca8: 0x460009c0  add.s       $f7, $f1, $f0
    ctx->pc = 0x292ca8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x292cac: 0x46076034  c.lt.s      $f12, $f7
    ctx->pc = 0x292cacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292cb0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x292CB0u;
    {
        const bool branch_taken_0x292cb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x292cb0) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x292CB8u;
    // 0x292cb8: 0x46053834  c.lt.s      $f7, $f5
    ctx->pc = 0x292cb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292cbc: 0x0  nop
    ctx->pc = 0x292cbcu;
    // NOP
    // 0x292cc0: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x292CC0u;
    {
        const bool branch_taken_0x292cc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292CC0u;
        // 0x292cc4: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292cc0) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x292CC8u;
    // 0x292cc8: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x292cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x292ccc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x292cccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x292cd0: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x292cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292cd4: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x292cd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x292cd8: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x292cd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x292cdc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x292cdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x292ce0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x292ce0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x292ce4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x292ce4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x292ce8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x292ce8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292cec: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x292CECu;
    {
        const bool branch_taken_0x292cec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x292cec) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x292CF4u;
    // 0x292cf4: 0x46003800  add.s       $f0, $f7, $f0
    ctx->pc = 0x292cf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x292cf8: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x292cf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292cfc: 0x0  nop
    ctx->pc = 0x292cfcu;
    // NOP
    // 0x292d00: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x292D00u;
    {
        const bool branch_taken_0x292d00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x292D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D00u;
        // 0x292d04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d00) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x292D08u;
    // 0x292d08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x292d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292d0c: 0x0  nop
    ctx->pc = 0x292d0cu;
    // NOP
label_292d10:
    // 0x292d10: 0x3e00008  jr          $ra
    ctx->pc = 0x292D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D10u;
        // 0x292d14: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292D18u;
    // 0x292d18: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x292d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x292d1c: 0x0  nop
    ctx->pc = 0x292d1cu;
    // NOP
    ctx->pc = 0x292d20u;
}
