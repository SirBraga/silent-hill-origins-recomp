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

// Function: sub_001E8098
// Address: 0x1e8098 - 0x1e8270
void sub_001E8098_0x1e8098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8098_0x1e8098");
#endif

    ctx->pc = 0x1e8098u;

    // 0x1e8098: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e8098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e809c: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x1e809cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x1e80a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e80a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e80a4: 0xc440012c  lwc1        $f0, 0x12C($v0)
    ctx->pc = 0x1e80a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e80a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e80a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e80ac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e80acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e80b0: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1e80b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1e80b4: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E80B4u;
    {
        const bool branch_taken_0x1e80b4 = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x1E80B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80B4u;
        // 0x1e80b8: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e80b4) {
            ctx->pc = 0x1E80D0u;
            goto label_1e80d0;
        }
    }
    ctx->pc = 0x1E80BCu;
    // 0x1e80bc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1e80bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e80c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e80c4: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x1e80c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1e80c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E80C8u;
    {
        const bool branch_taken_0x1e80c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e80c8) {
            ctx->pc = 0x1E80CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E80C8u;
            // 0x1e80cc: 0x8c830018  lw          $v1, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E80DCu;
            goto label_1e80dc;
        }
    }
    ctx->pc = 0x1E80D0u;
label_1e80d0:
    // 0x1e80d0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1e80d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e80d4: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x1e80d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e80d8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1e80d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1e80dc:
    // 0x1e80dc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1e80dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e80e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e80e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e80e4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e80e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e80e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e80e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e80ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e80ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e80f0: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x1e80f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e80f4: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x1e80f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e80f8: 0x0  nop
    ctx->pc = 0x1e80f8u;
    // NOP
    // 0x1e80fc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E80FCu;
    {
        const bool branch_taken_0x1e80fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80FCu;
        // 0x1e8100: 0xc4a20028  lwc1        $f2, 0x28($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e80fc) {
            ctx->pc = 0x1E8118u;
            goto label_1e8118;
        }
    }
    ctx->pc = 0x1E8104u;
    // 0x1e8104: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x1e8104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8108: 0xe4c1003c  swc1        $f1, 0x3C($a2)
    ctx->pc = 0x1e8108u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
    // 0x1e810c: 0xe4c0002c  swc1        $f0, 0x2C($a2)
    ctx->pc = 0x1e810cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
    // 0x1e8110: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1E8110u;
    {
        const bool branch_taken_0x1e8110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8110u;
        // 0x1e8114: 0xacc00030  sw          $zero, 0x30($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8110) {
            ctx->pc = 0x1E81CCu;
            goto label_1e81cc;
        }
    }
    ctx->pc = 0x1E8118u;
label_1e8118:
    // 0x1e8118: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1e8118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1e811c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1e811cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1e8120: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e8120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8124: 0x0  nop
    ctx->pc = 0x1e8124u;
    // NOP
    // 0x1e8128: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e8128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e812c: 0x0  nop
    ctx->pc = 0x1e812cu;
    // NOP
    // 0x1e8130: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1E8130u;
    {
        const bool branch_taken_0x1e8130 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8130u;
        // 0x1e8134: 0xe4c3003c  swc1        $f3, 0x3C($a2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8130) {
            ctx->pc = 0x1E8198u;
            goto label_1e8198;
        }
    }
    ctx->pc = 0x1E8138u;
    // 0x1e8138: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x1e8138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x1e813c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e813cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8140: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e8140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8144: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E8144u;
    {
        const bool branch_taken_0x1e8144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e8144) {
            ctx->pc = 0x1E8148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8144u;
            // 0x1e8148: 0xc4c00024  lwc1        $f0, 0x24($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E816Cu;
            goto label_1e816c;
        }
    }
    ctx->pc = 0x1E814Cu;
    // 0x1e814c: 0xe4c1003c  swc1        $f1, 0x3C($a2)
    ctx->pc = 0x1e814cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
    // 0x1e8150: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x1e8150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
    // 0x1e8154: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1e8154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1e8158: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e8158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e815c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1e815cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8160: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e8160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e8164: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E8164u;
    {
        const bool branch_taken_0x1e8164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8164u;
        // 0x1e8168: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8164) {
            ctx->pc = 0x1E81B8u;
            goto label_1e81b8;
        }
    }
    ctx->pc = 0x1E816Cu;
