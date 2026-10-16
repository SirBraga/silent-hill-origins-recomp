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

// Function: sub_002B33C0
// Address: 0x2b33c0 - 0x2b3678
void sub_002B33C0_0x2b33c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B33C0_0x2b33c0");
#endif

    switch (ctx->pc) {
        case 0x2b3468u: goto label_2b3468;
        case 0x2b3478u: goto label_2b3478;
        case 0x2b3490u: goto label_2b3490;
        case 0x2b34e0u: goto label_2b34e0;
        case 0x2b357cu: goto label_2b357c;
        case 0x2b3598u: goto label_2b3598;
        case 0x2b35b4u: goto label_2b35b4;
        default: break;
    }

    ctx->pc = 0x2b33c0u;

    // 0x2b33c0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2b33c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2b33c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b33c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b33c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b33c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2b33cc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2b33ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b33d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b33d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b33d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b33d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b33d8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2b33d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b33dc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2b33dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2b33e0: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x2b33e0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2b33e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b33e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b33e8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2b33e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2b33ec: 0x460c6602  mul.s       $f24, $f12, $f12
    ctx->pc = 0x2b33ecu;
    ctx->f[24] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2b33f0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2b33f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2b33f4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2b33f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2b33f8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2b33f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2b33fc: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2b33fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2b3400: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2b3400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2b3404: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2b3404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2b3408: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b3408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b340c: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x2b340cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2b3410: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x2b3410u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2b3414: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2b3414u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2b3418: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2b3418u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2b341c: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x2b341cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x2b3420: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x2b3420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x2b3424: 0xe6a00020  swc1        $f0, 0x20($s5)
    ctx->pc = 0x2b3424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
    // 0x2b3428: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x2b3428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x2b342c: 0xe6a1001c  swc1        $f1, 0x1C($s5)
    ctx->pc = 0x2b342cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 28), bits); }
    // 0x2b3430: 0xe6a10018  swc1        $f1, 0x18($s5)
    ctx->pc = 0x2b3430u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 24), bits); }
    // 0x2b3434: 0xe6a1000c  swc1        $f1, 0xC($s5)
    ctx->pc = 0x2b3434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x2b3438: 0xe6a10014  swc1        $f1, 0x14($s5)
    ctx->pc = 0x2b3438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
    // 0x2b343c: 0xe6a10008  swc1        $f1, 0x8($s5)
    ctx->pc = 0x2b343cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x2b3440: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x2b3440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b3444: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2b3444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3448: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x2b3448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b344c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2b344cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2b3450: 0xc6240010  lwc1        $f4, 0x10($s1)
    ctx->pc = 0x2b3450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b3454: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2b3454u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b3458: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2b3458u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2b345c: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2b345cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3460: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2B3460u;
    {
        const bool branch_taken_0x2b3460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3460u;
        // 0x2b3464: 0x46042102  mul.s       $f4, $f4, $f4 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3460) {
            ctx->pc = 0x2B35F8u;
            goto label_2b35f8;
        }
    }
    ctx->pc = 0x2B3468u;
label_2b3468:
    // 0x2b3468: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2b3468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b346c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b346cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b3470: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x2B3470u;
    {
        const bool branch_taken_0x2b3470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3470u;
        // 0x2b3474: 0x46040029  min.s       $f0, $f0, $f4 (Delay Slot)
        ctx->f[0] = std::min(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3470) {
            ctx->pc = 0x2B361Cu;
            goto label_2b361c;
        }
    }
    ctx->pc = 0x2B3478u;
label_2b3478:
    // 0x2b3478: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2B3478u;
    {
        const bool branch_taken_0x2b3478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3478u;
        // 0x2b347c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3478) {
            ctx->pc = 0x2B362Cu;
            goto label_2b362c;
        }
    }
    ctx->pc = 0x2B3480u;
    // 0x2b3480: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b3480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b3484: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x2b3484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x2b3488: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x2b3488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b348c: 0x0  nop
    ctx->pc = 0x2b348cu;
    // NOP
