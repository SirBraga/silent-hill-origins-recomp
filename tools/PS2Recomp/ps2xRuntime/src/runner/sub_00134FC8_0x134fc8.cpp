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

// Function: sub_00134FC8
// Address: 0x134fc8 - 0x135150
void sub_00134FC8_0x134fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134FC8_0x134fc8");
#endif

    switch (ctx->pc) {
        case 0x134fc8u: goto label_134fc8;
        case 0x134fccu: goto label_134fcc;
        case 0x134fd0u: goto label_134fd0;
        case 0x134fd4u: goto label_134fd4;
        case 0x134fd8u: goto label_134fd8;
        case 0x134fdcu: goto label_134fdc;
        case 0x134fe0u: goto label_134fe0;
        case 0x134fe4u: goto label_134fe4;
        case 0x134fe8u: goto label_134fe8;
        case 0x134fecu: goto label_134fec;
        case 0x134ff0u: goto label_134ff0;
        case 0x134ff4u: goto label_134ff4;
        case 0x134ff8u: goto label_134ff8;
        case 0x134ffcu: goto label_134ffc;
        case 0x135000u: goto label_135000;
        case 0x135004u: goto label_135004;
        case 0x135008u: goto label_135008;
        case 0x13500cu: goto label_13500c;
        case 0x135010u: goto label_135010;
        case 0x135014u: goto label_135014;
        case 0x135018u: goto label_135018;
        case 0x13501cu: goto label_13501c;
        case 0x135020u: goto label_135020;
        case 0x135024u: goto label_135024;
        case 0x135028u: goto label_135028;
        case 0x13502cu: goto label_13502c;
        case 0x135030u: goto label_135030;
        case 0x135034u: goto label_135034;
        case 0x135038u: goto label_135038;
        case 0x13503cu: goto label_13503c;
        case 0x135040u: goto label_135040;
        case 0x135044u: goto label_135044;
        case 0x135048u: goto label_135048;
        case 0x13504cu: goto label_13504c;
        case 0x135050u: goto label_135050;
        case 0x135054u: goto label_135054;
        case 0x135058u: goto label_135058;
        case 0x13505cu: goto label_13505c;
        case 0x135060u: goto label_135060;
        case 0x135064u: goto label_135064;
        case 0x135068u: goto label_135068;
        case 0x13506cu: goto label_13506c;
        case 0x135070u: goto label_135070;
        case 0x135074u: goto label_135074;
        case 0x135078u: goto label_135078;
        case 0x13507cu: goto label_13507c;
        case 0x135080u: goto label_135080;
        case 0x135084u: goto label_135084;
        case 0x135088u: goto label_135088;
        case 0x13508cu: goto label_13508c;
        case 0x135090u: goto label_135090;
        case 0x135094u: goto label_135094;
        case 0x135098u: goto label_135098;
        case 0x13509cu: goto label_13509c;
        case 0x1350a0u: goto label_1350a0;
        case 0x1350a4u: goto label_1350a4;
        case 0x1350a8u: goto label_1350a8;
        case 0x1350acu: goto label_1350ac;
        case 0x1350b0u: goto label_1350b0;
        case 0x1350b4u: goto label_1350b4;
        case 0x1350b8u: goto label_1350b8;
        case 0x1350bcu: goto label_1350bc;
        case 0x1350c0u: goto label_1350c0;
        case 0x1350c4u: goto label_1350c4;
        case 0x1350c8u: goto label_1350c8;
        case 0x1350ccu: goto label_1350cc;
        case 0x1350d0u: goto label_1350d0;
        case 0x1350d4u: goto label_1350d4;
        case 0x1350d8u: goto label_1350d8;
        case 0x1350dcu: goto label_1350dc;
        case 0x1350e0u: goto label_1350e0;
        case 0x1350e4u: goto label_1350e4;
        case 0x1350e8u: goto label_1350e8;
        case 0x1350ecu: goto label_1350ec;
        case 0x1350f0u: goto label_1350f0;
        case 0x1350f4u: goto label_1350f4;
        case 0x1350f8u: goto label_1350f8;
        case 0x1350fcu: goto label_1350fc;
        case 0x135100u: goto label_135100;
        case 0x135104u: goto label_135104;
        case 0x135108u: goto label_135108;
        case 0x13510cu: goto label_13510c;
        case 0x135110u: goto label_135110;
        case 0x135114u: goto label_135114;
        case 0x135118u: goto label_135118;
        case 0x13511cu: goto label_13511c;
        case 0x135120u: goto label_135120;
        case 0x135124u: goto label_135124;
        case 0x135128u: goto label_135128;
        case 0x13512cu: goto label_13512c;
        case 0x135130u: goto label_135130;
        case 0x135134u: goto label_135134;
        case 0x135138u: goto label_135138;
        case 0x13513cu: goto label_13513c;
        case 0x135140u: goto label_135140;
        case 0x135144u: goto label_135144;
        case 0x135148u: goto label_135148;
        case 0x13514cu: goto label_13514c;
        default: break;
    }

    ctx->pc = 0x134fc8u;

