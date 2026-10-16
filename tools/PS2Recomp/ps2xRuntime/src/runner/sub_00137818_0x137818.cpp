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

// Function: sub_00137818
// Address: 0x137818 - 0x137918
void sub_00137818_0x137818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137818_0x137818");
#endif

    switch (ctx->pc) {
        case 0x137848u: goto label_137848;
        case 0x1378b0u: goto label_1378b0;
        case 0x1378dcu: goto label_1378dc;
        default: break;
    }

    ctx->pc = 0x137818u;

    // 0x137818: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x137818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13781c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x13781cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x137820: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x137820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x137824: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x137824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137828: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x137828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13782c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13782cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x137830: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x137830u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x137834: 0x8e021b80  lw          $v0, 0x1B80($s0)
    ctx->pc = 0x137834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7040)));
    // 0x137838: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x137838u;
    {
        const bool branch_taken_0x137838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137838) {
            ctx->pc = 0x13783Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137838u;
            // 0x13783c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1378FCu;
            goto label_1378fc;
        }
    }
    ctx->pc = 0x137840u;
    // 0x137840: 0xc04f0f0  jal         func_13C3C0
    ctx->pc = 0x137840u;
    SET_GPR_U32(ctx, 31, 0x137848u);
    ctx->pc = 0x137844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137840u;
    // 0x137844: 0x3c12006b  lui         $s2, 0x6B (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x137840u, 0x137848u)) {
        return;
    }
    ctx->pc = 0x137848u;
label_137848:
    // 0x137848: 0x3c11006b  lui         $s1, 0x6B
    ctx->pc = 0x137848u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
    // 0x13784c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x13784cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x137850: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x137850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x137854: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x137854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x137858: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x137858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13785c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x13785cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x137860: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x137860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x137864: 0x26021a40  addiu       $v0, $s0, 0x1A40
    ctx->pc = 0x137864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 6720));
    // 0x137868: 0xc6001a40  lwc1        $f0, 0x1A40($s0)
    ctx->pc = 0x137868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13786c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x13786cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x137870: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x137870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137874: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x137874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137878: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x137878u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13787c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x13787cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x137880: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x137880u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x137884: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x137884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137888: 0x8e424694  lw          $v0, 0x4694($s2)
    ctx->pc = 0x137888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18068)));
    // 0x13788c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x13788cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x137890: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x137890u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x137894: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x137894u;
    {
        const bool branch_taken_0x137894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137894u;
        // 0x137898: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137894) {
            ctx->pc = 0x1378BCu;
            goto label_1378bc;
        }
    }
    ctx->pc = 0x13789Cu;
    // 0x13789c: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x13789cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
    // 0x1378a0: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1378a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x1378a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1378a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1378a8: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x1378A8u;
    SET_GPR_U32(ctx, 31, 0x1378B0u);
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x1378A8u, 0x1378B0u)) {
        return;
    }
    ctx->pc = 0x1378B0u;
label_1378b0:
    // 0x1378b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1378b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1378b4: 0xe6204690  swc1        $f0, 0x4690($s1)
    ctx->pc = 0x1378b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 18064), bits); }
    // 0x1378b8: 0xae424694  sw          $v0, 0x4694($s2)
    ctx->pc = 0x1378b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 18068), GPR_U32(ctx, 2));
label_1378bc:
    // 0x1378bc: 0xc6204690  lwc1        $f0, 0x4690($s1)
    ctx->pc = 0x1378bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 18064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1378c0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1378c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1378c4: 0x0  nop
    ctx->pc = 0x1378c4u;
    // NOP
    // 0x1378c8: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x1378C8u;
    {
        const bool branch_taken_0x1378c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1378c8) {
            ctx->pc = 0x1378CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1378C8u;
            // 0x1378cc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1378FCu;
            goto label_1378fc;
        }
    }
    ctx->pc = 0x1378D0u;
    // 0x1378d0: 0x8e041b80  lw          $a0, 0x1B80($s0)
    ctx->pc = 0x1378d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7040)));
    // 0x1378d4: 0xc0624ca  jal         func_189328
    ctx->pc = 0x1378D4u;
    SET_GPR_U32(ctx, 31, 0x1378DCu);
    ctx->pc = 0x1378D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1378D4u;
    // 0x1378d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x189328u, 0x1378D4u, 0x1378DCu)) {
        return;
    }
    ctx->pc = 0x1378DCu;
label_1378dc:
    // 0x1378dc: 0x8e021874  lw          $v0, 0x1874($s0)
    ctx->pc = 0x1378dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6260)));
    // 0x1378e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1378e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1378e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1378E4u;
    {
        const bool branch_taken_0x1378e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1378E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1378E4u;
        // 0x1378e8: 0xae001b80  sw          $zero, 0x1B80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7040), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1378e4) {
            ctx->pc = 0x1378F4u;
            goto label_1378f4;
        }
    }
    ctx->pc = 0x1378ECu;
    // 0x1378ec: 0xae031864  sw          $v1, 0x1864($s0)
    ctx->pc = 0x1378ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6244), GPR_U32(ctx, 3));
    // 0x1378f0: 0xae031860  sw          $v1, 0x1860($s0)
    ctx->pc = 0x1378f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6240), GPR_U32(ctx, 3));
label_1378f4:
    // 0x1378f4: 0xae031874  sw          $v1, 0x1874($s0)
    ctx->pc = 0x1378f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6260), GPR_U32(ctx, 3));
    // 0x1378f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1378f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1378fc:
    // 0x1378fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1378fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137900: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x137900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137904: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x137904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137908: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x137908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13790c: 0x3e00008  jr          $ra
    ctx->pc = 0x13790Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13790Cu;
        // 0x137910: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13790Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137914u;
    // 0x137914: 0x0  nop
    ctx->pc = 0x137914u;
    // NOP
    ctx->pc = 0x137918u;
}