label_2b3490:
    // 0x2b3490: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b3490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3494: 0x1a40004a  blez        $s2, . + 4 + (0x4A << 2)
    ctx->pc = 0x2B3494u;
    {
        const bool branch_taken_0x2b3494 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x2B3498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3494u;
        // 0x2b3498: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3494) {
            ctx->pc = 0x2B35C0u;
            goto label_2b35c0;
        }
    }
    ctx->pc = 0x2B349Cu;
    // 0x2b349c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2b349cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b34a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b34a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b34a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2b34a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b34a8: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x2b34a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b34ac: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x2b34acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2b34b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b34b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b34b4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2b34b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2b34b8: 0x3a0b82d  daddu       $s7, $sp, $zero
    ctx->pc = 0x2b34b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b34bc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b34bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b34c0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2b34c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2b34c4: 0x27b60004  addiu       $s6, $sp, 0x4
    ctx->pc = 0x2b34c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2b34c8: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x2b34c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b34cc: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2b34ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b34d0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x2b34d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2b34d4: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x2b34d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b34d8: 0x51f021  addu        $fp, $v0, $s1
    ctx->pc = 0x2b34d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b34dc: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x2b34dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2b34e0:
    // 0x2b34e0: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x2b34e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b34e4: 0x46171832  c.eq.s      $f3, $f23
    ctx->pc = 0x2b34e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b34e8: 0x0  nop
    ctx->pc = 0x2b34e8u;
    // NOP
    // 0x2b34ec: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x2B34ECu;
    {
        const bool branch_taken_0x2b34ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B34F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B34ECu;
        // 0x2b34f0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b34ec) {
            ctx->pc = 0x2B3560u;
            goto label_2b3560;
        }
    }
    ctx->pc = 0x2B34F4u;
    // 0x2b34f4: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x2b34f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b34f8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2b34f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b34fc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2b34fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b3500: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b3500u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b3504: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2b3504u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2b3508: 0x46030043  div.s       $f1, $f0, $f3
    ctx->pc = 0x2b3508u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x2b350c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2b350cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3510: 0x0  nop
    ctx->pc = 0x2b3510u;
    // NOP
    // 0x2b3514: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3514u;
    {
        const bool branch_taken_0x2b3514 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B3518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3514u;
        // 0x2b3518: 0x46010802  mul.s       $f0, $f1, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3514) {
            ctx->pc = 0x2B3534u;
            goto label_2b3534;
        }
    }
    ctx->pc = 0x2B351Cu;
    // 0x2b351c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2b351cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2b3520: 0x46000004  c1          0x4
    ctx->pc = 0x2b3520u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2b3524: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b3524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b3528: 0x4600a083  div.s       $f2, $f20, $f0
    ctx->pc = 0x2b3528u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
    // 0x2b352c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B352Cu;
    {
        const bool branch_taken_0x2b352c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B352Cu;
        // 0x2b3530: 0x46021002  mul.s       $f0, $f2, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b352c) {
            ctx->pc = 0x2B3548u;
            goto label_2b3548;
        }
    }
    ctx->pc = 0x2B3534u;
label_2b3534:
    // 0x2b3534: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2b3534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2b3538: 0x46000004  c1          0x4
    ctx->pc = 0x2b3538u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2b353c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b353cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b3540: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x2b3540u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[0]);
    // 0x2b3544: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x2b3544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_2b3548:
    // 0x2b3548: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2b3548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2b354c: 0x46000004  c1          0x4
    ctx->pc = 0x2b354cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2b3550: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x2b3550u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
    // 0x2b3554: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x2b3554u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b3558: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x2b3558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x2b355c: 0xe6e10000  swc1        $f1, 0x0($s7)
    ctx->pc = 0x2b355cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_2b3560:
    // 0x2b3560: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x2b3560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b3564: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b3564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3568: 0xc7ad0000  lwc1        $f13, 0x0($sp)
    ctx->pc = 0x2b3568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2b356c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b356cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3570: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b3570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3574: 0xc0acc98  jal         func_2B3260
    ctx->pc = 0x2B3574u;
    SET_GPR_U32(ctx, 31, 0x2B357Cu);
    ctx->pc = 0x2B3578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3574u;
    // 0x2b3578: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B3260u, 0x2B3574u, 0x2B357Cu)) {
        return;
    }
    ctx->pc = 0x2B357Cu;
label_2b357c:
    // 0x2b357c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x2b357cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2b3580: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x2b3580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b3584: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b3584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3588: 0xc7ad0000  lwc1        $f13, 0x0($sp)
    ctx->pc = 0x2b3588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2b358c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b358cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3590: 0xc0acc98  jal         func_2B3260
    ctx->pc = 0x2B3590u;
    SET_GPR_U32(ctx, 31, 0x2B3598u);
    ctx->pc = 0x2B3594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3590u;
    // 0x2b3594: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B3260u, 0x2B3590u, 0x2B3598u)) {
        return;
    }
    ctx->pc = 0x2B3598u;