label_134fc8:
    // 0x134fc8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x134fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_134fcc:
    // 0x134fcc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x134fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_134fd0:
    // 0x134fd0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x134fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_134fd4:
    // 0x134fd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x134fd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_134fd8:
    // 0x134fd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x134fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_134fdc:
    // 0x134fdc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x134fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_134fe0:
    // 0x134fe0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x134fe0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_134fe4:
    // 0x134fe4: 0x8e221a34  lw          $v0, 0x1A34($s1)
    ctx->pc = 0x134fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6708)));
label_134fe8:
    // 0x134fe8: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_134fec:
    if (ctx->pc == 0x134FECu) {
        ctx->pc = 0x134FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FE8u;
        // 0x134fec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134FF0u;
        goto label_134ff0;
    }
    ctx->pc = 0x134FE8u;
    {
        const bool branch_taken_0x134fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FE8u;
        // 0x134fec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134fe8) {
            ctx->pc = 0x135138u;
            goto label_135138;
        }
    }
    ctx->pc = 0x134FF0u;
label_134ff0:
    // 0x134ff0: 0xc04f0f0  jal         func_13C3C0
label_134ff4:
    if (ctx->pc == 0x134FF4u) {
        ctx->pc = 0x134FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FF0u;
        // 0x134ff4: 0x3c12006b  lui         $s2, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134FF8u;
        goto label_134ff8;
    }
    ctx->pc = 0x134FF0u;
    SET_GPR_U32(ctx, 31, 0x134FF8u);
    ctx->pc = 0x134FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134FF0u;
    // 0x134ff4: 0x3c12006b  lui         $s2, 0x6B (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x134FF0u, 0x134FF8u)) {
        return;
    }
    ctx->pc = 0x134FF8u;
label_134ff8:
    // 0x134ff8: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x134ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
label_134ffc:
    // 0x134ffc: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x134ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_135000:
    // 0x135000: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x135000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_135004:
    // 0x135004: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x135004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_135008:
    // 0x135008: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x135008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13500c:
    // 0x13500c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x13500cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_135010:
    // 0x135010: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x135010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_135014:
    // 0x135014: 0x26221a40  addiu       $v0, $s1, 0x1A40
    ctx->pc = 0x135014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6720));
label_135018:
    // 0x135018: 0xc6201a40  lwc1        $f0, 0x1A40($s1)
    ctx->pc = 0x135018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13501c:
    // 0x13501c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x13501cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_135020:
    // 0x135020: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x135020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_135024:
    // 0x135024: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x135024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_135028:
    // 0x135028: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x135028u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_13502c:
    // 0x13502c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x13502cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_135030:
    // 0x135030: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x135030u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_135034:
    // 0x135034: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x135034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_135038:
    // 0x135038: 0x8e42469c  lw          $v0, 0x469C($s2)
    ctx->pc = 0x135038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18076)));
label_13503c:
    // 0x13503c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x13503cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_135040:
    // 0x135040: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x135040u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_135044:
    // 0x135044: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_135048:
    if (ctx->pc == 0x135048u) {
        ctx->pc = 0x135048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135044u;
        // 0x135048: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13504Cu;
        goto label_13504c;
    }
    ctx->pc = 0x135044u;
    {
        const bool branch_taken_0x135044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135044u;
        // 0x135048: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x135044) {
            ctx->pc = 0x13506Cu;
            goto label_13506c;
        }
    }
    ctx->pc = 0x13504Cu;
label_13504c:
    // 0x13504c: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x13504cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
label_135050:
    // 0x135050: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x135050u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
label_135054:
    // 0x135054: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x135054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_135058:
    // 0x135058: 0xc09b0e8  jal         func_26C3A0
label_13505c:
    if (ctx->pc == 0x13505Cu) {
        ctx->pc = 0x135060u;
        goto label_135060;
    }
    ctx->pc = 0x135058u;
    SET_GPR_U32(ctx, 31, 0x135060u);
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x135058u, 0x135060u)) {
        return;
    }
    ctx->pc = 0x135060u;
label_135060:
    // 0x135060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_135064:
    // 0x135064: 0xe6004698  swc1        $f0, 0x4698($s0)
    ctx->pc = 0x135064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 18072), bits); }
label_135068:
    // 0x135068: 0xae42469c  sw          $v0, 0x469C($s2)
    ctx->pc = 0x135068u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 18076), GPR_U32(ctx, 2));
