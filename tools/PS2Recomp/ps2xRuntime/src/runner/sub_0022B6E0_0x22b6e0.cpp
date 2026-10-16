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

// Function: sub_0022B6E0
// Address: 0x22b6e0 - 0x22b868
void sub_0022B6E0_0x22b6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B6E0_0x22b6e0");
#endif

    switch (ctx->pc) {
        case 0x22b7b8u: goto label_22b7b8;
        default: break;
    }

    ctx->pc = 0x22b6e0u;

    // 0x22b6e0: 0x8f8783f8  lw          $a3, -0x7C08($gp)
    ctx->pc = 0x22b6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935544)));
    // 0x22b6e4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22b6e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22b6e8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x22b6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22b6ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22b6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22b6f0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x22b6f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x22b6f4: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x22b6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x22b6f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22b6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22b6fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b700: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x22b700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x22b704: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x22b704u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22b708: 0x90a70003  lbu         $a3, 0x3($a1)
    ctx->pc = 0x22b708u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x22b70c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22b710: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x22b710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x22b714: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22b714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22b718: 0x90a80002  lbu         $t0, 0x2($a1)
    ctx->pc = 0x22b718u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x22b71c: 0x463024  and         $a2, $v0, $a2
    ctx->pc = 0x22b71cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x22b720: 0x473824  and         $a3, $v0, $a3
    ctx->pc = 0x22b720u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x22b724: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x22b724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22b728: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x22b728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x22b72c: 0xa3a60010  sb          $a2, 0x10($sp)
    ctx->pc = 0x22b72cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x22b730: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22b730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b734: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x22b734u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x22b738: 0xa3a30011  sb          $v1, 0x11($sp)
    ctx->pc = 0x22b738u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x22b73c: 0xa3a20012  sb          $v0, 0x12($sp)
    ctx->pc = 0x22b73cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x22b740: 0xa3a70013  sb          $a3, 0x13($sp)
    ctx->pc = 0x22b740u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 7));
    // 0x22b744: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x22b744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x22b748: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x22b748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22b74c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x22b74cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x22b750: 0x0  nop
    ctx->pc = 0x22b750u;
    // NOP
    // 0x22b754: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x22b754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x22b758: 0x93a30012  lbu         $v1, 0x12($sp)
    ctx->pc = 0x22b758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x22b75c: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x22b75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x22b760: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x22b760u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22b764: 0x0  nop
    ctx->pc = 0x22b764u;
    // NOP
    // 0x22b768: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22b768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22b76c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x22b76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x22b770: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x22b770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x22b774: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x22b774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22b778: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x22b778u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x22b77c: 0x0  nop
    ctx->pc = 0x22b77cu;
    // NOP
    // 0x22b780: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x22b780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x22b784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b788: 0x0  nop
    ctx->pc = 0x22b788u;
    // NOP
    // 0x22b78c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22b78cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22b790: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x22b790u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x22b794: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x22b794u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x22b798: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x22b798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x22b79c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x22b79cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x22b7a0: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x22b7a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22b7a4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x22b7a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22b7a8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x22b7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x22b7ac: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x22b7acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x22b7b0: 0xc08ad92  jal         func_22B648
    ctx->pc = 0x22B7B0u;
    SET_GPR_U32(ctx, 31, 0x22B7B8u);
    ctx->pc = 0x22B7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B7B0u;
    // 0x22b7b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B648u, 0x22B7B0u, 0x22B7B8u)) {
        return;
    }
    ctx->pc = 0x22B7B8u;
label_22b7b8:
    // 0x22b7b8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x22b7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22b7bc: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x22b7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x22b7c0: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x22b7c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x22b7c4: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x22b7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22b7c8: 0x460631c2  mul.s       $f7, $f6, $f6
    ctx->pc = 0x22b7c8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x22b7cc: 0xc7a5000c  lwc1        $f5, 0xC($sp)
    ctx->pc = 0x22b7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x22b7d0: 0x46042202  mul.s       $f8, $f4, $f4
    ctx->pc = 0x22b7d0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x22b7d4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x22b7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b7d8: 0x46052a42  mul.s       $f9, $f5, $f5
    ctx->pc = 0x22b7d8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x22b7dc: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x22b7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22b7e0: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x22b7e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x22b7e4: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x22b7e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x22b7e8: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x22b7e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x22b7ec: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x22b7ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x22b7f0: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x22b7f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x22b7f4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x22b7f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x22b7f8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x22b7f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x22b7fc: 0xe6030014  swc1        $f3, 0x14($s0)
    ctx->pc = 0x22b7fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x22b800: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x22b800u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x22b804: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x22b804u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x22b808: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x22b808u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22b80c: 0x46143182  mul.s       $f6, $f6, $f20
    ctx->pc = 0x22b80cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x22b810: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x22b810u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x22b814: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x22b814u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x22b818: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x22b818u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22b81c: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x22b81cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x22b820: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x22b820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b824: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x22b824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x22b828: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x22b828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22b82c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x22b82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b830: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x22b830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22b834: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x22b834u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x22b838: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x22b838u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x22b83c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x22b83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x22b840: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x22b840u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x22b844: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22b844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b848: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x22b848u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x22b84c: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x22b84cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x22b850: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x22b850u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x22b854: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22b854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b858: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x22b858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22b85c: 0x3e00008  jr          $ra
    ctx->pc = 0x22B85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B85Cu;
        // 0x22b860: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B864u;
    // 0x22b864: 0x0  nop
    ctx->pc = 0x22b864u;
    // NOP
    ctx->pc = 0x22b868u;
}
