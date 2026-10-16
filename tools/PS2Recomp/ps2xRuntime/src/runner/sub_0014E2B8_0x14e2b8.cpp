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

// Function: sub_0014E2B8
// Address: 0x14e2b8 - 0x14e4b0
void sub_0014E2B8_0x14e2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E2B8_0x14e2b8");
#endif

    switch (ctx->pc) {
        case 0x14e300u: goto label_14e300;
        case 0x14e314u: goto label_14e314;
        case 0x14e34cu: goto label_14e34c;
        case 0x14e418u: goto label_14e418;
        case 0x14e434u: goto label_14e434;
        case 0x14e470u: goto label_14e470;
        case 0x14e47cu: goto label_14e47c;
        case 0x14e494u: goto label_14e494;
        default: break;
    }

    ctx->pc = 0x14e2b8u;

    // 0x14e2b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e2bc: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x14e2bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x14e2c0: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x14e2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x14e2c4: 0x8c46efc8  lw          $a2, -0x1038($v0)
    ctx->pc = 0x14e2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BEFC8u));
    // 0x14e2c8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x14e2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x14e2cc: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x14e2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x14e2d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14e2d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e2d4: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x14e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x14e2d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14e2d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e2dc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x14e2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x14e2e0: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14E2E0u;
    {
        const bool branch_taken_0x14e2e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x14E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E2E0u;
        // 0x14e2e4: 0xffbf0080  sd          $ra, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e2e0) {
            ctx->pc = 0x14E300u;
            goto label_14e300;
        }
    }
    ctx->pc = 0x14E2E8u;
    // 0x14e2e8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14e2ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E2ECu;
    {
        const bool branch_taken_0x14e2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E2ECu;
        // 0x14e2f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e2ec) {
            ctx->pc = 0x14E300u;
            goto label_14e300;
        }
    }
    ctx->pc = 0x14E2F4u;
    // 0x14e2f4: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x14e2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x14e2f8: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x14E2F8u;
    SET_GPR_U32(ctx, 31, 0x14E300u);
    ctx->pc = 0x14E2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E2F8u;
    // 0x14e2fc: 0xafb20004  sw          $s2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x14E2F8u, 0x14E300u)) {
        return;
    }
    ctx->pc = 0x14E300u;
label_14e300:
    // 0x14e300: 0x8e4500b4  lw          $a1, 0xB4($s2)
    ctx->pc = 0x14e300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x14e304: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E304u;
    {
        const bool branch_taken_0x14e304 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e304) {
            ctx->pc = 0x14E318u;
            goto label_14e318;
        }
    }
    ctx->pc = 0x14E30Cu;
    // 0x14e30c: 0xc043c88  jal         func_10F220
    ctx->pc = 0x14E30Cu;
    SET_GPR_U32(ctx, 31, 0x14E314u);
    ctx->pc = 0x14E310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E30Cu;
    // 0x14e310: 0x26440008  addiu       $a0, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F220u, 0x14E30Cu, 0x14E314u)) {
        return;
    }
    ctx->pc = 0x14E314u;
label_14e314:
    // 0x14e314: 0xae4000b4  sw          $zero, 0xB4($s2)
    ctx->pc = 0x14e314u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