label_13506c:
    // 0x13506c: 0xc6004698  lwc1        $f0, 0x4698($s0)
    ctx->pc = 0x13506cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 18072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_135070:
    // 0x135070: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x135070u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_135074:
    // 0x135074: 0x0  nop
    ctx->pc = 0x135074u;
    // NOP
label_135078:
    // 0x135078: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_13507c:
    if (ctx->pc == 0x13507Cu) {
        ctx->pc = 0x13507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135078u;
        // 0x13507c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135080u;
        goto label_135080;
    }
    ctx->pc = 0x135078u;
    {
        const bool branch_taken_0x135078 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135078u;
        // 0x13507c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135078) {
            ctx->pc = 0x135138u;
            goto label_135138;
        }
    }
    ctx->pc = 0x135080u;
label_135080:
    // 0x135080: 0x8e221a54  lw          $v0, 0x1A54($s1)
    ctx->pc = 0x135080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6740)));
label_135084:
    // 0x135084: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_135088:
    if (ctx->pc == 0x135088u) {
        ctx->pc = 0x135088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135084u;
        // 0x135088: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13508Cu;
        goto label_13508c;
    }
    ctx->pc = 0x135084u;
    {
        const bool branch_taken_0x135084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135084u;
        // 0x135088: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135084) {
            ctx->pc = 0x135138u;
            goto label_135138;
        }
    }
    ctx->pc = 0x13508Cu;
label_13508c:
    // 0x13508c: 0xc05f90a  jal         func_17E428
label_135090:
    if (ctx->pc == 0x135090u) {
        ctx->pc = 0x135090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13508Cu;
        // 0x135090: 0x26300320  addiu       $s0, $s1, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135094u;
        goto label_135094;
    }
    ctx->pc = 0x13508Cu;
    SET_GPR_U32(ctx, 31, 0x135094u);
    ctx->pc = 0x135090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13508Cu;
    // 0x135090: 0x26300320  addiu       $s0, $s1, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x13508Cu, 0x135094u)) {
        return;
    }
    ctx->pc = 0x135094u;
label_135094:
    // 0x135094: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x135094u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_135098:
    // 0x135098: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x135098u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_13509c:
    // 0x13509c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13509cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1350a0:
    // 0x1350a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1350a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1350a4:
    // 0x1350a4: 0x0  nop
    ctx->pc = 0x1350a4u;
    // NOP
label_1350a8:
    // 0x1350a8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1350a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1350ac:
    // 0x1350ac: 0xc05f910  jal         func_17E440
label_1350b0:
    if (ctx->pc == 0x1350B0u) {
        ctx->pc = 0x1350B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350ACu;
        // 0x1350b0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1350B4u;
        goto label_1350b4;
    }
    ctx->pc = 0x1350ACu;
    SET_GPR_U32(ctx, 31, 0x1350B4u);
    ctx->pc = 0x1350B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1350ACu;
    // 0x1350b0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x1350ACu, 0x1350B4u)) {
        return;
    }
    ctx->pc = 0x1350B4u;
label_1350b4:
    // 0x1350b4: 0x8e271a34  lw          $a3, 0x1A34($s1)
    ctx->pc = 0x1350b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6708)));
label_1350b8:
    // 0x1350b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1350b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1350bc:
    // 0x1350bc: 0x8e261a50  lw          $a2, 0x1A50($s1)
    ctx->pc = 0x1350bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6736)));
label_1350c0:
    // 0x1350c0: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x1350c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_1350c4:
    // 0x1350c4: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1350c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_1350c8:
    // 0x1350c8: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x1350c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_1350cc:
    // 0x1350cc: 0x60f809  jalr        $v1
label_1350d0:
    if (ctx->pc == 0x1350D0u) {
        ctx->pc = 0x1350D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350CCu;
        // 0x1350d0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1350D4u;
        goto label_1350d4;
    }
    ctx->pc = 0x1350CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1350D4u);
        ctx->pc = 0x1350D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350CCu;
        // 0x1350d0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1350CCu, 0x1350D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1350D4u;
label_1350d4:
    // 0x1350d4: 0xae201a34  sw          $zero, 0x1A34($s1)
    ctx->pc = 0x1350d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6708), GPR_U32(ctx, 0));
label_1350d8:
    // 0x1350d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1350d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1350dc:
    // 0x1350dc: 0xae201a54  sw          $zero, 0x1A54($s1)
    ctx->pc = 0x1350dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6740), GPR_U32(ctx, 0));
label_1350e0:
    // 0x1350e0: 0x262515e0  addiu       $a1, $s1, 0x15E0
    ctx->pc = 0x1350e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5600));
