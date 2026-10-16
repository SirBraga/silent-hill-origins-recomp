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

// Function: sub_002931D0
// Address: 0x2931d0 - 0x293348
void sub_002931D0_0x2931d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002931D0_0x2931d0");
#endif

    switch (ctx->pc) {
        case 0x293240u: goto label_293240;
        default: break;
    }

    ctx->pc = 0x2931d0u;

    // 0x2931d0: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2931d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2931d4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2931d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2931d8: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x2931d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2931dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2931dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2931e0: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x2931e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2931e4: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2931e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2931e8: 0x460211c2  mul.s       $f7, $f2, $f2
    ctx->pc = 0x2931e8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2931ec: 0xc4e3000c  lwc1        $f3, 0xC($a3)
    ctx->pc = 0x2931ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2931f0: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x2931f0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2931f4: 0x46031982  mul.s       $f6, $f3, $f3
    ctx->pc = 0x2931f4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2931f8: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x2931f8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x2931fc: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x2931fcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x293200: 0x46043241  sub.s       $f9, $f6, $f4
    ctx->pc = 0x293200u;
    ctx->f[9] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x293204: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x293204u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x293208: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x293208u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x29320c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x29320cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x293210: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x293210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x293214: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x293214u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x293218: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x293218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29321c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x29321cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x293220: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x293220u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x293224: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x293224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x293228: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x293228u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x29322c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x29322cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x293230: 0x18c00043  blez        $a2, . + 4 + (0x43 << 2)
    ctx->pc = 0x293230u;
    {
        const bool branch_taken_0x293230 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x293234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293230u;
        // 0x293234: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293230) {
            ctx->pc = 0x293340u;
            goto label_293340;
        }
    }
    ctx->pc = 0x293238u;
    // 0x293238: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x293238u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29323c: 0x0  nop
    ctx->pc = 0x29323cu;
    // NOP
label_293240:
    // 0x293240: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x293240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x293244: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x293244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x293248: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x293248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29324c: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x29324cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x293250: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x293250u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x293254: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x293254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293258: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x293258u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x29325c: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x29325cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x293260: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x293260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x293264: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x293264u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x293268: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x293268u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x29326c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x29326cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293270: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x293270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x293274: 0x46040a02  mul.s       $f8, $f1, $f4
    ctx->pc = 0x293274u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x293278: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x293278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29327c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x29327cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x293280: 0x46041902  mul.s       $f4, $f3, $f4
    ctx->pc = 0x293280u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x293284: 0x46070082  mul.s       $f2, $f0, $f7
    ctx->pc = 0x293284u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x293288: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x293288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x29328c: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x29328cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x293290: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x293290u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x293294: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x293294u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x293298: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x293298u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x29329c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x29329cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2932a0: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x2932a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2932a4: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2932a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2932a8: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x2932a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2932ac: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x2932acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2932b0: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x2932b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2932b4: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x2932b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2932b8: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x2932b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2932bc: 0xac680008  sw          $t0, 0x8($v1)
    ctx->pc = 0x2932bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
    // 0x2932c0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2932c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2932c4: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2932c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2932c8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2932c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2932cc: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2932ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2932d0: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2932d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2932d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2932d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2932d8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2932d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2932dc: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x2932dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2932e0: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2932e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2932e4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2932e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2932e8: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x2932e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2932ec: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2932ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2932f0: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2932f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2932f4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2932f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2932f8: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x2932f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2932fc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2932fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293300: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x293300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x293304: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x293304u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x293308: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x293308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x29330c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x29330cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293310: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x293310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x293314: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x293314u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x293318: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x293318u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x29331c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x29331cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293320: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x293320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x293324: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x293324u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x293328: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x293328u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x29332c: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x29332cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x293330: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x293330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x293334: 0x14c0ffc2  bnez        $a2, . + 4 + (-0x3E << 2)
    ctx->pc = 0x293334u;
    {
        const bool branch_taken_0x293334 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x293338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293334u;
        // 0x293338: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293334) {
            ctx->pc = 0x293240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293240;
        }
    }
    ctx->pc = 0x29333Cu;
    // 0x29333c: 0x0  nop
    ctx->pc = 0x29333cu;
    // NOP
label_293340:
    // 0x293340: 0x3e00008  jr          $ra
    ctx->pc = 0x293340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293340u;
        // 0x293344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293348u;
}
