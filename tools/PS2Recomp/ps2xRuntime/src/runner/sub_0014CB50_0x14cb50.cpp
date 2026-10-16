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

// Function: sub_0014CB50
// Address: 0x14cb50 - 0x14cd08
void sub_0014CB50_0x14cb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CB50_0x14cb50");
#endif

    switch (ctx->pc) {
        case 0x14cb78u: goto label_14cb78;
        case 0x14ccc8u: goto label_14ccc8;
        case 0x14ccd4u: goto label_14ccd4;
        case 0x14cce0u: goto label_14cce0;
        case 0x14ccf4u: goto label_14ccf4;
        default: break;
    }

    ctx->pc = 0x14cb50u;

    // 0x14cb50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14cb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14cb54: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14cb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14cb58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14cb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14cb5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14cb5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb60: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x14cb60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x14cb64: 0x8e040120  lw          $a0, 0x120($s0)
    ctx->pc = 0x14cb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x14cb68: 0x50800063  beql        $a0, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x14CB68u;
    {
        const bool branch_taken_0x14cb68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cb68) {
            ctx->pc = 0x14CB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CB68u;
            // 0x14cb6c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CCF8u;
            goto label_14ccf8;
        }
    }
    ctx->pc = 0x14CB70u;
    // 0x14cb70: 0xc097a3e  jal         func_25E8F8
    ctx->pc = 0x14CB70u;
    SET_GPR_U32(ctx, 31, 0x14CB78u);
    ctx->pc = 0x25E8F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E8F8u, 0x14CB70u, 0x14CB78u)) {
        return;
    }
    ctx->pc = 0x14CB78u;
label_14cb78:
    // 0x14cb78: 0x5440005f  bnel        $v0, $zero, . + 4 + (0x5F << 2)
    ctx->pc = 0x14CB78u;
    {
        const bool branch_taken_0x14cb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14cb78) {
            ctx->pc = 0x14CB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CB78u;
            // 0x14cb7c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CCF8u;
            goto label_14ccf8;
        }
    }
    ctx->pc = 0x14CB80u;
    // 0x14cb80: 0x8e090020  lw          $t1, 0x20($s0)
    ctx->pc = 0x14cb80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x14cb84: 0x1120005b  beqz        $t1, . + 4 + (0x5B << 2)
    ctx->pc = 0x14CB84u;
    {
        const bool branch_taken_0x14cb84 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB84u;
        // 0x14cb88: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cb84) {
            ctx->pc = 0x14CCF4u;
            goto label_14ccf4;
        }
    }
    ctx->pc = 0x14CB8Cu;
    // 0x14cb8c: 0x3c08807f  lui         $t0, 0x807F
    ctx->pc = 0x14cb8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32895 << 16));
    // 0x14cb90: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x14cb90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x14cb94: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x14cb94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
    // 0x14cb98: 0x35080001  ori         $t0, $t0, 0x1
    ctx->pc = 0x14cb98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x14cb9c: 0x24874128  addiu       $a3, $a0, 0x4128
    ctx->pc = 0x14cb9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16680));
    // 0x14cba0: 0x88e30003  lwl         $v1, 0x3($a3)
    ctx->pc = 0x14cba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x14cba4: 0x98e30000  lwr         $v1, 0x0($a3)
    ctx->pc = 0x14cba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x14cba8: 0xaba30013  swl         $v1, 0x13($sp)
    ctx->pc = 0x14cba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x14cbac: 0xbba30010  swr         $v1, 0x10($sp)
    ctx->pc = 0x14cbacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x14cbb0: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x14cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x14cbb4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x14cbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x14cbb8: 0x34c600ff  ori         $a2, $a2, 0xFF
    ctx->pc = 0x14cbb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
    // 0x14cbbc: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x14cbbcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14cbc0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14cbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14cbc4: 0x93a30011  lbu         $v1, 0x11($sp)
    ctx->pc = 0x14cbc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x14cbc8: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x14cbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
    // 0x14cbcc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x14cbccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x14cbd0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x14cbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x14cbd4: 0x93a40012  lbu         $a0, 0x12($sp)
    ctx->pc = 0x14cbd4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x14cbd8: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x14cbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x14cbdc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x14cbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x14cbe0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14cbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14cbe4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x14cbe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x14cbe8: 0x93a30013  lbu         $v1, 0x13($sp)
    ctx->pc = 0x14cbe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x14cbec: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x14cbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x14cbf0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x14cbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x14cbf4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x14cbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x14cbf8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x14cbf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x14cbfc: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x14cbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x14cc00: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x14cc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x14cc04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14cc04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14cc08: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x14cc08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x14cc0c: 0xc4945060  lwc1        $f20, 0x5060($a0)
    ctx->pc = 0x14cc0cu;
    { uint32_t bits = FAST_READ32(0x735060u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14cc10: 0x32e3a  dsrl        $a1, $v1, 24
    ctx->pc = 0x14cc10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> 24);
    // 0x14cc14: 0x3123a  dsrl        $v0, $v1, 8
    ctx->pc = 0x14cc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 8);
    // 0x14cc18: 0x3243a  dsrl        $a0, $v1, 16
    ctx->pc = 0x14cc18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 16);
    // 0x14cc1c: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x14cc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x14cc20: 0xa3a50013  sb          $a1, 0x13($sp)
    ctx->pc = 0x14cc20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 5));
    // 0x14cc24: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x14cc24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x14cc28: 0xa3a40012  sb          $a0, 0x12($sp)
    ctx->pc = 0x14cc28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 4));
    // 0x14cc2c: 0x8ba20013  lwl         $v0, 0x13($sp)
    ctx->pc = 0x14cc2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x14cc30: 0x9ba20010  lwr         $v0, 0x10($sp)
    ctx->pc = 0x14cc30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x14cc34: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x14cc34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x14cc38: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x14cc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x14cc3c: 0x8e040120  lw          $a0, 0x120($s0)
    ctx->pc = 0x14cc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x14cc40: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x14cc40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x14cc44: 0x93a60002  lbu         $a2, 0x2($sp)
    ctx->pc = 0x14cc44u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x14cc48: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x14cc48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x14cc4c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x14cc4cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14cc50: 0x0  nop
    ctx->pc = 0x14cc50u;
    // NOP
    // 0x14cc54: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14cc54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14cc58: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x14cc58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cc5c: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x14cc5cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14cc60: 0x0  nop
    ctx->pc = 0x14cc60u;
    // NOP
    // 0x14cc64: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x14cc64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x14cc68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14cc68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14cc6c: 0x0  nop
    ctx->pc = 0x14cc6cu;
    // NOP
    // 0x14cc70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14cc70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14cc74: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14cc74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14cc78: 0x0  nop
    ctx->pc = 0x14cc78u;
    // NOP
    // 0x14cc7c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x14cc7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14cc80: 0x0  nop
    ctx->pc = 0x14cc80u;
    // NOP
    // 0x14cc84: 0x0  nop
    ctx->pc = 0x14cc84u;
    // NOP
    // 0x14cc88: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x14cc88u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[4]);
    // 0x14cc8c: 0x0  nop
    ctx->pc = 0x14cc8cu;
    // NOP
    // 0x14cc90: 0x0  nop
    ctx->pc = 0x14cc90u;
    // NOP
    // 0x14cc94: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x14cc94u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[4]);
    // 0x14cc98: 0x0  nop
    ctx->pc = 0x14cc98u;
    // NOP
    // 0x14cc9c: 0x0  nop
    ctx->pc = 0x14cc9cu;
    // NOP
    // 0x14cca0: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x14cca0u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[4]);
    // 0x14cca4: 0x0  nop
    ctx->pc = 0x14cca4u;
    // NOP
    // 0x14cca8: 0x0  nop
    ctx->pc = 0x14cca8u;
    // NOP
    // 0x14ccac: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x14ccacu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[4]);
    // 0x14ccb0: 0xe6010128  swc1        $f1, 0x128($s0)
    ctx->pc = 0x14ccb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x14ccb4: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x14ccb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x14ccb8: 0xe6020124  swc1        $f2, 0x124($s0)
    ctx->pc = 0x14ccb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x14ccbc: 0xe603012c  swc1        $f3, 0x12C($s0)
    ctx->pc = 0x14ccbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x14ccc0: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x14CCC0u;
    SET_GPR_U32(ctx, 31, 0x14CCC8u);
    ctx->pc = 0x14CCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CCC0u;
    // 0x14ccc4: 0x8d250004  lw          $a1, 0x4($t1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x14CCC0u, 0x14CCC8u)) {
        return;
    }
    ctx->pc = 0x14CCC8u;
