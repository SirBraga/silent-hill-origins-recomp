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

// Function: sub_00161B50
// Address: 0x161b50 - 0x161cc0
void sub_00161B50_0x161b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161B50_0x161b50");
#endif

    ctx->pc = 0x161b50u;

    // 0x161b50: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x161b50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b54: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x161b54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x161b58: 0xc5440008  lwc1        $f4, 0x8($t2)
    ctx->pc = 0x161b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x161b5c: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x161b5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161b60: 0x0  nop
    ctx->pc = 0x161b60u;
    // NOP
    // 0x161b64: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x161B64u;
    {
        const bool branch_taken_0x161b64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x161B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B64u;
        // 0x161b68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b64) {
            ctx->pc = 0x161B70u;
            goto label_161b70;
        }
    }
    ctx->pc = 0x161B6Cu;
    // 0x161b6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x161b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161b70:
    // 0x161b70: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x161B70u;
    {
        const bool branch_taken_0x161b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161b70) {
            ctx->pc = 0x161CA4u;
            goto label_161ca4;
        }
    }
    ctx->pc = 0x161B78u;
    // 0x161b78: 0xc540000c  lwc1        $f0, 0xC($t2)
    ctx->pc = 0x161b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161b7c: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x161b7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x161b80: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x161b80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161b84: 0x0  nop
    ctx->pc = 0x161b84u;
    // NOP
    // 0x161b88: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x161B88u;
    {
        const bool branch_taken_0x161b88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x161B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B88u;
        // 0x161b8c: 0xe540000c  swc1        $f0, 0xC($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b88) {
            ctx->pc = 0x161BACu;
            goto label_161bac;
        }
    }
    ctx->pc = 0x161B90u;
    // 0x161b90: 0x8942001b  lwl         $v0, 0x1B($t2)
    ctx->pc = 0x161b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x161b94: 0x99420018  lwr         $v0, 0x18($t2)
    ctx->pc = 0x161b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x161b98: 0xa9420017  swl         $v0, 0x17($t2)
    ctx->pc = 0x161b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x161b9c: 0xb9420014  swr         $v0, 0x14($t2)
    ctx->pc = 0x161b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x161ba0: 0xe541000c  swc1        $f1, 0xC($t2)
    ctx->pc = 0x161ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x161ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x161BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BA4u;
        // 0x161ba8: 0xe5410008  swc1        $f1, 0x8($t2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161BACu;
label_161bac:
    // 0x161bac: 0x91420018  lbu         $v0, 0x18($t2)
    ctx->pc = 0x161bacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x161bb0: 0x0  nop
    ctx->pc = 0x161bb0u;
    // NOP
    // 0x161bb4: 0x0  nop
    ctx->pc = 0x161bb4u;
    // NOP
    // 0x161bb8: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x161bb8u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[4]);
    // 0x161bbc: 0x91430019  lbu         $v1, 0x19($t2)
    ctx->pc = 0x161bbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 25)));
    // 0x161bc0: 0x91490010  lbu         $t1, 0x10($t2)
    ctx->pc = 0x161bc0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x161bc4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x161bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x161bc8: 0x0  nop
    ctx->pc = 0x161bc8u;
    // NOP
    // 0x161bcc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x161bccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x161bd0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x161bd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x161bd4: 0x0  nop
    ctx->pc = 0x161bd4u;
    // NOP
    // 0x161bd8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x161bd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x161bdc: 0x91440011  lbu         $a0, 0x11($t2)
    ctx->pc = 0x161bdcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 17)));
    // 0x161be0: 0x9142001b  lbu         $v0, 0x1B($t2)
    ctx->pc = 0x161be0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 27)));
    // 0x161be4: 0x44894000  mtc1        $t1, $f8
    ctx->pc = 0x161be4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x161be8: 0x0  nop
    ctx->pc = 0x161be8u;
    // NOP
    // 0x161bec: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x161becu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x161bf0: 0x91430013  lbu         $v1, 0x13($t2)
    ctx->pc = 0x161bf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 19)));
    // 0x161bf4: 0x44843800  mtc1        $a0, $f7
    ctx->pc = 0x161bf4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x161bf8: 0x0  nop
    ctx->pc = 0x161bf8u;
    // NOP
    // 0x161bfc: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x161bfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x161c00: 0x9145001a  lbu         $a1, 0x1A($t2)
    ctx->pc = 0x161c00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 26)));
    // 0x161c04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161c08: 0x0  nop
    ctx->pc = 0x161c08u;
    // NOP
    // 0x161c0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x161c0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x161c10: 0x91460012  lbu         $a2, 0x12($t2)
    ctx->pc = 0x161c10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 18)));
    // 0x161c14: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x161c14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x161c18: 0x0  nop
    ctx->pc = 0x161c18u;
    // NOP
    // 0x161c1c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x161c1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x161c20: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x161c20u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x161c24: 0x0  nop
    ctx->pc = 0x161c24u;
    // NOP
    // 0x161c28: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x161c28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x161c2c: 0x91440013  lbu         $a0, 0x13($t2)
    ctx->pc = 0x161c2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 19)));
    // 0x161c30: 0x44863000  mtc1        $a2, $f6
    ctx->pc = 0x161c30u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x161c34: 0x0  nop
    ctx->pc = 0x161c34u;
    // NOP
    // 0x161c38: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x161c38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x161c3c: 0x91450011  lbu         $a1, 0x11($t2)
    ctx->pc = 0x161c3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 17)));
    // 0x161c40: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x161c40u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x161c44: 0x91460012  lbu         $a2, 0x12($t2)
    ctx->pc = 0x161c44u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 18)));
    // 0x161c48: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x161c48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x161c4c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x161c4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x161c50: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x161c50u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x161c54: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x161c54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x161c58: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x161c58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x161c5c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x161c5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x161c60: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x161c60u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x161c64: 0x460010e4  .word       0x460010E4                   # cvt.w.s     $f3, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x161c64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x161c68: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x161c68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x161c6c: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x161c6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x161c70: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x161c70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x161c74: 0x46002064  .word       0x46002064                   # cvt.w.s     $f1, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x161c74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x161c78: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x161c78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x161c7c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x161c7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x161c80: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x161c80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x161c84: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x161c84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x161c88: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x161c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x161c8c: 0xa1490014  sb          $t1, 0x14($t2)
    ctx->pc = 0x161c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 20), (uint8_t)GPR_U32(ctx, 9));
    // 0x161c90: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x161c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x161c94: 0xa1450015  sb          $a1, 0x15($t2)
    ctx->pc = 0x161c94u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 21), (uint8_t)GPR_U32(ctx, 5));
    // 0x161c98: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x161c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x161c9c: 0xa1460016  sb          $a2, 0x16($t2)
    ctx->pc = 0x161c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 22), (uint8_t)GPR_U32(ctx, 6));
    // 0x161ca0: 0xa1440017  sb          $a0, 0x17($t2)
    ctx->pc = 0x161ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 23), (uint8_t)GPR_U32(ctx, 4));
label_161ca4:
    // 0x161ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x161CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161CACu;
    // 0x161cac: 0x0  nop
    ctx->pc = 0x161cacu;
    // NOP
    // 0x161cb0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x161cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x161cb4: 0x0  nop
    ctx->pc = 0x161cb4u;
    // NOP
    // 0x161cb8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x161cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x161cbc: 0x0  nop
    ctx->pc = 0x161cbcu;
    // NOP
    ctx->pc = 0x161cc0u;
}
