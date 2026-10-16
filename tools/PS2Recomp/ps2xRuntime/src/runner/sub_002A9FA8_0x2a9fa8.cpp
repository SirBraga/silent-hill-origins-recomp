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

// Function: sub_002A9FA8
// Address: 0x2a9fa8 - 0x2aa0a8
void sub_002A9FA8_0x2a9fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9FA8_0x2a9fa8");
#endif

    switch (ctx->pc) {
        case 0x2a9fa8u: goto label_2a9fa8;
        case 0x2a9facu: goto label_2a9fac;
        case 0x2a9fb0u: goto label_2a9fb0;
        case 0x2a9fb4u: goto label_2a9fb4;
        case 0x2a9fb8u: goto label_2a9fb8;
        case 0x2a9fbcu: goto label_2a9fbc;
        case 0x2a9fc0u: goto label_2a9fc0;
        case 0x2a9fc4u: goto label_2a9fc4;
        case 0x2a9fc8u: goto label_2a9fc8;
        case 0x2a9fccu: goto label_2a9fcc;
        case 0x2a9fd0u: goto label_2a9fd0;
        case 0x2a9fd4u: goto label_2a9fd4;
        case 0x2a9fd8u: goto label_2a9fd8;
        case 0x2a9fdcu: goto label_2a9fdc;
        case 0x2a9fe0u: goto label_2a9fe0;
        case 0x2a9fe4u: goto label_2a9fe4;
        case 0x2a9fe8u: goto label_2a9fe8;
        case 0x2a9fecu: goto label_2a9fec;
        case 0x2a9ff0u: goto label_2a9ff0;
        case 0x2a9ff4u: goto label_2a9ff4;
        case 0x2a9ff8u: goto label_2a9ff8;
        case 0x2a9ffcu: goto label_2a9ffc;
        case 0x2aa000u: goto label_2aa000;
        case 0x2aa004u: goto label_2aa004;
        case 0x2aa008u: goto label_2aa008;
        case 0x2aa00cu: goto label_2aa00c;
        case 0x2aa010u: goto label_2aa010;
        case 0x2aa014u: goto label_2aa014;
        case 0x2aa018u: goto label_2aa018;
        case 0x2aa01cu: goto label_2aa01c;
        case 0x2aa020u: goto label_2aa020;
        case 0x2aa024u: goto label_2aa024;
        case 0x2aa028u: goto label_2aa028;
        case 0x2aa02cu: goto label_2aa02c;
        case 0x2aa030u: goto label_2aa030;
        case 0x2aa034u: goto label_2aa034;
        case 0x2aa038u: goto label_2aa038;
        case 0x2aa03cu: goto label_2aa03c;
        case 0x2aa040u: goto label_2aa040;
        case 0x2aa044u: goto label_2aa044;
        case 0x2aa048u: goto label_2aa048;
        case 0x2aa04cu: goto label_2aa04c;
        case 0x2aa050u: goto label_2aa050;
        case 0x2aa054u: goto label_2aa054;
        case 0x2aa058u: goto label_2aa058;
        case 0x2aa05cu: goto label_2aa05c;
        case 0x2aa060u: goto label_2aa060;
        case 0x2aa064u: goto label_2aa064;
        case 0x2aa068u: goto label_2aa068;
        case 0x2aa06cu: goto label_2aa06c;
        case 0x2aa070u: goto label_2aa070;
        case 0x2aa074u: goto label_2aa074;
        case 0x2aa078u: goto label_2aa078;
        case 0x2aa07cu: goto label_2aa07c;
        case 0x2aa080u: goto label_2aa080;
        case 0x2aa084u: goto label_2aa084;
        case 0x2aa088u: goto label_2aa088;
        case 0x2aa08cu: goto label_2aa08c;
        case 0x2aa090u: goto label_2aa090;
        case 0x2aa094u: goto label_2aa094;
        case 0x2aa098u: goto label_2aa098;
        case 0x2aa09cu: goto label_2aa09c;
        case 0x2aa0a0u: goto label_2aa0a0;
        case 0x2aa0a4u: goto label_2aa0a4;
        default: break;
    }

    ctx->pc = 0x2a9fa8u;

label_2a9fa8:
    // 0x2a9fa8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a9fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2a9fac:
    // 0x2a9fac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2a9facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2a9fb0:
    // 0x2a9fb0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a9fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a9fb4:
    // 0x2a9fb4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a9fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2a9fb8:
    // 0x2a9fb8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2a9fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a9fbc:
    // 0x2a9fbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a9fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a9fc0:
    // 0x2a9fc0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2a9fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a9fc4:
    // 0x2a9fc4: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_2a9fc8:
    if (ctx->pc == 0x2A9FC8u) {
        ctx->pc = 0x2A9FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9FC4u;
        // 0x2a9fc8: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9FCCu;
        goto label_2a9fcc;
    }
    ctx->pc = 0x2A9FC4u;
    {
        const bool branch_taken_0x2a9fc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9FC4u;
        // 0x2a9fc8: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9fc4) {
            ctx->pc = 0x2AA060u;
            goto label_2aa060;
        }
    }
    ctx->pc = 0x2A9FCCu;