label_14ccc8:
    // 0x14ccc8: 0x8e040120  lw          $a0, 0x120($s0)
    ctx->pc = 0x14ccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x14cccc: 0xc095c3a  jal         func_2570E8
    ctx->pc = 0x14CCCCu;
    SET_GPR_U32(ctx, 31, 0x14CCD4u);
    ctx->pc = 0x14CCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CCCCu;
    // 0x14ccd0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2570E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2570E8u, 0x14CCCCu, 0x14CCD4u)) {
        return;
    }
    ctx->pc = 0x14CCD4u;
label_14ccd4:
    // 0x14ccd4: 0x8e040120  lw          $a0, 0x120($s0)
    ctx->pc = 0x14ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x14ccd8: 0xc095c4a  jal         func_257128
    ctx->pc = 0x14CCD8u;
    SET_GPR_U32(ctx, 31, 0x14CCE0u);
    ctx->pc = 0x14CCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CCD8u;
    // 0x14ccdc: 0x26050124  addiu       $a1, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257128u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257128u, 0x14CCD8u, 0x14CCE0u)) {
        return;
    }
    ctx->pc = 0x14CCE0u;
label_14cce0:
    // 0x14cce0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x14cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x14cce4: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x14cce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x14cce8: 0x8c64870c  lw          $a0, -0x78F4($v1)
    ctx->pc = 0x14cce8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33870Cu));
    // 0x14ccec: 0xc05eeaa  jal         func_17BAA8
    ctx->pc = 0x14CCECu;
    SET_GPR_U32(ctx, 31, 0x14CCF4u);
    ctx->pc = 0x14CCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CCECu;
    // 0x14ccf0: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BAA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BAA8u, 0x14CCECu, 0x14CCF4u)) {
        return;
    }
    ctx->pc = 0x14CCF4u;
label_14ccf4:
    // 0x14ccf4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14ccf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14ccf8:
    // 0x14ccf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14ccf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ccfc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x14ccfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14cd00: 0x3e00008  jr          $ra
    ctx->pc = 0x14CD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD00u;
        // 0x14cd04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CD00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CD08u;
}
