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

// Function: sub_0030DE68
// Address: 0x30de68 - 0x30e3e0
void sub_0030DE68_0x30de68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DE68_0x30de68");
#endif

    switch (ctx->pc) {
        case 0x30deb0u: goto label_30deb0;
        case 0x30df48u: goto label_30df48;
        case 0x30e100u: goto label_30e100;
        case 0x30e2ecu: goto label_30e2ec;
        default: break;
    }

    ctx->pc = 0x30de68u;

    // 0x30de68: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x30de68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x30de6c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x30de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x30de70: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x30de70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x30de74: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x30de74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x30de78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30de78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30de7c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x30de7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x30de80: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x30de80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30de84: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x30de84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x30de88: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x30de88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30de8c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x30de8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x30de90: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x30de90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30de94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30de94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x30de98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30de98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30de9c: 0xc44c3ddc  lwc1        $f12, 0x3DDC($v0)
    ctx->pc = 0x30de9cu;
    { uint32_t bits = FAST_READ32(0x6B3DDCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30dea0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30dea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dea4: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x30dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x30dea8: 0xc0c400c  jal         func_310030
    ctx->pc = 0x30DEA8u;
    SET_GPR_U32(ctx, 31, 0x30DEB0u);
    ctx->pc = 0x30DEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DEA8u;
    // 0x30deac: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x310030u, 0x30DEA8u, 0x30DEB0u)) {
        return;
    }
    ctx->pc = 0x30DEB0u;
label_30deb0:
    // 0x30deb0: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x30deb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30deb4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x30deb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30deb8: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x30deb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x30debc: 0x340effff  ori         $t6, $zero, 0xFFFF
    ctx->pc = 0x30debcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30dec0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x30dec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30dec4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x30dec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x30dec8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x30dec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x30decc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x30deccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x30ded0: 0x340dffff  ori         $t5, $zero, 0xFFFF
    ctx->pc = 0x30ded0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30ded4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30ded4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ded8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30dedc: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x30dedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x30dee0: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x30dee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x30dee4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x30dee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x30dee8: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x30dee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30deec: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x30deecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30def0: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x30def0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x30def4: 0x97a90030  lhu         $t1, 0x30($sp)
    ctx->pc = 0x30def4u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30def8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x30def8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x30defc: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x30defcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x30df00: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30df00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30df04: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x30df04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x30df08: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x30df08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30df0c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30df10: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x30df10u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30df14: 0x1140004a  beqz        $t2, . + 4 + (0x4A << 2)
    ctx->pc = 0x30DF14u;
    {
        const bool branch_taken_0x30df14 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF14u;
        // 0x30df18: 0x46003a06  mov.s       $f8, $f7 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30df14) {
            ctx->pc = 0x30E040u;
            goto label_30e040;
        }
    }
    ctx->pc = 0x30DF1Cu;
    // 0x30df1c: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x30df1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30df20: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x30df20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x30df24: 0x1281018  mult        $v0, $t1, $t0
    ctx->pc = 0x30df24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30df28: 0x8cab0018  lw          $t3, 0x18($a1)
    ctx->pc = 0x30df28u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x30df2c: 0x8ca90014  lw          $t1, 0x14($a1)
    ctx->pc = 0x30df2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x30df30: 0x306cffff  andi        $t4, $v1, 0xFFFF
    ctx->pc = 0x30df30u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x30df34: 0xc6660000  lwc1        $f6, 0x0($s3)
    ctx->pc = 0x30df34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30df38: 0xc6650004  lwc1        $f5, 0x4($s3)
    ctx->pc = 0x30df38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30df3c: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x30df3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30df40: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x30df40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x30df44: 0x1871021  addu        $v0, $t4, $a3
    ctx->pc = 0x30df44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
