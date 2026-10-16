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

// Function: sub_0022B868
// Address: 0x22b868 - 0x22b9b8
void sub_0022B868_0x22b868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B868_0x22b868");
#endif

    switch (ctx->pc) {
        case 0x22b940u: goto label_22b940;
        default: break;
    }

    ctx->pc = 0x22b868u;

    // 0x22b868: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22b868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22b86c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x22b86cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x22b870: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22b870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22b874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22b874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22b878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22b878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b87c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x22b87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b880: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x22b880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22b884: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x22b884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x22b888: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x22b888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22b88c: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x22b88cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x22b890: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x22b890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b894: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x22b894u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x22b898: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x22b898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x22b89c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x22b89cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x22b8a0: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x22b8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22b8a4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x22b8a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x22b8a8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x22b8a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x22b8ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22b8acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22b8b0: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x22b8b0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[5]);
    // 0x22b8b4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x22b8b4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x22b8b8: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x22b8b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b8bc: 0x0  nop
    ctx->pc = 0x22b8bcu;
    // NOP
    // 0x22b8c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22B8C0u;
    {
        const bool branch_taken_0x22b8c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8C0u;
        // 0x22b8c4: 0xe6020014  swc1        $f2, 0x14($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b8c0) {
            ctx->pc = 0x22B8CCu;
            goto label_22b8cc;
        }
    }
    ctx->pc = 0x22B8C8u;
    // 0x22b8c8: 0xe6060014  swc1        $f6, 0x14($s0)
    ctx->pc = 0x22b8c8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_22b8cc:
    // 0x22b8cc: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x22b8ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x22b8d0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x22b8d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22b8d4: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x22b8d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x22b8d8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x22b8d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x22b8dc: 0x0  nop
    ctx->pc = 0x22b8dcu;
    // NOP
    // 0x22b8e0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x22b8e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x22b8e4: 0x90a50002  lbu         $a1, 0x2($a1)
    ctx->pc = 0x22b8e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x22b8e8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22b8e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22b8ec: 0x0  nop
    ctx->pc = 0x22b8ecu;
    // NOP
    // 0x22b8f0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x22b8f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x22b8f4: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x22b8f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x22b8f8: 0x0  nop
    ctx->pc = 0x22b8f8u;
    // NOP
    // 0x22b8fc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x22b8fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x22b900: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x22b900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x22b904: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x22b904u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x22b908: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22b908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b90c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x22b90cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22b910: 0x0  nop
    ctx->pc = 0x22b910u;
    // NOP
    // 0x22b914: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22b914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22b918: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x22b918u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x22b91c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x22b91cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x22b920: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x22b920u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x22b924: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22b924u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22b928: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x22b928u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x22b92c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x22b92cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22b930: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x22b930u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22b934: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x22b934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x22b938: 0xc08ad92  jal         func_22B648
    ctx->pc = 0x22B938u;
    SET_GPR_U32(ctx, 31, 0x22B940u);
    ctx->pc = 0x22B93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B938u;
    // 0x22b93c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B648u, 0x22B938u, 0x22B940u)) {
        return;
    }
    ctx->pc = 0x22B940u;
label_22b940:
    // 0x22b940: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x22b940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22b944: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x22b944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b948: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x22b948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22b94c: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x22b94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x22b950: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x22b950u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x22b954: 0xc7a6000c  lwc1        $f6, 0xC($sp)
    ctx->pc = 0x22b954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x22b958: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x22b958u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x22b95c: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x22b95cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x22b960: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x22b960u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x22b964: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x22b964u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22b968: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x22b968u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22b96c: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x22b96cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x22b970: 0xe7a6000c  swc1        $f6, 0xC($sp)
    ctx->pc = 0x22b970u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x22b974: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x22b974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b978: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x22b978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x22b97c: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x22b97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22b980: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x22b980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b984: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x22b984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22b988: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x22b988u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x22b98c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x22b98cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x22b990: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x22b990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x22b994: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x22b994u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x22b998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22b998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b99c: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x22b99cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x22b9a0: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x22b9a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x22b9a4: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x22b9a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x22b9a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22b9a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x22B9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9ACu;
        // 0x22b9b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B9B4u;
    // 0x22b9b4: 0x0  nop
    ctx->pc = 0x22b9b4u;
    // NOP
    ctx->pc = 0x22b9b8u;
}