label_2b3598:
    // 0x2b3598: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x2b3598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b359c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b359cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b35a0: 0xc7ad0000  lwc1        $f13, 0x0($sp)
    ctx->pc = 0x2b35a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2b35a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b35a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b35a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b35a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b35ac: 0xc0accc4  jal         func_2B3310
    ctx->pc = 0x2B35ACu;
    SET_GPR_U32(ctx, 31, 0x2B35B4u);
    ctx->pc = 0x2B35B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B35ACu;
    // 0x2b35b0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B3310u, 0x2B35ACu, 0x2B35B4u)) {
        return;
    }
    ctx->pc = 0x2B35B4u;
label_2b35b4:
    // 0x2b35b4: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x2b35b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2b35b8: 0x5440ffc9  bnel        $v0, $zero, . + 4 + (-0x37 << 2)
    ctx->pc = 0x2B35B8u;
    {
        const bool branch_taken_0x2b35b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b35b8) {
            ctx->pc = 0x2B35BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B35B8u;
            // 0x2b35bc: 0xc6830000  lwc1        $f3, 0x0($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B34E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b34e0;
        }
    }
    ctx->pc = 0x2B35C0u;
label_2b35c0:
    // 0x2b35c0: 0x8fb20008  lw          $s2, 0x8($sp)
    ctx->pc = 0x2b35c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b35c4: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x2b35c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b35c8: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x2B35C8u;
    {
        const bool branch_taken_0x2b35c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B35CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B35C8u;
        // 0x2b35cc: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b35c8) {
            ctx->pc = 0x2B3490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3490;
        }
    }
    ctx->pc = 0x2B35D0u;
    // 0x2b35d0: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x2b35d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b35d4: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2b35d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b35d8: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x2b35d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b35dc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2b35dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2b35e0: 0xc6240010  lwc1        $f4, 0x10($s1)
    ctx->pc = 0x2b35e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b35e4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2b35e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b35e8: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2b35e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2b35ec: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2b35ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b35f0: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x2b35f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2b35f4: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2b35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2b35f8:
    // 0x2b35f8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2b35f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2b35fc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b35fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b3600: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x2b3600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3604: 0x0  nop
    ctx->pc = 0x2b3604u;
    // NOP
    // 0x2b3608: 0x4500ff97  bc1f        . + 4 + (-0x69 << 2)
    ctx->pc = 0x2B3608u;
    {
        const bool branch_taken_0x2b3608 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3608u;
        // 0x2b360c: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3608) {
            ctx->pc = 0x2B3468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3468;
        }
    }
    ctx->pc = 0x2B3610u;
    // 0x2b3610: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2b3610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3614: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b3614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b3618: 0x46030029  min.s       $f0, $f0, $f3
    ctx->pc = 0x2b3618u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[3]);
label_2b361c:
    // 0x2b361c: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x2b361cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x2b3620: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2b3620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3624: 0x4501ff94  bc1t        . + 4 + (-0x6C << 2)
    ctx->pc = 0x2B3624u;
    {
        const bool branch_taken_0x2b3624 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3624) {
            ctx->pc = 0x2B3478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3478;
        }
    }
    ctx->pc = 0x2B362Cu;
label_2b362c:
    // 0x2b362c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2b362cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b3630: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2b3630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b3634: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2b3634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b3638: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2b3638u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b363c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2b363cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b3640: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b3640u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b3644: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2b3644u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b3648: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2b3648u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b364c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2b364cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b3650: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b3650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3654: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x2b3654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2b3658: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x2b3658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b365c: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x2b365cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b3660: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2b3660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b3664: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2b3664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b3668: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3668u;
        // 0x2b366c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3670u;
    // 0x2b3670: 0x46005028  max.s       $f0, $f10, $f0
    ctx->pc = 0x2b3670u;
    ctx->f[0] = std::max(ctx->f[10], ctx->f[0]);
    // 0x2b3674: 0x0  nop
    ctx->pc = 0x2b3674u;
    // NOP
    ctx->pc = 0x2b3678u;
}