label_30df48:
    // 0x30df48: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x30df48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x30df4c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x30df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x30df50: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x30df50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30df54: 0x681018  mult        $v0, $v1, $t0
    ctx->pc = 0x30df54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30df58: 0x498821  addu        $s1, $v0, $t1
    ctx->pc = 0x30df58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x30df5c: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x30df5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x30df60: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x30df60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30df64: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x30df64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30df68: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x30df68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x30df6c: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x30df6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x30df70: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x30df70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30df74: 0x687818  mult        $t7, $v1, $t0
    ctx->pc = 0x30df74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x30df78: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x30df78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30df7c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x30df7cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x30df80: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x30df80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30df84: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x30df84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30df88: 0x1e61821  addu        $v1, $t7, $a2
    ctx->pc = 0x30df88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
    // 0x30df8c: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x30df8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x30df90: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x30df90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30df94: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x30df94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30df98: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x30df98u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x30df9c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x30df9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30dfa0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x30dfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30dfa4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x30dfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30dfa8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30dfa8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30dfac: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x30dfacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30dfb0: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x30dfb0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x30dfb4: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x30dfb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x30dfb8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x30dfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30dfbc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x30dfbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x30dfc0: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x30dfc0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x30dfc4: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x30dfc4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x30dfc8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x30dfc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x30dfcc: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x30dfccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30dfd0: 0x0  nop
    ctx->pc = 0x30dfd0u;
    // NOP
    // 0x30dfd4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x30DFD4u;
    {
        const bool branch_taken_0x30dfd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DFD4u;
        // 0x30dfd8: 0x9622000a  lhu         $v0, 0xA($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dfd4) {
            ctx->pc = 0x30DFE8u;
            goto label_30dfe8;
        }
    }
    ctx->pc = 0x30DFDCu;
    // 0x30dfdc: 0x460001c6  mov.s       $f7, $f0
    ctx->pc = 0x30dfdcu;
    ctx->f[7] = FPU_MOV_S(ctx->f[0]);
    // 0x30dfe0: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x30dfe0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dfe4: 0x0  nop
    ctx->pc = 0x30dfe4u;
    // NOP
label_30dfe8:
    // 0x30dfe8: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x30dfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x30dfec: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x30dfecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30dff0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x30dff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x30dff4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30dff8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x30dff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30dffc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x30dffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e000: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x30e000u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x30e004: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x30e004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e008: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x30e008u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x30e00c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x30e00cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x30e010: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30e010u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30e014: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x30e014u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30e018: 0x46004034  c.lt.s      $f8, $f0
    ctx->pc = 0x30e018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e01c: 0x0  nop
    ctx->pc = 0x30e01cu;
    // NOP
    // 0x30e020: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x30E020u;
    {
        const bool branch_taken_0x30e020 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E020u;
        // 0x30e024: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e020) {
            ctx->pc = 0x30E030u;
            goto label_30e030;
        }
    }
    ctx->pc = 0x30E028u;
    // 0x30e028: 0x46000206  mov.s       $f8, $f0
    ctx->pc = 0x30e028u;
    ctx->f[8] = FPU_MOV_S(ctx->f[0]);
    // 0x30e02c: 0xe0702d  daddu       $t6, $a3, $zero
    ctx->pc = 0x30e02cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_30e030:
    // 0x30e030: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x30e030u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30e034: 0xea182b  sltu        $v1, $a3, $t2
    ctx->pc = 0x30e034u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x30e038: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x30E038u;
    {
        const bool branch_taken_0x30e038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E038u;
        // 0x30e03c: 0x1871021  addu        $v0, $t4, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e038) {
            ctx->pc = 0x30DF48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30df48;
        }
    }
    ctx->pc = 0x30E040u;
label_30e040:
    // 0x30e040: 0xc7808340  lwc1        $f0, -0x7CC0($gp)
    ctx->pc = 0x30e040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e044: 0x46080036  c.le.s      $f0, $f8
    ctx->pc = 0x30e044u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e048: 0x0  nop
    ctx->pc = 0x30e048u;
    // NOP
    // 0x30e04c: 0x45000057  bc1f        . + 4 + (0x57 << 2)
    ctx->pc = 0x30E04Cu;
    {
        const bool branch_taken_0x30e04c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30E050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E04Cu;
        // 0x30e050: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e04c) {
            ctx->pc = 0x30E1ACu;
            goto label_30e1ac;
        }
    }
    ctx->pc = 0x30E054u;
    // 0x30e054: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x30e054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x30e058: 0x97a30030  lhu         $v1, 0x30($sp)
    ctx->pc = 0x30e058u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30e05c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x30e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30e060: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x30e060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30e064: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x30e064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x30e068: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30e068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30e06c: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x30e06cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x30e070: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x30e070u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30e074: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x30e074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x30e078: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x30e078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x30e07c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x30e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x30e080: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x30e080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30e084: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x30e084u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30e088: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x30e088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30e08c: 0xc38821  addu        $s1, $a2, $v1
    ctx->pc = 0x30e08cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x30e090: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x30e090u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x30e094: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x30e094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30e098: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x30e098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x30e09c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x30e09cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x30e0a0: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x30e0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x30e0a4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x30e0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x30e0a8: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x30e0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30e0ac: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x30e0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30e0b0: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x30e0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x30e0b4: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x30e0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x30e0b8: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x30e0b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x30e0bc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x30e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30e0c0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x30e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30e0c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30e0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30e0c8: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x30e0c8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30e0cc: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x30e0ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30e0d0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x30e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30e0d4: 0x3049ffff  andi        $t1, $v0, 0xFFFF
    ctx->pc = 0x30e0d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30e0d8: 0x2d230005  sltiu       $v1, $t1, 0x5
    ctx->pc = 0x30e0d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x30e0dc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30E0DCu;
    {
        const bool branch_taken_0x30e0dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E0DCu;
        // 0x30e0e0: 0x26420010  addiu       $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e0dc) {
            ctx->pc = 0x30E0E8u;
            goto label_30e0e8;
        }
    }
    ctx->pc = 0x30E0E4u;
    // 0x30e0e4: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x30e0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
