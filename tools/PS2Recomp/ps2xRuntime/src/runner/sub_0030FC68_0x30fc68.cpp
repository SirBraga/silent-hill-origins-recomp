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

// Function: sub_0030FC68
// Address: 0x30fc68 - 0x30fe90
void sub_0030FC68_0x30fc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030FC68_0x30fc68");
#endif

    switch (ctx->pc) {
        case 0x30fcb0u: goto label_30fcb0;
        case 0x30fd88u: goto label_30fd88;
        case 0x30fd98u: goto label_30fd98;
        case 0x30fe38u: goto label_30fe38;
        case 0x30fe4cu: goto label_30fe4c;
        default: break;
    }

    ctx->pc = 0x30fc68u;

    // 0x30fc68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30fc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30fc6c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30fc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x30fc70: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x30fc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x30fc74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30fc74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fc78: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30fc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30fc7c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x30fc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x30fc80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30fc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30fc84: 0x96020020  lhu         $v0, 0x20($s0)
    ctx->pc = 0x30fc84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x30fc88: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x30FC88u;
    {
        const bool branch_taken_0x30fc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FC88u;
        // 0x30fc8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fc88) {
            ctx->pc = 0x30FD34u;
            goto label_30fd34;
        }
    }
    ctx->pc = 0x30FC90u;
    // 0x30fc90: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x30fc90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x30fc94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x30fc94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fc98: 0x8e090004  lw          $t1, 0x4($s0)
    ctx->pc = 0x30fc98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30fc9c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x30fc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30fca0: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x30fca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x30fca4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30fca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30fca8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x30fca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x30fcac: 0x2251018  mult        $v0, $s1, $a1
    ctx->pc = 0x30fcacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_30fcb0:
    // 0x30fcb0: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x30fcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x30fcb4: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x30fcb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x30fcb8: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x30fcb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x30fcbc: 0x454018  mult        $t0, $v0, $a1
    ctx->pc = 0x30fcbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x30fcc0: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x30fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x30fcc4: 0x654018  mult        $t0, $v1, $a1
    ctx->pc = 0x30fcc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x30fcc8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30fcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30fccc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x30fcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30fcd0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x30fcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30fcd4: 0x1091821  addu        $v1, $t0, $t1
    ctx->pc = 0x30fcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x30fcd8: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x30fcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30fcdc: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x30fcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30fce0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x30fce0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x30fce4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x30fce4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x30fce8: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x30fce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30fcec: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x30fcecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x30fcf0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x30fcf0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x30fcf4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x30fcf4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x30fcf8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x30fcf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x30fcfc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x30fcfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x30fd00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30fd00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30fd04: 0x46000004  c1          0x4
    ctx->pc = 0x30fd04u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x30fd08: 0x46060032  c.eq.s      $f0, $f6
    ctx->pc = 0x30fd08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fd0c: 0x0  nop
    ctx->pc = 0x30fd0cu;
    // NOP
    // 0x30fd10: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x30FD10u;
    {
        const bool branch_taken_0x30fd10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD10u;
        // 0x30fd14: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd10) {
            ctx->pc = 0x30FD20u;
            goto label_30fd20;
        }
    }
    ctx->pc = 0x30FD18u;
    // 0x30fd18: 0x46002803  div.s       $f0, $f5, $f0
    ctx->pc = 0x30fd18u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[5], ctx->f[0]);
    // 0x30fd1c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x30fd1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_30fd20:
    // 0x30fd20: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x30fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30fd24: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x30fd24u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30fd28: 0x226182b  sltu        $v1, $s1, $a2
    ctx->pc = 0x30fd28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x30fd2c: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x30FD2Cu;
    {
        const bool branch_taken_0x30fd2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD2Cu;
        // 0x30fd30: 0x2251018  mult        $v0, $s1, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd2c) {
            ctx->pc = 0x30FCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30fcb0;
        }
    }
    ctx->pc = 0x30FD34u;
label_30fd34:
    // 0x30fd34: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30fd38: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x30fd38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fd3c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x30fd3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x30fd40: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x30fd40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x30fd44: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x30fd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x30fd48: 0xb2030047  sdl         $v1, 0x47($s0)
    ctx->pc = 0x30fd48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30fd4c: 0xb6030040  sdr         $v1, 0x40($s0)
    ctx->pc = 0x30fd4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30fd50: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x30fd50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
    // 0x30fd54: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x30fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30fd58: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x30fd58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x30fd5c: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x30fd5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x30fd60: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x30fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x30fd64: 0xb2080037  sdl         $t0, 0x37($s0)
    ctx->pc = 0x30fd64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30fd68: 0xb6080030  sdr         $t0, 0x30($s0)
    ctx->pc = 0x30fd68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30fd6c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x30fd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x30fd70: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x30fd70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x30fd74: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x30fd74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30fd78: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30FD78u;
    {
        const bool branch_taken_0x30fd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD78u;
        // 0x30fd7c: 0x2412000c  addiu       $s2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd78) {
            ctx->pc = 0x30FDB0u;
            goto label_30fdb0;
        }
    }
    ctx->pc = 0x30FD80u;
    // 0x30fd80: 0x2321018  mult        $v0, $s1, $s2
    ctx->pc = 0x30fd80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30fd84: 0x0  nop
    ctx->pc = 0x30fd84u;
    // NOP
label_30fd88:
    // 0x30fd88: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x30fd88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30fd8c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x30fd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x30fd90: 0xc0ad0e4  jal         func_2B4390
    ctx->pc = 0x30FD90u;
    SET_GPR_U32(ctx, 31, 0x30FD98u);
    ctx->pc = 0x30FD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FD90u;
    // 0x30fd94: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4390u, 0x30FD90u, 0x30FD98u)) {
        return;
    }
    ctx->pc = 0x30FD98u;
