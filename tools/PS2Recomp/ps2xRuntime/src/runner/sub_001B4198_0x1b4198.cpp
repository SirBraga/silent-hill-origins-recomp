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

// Function: sub_001B4198
// Address: 0x1b4198 - 0x1b42c0
void sub_001B4198_0x1b4198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4198_0x1b4198");
#endif

    ctx->pc = 0x1b4198u;

    // 0x1b4198: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x1b4198u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b419c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b419cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b41a0: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x1b41a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b41a4: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x1b41a4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b41a8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1b41a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1b41ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b41acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b41b0: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1b41b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1b41b4: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x1b41b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x1b41b8: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x1b41b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b41bc: 0x0  nop
    ctx->pc = 0x1b41bcu;
    // NOP
    // 0x1b41c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B41C0u;
    {
        const bool branch_taken_0x1b41c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B41C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41C0u;
        // 0x1b41c4: 0xe5600000  swc1        $f0, 0x0($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41c0) {
            ctx->pc = 0x1B41D0u;
            goto label_1b41d0;
        }
    }
    ctx->pc = 0x1B41C8u;
    // 0x1b41c8: 0xe56d0000  swc1        $f13, 0x0($t3)
    ctx->pc = 0x1b41c8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x1b41cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b41ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b41d0:
    // 0x1b41d0: 0x93a70000  lbu         $a3, 0x0($sp)
    ctx->pc = 0x1b41d0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b41d4: 0x93a30010  lbu         $v1, 0x10($sp)
    ctx->pc = 0x1b41d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b41d8: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x1b41d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x1b41dc: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1b41dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1b41e0: 0x93a40011  lbu         $a0, 0x11($sp)
    ctx->pc = 0x1b41e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x1b41e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b41e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b41e8: 0x0  nop
    ctx->pc = 0x1b41e8u;
    // NOP
    // 0x1b41ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b41ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b41f0: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x1b41f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b41f4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1b41f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b41f8: 0x93a60012  lbu         $a2, 0x12($sp)
    ctx->pc = 0x1b41f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x1b41fc: 0x93a50002  lbu         $a1, 0x2($sp)
    ctx->pc = 0x1b41fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x1b4200: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b4200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b4204: 0x93a30013  lbu         $v1, 0x13($sp)
    ctx->pc = 0x1b4204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x1b4208: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x1b4208u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1b420c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1b420cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b4210: 0x0  nop
    ctx->pc = 0x1b4210u;
    // NOP
    // 0x1b4214: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b4214u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b4218: 0x93a50003  lbu         $a1, 0x3($sp)
    ctx->pc = 0x1b4218u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x1b421c: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1b421cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b4220: 0x0  nop
    ctx->pc = 0x1b4220u;
    // NOP
    // 0x1b4224: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b4224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b4228: 0x460e0002  mul.s       $f0, $f0, $f14
    ctx->pc = 0x1b4228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x1b422c: 0x93a80001  lbu         $t0, 0x1($sp)
    ctx->pc = 0x1b422cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x1b4230: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1b4230u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b4234: 0x93a90002  lbu         $t1, 0x2($sp)
    ctx->pc = 0x1b4234u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x1b4238: 0x93aa0003  lbu         $t2, 0x3($sp)
    ctx->pc = 0x1b4238u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x1b423c: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b423cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x1b4240: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x1b4240u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1b4244: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1b4244u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b4248: 0x0  nop
    ctx->pc = 0x1b4248u;
    // NOP
    // 0x1b424c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1b424cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1b4250: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x1b4250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1b4254: 0xa1870000  sb          $a3, 0x0($t4)
    ctx->pc = 0x1b4254u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1b4258: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x1b4258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b425c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b425cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4260: 0x460e0842  mul.s       $f1, $f1, $f14
    ctx->pc = 0x1b4260u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x1b4264: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b4264u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b4268: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b4268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b426c: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1b426cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1b4270: 0xa1880001  sb          $t0, 0x1($t4)
    ctx->pc = 0x1b4270u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x1b4274: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x1b4274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4278: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1b4278u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b427c: 0x460e1082  mul.s       $f2, $f2, $f14
    ctx->pc = 0x1b427cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[14]);
    // 0x1b4280: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b4280u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b4284: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b4284u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b4288: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x1b4288u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1b428c: 0xa1890002  sb          $t1, 0x2($t4)
    ctx->pc = 0x1b428cu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x1b4290: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x1b4290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4294: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1b4294u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1b4298: 0x460e18c2  mul.s       $f3, $f3, $f14
    ctx->pc = 0x1b4298u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[14]);
    // 0x1b429c: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b429cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b42a0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b42a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b42a4: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x1b42a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1b42a8: 0xa18a0003  sb          $t2, 0x3($t4)
    ctx->pc = 0x1b42a8u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x1b42ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B42ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B42B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42ACu;
        // 0x1b42b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B42ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B42B4u;
    // 0x1b42b4: 0x0  nop
    ctx->pc = 0x1b42b4u;
    // NOP
    // 0x1b42b8: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x1b42b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1b42bc: 0x0  nop
    ctx->pc = 0x1b42bcu;
    // NOP
    ctx->pc = 0x1b42c0u;
}