label_30e0e8:
    // 0x30e0e8: 0xa7a00030  sh          $zero, 0x30($sp)
    ctx->pc = 0x30e0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e0ec: 0x1120002c  beqz        $t1, . + 4 + (0x2C << 2)
    ctx->pc = 0x30E0ECu;
    {
        const bool branch_taken_0x30e0ec = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E0ECu;
        // 0x30e0f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e0ec) {
            ctx->pc = 0x30E1A0u;
            goto label_30e1a0;
        }
    }
    ctx->pc = 0x30E0F4u;
    // 0x30e0f4: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x30e0f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30e0f8: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x30e0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x30e0fc: 0x0  nop
    ctx->pc = 0x30e0fcu;
    // NOP
label_30e100:
    // 0x30e100: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x30e100u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x30e104: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x30e104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30e108: 0x8c880014  lw          $t0, 0x14($a0)
    ctx->pc = 0x30e108u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x30e10c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x30e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x30e110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30e110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30e114: 0x1000013  mtlo        $t0
    ctx->pc = 0x30e114u;
    ctx->lo = GPR_U64(ctx, 8);
    // 0x30e118: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E118u;
    {
        const bool branch_taken_0x30e118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E118u;
        // 0x30e11c: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e118) {
            ctx->pc = 0x30E128u;
            goto label_30e128;
        }
    }
    ctx->pc = 0x30E120u;
    // 0x30e120: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30E120u;
    {
        const bool branch_taken_0x30e120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E120u;
        // 0x30e124: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e120) {
            ctx->pc = 0x30E134u;
            goto label_30e134;
        }
    }
    ctx->pc = 0x30E128u;
label_30e128:
    // 0x30e128: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30e128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30e12c: 0x1271823  subu        $v1, $t1, $a3
    ctx->pc = 0x30e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x30e130: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30e130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30e134:
    // 0x30e134: 0x704a0000  madd        $zero, $v0, $t2
    ctx->pc = 0x30e134u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x30e138: 0x1812  mflo        $v1
    ctx->pc = 0x30e138u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x30e13c: 0x97a60030  lhu         $a2, 0x30($sp)
    ctx->pc = 0x30e13cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30e140: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x30e140u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x30e144: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x30e144u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x30e148: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x30e148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x30e14c: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x30e14cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30e150: 0xc92018  mult        $a0, $a2, $t1
    ctx->pc = 0x30e150u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x30e154: 0xa4282a  slt         $a1, $a1, $a0
    ctx->pc = 0x30e154u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x30e158: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x30E158u;
    {
        const bool branch_taken_0x30e158 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E158u;
        // 0x30e15c: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e158) {
            ctx->pc = 0x30E18Cu;
            goto label_30e18c;
        }
    }
    ctx->pc = 0x30E160u;
    // 0x30e160: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x30e160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x30e164: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x30e164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x30e168: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x30e168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x30e16c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30e16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30e170: 0xa7a40030  sh          $a0, 0x30($sp)
    ctx->pc = 0x30e170u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x30e174: 0x69040007  ldl         $a0, 0x7($t0)
    ctx->pc = 0x30e174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x30e178: 0x6d040000  ldr         $a0, 0x0($t0)
    ctx->pc = 0x30e178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x30e17c: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x30e17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x30e180: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x30e180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30e184: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x30e184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30e188: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x30e188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_30e18c:
    // 0x30e18c: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x30e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x30e190: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x30e190u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30e194: 0xe9182b  sltu        $v1, $a3, $t1
    ctx->pc = 0x30e194u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x30e198: 0x5460ffd9  bnel        $v1, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x30E198u;
    {
        const bool branch_taken_0x30e198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e198) {
            ctx->pc = 0x30E19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E198u;
            // 0x30e19c: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e100;
        }
    }
    ctx->pc = 0x30E1A0u;