label_30fd98:
    // 0x30fd98: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x30fd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30fd9c: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x30fd9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x30fda0: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x30fda0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x30fda4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x30fda4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30fda8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x30FDA8u;
    {
        const bool branch_taken_0x30fda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FDA8u;
        // 0x30fdac: 0x2321018  mult        $v0, $s1, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fda8) {
            ctx->pc = 0x30FD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30fd88;
        }
    }
    ctx->pc = 0x30FDB0u;
label_30fdb0:
    // 0x30fdb0: 0xc6030030  lwc1        $f3, 0x30($s0)
    ctx->pc = 0x30fdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30fdb4: 0xc6090040  lwc1        $f9, 0x40($s0)
    ctx->pc = 0x30fdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x30fdb8: 0xc6040034  lwc1        $f4, 0x34($s0)
    ctx->pc = 0x30fdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30fdbc: 0xc6080044  lwc1        $f8, 0x44($s0)
    ctx->pc = 0x30fdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x30fdc0: 0x460918c1  sub.s       $f3, $f3, $f9
    ctx->pc = 0x30fdc0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
    // 0x30fdc4: 0xc6050038  lwc1        $f5, 0x38($s0)
    ctx->pc = 0x30fdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30fdc8: 0xc6070048  lwc1        $f7, 0x48($s0)
    ctx->pc = 0x30fdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x30fdcc: 0x46082101  sub.s       $f4, $f4, $f8
    ctx->pc = 0x30fdccu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x30fdd0: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x30fdd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30fdd4: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x30fdd4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x30fdd8: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x30fdd8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30fddc: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x30fddcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30fde0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x30fde0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x30fde4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x30fde4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x30fde8: 0x46061802  mul.s       $f0, $f3, $f6
    ctx->pc = 0x30fde8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x30fdec: 0x46062042  mul.s       $f1, $f4, $f6
    ctx->pc = 0x30fdecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x30fdf0: 0x46062882  mul.s       $f2, $f5, $f6
    ctx->pc = 0x30fdf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x30fdf4: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x30fdf4u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x30fdf8: 0x46014200  add.s       $f8, $f8, $f1
    ctx->pc = 0x30fdf8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x30fdfc: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x30fdfcu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x30fe00: 0xe6090050  swc1        $f9, 0x50($s0)
    ctx->pc = 0x30fe00u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x30fe04: 0xe6080054  swc1        $f8, 0x54($s0)
    ctx->pc = 0x30fe04u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x30fe08: 0xe6070058  swc1        $f7, 0x58($s0)
    ctx->pc = 0x30fe08u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x30fe0c: 0x46052128  max.s       $f4, $f4, $f5
    ctx->pc = 0x30fe0cu;
    ctx->f[4] = std::max(ctx->f[4], ctx->f[5]);
    // 0x30fe10: 0x460418e8  max.s       $f3, $f3, $f4
    ctx->pc = 0x30fe10u;
    ctx->f[3] = std::max(ctx->f[3], ctx->f[4]);
    // 0x30fe14: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x30fe14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x30fe18: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x30fe18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x30fe1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30fe1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fe20: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30FE20u;
    {
        const bool branch_taken_0x30fe20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FE20u;
        // 0x30fe24: 0xe603005c  swc1        $f3, 0x5C($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fe20) {
            ctx->pc = 0x30FE64u;
            goto label_30fe64;
        }
    }
    ctx->pc = 0x30FE28u;
    // 0x30fe28: 0x26120050  addiu       $s2, $s0, 0x50
    ctx->pc = 0x30fe28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x30fe2c: 0x2413000c  addiu       $s3, $zero, 0xC
    ctx->pc = 0x30fe2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30fe30: 0x2331018  mult        $v0, $s1, $s3
    ctx->pc = 0x30fe30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30fe34: 0x0  nop
    ctx->pc = 0x30fe34u;
    // NOP
label_30fe38:
    // 0x30fe38: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x30fe38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30fe3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30fe3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fe40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30fe40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fe44: 0xc0ad162  jal         func_2B4588
    ctx->pc = 0x30FE44u;
    SET_GPR_U32(ctx, 31, 0x30FE4Cu);
    ctx->pc = 0x30FE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FE44u;
    // 0x30fe48: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4588u, 0x30FE44u, 0x30FE4Cu)) {
        return;
    }
    ctx->pc = 0x30FE4Cu;
label_30fe4c:
    // 0x30fe4c: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x30fe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30fe50: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x30fe50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x30fe54: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x30fe54u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x30fe58: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x30fe58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30fe5c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x30FE5Cu;
    {
        const bool branch_taken_0x30fe5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FE5Cu;
        // 0x30fe60: 0x2331018  mult        $v0, $s1, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fe5c) {
            ctx->pc = 0x30FE38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30fe38;
        }
    }
    ctx->pc = 0x30FE64u;
label_30fe64:
    // 0x30fe64: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x30fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x30fe68: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30fe68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30fe6c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x30fe6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x30fe70: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30fe70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30fe74: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x30fe74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x30fe78: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30fe78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30fe7c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x30fe7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30fe80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30fe80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30fe84: 0x3e00008  jr          $ra
    ctx->pc = 0x30FE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FE84u;
        // 0x30fe88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FE8Cu;
    // 0x30fe8c: 0x0  nop
    ctx->pc = 0x30fe8cu;
    // NOP
    ctx->pc = 0x30fe90u;
}
