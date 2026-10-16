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

// Function: sub_00105388
// Address: 0x105388 - 0x105560
void sub_00105388_0x105388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105388_0x105388");
#endif

    switch (ctx->pc) {
        case 0x10541cu: goto label_10541c;
        case 0x105430u: goto label_105430;
        case 0x1054b0u: goto label_1054b0;
        default: break;
    }

    ctx->pc = 0x105388u;

    // 0x105388: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x105388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10538c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x10538cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105390: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x105390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x105394: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x105394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x105398: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x105398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10539c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x10539cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1053a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1053a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1053a4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1053a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1053a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1053a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1053ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1053acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1053b0: 0x5000003  bltz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1053B0u;
    {
        const bool branch_taken_0x1053b0 = (GPR_S64(ctx, 8) < 0);
        ctx->pc = 0x1053B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1053B0u;
        // 0x1053b4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053b0) {
            ctx->pc = 0x1053C0u;
            goto label_1053c0;
        }
    }
    ctx->pc = 0x1053B8u;
    // 0x1053b8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1053b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1053bc: 0x102a02b  sltu        $s4, $t0, $v0
    ctx->pc = 0x1053bcu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1053c0:
    // 0x1053c0: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1053C0u;
    {
        const bool branch_taken_0x1053c0 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x1053C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1053C0u;
        // 0x1053c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053c0) {
            ctx->pc = 0x1053E0u;
            goto label_1053e0;
        }
    }
    ctx->pc = 0x1053C8u;
    // 0x1053c8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1053c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1053cc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1053ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1053d0: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x1053d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1053d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1053d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1053d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1053d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1053dc: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x1053dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1053e0:
    // 0x1053e0: 0x282a024  and         $s4, $s4, $v0
    ctx->pc = 0x1053e0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x1053e4: 0x12800054  beqz        $s4, . + 4 + (0x54 << 2)
    ctx->pc = 0x1053E4u;
    {
        const bool branch_taken_0x1053e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1053E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1053E4u;
        // 0x1053e8: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053e4) {
            ctx->pc = 0x105538u;
            goto label_105538;
        }
    }
    ctx->pc = 0x1053ECu;
    // 0x1053ec: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1053ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1053f0: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x1053f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1053f4: 0x639c0  sll         $a3, $a2, 7
    ctx->pc = 0x1053f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x1053f8: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x1053f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1053fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1053fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105400: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x105400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x105404: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x105404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x105408: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x105408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x10540c: 0x479821  addu        $s3, $v0, $a3
    ctx->pc = 0x10540cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x105410: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x105410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x105414: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x105414u;
    SET_GPR_U32(ctx, 31, 0x10541Cu);
    ctx->pc = 0x105418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105414u;
    // 0x105418: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x105414u, 0x10541Cu)) {
        return;
    }
    ctx->pc = 0x10541Cu;
label_10541c:
    // 0x10541c: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x10541cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x105420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105424: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x105424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x105428: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x105428u;
    SET_GPR_U32(ctx, 31, 0x105430u);
    ctx->pc = 0x10542Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105428u;
    // 0x10542c: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x105428u, 0x105430u)) {
        return;
    }
    ctx->pc = 0x105430u;
label_105430:
    // 0x105430: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x105430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105434: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x105434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105438: 0xc6230014  lwc1        $f3, 0x14($s1)
    ctx->pc = 0x105438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10543c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x10543cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x105440: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x105440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x105444: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x105444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105448: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x105448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10544c: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x10544cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x105450: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x105450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x105454: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x105454u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x105458: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x105458u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x10545c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x10545cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x105460: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x105460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x105464: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x105464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x105468: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x105468u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x10546c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10546cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x105470: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x105470u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x105474: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x105474u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x105478: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x105478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x10547c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10547cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x105480: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x105480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105484: 0x0  nop
    ctx->pc = 0x105484u;
    // NOP
    // 0x105488: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x105488u;
    {
        const bool branch_taken_0x105488 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105488u;
        // 0x10548c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105488) {
            ctx->pc = 0x1054A8u;
            goto label_1054a8;
        }
    }
    ctx->pc = 0x105490u;
    // 0x105490: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x105490u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x105494: 0x0  nop
    ctx->pc = 0x105494u;
    // NOP
    // 0x105498: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x105498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x10549c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x10549cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1054a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1054A0u;
    {
        const bool branch_taken_0x1054a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054A0u;
        // 0x1054a4: 0xc660000c  lwc1        $f0, 0xC($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054a0) {
            ctx->pc = 0x1054D8u;
            goto label_1054d8;
        }
    }
    ctx->pc = 0x1054A8u;
label_1054a8:
    // 0x1054a8: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x1054A8u;
    SET_GPR_U32(ctx, 31, 0x1054B0u);
    ctx->pc = 0x1054ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1054A8u;
    // 0x1054ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x1054A8u, 0x1054B0u)) {
        return;
    }
    ctx->pc = 0x1054B0u;
label_1054b0:
    // 0x1054b0: 0xc663000c  lwc1        $f3, 0xC($s3)
    ctx->pc = 0x1054b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1054b4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1054b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1054b8: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1054b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1054bc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1054bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1054c0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1054c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1054c4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1054c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1054c8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1054c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1054cc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1054ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1054d0: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x1054d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1054d4: 0x0  nop
    ctx->pc = 0x1054d4u;
    // NOP
label_1054d8:
    // 0x1054d8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1054d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1054dc: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1054dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1054e0: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x1054e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1054e4: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x1054e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1054e8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1054e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1054ec: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1054ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1054f0: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1054f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1054f4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1054f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1054f8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1054f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1054fc: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x1054fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x105500: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x105500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x105504: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x105504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x105508: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x105508u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x10550c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x10550cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105510: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x105510u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x105514: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x105514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x105518: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x105518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10551c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x10551cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105520: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x105520u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x105524: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x105524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x105528: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x105528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x10552c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x10552cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x105530: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x105530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105534: 0xe6210020  swc1        $f1, 0x20($s1)
    ctx->pc = 0x105534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_105538:
    // 0x105538: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x105538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10553c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x10553cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x105540: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x105540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x105544: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x105544u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x105548: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x105548u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10554c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x10554cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105550: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x105550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105554: 0x3e00008  jr          $ra
    ctx->pc = 0x105554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105554u;
        // 0x105558: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10555Cu;
    // 0x10555c: 0x0  nop
    ctx->pc = 0x10555cu;
    // NOP
    ctx->pc = 0x105560u;
}