label_1350e4:
    // 0x1350e4: 0xc067fca  jal         func_19FF28
label_1350e8:
    if (ctx->pc == 0x1350E8u) {
        ctx->pc = 0x1350E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350E4u;
        // 0x1350e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1350ECu;
        goto label_1350ec;
    }
    ctx->pc = 0x1350E4u;
    SET_GPR_U32(ctx, 31, 0x1350ECu);
    ctx->pc = 0x1350E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1350E4u;
    // 0x1350e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x1350E4u, 0x1350ECu)) {
        return;
    }
    ctx->pc = 0x1350ECu;
label_1350ec:
    // 0x1350ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1350ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1350f0:
    // 0x1350f0: 0x262515d8  addiu       $a1, $s1, 0x15D8
    ctx->pc = 0x1350f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5592));
label_1350f4:
    // 0x1350f4: 0xc067fca  jal         func_19FF28
label_1350f8:
    if (ctx->pc == 0x1350F8u) {
        ctx->pc = 0x1350F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350F4u;
        // 0x1350f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1350FCu;
        goto label_1350fc;
    }
    ctx->pc = 0x1350F4u;
    SET_GPR_U32(ctx, 31, 0x1350FCu);
    ctx->pc = 0x1350F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1350F4u;
    // 0x1350f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x1350F4u, 0x1350FCu)) {
        return;
    }
    ctx->pc = 0x1350FCu;
label_1350fc:
    // 0x1350fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1350fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135100:
    // 0x135100: 0x262515d0  addiu       $a1, $s1, 0x15D0
    ctx->pc = 0x135100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5584));
label_135104:
    // 0x135104: 0xc067fca  jal         func_19FF28
label_135108:
    if (ctx->pc == 0x135108u) {
        ctx->pc = 0x135108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135104u;
        // 0x135108: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13510Cu;
        goto label_13510c;
    }
    ctx->pc = 0x135104u;
    SET_GPR_U32(ctx, 31, 0x13510Cu);
    ctx->pc = 0x135108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135104u;
    // 0x135108: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x135104u, 0x13510Cu)) {
        return;
    }
    ctx->pc = 0x13510Cu;
label_13510c:
    // 0x13510c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13510cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135110:
    // 0x135110: 0x262515e8  addiu       $a1, $s1, 0x15E8
    ctx->pc = 0x135110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5608));
label_135114:
    // 0x135114: 0xc067fca  jal         func_19FF28
label_135118:
    if (ctx->pc == 0x135118u) {
        ctx->pc = 0x135118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135114u;
        // 0x135118: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13511Cu;
        goto label_13511c;
    }
    ctx->pc = 0x135114u;
    SET_GPR_U32(ctx, 31, 0x13511Cu);
    ctx->pc = 0x135118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135114u;
    // 0x135118: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x135114u, 0x13511Cu)) {
        return;
    }
    ctx->pc = 0x13511Cu;
label_13511c:
    // 0x13511c: 0x8e221874  lw          $v0, 0x1874($s1)
    ctx->pc = 0x13511cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6260)));
label_135120:
    // 0x135120: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_135124:
    if (ctx->pc == 0x135124u) {
        ctx->pc = 0x135124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135120u;
        // 0x135124: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135128u;
        goto label_135128;
    }
    ctx->pc = 0x135120u;
    {
        const bool branch_taken_0x135120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135120u;
        // 0x135124: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135120) {
            ctx->pc = 0x135130u;
            goto label_135130;
        }
    }
    ctx->pc = 0x135128u;
label_135128:
    // 0x135128: 0xae231864  sw          $v1, 0x1864($s1)
    ctx->pc = 0x135128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6244), GPR_U32(ctx, 3));
label_13512c:
    // 0x13512c: 0xae231860  sw          $v1, 0x1860($s1)
    ctx->pc = 0x13512cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6240), GPR_U32(ctx, 3));
label_135130:
    // 0x135130: 0xae231874  sw          $v1, 0x1874($s1)
    ctx->pc = 0x135130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6260), GPR_U32(ctx, 3));
label_135134:
    // 0x135134: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x135134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_135138:
    // 0x135138: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x135138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13513c:
    // 0x13513c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13513cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_135140:
    // 0x135140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x135140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_135144:
    // 0x135144: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x135144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_135148:
    // 0x135148: 0x3e00008  jr          $ra
label_13514c:
    if (ctx->pc == 0x13514Cu) {
        ctx->pc = 0x13514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135148u;
        // 0x13514c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135150u;
        goto label_fallthrough_0x135148;
    }
    ctx->pc = 0x135148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135148u;
        // 0x13514c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x135148:
    ctx->pc = 0x135150u;
}