label_1e816c:
    // 0x1e816c: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x1e816cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
    // 0x1e8170: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1e8170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1e8174: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e8174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8178: 0xe4c00038  swc1        $f0, 0x38($a2)
    ctx->pc = 0x1e8178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    // 0x1e817c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1e817cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x1e8180: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1e8180u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1e8184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8188: 0x0  nop
    ctx->pc = 0x1e8188u;
    // NOP
    // 0x1e818c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e818cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e8190: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E8190u;
    {
        const bool branch_taken_0x1e8190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8190u;
        // 0x1e8194: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8190) {
            ctx->pc = 0x1E81B8u;
            goto label_1e81b8;
        }
    }
    ctx->pc = 0x1E8198u;
label_1e8198:
    // 0x1e8198: 0x0  nop
    ctx->pc = 0x1e8198u;
    // NOP
    // 0x1e819c: 0x0  nop
    ctx->pc = 0x1e819cu;
    // NOP
    // 0x1e81a0: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x1e81a0u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[1]);
    // 0x1e81a4: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x1e81a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
    // 0x1e81a8: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1e81a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1e81ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e81acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e81b0: 0x0  nop
    ctx->pc = 0x1e81b0u;
    // NOP
    // 0x1e81b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e81b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e81b8:
    // 0x1e81b8: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x1e81b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x1e81bc: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x1e81bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e81c0: 0xc4c10030  lwc1        $f1, 0x30($a2)
    ctx->pc = 0x1e81c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e81c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e81c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e81c8: 0xe4c0002c  swc1        $f0, 0x2C($a2)
    ctx->pc = 0x1e81c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
label_1e81cc:
    // 0x1e81cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e81ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e81d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e81d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e81d4: 0x0  nop
    ctx->pc = 0x1e81d4u;
    // NOP
    // 0x1e81d8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1e81d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e81dc: 0x0  nop
    ctx->pc = 0x1e81dcu;
    // NOP
    // 0x1e81e0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1E81E0u;
    {
        const bool branch_taken_0x1e81e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e81e0) {
            ctx->pc = 0x1E81F4u;
            goto label_1e81f4;
        }
    }
    ctx->pc = 0x1E81E8u;
    // 0x1e81e8: 0xe4c20040  swc1        $f2, 0x40($a2)
    ctx->pc = 0x1e81e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
    // 0x1e81ec: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1E81ECu;
    {
        const bool branch_taken_0x1e81ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E81F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E81ECu;
        // 0x1e81f0: 0xacc00034  sw          $zero, 0x34($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e81ec) {
            ctx->pc = 0x1E8244u;
            goto label_1e8244;
        }
    }
    ctx->pc = 0x1E81F4u;
label_1e81f4:
    // 0x1e81f4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1e81f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1e81f8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1e81f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1e81fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e81fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8200: 0x0  nop
    ctx->pc = 0x1e8200u;
    // NOP
    // 0x1e8204: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1e8204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8208: 0x0  nop
    ctx->pc = 0x1e8208u;
    // NOP
    // 0x1e820c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1E820Cu;
    {
        const bool branch_taken_0x1e820c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e820c) {
            ctx->pc = 0x1E8220u;
            goto label_1e8220;
        }
    }
    ctx->pc = 0x1E8214u;
    // 0x1e8214: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1e8214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e8218: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E8218u;
    {
        const bool branch_taken_0x1e8218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8218) {
            ctx->pc = 0x1E822Cu;
            goto label_1e822c;
        }
    }
    ctx->pc = 0x1E8220u;
label_1e8220:
    // 0x1e8220: 0x0  nop
    ctx->pc = 0x1e8220u;
    // NOP
    // 0x1e8224: 0x0  nop
    ctx->pc = 0x1e8224u;
    // NOP
    // 0x1e8228: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x1e8228u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[2]);
label_1e822c:
    // 0x1e822c: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x1e822cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
    // 0x1e8230: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1e8230u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1e8234: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e8234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8238: 0xacc00040  sw          $zero, 0x40($a2)
    ctx->pc = 0x1e8238u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 0));
    // 0x1e823c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1e823cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1e8240: 0xe4c00034  swc1        $f0, 0x34($a2)
    ctx->pc = 0x1e8240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
label_1e8244:
    // 0x1e8244: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x1e8244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8248: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x1e8248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
    // 0x1e824c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1e824cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1e8250: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e8250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e8254: 0x0  nop
    ctx->pc = 0x1e8254u;
    // NOP
    // 0x1e8258: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e8258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e825c: 0xe4c00044  swc1        $f0, 0x44($a2)
    ctx->pc = 0x1e825cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 68), bits); }
    // 0x1e8260: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x1e8260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8264: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1e8264u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1e8268: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8268u;
        // 0x1e826c: 0xe4c10048  swc1        $f1, 0x48($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8270u;
}