label_30e1a0:
    // 0x30e1a0: 0x93a20030  lbu         $v0, 0x30($sp)
    ctx->pc = 0x30e1a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30e1a4: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x30E1A4u;
    {
        const bool branch_taken_0x30e1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E1A4u;
        // 0x30e1a8: 0xa6420054  sh          $v0, 0x54($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 84), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e1a4) {
            ctx->pc = 0x30E388u;
            goto label_30e388;
        }
    }
    ctx->pc = 0x30E1ACu;
label_30e1ac:
    // 0x30e1ac: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x30e1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x30e1b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30e1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e1b4: 0x46070036  c.le.s      $f0, $f7
    ctx->pc = 0x30e1b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e1b8: 0x0  nop
    ctx->pc = 0x30e1b8u;
    // NOP
    // 0x30e1bc: 0x45000062  bc1f        . + 4 + (0x62 << 2)
    ctx->pc = 0x30E1BCu;
    {
        const bool branch_taken_0x30e1bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E1BCu;
        // 0x30e1c0: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e1bc) {
            ctx->pc = 0x30E348u;
            goto label_30e348;
        }
    }
    ctx->pc = 0x30E1C4u;
    // 0x30e1c4: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x30e1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x30e1c8: 0x97a60030  lhu         $a2, 0x30($sp)
    ctx->pc = 0x30e1c8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30e1cc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x30e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x30e1d0: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x30e1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x30e1d4: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x30e1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x30e1d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30e1dc: 0x8ca70014  lw          $a3, 0x14($a1)
    ctx->pc = 0x30e1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x30e1e0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x30e1e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30e1e4: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x30e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x30e1e8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x30e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x30e1ec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30e1f0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x30e1f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30e1f4: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x30e1f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30e1f8: 0xe38821  addu        $s1, $a3, $v1
    ctx->pc = 0x30e1f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x30e1fc: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x30e1fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x30e200: 0x8ca80004  lw          $t0, 0x4($a1)
    ctx->pc = 0x30e200u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x30e204: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x30e204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30e208: 0x96250006  lhu         $a1, 0x6($s1)
    ctx->pc = 0x30e208u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x30e20c: 0xd01818  mult        $v1, $a2, $s0
    ctx->pc = 0x30e20cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30e210: 0xb02018  mult        $a0, $a1, $s0
    ctx->pc = 0x30e210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x30e214: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x30e214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x30e218: 0x683021  addu        $a2, $v1, $t0
    ctx->pc = 0x30e218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x30e21c: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x30e21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e220: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x30e220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e224: 0x882821  addu        $a1, $a0, $t0
    ctx->pc = 0x30e224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x30e228: 0x97a30030  lhu         $v1, 0x30($sp)
    ctx->pc = 0x30e228u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30e22c: 0x96240006  lhu         $a0, 0x6($s1)
    ctx->pc = 0x30e22cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x30e230: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x30e230u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x30e234: 0x703818  mult        $a3, $v1, $s0
    ctx->pc = 0x30e234u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x30e238: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x30e238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30e23c: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x30e23cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30e240: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x30e240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x30e244: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x30e244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30e248: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x30e248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x30e24c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x30e24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e250: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x30e250u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30e254: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x30e254u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x30e258: 0x503018  mult        $a2, $v0, $s0
    ctx->pc = 0x30e258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x30e25c: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x30e25cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30e260: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x30e260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x30e264: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x30e264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e268: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x30e268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e26c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x30e26cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x30e270: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x30e270u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30e274: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x30e274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e278: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x30e278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e27c: 0x46022a02  mul.s       $f8, $f5, $f2
    ctx->pc = 0x30e27cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x30e280: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x30e280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e284: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x30e284u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x30e288: 0x460031c2  mul.s       $f7, $f6, $f0
    ctx->pc = 0x30e288u;
    ctx->f[7] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x30e28c: 0x460128c2  mul.s       $f3, $f5, $f1
    ctx->pc = 0x30e28cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x30e290: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x30e290u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x30e294: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x30e294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x30e298: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x30e298u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x30e29c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x30e29cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30e2a0: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x30e2a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x30e2a4: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x30e2a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x30e2a8: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x30e2a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30e2ac: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x30e2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x30e2b0: 0x460401c2  mul.s       $f7, $f0, $f4
    ctx->pc = 0x30e2b0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x30e2b4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x30e2b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x30e2b8: 0x46061042  mul.s       $f1, $f2, $f6
    ctx->pc = 0x30e2b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x30e2bc: 0x46051942  mul.s       $f5, $f3, $f5
    ctx->pc = 0x30e2bcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x30e2c0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x30e2c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x30e2c4: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x30e2c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x30e2c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30e2c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30e2cc: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x30e2ccu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x30e2d0: 0x460339c1  sub.s       $f7, $f7, $f3
    ctx->pc = 0x30e2d0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[3]);
    // 0x30e2d4: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x30e2d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x30e2d8: 0xe6450004  swc1        $f5, 0x4($s2)
    ctx->pc = 0x30e2d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x30e2dc: 0xe6470000  swc1        $f7, 0x0($s2)
    ctx->pc = 0x30e2dcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x30e2e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30e2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e2e4: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x30E2E4u;
    SET_GPR_U32(ctx, 31, 0x30E2ECu);
    ctx->pc = 0x30E2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E2E4u;
    // 0x30e2e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x30E2E4u, 0x30E2ECu)) {
        return;
    }
    ctx->pc = 0x30E2ECu;