label_14e318:
    // 0x14e318: 0x12000058  beqz        $s0, . + 4 + (0x58 << 2)
    ctx->pc = 0x14E318u;
    {
        const bool branch_taken_0x14e318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E318u;
        // 0x14e31c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e318) {
            ctx->pc = 0x14E47Cu;
            goto label_14e47c;
        }
    }
    ctx->pc = 0x14E320u;
    // 0x14e320: 0x8e4500b0  lw          $a1, 0xB0($s2)
    ctx->pc = 0x14e320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x14e324: 0x8c4482f0  lw          $a0, -0x7D10($v0)
    ctx->pc = 0x14e324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935280)));
    // 0x14e328: 0x26460008  addiu       $a2, $s2, 0x8
    ctx->pc = 0x14e328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x14e32c: 0x6a420083  ldl         $v0, 0x83($s2)
    ctx->pc = 0x14e32cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14e330: 0x6e42007c  ldr         $v0, 0x7C($s2)
    ctx->pc = 0x14e330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x14e334: 0x8e430084  lw          $v1, 0x84($s2)
    ctx->pc = 0x14e334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x14e338: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x14e338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14e33c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x14e33cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14e340: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x14e340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x14e344: 0xc043140  jal         func_10C500
    ctx->pc = 0x14E344u;
    SET_GPR_U32(ctx, 31, 0x14E34Cu);
    ctx->pc = 0x14E348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E344u;
    // 0x14e348: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C500u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10C500u, 0x14E344u, 0x14E34Cu)) {
        return;
    }
    ctx->pc = 0x14E34Cu;
label_14e34c:
    // 0x14e34c: 0xc64200ec  lwc1        $f2, 0xEC($s2)
    ctx->pc = 0x14e34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14e350: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14e350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e354: 0x0  nop
    ctx->pc = 0x14e354u;
    // NOP
    // 0x14e358: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x14e358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e35c: 0x0  nop
    ctx->pc = 0x14e35cu;
    // NOP
    // 0x14e360: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x14E360u;
    {
        const bool branch_taken_0x14e360 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E360u;
        // 0x14e364: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e360) {
            ctx->pc = 0x14E47Cu;
            goto label_14e47c;
        }
    }
    ctx->pc = 0x14E368u;
    // 0x14e368: 0xc64300f4  lwc1        $f3, 0xF4($s2)
    ctx->pc = 0x14e368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14e36c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x14e36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x14e370: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14e370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e374: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14e374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e378: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x14e378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x14e37c: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x14e37cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e380: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x14e380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x14e384: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x14e384u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x14e388: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x14e388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x14e38c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x14e38cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x14e390: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x14e390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x14e394: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x14e394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x14e398: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x14e398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x14e39c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x14e39cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x14e3a0: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x14e3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x14e3a4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x14e3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x14e3a8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x14e3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x14e3ac: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x14e3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x14e3b0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x14E3B0u;
    {
        const bool branch_taken_0x14e3b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3B0u;
        // 0x14e3b4: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e3b0) {
            ctx->pc = 0x14E3D0u;
            goto label_14e3d0;
        }
    }
    ctx->pc = 0x14E3B8u;
    // 0x14e3b8: 0xc64000f0  lwc1        $f0, 0xF0($s2)
    ctx->pc = 0x14e3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e3bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e3c0: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x14e3c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x14e3c4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x14e3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x14e3c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14E3C8u;
    {
        const bool branch_taken_0x14e3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3C8u;
        // 0x14e3cc: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e3c8) {
            ctx->pc = 0x14E3D4u;
            goto label_14e3d4;
        }
    }
    ctx->pc = 0x14E3D0u;
label_14e3d0:
    // 0x14e3d0: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x14e3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_14e3d4:
    // 0x14e3d4: 0xc64000f8  lwc1        $f0, 0xF8($s2)
    ctx->pc = 0x14e3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e3d8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x14e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x14e3dc: 0x8e460100  lw          $a2, 0x100($s2)
    ctx->pc = 0x14e3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x14e3e0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x14e3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x14e3e4: 0x8c6484fc  lw          $a0, -0x7B04($v1)
    ctx->pc = 0x14e3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3384FCu));
    // 0x14e3e8: 0xc64100fc  lwc1        $f1, 0xFC($s2)
    ctx->pc = 0x14e3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e3ec: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x14e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x14e3f0: 0x6a430083  ldl         $v1, 0x83($s2)
    ctx->pc = 0x14e3f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x14e3f4: 0x6e43007c  ldr         $v1, 0x7C($s2)
    ctx->pc = 0x14e3f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x14e3f8: 0x8e470084  lw          $a3, 0x84($s2)
    ctx->pc = 0x14e3f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x14e3fc: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x14e3fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14e400: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x14e400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14e404: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x14e404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x14e408: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x14e408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x14e40c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x14e40cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x14e410: 0xc05435a  jal         func_150D68
    ctx->pc = 0x14E410u;
    SET_GPR_U32(ctx, 31, 0x14E418u);
    ctx->pc = 0x14E414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E410u;
    // 0x14e414: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x150D68u, 0x14E410u, 0x14E418u)) {
        return;
    }
    ctx->pc = 0x14E418u;