label_2a9fcc:
    // 0x2a9fcc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2a9fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9fd0:
    // 0x2a9fd0: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2a9fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a9fd4:
    // 0x2a9fd4: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2a9fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a9fd8:
    // 0x2a9fd8: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2a9fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a9fdc:
    // 0x2a9fdc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a9fdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a9fe0:
    // 0x2a9fe0: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2a9fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a9fe4:
    // 0x2a9fe4: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2a9fe4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2a9fe8:
    // 0x2a9fe8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2a9fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9fec:
    // 0x2a9fec: 0xc6060010  lwc1        $f6, 0x10($s0)
    ctx->pc = 0x2a9fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2a9ff0:
    // 0x2a9ff0: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2a9ff0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2a9ff4:
    // 0x2a9ff4: 0xc6070014  lwc1        $f7, 0x14($s0)
    ctx->pc = 0x2a9ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2a9ff8:
    // 0x2a9ff8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2a9ff8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_2a9ffc:
    // 0x2a9ffc: 0xc6050018  lwc1        $f5, 0x18($s0)
    ctx->pc = 0x2a9ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2aa000:
    // 0x2aa000: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x2aa000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2aa004:
    // 0x2aa004: 0xc6090024  lwc1        $f9, 0x24($s0)
    ctx->pc = 0x2aa004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2aa008:
    // 0x2aa008: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2aa008u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_2aa00c:
    // 0x2aa00c: 0xc6080028  lwc1        $f8, 0x28($s0)
    ctx->pc = 0x2aa00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2aa010:
    // 0x2aa010: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2aa010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2aa014:
    // 0x2aa014: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2aa014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2aa018:
    // 0x2aa018: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2aa018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2aa01c:
    // 0x2aa01c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2aa01cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2aa020:
    // 0x2aa020: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2aa020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2aa024:
    // 0x2aa024: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2aa024u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_2aa028:
    // 0x2aa028: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2aa028u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_2aa02c:
    // 0x2aa02c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2aa02cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2aa030:
    // 0x2aa030: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aa030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2aa034:
    // 0x2aa034: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2aa034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2aa038:
    // 0x2aa038: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2aa038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2aa03c:
    // 0x2aa03c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2aa03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2aa040:
    // 0x2aa040: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2aa040u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_2aa044:
    // 0x2aa044: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2aa044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2aa048:
    // 0x2aa048: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x2aa048u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
label_2aa04c:
    // 0x2aa04c: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x2aa04cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_2aa050:
    // 0x2aa050: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2aa050u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2aa054:
    // 0x2aa054: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2aa054u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2aa058:
    // 0x2aa058: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2aa058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2aa05c:
    // 0x2aa05c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2aa05cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2aa060:
    // 0x2aa060: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x2aa060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_2aa064:
    // 0x2aa064: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2aa064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2aa068:
    // 0x2aa068: 0x40f809  jalr        $v0
label_2aa06c:
    if (ctx->pc == 0x2AA06Cu) {
        ctx->pc = 0x2AA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA068u;
        // 0x2aa06c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA070u;
        goto label_2aa070;
    }
    ctx->pc = 0x2AA068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AA070u);
        ctx->pc = 0x2AA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA068u;
        // 0x2aa06c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA068u, 0x2AA070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AA070u;
label_2aa070:
    // 0x2aa070: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2aa070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aa074:
    // 0x2aa074: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2aa078:
    if (ctx->pc == 0x2AA078u) {
        ctx->pc = 0x2AA078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA074u;
        // 0x2aa078: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA07Cu;
        goto label_2aa07c;
    }
    ctx->pc = 0x2AA074u;
    {
        const bool branch_taken_0x2aa074 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA074u;
        // 0x2aa078: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa074) {
            ctx->pc = 0x2AA090u;
            goto label_2aa090;
        }
    }
    ctx->pc = 0x2AA07Cu;
label_2aa07c:
    // 0x2aa07c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2aa080:
    if (ctx->pc == 0x2AA080u) {
        ctx->pc = 0x2AA080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA07Cu;
        // 0x2aa080: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA084u;
        goto label_2aa084;
    }
    ctx->pc = 0x2AA07Cu;
    {
        const bool branch_taken_0x2aa07c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA07Cu;
        // 0x2aa080: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa07c) {
            ctx->pc = 0x2AA090u;
            goto label_2aa090;
        }
    }
    ctx->pc = 0x2AA084u;
label_2aa084:
    // 0x2aa084: 0xc0aa68e  jal         func_2A9A38
label_2aa088:
    if (ctx->pc == 0x2AA088u) {
        ctx->pc = 0x2AA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA084u;
        // 0x2aa088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA08Cu;
        goto label_2aa08c;
    }
    ctx->pc = 0x2AA084u;
    SET_GPR_U32(ctx, 31, 0x2AA08Cu);
    ctx->pc = 0x2AA088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA084u;
    // 0x2aa088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9A38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9A38u, 0x2AA084u, 0x2AA08Cu)) {
        return;
    }
    ctx->pc = 0x2AA08Cu;
label_2aa08c:
    // 0x2aa08c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2aa08cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aa090:
    // 0x2aa090: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2aa090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2aa094:
    // 0x2aa094: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2aa094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2aa098:
    // 0x2aa098: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aa098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2aa09c:
    // 0x2aa09c: 0x3e00008  jr          $ra
label_2aa0a0:
    if (ctx->pc == 0x2AA0A0u) {
        ctx->pc = 0x2AA0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA09Cu;
        // 0x2aa0a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA0A4u;
        goto label_2aa0a4;
    }
    ctx->pc = 0x2AA09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA09Cu;
        // 0x2aa0a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA0A4u;
label_2aa0a4:
    // 0x2aa0a4: 0x0  nop
    ctx->pc = 0x2aa0a4u;
    // NOP
    ctx->pc = 0x2aa0a8u;
}