label_30e2ec:
    // 0x30e2ec: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x30e2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x30e2f0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x30e2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30e2f4: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x30e2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
    // 0x30e2f8: 0x6ba70027  ldl         $a3, 0x27($sp)
    ctx->pc = 0x30e2f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x30e2fc: 0x6fa70020  ldr         $a3, 0x20($sp)
    ctx->pc = 0x30e2fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x30e300: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x30e300u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30e304: 0xb2470017  sdl         $a3, 0x17($s2)
    ctx->pc = 0x30e304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30e308: 0xb6470010  sdr         $a3, 0x10($s2)
    ctx->pc = 0x30e308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30e30c: 0xae480018  sw          $t0, 0x18($s2)
    ctx->pc = 0x30e30cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 8));
    // 0x30e310: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x30e310u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x30e314: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x30e314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x30e318: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x30e318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30e31c: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x30e31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x30e320: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x30e320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x30e324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30e324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30e328: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x30e328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x30e32c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x30e32cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x30e330: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x30e330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x30e334: 0xb0a30017  sdl         $v1, 0x17($a1)
    ctx->pc = 0x30e334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30e338: 0xb4a30010  sdr         $v1, 0x10($a1)
    ctx->pc = 0x30e338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30e33c: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x30e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
    // 0x30e340: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x30E340u;
    {
        const bool branch_taken_0x30e340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E340u;
        // 0x30e344: 0xa6460054  sh          $a2, 0x54($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 84), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e340) {
            ctx->pc = 0x30E388u;
            goto label_30e388;
        }
    }
    ctx->pc = 0x30E348u;
label_30e348:
    // 0x30e348: 0x6a6f0007  ldl         $t7, 0x7($s3)
    ctx->pc = 0x30e348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x30e34c: 0x6e6f0000  ldr         $t7, 0x0($s3)
    ctx->pc = 0x30e34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x30e350: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x30e350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x30e354: 0xb24f0007  sdl         $t7, 0x7($s2)
    ctx->pc = 0x30e354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30e358: 0xb64f0000  sdr         $t7, 0x0($s2)
    ctx->pc = 0x30e358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30e35c: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x30e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x30e360: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x30e360u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x30e364: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x30e364u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
    // 0x30e368: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30e368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e36c: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x30e36cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x30e370: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x30e370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x30e374: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x30e374u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30e378: 0xb2460017  sdl         $a2, 0x17($s2)
    ctx->pc = 0x30e378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30e37c: 0xb6460010  sdr         $a2, 0x10($s2)
    ctx->pc = 0x30e37cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30e380: 0xae470018  sw          $a3, 0x18($s2)
    ctx->pc = 0x30e380u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 7));
    // 0x30e384: 0xa6430054  sh          $v1, 0x54($s2)
    ctx->pc = 0x30e384u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 84), (uint16_t)GPR_U32(ctx, 3));
label_30e388:
    // 0x30e388: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x30e388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e38c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x30e38cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e390: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x30e390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e394: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x30e394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30e398: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x30e398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e39c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30e39cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30e3a0: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x30e3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e3a4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x30e3a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x30e3a8: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x30e3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e3ac: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x30e3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30e3b0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x30e3b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x30e3b4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x30e3b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30e3b8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x30e3b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x30e3bc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x30e3bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30e3c0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x30e3c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30e3c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30e3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30e3c8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x30e3c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x30e3cc: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x30e3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x30e3d0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x30e3d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30e3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x30E3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E3D4u;
        // 0x30e3d8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E3DCu;
    // 0x30e3dc: 0x0  nop
    ctx->pc = 0x30e3dcu;
    // NOP
    ctx->pc = 0x30e3e0u;
}