label_14e418:
    // 0x14e418: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x14e418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x14e41c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x14E41Cu;
    {
        const bool branch_taken_0x14e41c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E41Cu;
        // 0x14e420: 0x27b00060  addiu       $s0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e41c) {
            ctx->pc = 0x14E47Cu;
            goto label_14e47c;
        }
    }
    ctx->pc = 0x14E424u;
    // 0x14e424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14e424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e42c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x14E42Cu;
    SET_GPR_U32(ctx, 31, 0x14E434u);
    ctx->pc = 0x14E430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E42Cu;
    // 0x14e430: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x14E42Cu, 0x14E434u)) {
        return;
    }
    ctx->pc = 0x14E434u;
label_14e434:
    // 0x14e434: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x14e434u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x14e438: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x14e438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x14e43c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x14e43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x14e440: 0x8e4500dc  lw          $a1, 0xDC($s2)
    ctx->pc = 0x14e440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x14e444: 0x2442ee38  addiu       $v0, $v0, -0x11C8
    ctx->pc = 0x14e444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962744));
    // 0x14e448: 0x8e4600e4  lw          $a2, 0xE4($s2)
    ctx->pc = 0x14e448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
    // 0x14e44c: 0x2463eec0  addiu       $v1, $v1, -0x1140
    ctx->pc = 0x14e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962880));
    // 0x14e450: 0x8e248668  lw          $a0, -0x7998($s1)
    ctx->pc = 0x14e450u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338668u));
    // 0x14e454: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x14e454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14e458: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14e458u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e45c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x14e45cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e460: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x14e460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x14e464: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x14e464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x14e468: 0xc0596ae  jal         func_165AB8
    ctx->pc = 0x14E468u;
    SET_GPR_U32(ctx, 31, 0x14E470u);
    ctx->pc = 0x14E46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E468u;
    // 0x14e46c: 0xafb2007c  sw          $s2, 0x7C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165AB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165AB8u, 0x14E468u, 0x14E470u)) {
        return;
    }
    ctx->pc = 0x14E470u;
label_14e470:
    // 0x14e470: 0x8e248668  lw          $a0, -0x7998($s1)
    ctx->pc = 0x14e470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936168)));
    // 0x14e474: 0xc0596be  jal         func_165AF8
    ctx->pc = 0x14E474u;
    SET_GPR_U32(ctx, 31, 0x14E47Cu);
    ctx->pc = 0x14E478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E474u;
    // 0x14e478: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165AF8u, 0x14E474u, 0x14E47Cu)) {
        return;
    }
    ctx->pc = 0x14E47Cu;
label_14e47c:
    // 0x14e47c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x14e47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x14e480: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14e480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e484: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14e484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e488: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x14e488u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x14e48c: 0xc053c74  jal         func_14F1D0
    ctx->pc = 0x14E48Cu;
    SET_GPR_U32(ctx, 31, 0x14E494u);
    ctx->pc = 0x14E490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E48Cu;
    // 0x14e490: 0xe6400014  swc1        $f0, 0x14($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F1D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14F1D0u, 0x14E48Cu, 0x14E494u)) {
        return;
    }
    ctx->pc = 0x14E494u;
label_14e494:
    // 0x14e494: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x14e494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14e498: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x14e498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14e49c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x14e49cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14e4a0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x14e4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14e4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x14E4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4A4u;
        // 0x14e4a8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E4ACu;
    // 0x14e4ac: 0x0  nop
    ctx->pc = 0x14e4acu;
    // NOP
    ctx->pc = 0x14e4b0u;
}
